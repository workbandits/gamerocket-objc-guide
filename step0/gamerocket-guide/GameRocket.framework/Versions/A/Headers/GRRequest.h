//
//  GRRequest.h
//  gamerocket-ios
//
//  Created by Franck Anso on 02/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GRHTTPClient;
@interface GRRequest : NSObject

+ (GRHTTPClient*) httpClient;

+ (void) get:(NSString*)url andParameters:(NSDictionary*)parameters andHandler:(void (^)(id responseObject, NSError* error))handler;

+ (void) post:(NSString*)url andPostData:(NSDictionary*)postdata andHandler:(void (^)(id responseObject, NSError* error))handler;

+ (void) put:(NSString*)url andPostData:(NSDictionary*)postdata andHandler:(void (^)(id responseObject, NSError* error))handler;

+ (void) delete:(NSString*)url andParameters:(NSDictionary*)parameters andHandler:(void (^)(id responseObject, NSError* error))handler;

@end
