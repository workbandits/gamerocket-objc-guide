//
//  GRAchievement.h
//  GameRocket
//
//  Created by Franck Anso on 06/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GRAchievement : NSObject

@property (nonatomic, strong) NSString *achievementId;
@property (nonatomic) NSInteger progression;
@property (nonatomic) Boolean unlocked;
@property (nonatomic, strong) NSDate *unlockedDate;
@property (nonatomic, strong) NSDictionary *dynProp;

- (id)initWithDictionary:(NSDictionary*)achievement;

@end
