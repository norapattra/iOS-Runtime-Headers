/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, SAMPMediaItem;

@interface SAMPGeniusSummon : SABaseClientBoundCommand {
}

@property(retain) SAMPMediaItem * mediaItem;
@property(copy) NSURL * targetAppId;

+ (id)geniusSummon;
+ (id)geniusSummonWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mediaItem;
- (BOOL)requiresResponse;
- (void)setMediaItem:(id)arg1;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;

@end
