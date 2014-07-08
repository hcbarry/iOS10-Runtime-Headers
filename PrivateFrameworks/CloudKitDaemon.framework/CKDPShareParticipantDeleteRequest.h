/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPIdentifier, CKDPShareIdentifier;

@interface CKDPShareParticipantDeleteRequest : PBRequest <NSCopying> {
    CKDPIdentifier *_participantId;
    CKDPShareIdentifier *_shareId;
}

@property(readonly) bool hasShareId;
@property(retain) CKDPShareIdentifier * shareId;
@property(readonly) bool hasParticipantId;
@property(retain) CKDPIdentifier * participantId;

+ (id)options;

- (id)participantId;
- (bool)hasParticipantId;
- (void)setParticipantId:(id)arg1;
- (id)shareId;
- (bool)hasShareId;
- (void)setShareId:(id)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end