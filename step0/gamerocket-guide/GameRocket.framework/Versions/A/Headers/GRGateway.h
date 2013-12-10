//
//  GameRocketGateway.h
//  GameRocket
//
//  Created by Franck Anso on 05/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GRPlayerGateway.h"
#import "GRActionGateway.h"
#import "GRGameGateway.h"
#import "GRPurchaseGateway.h"
#import "GRAchievementGateway.h"

@interface GRGateway : NSObject

@property (nonatomic, strong) GRPlayerGateway *playerGateway;
@property (nonatomic, strong) GRActionGateway *actionGateway;
@property (nonatomic, strong) GRGameGateway *gameGateway;
@property (nonatomic, strong) GRPurchaseGateway *purchaseGateway;
@property (nonatomic, strong) GRAchievementGateway *achievementGateway;
@property (nonatomic, strong) NSURL *baseUrl;
@property (nonatomic, strong) NSString *apikey;
@property (nonatomic, strong) NSString *secretkey;

+ (void)initWithEnvironment:(NSURL*)baseUrl andApikey:(NSString*)apikey andSecretkey:(NSString*)secretkey;

+ (GRPlayerGateway*) Player;
+ (GRActionGateway*) Action;
+ (GRGameGateway*) Game;
+ (GRPurchaseGateway*) Purchase;
+ (GRAchievementGateway*) Achievement;
+ (NSURL*) baseUrl;
+ (NSString*) apikey;
+ (NSString*) secretkey;

@end
