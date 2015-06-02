/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlaybackItemInspector : AVAssetInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
}

@property (getter=_playbackItem, setter=_setPlaybackItem:, nonatomic, retain) struct OpaqueFigPlaybackItem { }*playbackItem;

- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)_setPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)compatibleTrackForCompositionTrack:(id)arg1;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)finalize;
- (unsigned int)hash;
- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 trackIDs:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)lyrics;
- (id)metadataForFormat:(id)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (BOOL)providesPreciseDurationAndTiming;
- (long)trackCount;
- (id)trackIDs;

@end
