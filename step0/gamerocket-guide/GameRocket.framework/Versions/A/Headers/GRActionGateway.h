//
//  GRActionGateway.h
//  gamerocket-ios-test
//
//  Created by Franck Anso on 04/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GRAction.h"
#import "GRResponse.h"
#import "GRActionRequest.h"

@interface GRActionGateway : NSObject

- (void)find:(NSString*)actionid andHandler:(void(^)(GRAction *action, GRResponse *response)) handler;

- (void)run:(NSString*)actionId andRequest:(GRActionRequest*)request andHandler:(void(^)(NSDictionary *result, GRResponse *response)) handler;

@end
