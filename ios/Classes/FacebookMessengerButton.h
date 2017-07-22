/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-present by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#import "TiUIView.h"

#import <FBSDKMessengerShareKit/FBSDKMessengerShareKit.h>

@interface FacebookMessengerButton : TiUIView {
    @private
    UIButton *_messengerButton;
}

- (UIButton *)messengerButton;

@end
