//
//  GRPlayerRequest.h
//  gamerocket-ios-test
//
//  Created by Franck Anso on 04/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GRPlayerRequest : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *emailHash;
@property (nonatomic, strong) NSString *locale;

- (NSDictionary*)getParameters;

@end
