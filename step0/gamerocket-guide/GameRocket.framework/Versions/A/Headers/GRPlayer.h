//
//  GRPlayer.h
//  gamerocket-ios
//
//  Created by Franck Anso on 03/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GRPlayer : NSObject

@property (nonatomic, strong) NSString *playerId;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *emailHash;
@property (nonatomic) NSInteger totalPointsAchievement;
@property (nonatomic, strong) NSString *locale;
@property (nonatomic, strong) NSDictionary *dynProp;

- (id)initWithDictionary:(NSDictionary*)player;

@end
