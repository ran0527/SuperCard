//
//  PlayingCardView.h
//  SuperCard
//
//  Created by Kaiqi on 11/5/15.
//  Copyright © 2015 self.edu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayingCardView : UIView

@property (nonatomic) NSUInteger rank;
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) BOOL faceUp;

- (void)pinch:(UIPinchGestureRecognizer *)gesture;


@end
