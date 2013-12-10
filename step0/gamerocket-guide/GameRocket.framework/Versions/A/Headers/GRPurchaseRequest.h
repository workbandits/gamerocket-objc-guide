//
//  GRPurchaseRequest.h
//  gamerocket-ios-test
//
//  Created by Franck Anso on 04/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GRPurchaseRequest : NSObject

@property (nonatomic, strong) NSString *player;
@property (nonatomic, strong) NSString *locale;
@property (nonatomic, strong) NSDictionary *parameters;

- (NSDictionary*)getParameters;

@end
