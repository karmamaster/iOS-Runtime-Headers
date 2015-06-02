/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PULayoutSectioning : NSObject {
    PULayoutSectioning *_baseSectioning;
    <PULayoutSectioningDelegate> *_delegate;
    BOOL _invalidatingSampling;
    BOOL _invalidatingSections;
}

@property (nonatomic, retain) PULayoutSectioning *baseSectioning;
@property (nonatomic) <PULayoutSectioningDelegate> *delegate;

- (void).cxx_destruct;
- (int)__debugUnsampledIndexForRealIndexPath:(struct PUSimpleIndexPath { int x1; int x2; })arg1;
- (void)_baseSectioningDidInvalidateSampling:(id)arg1;
- (void)_baseSectioningDidInvalidateSections:(id)arg1;
- (id)_sectioningDescriptionShowInvisibleItemsInBaseSectioning:(BOOL)arg1 hasIncorrectSampling:(BOOL*)arg2 hasInvisibleItemsInBaseSectioning:(BOOL*)arg3;
- (id)baseSectioning;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)enumerateRealMainItemIndexPathsForVisualSection:(int)arg1 inVisualItemRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateRealSectionsForVisualSection:(int)arg1 usingBlock:(id /* block */)arg2;
- (BOOL)hasSomeSampling;
- (void)invalidateSampling;
- (void)invalidateSections;
- (struct PUSimpleIndexPath { int x1; int x2; })mainRealItemIndexPathForVisualIndexPath:(struct PUSimpleIndexPath { int x1; int x2; })arg1;
- (int)mainRealSectionForVisualSection:(int)arg1;
- (int)numberOfRealItemsInVisualSection:(int)arg1;
- (int)numberOfVisualItemsInVisualSection:(int)arg1;
- (id)sectioningDescription;
- (id)sectioningHash;
- (id)sectioningHashHasIncorrectSampling:(BOOL*)arg1 hasInvisibleItemsInBaseSectioning:(BOOL*)arg2;
- (void)setBaseSectioning:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)visibleUnsampledIndexesForCombinedRealSections:(id)arg1;
- (struct PUSimpleIndexPath { int x1; int x2; })visualIndexPathForRealIndexPath:(struct PUSimpleIndexPath { int x1; int x2; })arg1 isMainItem:(BOOL*)arg2;
- (int)visualSectionForRealSection:(int)arg1;
- (BOOL)writeToURL:(id)arg1 error:(id*)arg2;

@end
