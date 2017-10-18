//
//  CLBackspaceDetectingTextField.m
//  CLTokenInputView
//
//  Created by Rizwan Sattar on 2/24/14.
//  Copyright (c) 2014 Cluster Labs, Inc. All rights reserved.
//

#import "CLBackspaceDetectingTextField.h"

@implementation CLBackspaceDetectingTextField

@dynamic delegate;

// Listen for the deleteBackward method from UIKeyInput protocol
- (void)deleteBackward
{
    if ([self.delegate respondsToSelector:@selector(textFieldWillDeleteBackwards:)]) {
        [self.delegate textFieldWillDeleteBackwards:self];
    }
    // Call super afterwards, so the -text property will return text
    // prior to the delete
    [super deleteBackward];
}

@end
