/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUIEditImageViewController : PLUIImageViewController  {
    id _delegate;
    int _saveOptions;
    int _mode;
}

@property id delegate;
@property int mode;


- (int)saveOptions;
- (void)setImageSavingOptions:(int)arg1;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (id)initWithPhoto:(id)arg1;
- (unsigned int)_tileAutoresizingMask;
- (unsigned int)_contentAutoresizingMask;
- (int)cropOverlayMode;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (id)imageTile;
- (int)imageFormat;
- (id)photo;
- (void)setMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (int)mode;

@end