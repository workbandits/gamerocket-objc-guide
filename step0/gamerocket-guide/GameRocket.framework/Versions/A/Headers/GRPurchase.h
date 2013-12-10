//
//  GRPurchase.h
//  gamerocket-ios-test
//
//  Created by Franck Anso on 04/12/2013.
//  Copyright (c) 2013 Work Bandits. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GRPurchase : NSObject

@property (nonatomic, strong) NSString *purchaseId;
@property (nonatomic, strong) NSString *ref;
@property (nonatomic, strong) NSString *name;
@property (nonatomic) NSInteger price;
@property (nonatomic, strong) NSDictionary *dynProp;

- (id)initWithDictionary:(NSDictionary*)purchase;

@end
