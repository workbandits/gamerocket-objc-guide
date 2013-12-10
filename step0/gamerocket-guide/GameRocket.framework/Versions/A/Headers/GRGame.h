//
//  GRGame.h
//  gamerocket-ios-test
//
//  Created by Franck Anso on 05/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GRGame : NSObject

@property (nonatomic, strong) NSString *gameId;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) NSDictionary *dynProp;

- (id)initWithDictionary:(NSDictionary*)game;

@end
