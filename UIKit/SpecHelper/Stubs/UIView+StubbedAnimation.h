#import <UIKit/UIKit.h>

@interface UIView (StubbedAnimation)

+ (NSTimeInterval)lastAnimationDuration;
+ (NSTimeInterval)lastAnimationDelay;
+ (UIViewAnimationOptions)lastAnimationOptions;
+ (CGFloat)lastAnimationSpringWithDamping;
+ (CGFloat)lastAnimationInitialSpringVelocity;

+ (void)pauseAnimations;
+ (void)runLastAnimationBlock;
+ (void)runLastCompletionBlock;

@end
