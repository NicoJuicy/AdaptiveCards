//
//  ACOVisibilityManager.h
//  AdaptiveCards
//
//  Copyright © 2021 Microsoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@protocol ACOIVisibilityManagerFacade <NSObject>

- (void)hideView:(UIView *)view;
- (void)unhideView:(UIView *)view;

@end

@interface ACOVisibilityManager : NSObject

@property (copy) NSString *columnWidth;

/// hides viewToBeHidden from arrangedSubViews 
- (void)hideView:(UIView *)viewToBeHidden arrangedSubviews:(NSArray<UIView *> *)subviews;

- (void)unhideView:(UIView *)viewToBeUnhidden arrangedSubviews:(NSArray<UIView *> *)subviews;

- (void)addPadding:(UIView *)padding;

- (BOOL)isPadding:(UIView *)padding;

@end
