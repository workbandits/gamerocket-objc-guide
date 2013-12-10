//
//  GRAchievementGateway.h
//  GameRocket
//
//  Created by Franck Anso on 06/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GRResponse.h"
#import "GRAchievement.h"

@interface GRAchievementGateway : NSObject

- (void)find:(NSString*)achievementid andHandler:(void(^)(GRAchievement *achievement, GRResponse *response)) handler;

@end
