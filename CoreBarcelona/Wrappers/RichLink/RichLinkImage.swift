//
//  RichLinkImage.swift
//  CoreBarcelona
//
//  Created by Eric Rabil on 9/13/20.
//  Copyright © 2020 Eric Rabil. All rights reserved.
//

import Foundation
import LinkPresentation

protocol RichLinkAttachment {
    var attachmentIndex: UInt64? { get set }
}

struct RichLinkImage: Codable, RichLinkAttachment {
    init?(_ image: LPImage, _ presentationProperties: LPImagePresentationProperties? = nil, attachments: [InternalAttachment]) {
        calculateAttachmentIndex(forAsset: image, attachments: attachments)

        if let properties = presentationProperties {
            shouldApplyBackground = properties.shouldApplyBackground
            requireFixedSize = properties.requireFixedSize
            filter = properties.filter
            scalingMode = properties.scalingMode
            if let maskColor = properties.maskColor {
                self.maskColor = Color(fromUnknown: maskColor)
            }
        }
        
        if let properties = image.properties {
            type = properties.type
            accessibilityText = properties.accessibilityText
            if let overlaidTextColor = properties.overlaidTextColor {
                self.overlaidTextColor = Color(fromUnknown: overlaidTextColor)
            }
        }
    }
    
    var attachmentIndex: UInt64?
    var shouldApplyBackground: Bool?
    var requireFixedSize: Bool?
    var filter: Int64?
    var scalingMode: Int64?
    var maskColor: Color?
    var type: Int64?
    var accessibilityText: String?
    var overlaidTextColor: Color?
}
