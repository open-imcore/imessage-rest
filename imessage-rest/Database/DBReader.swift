//
//  Reader.swift
//  imessage-rest
//
//  Created by Eric Rabil on 8/12/20.
//  Copyright © 2020 Eric Rabil. All rights reserved.
//

import Foundation
import Vapor
import GRDB


let db = try! DatabasePool(path: "/Users/ericrabil/Library/Messages/chat.db")

/**
 Interface for reading the chat.db file.
 
 DO NOT MAKE WRITES! THIS IS FOR READING ONLY!
 */
// MARK: - I REPEAT DO NOT MAKE WRITES TO THE DATABASE DIRECTLY! THIS IS FOR READING ONLY!
struct DBReader {
    var pool: DatabasePool
    var eventLoop: EventLoop
    
    func resolveSenderID(forMessage message: RawMessage, in db: Database) throws -> String? {
        if message.is_from_me == 1 {
            return Registry.sharedInstance.iMessageAccount()!.arrayOfAllIMHandles[0].id
        } else {
            guard let handleRowID = message.handle_id, let rawHandle = try RawHandle.fetchOne(db, sql: "SELECT * FROM handle WHERE ROWID = ?", arguments: [handleRowID]) else { return nil }
            
            return rawHandle.id
        }
    }
}