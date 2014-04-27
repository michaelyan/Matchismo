//
//  Deck.h
//  Matchismo
//
//  Created by Michael Yan on 4/25/14.
//  Copyright (c) 2014 Michael Yan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject
- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
