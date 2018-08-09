//
//  YXBaseNacigationController.h
//  YXCoreMail
//
//  Created by ljm on 2018/8/9.
//  Copyright © 2018年 yxtech.ios. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YXBaseNacigationController : UINavigationController

- (void)addFullScreenPopBlackListItem:(UIViewController *)viewController;
- (void)removeFromFullScreenPopBlackList:(UIViewController *)viewController;

@end
