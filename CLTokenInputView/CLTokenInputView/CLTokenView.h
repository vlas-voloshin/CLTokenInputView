//
//  CLTokenView.h
//  CLTokenInputView
//
//  Created by Rizwan Sattar on 2/24/14.
//  Copyright (c) 2014 Cluster Labs, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CLToken.h"

NS_ASSUME_NONNULL_BEGIN

@class CLTokenView;
@protocol CLTokenViewDelegate <UITextInputTraits>

- (void)tokenViewDidRequestDelete:(CLTokenView *)tokenView replaceWithText:(nullable NSString *)replacementText;
- (BOOL)tokenViewShouldSelect:(CLTokenView *)tokenView;

@end


@interface CLTokenView : UIView <UIKeyInput>

@property (weak, nonatomic, nullable) NSObject <CLTokenViewDelegate> *delegate;
@property (assign, nonatomic) BOOL selected;
@property (assign, nonatomic) BOOL hideUnselectedComma;

- (instancetype)initWithToken:(CLToken *)token font:(nullable UIFont *)font;

- (void)setSelected:(BOOL)selected animated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
