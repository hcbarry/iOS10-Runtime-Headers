/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

@class NSString, NSData;

@interface PHAdjustmentData : NSObject <NSSecureCoding> {
    NSString *_formatIdentifier;
    NSString *_formatVersion;
    NSData *_data;
    long long _baseVersion;
}

@property(copy) NSString * formatIdentifier;
@property(copy) NSString * formatVersion;
@property(readonly) NSData * data;
@property(getter=isOpaque,readonly) bool opaque;
@property long long baseVersion;

+ (long long)imageRequestVersionFromAdjustmentBaseVersion:(long long)arg1;
+ (long long)adjustmentBaseVersionFromImageRequestVersion:(long long)arg1;
+ (long long)adjustmentBaseVersionFromVideoRequestVersion:(long long)arg1;
+ (long long)videoRequestVersionFromAdjustmentBaseVersion:(long long)arg1;
+ (id)opaqueAdjustmentData;
+ (bool)supportsSecureCoding;

- (void)setFormatVersion:(id)arg1;
- (void)setFormatIdentifier:(id)arg1;
- (long long)baseVersion;
- (void)setBaseVersion:(long long)arg1;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3;
- (id)formatIdentifier;
- (id)formatVersion;
- (bool)isOpaque;
- (id)data;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end