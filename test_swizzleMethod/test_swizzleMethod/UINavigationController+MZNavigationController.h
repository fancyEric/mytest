//
//  UINavigationController+MZNavigationController.h
//  test_swizzleMethod
//
//  Created by Eric on 18/10/2016.
//  Copyright © 2016 ericoda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (MZNavigationController)
- (void)mzPushViewController:(UIViewController *)viewController animated:(BOOL)animated;

@end
