//
//  Card.h
//  Matchismo
//
//  Created by Michael Yan on 4/21/14.
//  Copyright (c) 2014 Michael Yan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;
@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
