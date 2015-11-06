//
//  Deck.h
//  Matchismo
//
//  Created by Kaiqi on 10/22/15.
//  Copyright © 2015 self.edu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
