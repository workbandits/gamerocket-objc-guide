//
//  GRPlayerGateway.h
//  gamerocket-ios
//
//  Created by Franck Anso on 03/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GRPlayer.h"
#import "GRResponse.h"
#import "GRPlayerRequest.h"

@interface GRPlayerGateway : NSObject

- (void)find:(NSString*)playerid andHandler:(void(^)(GRPlayer *player, GRResponse *response)) handler;

- (void)create:(GRPlayerRequest*)request andHandler:(void(^)(GRPlayer *player, GRResponse *response)) handler;

- (void)update:(NSString*)playerid andRequest:(GRPlayerRequest*)request andHandler:(void(^)(GRPlayer *player, GRResponse *response)) handler;

- (void)delete:(NSString*)playerid andHandler:(void(^)(GRResponse *response)) handler;

@end
