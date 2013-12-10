//
//  GRAction.h
//  gamerocket-ios-test
//
//  Created by Franck Anso on 04/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GRAction : NSObject

@property (nonatomic, strong) NSString *actionId;
@property (nonatomic, strong) NSString *ref;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSDictionary *dynProp;

- (id)initWithDictionary:(NSDictionary*)action;

@end
