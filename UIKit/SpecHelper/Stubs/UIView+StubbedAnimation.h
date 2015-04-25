#import <UIKit/UIKit.h>

@interface UIView (StubbedAnimation)

+ (NSTimeInterval)lastAnimationDuration;
+ (NSTimeInterval)lastAnimationDelay;
+ (UIViewAnimationOptions)lastAnimationOptions;
+ (CGFloat)lastAnimationSpringWithDamping;
+ (CGFloat)lastAnimationInitialSpringVelocity;

+ (void)pauseAnimations;
+ (NSArray *)animations;

@end

@interface PCKViewAnimation : NSObject

@property (assign, nonatomic) NSTimeInterval duration;
@property (assign, nonatomic) NSTimeInterval delay;
@property (strong, nonatomic) void (^animationBlock)(void);
@property (strong, nonatomic) void (^completionBlock)(BOOL);

- (void)animate;
- (void)complete;
- (void)cancel;

@end
