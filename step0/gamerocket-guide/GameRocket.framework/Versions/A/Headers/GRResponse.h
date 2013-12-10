//
//  GRResponse.h
//  gamerocket-ios
//
//  Created by Franck Anso on 02/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GRResponse : NSObject

@property (nonatomic, assign) NSString *errormessage;
@property (nonatomic, assign) Boolean success;

- (id)initWithErrorMessage: (NSString*)errorMessage;

- (id)initWithSuccess;

- (NSString*) errorMessage;

@end
