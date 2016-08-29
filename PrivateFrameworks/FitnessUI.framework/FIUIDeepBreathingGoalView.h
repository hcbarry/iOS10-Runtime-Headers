/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIDeepBreathingGoalView : UIView {
    long long  _completedSessionCount;
    NSMutableArray * _petalOverlaps;
    double  _petalRadius;
    NSMutableArray * _petals;
}

@property (nonatomic) long long completedSessionCount;
@property (nonatomic) double petalRadius;

- (void).cxx_destruct;
- (double)_angleFromPetalIndex:(long long)arg1 toPetalIndex:(long long)arg2;
- (struct CGPoint { double x1; double x2; })_centerForPetalAtIndex:(long long)arg1 distanceFromCenter:(double)arg2;
- (void)_layoutPetals;
- (void)_updateColors;
- (long long)completedSessionCount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)petalRadius;
- (void)setCompletedSessionCount:(long long)arg1;
- (void)setPetalRadius:(double)arg1;

@end