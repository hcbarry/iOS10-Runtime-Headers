/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPMediaLibraryResultSet>, MPWeakRef, MPMediaQuerySectionInfo, NSObject<OS_dispatch_queue>, MPMediaQueryCriteria;

@interface MPMediaEntityResultSetArray : MPMediaArray <NSCopying> {
    <MPMediaLibraryResultSet> *_resultSet;
    Class _entityClass;
    MPWeakRef *_libraryWeakRef;
    MPMediaQuerySectionInfo *_sectionInfo;
    id *_entities;
    NSObject<OS_dispatch_queue> *_entitiesQueue;
    MPMediaQueryCriteria *_queryCriteria;
}


- (id)initWithResultSet:(id)arg1 queryCriteria:(id)arg2 entityType:(int)arg3 library:(id)arg4;
- (id)sectionInfo;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end