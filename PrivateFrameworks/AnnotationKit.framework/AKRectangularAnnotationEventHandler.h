/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKRectangularAnnotationEventHandler : AKAnnotationEventHandler

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForModifiedRotatedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOriginal:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andRotation:(double)arg3;
- (void)_updateModelFlippednessWithCurrentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)getInitialDraggedPoint:(struct CGPoint { double x1; double x2; }*)arg1 otherPoint:(struct CGPoint { double x1; double x2; }*)arg2 center:(struct CGPoint { double x1; double x2; }*)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;
- (void)setupDraggingConstraints;
- (void)updateModelWithCurrentPoint:(struct CGPoint { double x1; double x2; })arg1;

@end