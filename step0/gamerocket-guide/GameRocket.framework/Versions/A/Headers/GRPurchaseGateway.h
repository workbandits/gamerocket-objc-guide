//
//  GRPurchaseGateway.h
//  gamerocket-ios-test
//
//  Created by Franck Anso on 04/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GRPurchase.h"
#import "GRResponse.h"
#import "GRPurchaseRequest.h"

@interface GRPurchaseGateway : NSObject

- (void)find:(NSString*)purchaseid andHandler:(void(^)(GRPurchase *purchase, GRResponse *response)) handler;

- (void)buy:(NSString*)purchaseId andRequest:(GRPurchaseRequest*)request andHandler:(void(^)(NSDictionary *result, GRResponse *response)) handler;

@end
