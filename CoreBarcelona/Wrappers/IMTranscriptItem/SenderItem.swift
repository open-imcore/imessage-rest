//
//  SenderChatItem.swift
//  imcore-rest
//
//  Created by Eric Rabil on 7/24/20.
//  Copyright © 2020 Eric Rabil. All rights reserved.
//

import Foundation
import IMCore

public struct SenderItem: ChatItemRepresentation {
    init(_ item: IMSenderChatItem, chatID chat: String?) {
        handleID = item.handle.id
        self.load(item: item, chatID: chat)
    }
    
    public var id: String?
    public var chatID: String?
    public var fromMe: Bool?
    public var time: Double?
    public var threadIdentifier: String?
    public var threadOriginator: String?
    public var handleID: String
}
