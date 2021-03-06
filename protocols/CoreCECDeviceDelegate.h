/* Generated by RuntimeBrowser.
 */

@protocol CoreCECDeviceDelegate <CoreRCDeviceDelegate>

@optional

- (void)cecDevice:(CoreCECDevice *)arg1 activeSourceStatusHasChanged:(bool)arg2;
- (void)cecDevice:(CoreCECDevice *)arg1 deckControlCommandHasBeenReceived:(unsigned long long)arg2 fromDevice:(CoreCECDevice *)arg3;
- (void)cecDevice:(CoreCECDevice *)arg1 deckControlPlayHasBeenReceived:(unsigned long long)arg2 fromDevice:(CoreCECDevice *)arg3;
- (void)cecDevice:(CoreCECDevice *)arg1 deckControlStatusHasBeenUpdated:(unsigned long long)arg2 fromDevice:(CoreCECDevice *)arg3;
- (void)cecDevice:(CoreCECDevice *)arg1 featureAbort:(NSError *)arg2;
- (void)cecDevice:(CoreCECDevice *)arg1 standbyRequestHasBeenReceived:(CoreCECDevice *)arg2;
- (void)cecDeviceShouldAssertActiveSource:(CoreCECDevice *)arg1;

@end
