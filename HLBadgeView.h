//
//  CCBadgeView.h
//  CafeCar
//
//  Created by lirihuang on 10/30/13.
//  Copyright (c) 2013 lirihuang. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef enum {
    HLBadgeViewAlignmentNormal,
    HLBadgeViewAlignmentTopLeft,
    HLBadgeViewAlignmentTopRight,
    HLBadgeViewAlignmentTopCenter,
    HLBadgeViewAlignmentCenterLeft,
    HLBadgeViewAlignmentCenterRight,
    HLBadgeViewAlignmentBottomLeft,
    HLBadgeViewAlignmentBottomRight,
    HLBadgeViewAlignmentBottomCenter,
    HLBadgeViewAlignmentCenter
} HLBadgeViewAlignment;

@interface CCBadgeView :UIView
{
@private NSString *_badgeText;
}

@property (nonatomic, copy) NSString *badgeString;

#pragma mark - Customization

@property (nonatomic, assign) HLBadgeViewAlignment badgeAlignment;

@property (nonatomic, retain) UIColor *badgeTextColor;
@property (nonatomic, assign) CGSize badgeTextShadowOffset;
@property (nonatomic, retain) UIColor *badgeTextShadowColor;

@property (nonatomic, retain) UIFont *badgeTextFont;

@property (nonatomic, retain) UIColor *badgeBackgroundColor;

/**
 * @discussion color of the overlay circle at the top. Default is semi-transparent white.
 */
@property (nonatomic, retain) UIColor *badgeOverlayColor;

/**
 * @discussion allows to shift the badge by x and y points.
 */
@property (nonatomic, assign) CGPoint badgePositionAdjustment;

/**
 * @discussion (optional) If not provided, the superview frame is used.
 * You can use this to position the view if you're drawing it using drawRect instead of `-addSubview:`
 */
@property (nonatomic, assign) CGRect frameToPositionInRelationWith;

@end
