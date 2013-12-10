//
//  GRCrypto.h
//  gamerocket-ios
//
//  Created by Franck Anso on 02/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GRCrypto : NSObject

+ (NSString*)sign:(NSString*)method andUrl:(NSString*)url andParameters:(NSDictionary*)parameters andSecretKey:(NSString*)secretKey;

@end
