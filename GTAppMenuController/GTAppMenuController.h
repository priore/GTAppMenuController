//
//  GTMainViewController.h
//  GTAppMenuController
//
//  Created by Gianluca Tursi on 24/05/14.
//  Copyright (c) 2014 Gianluca Tursi. All rights reserved.
//

#import <UIKit/UIKit.h>

FOUNDATION_EXPORT NSString *const GTAppMenuControllerPanGestureNotification;
FOUNDATION_EXPORT NSString *const GTAppMenuControllerOpenedNotification;
FOUNDATION_EXPORT NSString *const GTAppMenuControllerClosedNotification;

@interface GTAppMenuController : UINavigationController

@property (nonatomic, assign) CGFloat duration;
@property (nonatomic, assign) CGFloat headerHeight;

+ (void)instantiateFrontViewControllerWithIdentifierPath:(NSString*)front backViewControllerWithIdentifierPath:(NSString*)back;

-(void)activateSwipeToOpenMenu:(BOOL)onlyNavigation;
-(void)openAndCloseMenu;
-(void)setAnimationDuration:(CGFloat)d;

@end
