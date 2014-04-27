//
//  PlayingCard.h
//  Matchismo
//
//  Created by Michael Yan on 4/25/14.
//  Copyright (c) 2014 Michael Yan. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
