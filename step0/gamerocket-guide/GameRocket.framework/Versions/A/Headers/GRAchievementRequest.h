//
//  GRAchievementRequest.h
//  GameRocket
//
//  Created by Franck Anso on 06/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GRAchievementRequest : NSObject

@property (nonatomic, strong) NSString *locale;
@property (nonatomic, strong) NSDictionary *parameters;

- (NSDictionary*)getParameters;

@end
