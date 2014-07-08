/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class UIActivityIndicatorView, ACAccountStore, UINavigationItem, AAGrandSlamSigner, ACAccount, RemoteUIController, <AAUIFamilySetupDelegate>, UIBarButtonItem, NSMutableURLRequest;

@interface AAUIFamilySetupViewController : AAUIBleachedNavigationController <AAUIFamilySetupPageDelegate, RemoteUIControllerDelegate> {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    RemoteUIController *_remoteUIController;
    NSMutableURLRequest *_startRemoteUIRequest;
    bool_isShowingSpinner;
    UIActivityIndicatorView *_spinnerView;
    UIBarButtonItem *_originalRightBarButtonItem;
    UINavigationItem *_navigationItemShowingSpinner;
}

@property <AAUIFamilySetupDelegate> * delegate;


- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (id)initTrimmedFlowWithGrandSlamSigner:(id)arg1;
- (void)_remoteUIDidCancel;
- (void)_sendUserToiTunesSettings;
- (void)_closeButtonWasTapped:(id)arg1;
- (void)_loadRemoteUIPages;
- (id)_urlForLaunchingSettings;
- (bool)_isRunningInSettings;
- (id)_createCloseButton;
- (id)_initWithGrandSlamSigner:(id)arg1 rootViewController:(id)arg2;
- (void)_hideActivitySpinnerInNavigationBar;
- (void)_showActivitySpinnerInNavigationBar;
- (id)initWithAccount:(id)arg1 store:(id)arg2;
- (void)familySetupPage:(id)arg1 didCompleteWithSuccess:(bool)arg2;
- (id)initWithGrandSlamSigner:(id)arg1 familyEligibilityResponse:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (bool)shouldAutorotate;

@end