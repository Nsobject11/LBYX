//
//  AppDelegate+LifeCycle.h
//  LBYX
//
//  Created by john on 2019/5/31.
//  Copyright © 2019 qt. All rights reserved.
//

#import "AppDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface AppDelegate (LifeCycle)

- (void)registerRootControoler:(NSDictionary *)launchOptions;
@end

NS_ASSUME_NONNULL_END
