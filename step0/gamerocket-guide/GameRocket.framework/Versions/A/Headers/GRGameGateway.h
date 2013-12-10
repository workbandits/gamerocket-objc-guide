//
//  GRGameGateway.h
//  gamerocket-ios-test
//
//  Created by Franck Anso on 05/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GRGame.h"
#import "GRResponse.h"

@interface GRGameGateway : NSObject

- (void)find:(NSString*)gameId andHandler:(void(^)(GRGame *game, GRResponse *response)) handler;

@end
