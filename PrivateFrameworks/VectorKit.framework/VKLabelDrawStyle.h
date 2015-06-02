/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelDrawStyle : VKRenderStyle

+ (int)renderStyleID;

- (BOOL)areNavShieldsVisible;
- (BOOL)areNavSignsVisible;
- (BOOL)areShieldsEverVisible;
- (BOOL)areTextBoxesEverVisible;
- (unsigned int)arrowLayer;
- (BOOL)arrowVisibleAtZoom:(float)arg1;
- (unsigned char)dedupeRank;
- (id)genericShieldStyle;
- (void)getFontOptions:(struct FontOptions { struct _retain_ptr<const __CFString *, geo::_retain_cf<const __CFString *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { int (**x_1_1_1)(); struct __CFString {} *x_1_1_2; struct _retain_cf<const __CFString *> { } x_1_1_3; struct _release_cf { } x_1_1_4; } x1; float x2; float x3; float x4; bool x5; bool x6; }*)arg1 atZoom:(float)arg2 contentScale:(float)arg3 scaleFactor:(int)arg4;
- (void)getLabelStyle:(struct VKLabelStyle { BOOL x1; unsigned int x2; unsigned int x3; float x4; BOOL x5; struct Matrix<float, 4, 1> { float x_6_1_1[4]; } x6; struct Matrix<float, 4, 1> { float x_7_1_1[4]; } x7; unsigned int x8; float x9; float x10; int x11; struct { int x_12_1_1; struct Matrix<float, 4, 1> { float x_2_2_1[4]; } x_12_1_2; struct Matrix<float, 4, 1> { float x_3_2_1[4]; } x_12_1_3[2]; struct Matrix<float, 4, 1> { float x_4_2_1[4]; } x_12_1_4; int x_12_1_5; struct Matrix<float, 4, 1> { float x_6_2_1[4]; } x_12_1_6; int x_12_1_7; int x_12_1_8; float x_12_1_9; struct Matrix<float, 4, 1> { float x_10_2_1[4]; } x_12_1_10; struct CGSize { float x_11_2_1; float x_11_2_2; } x_12_1_11; float x_12_1_12; struct Matrix<float, 4, 1> { float x_13_2_1[4]; } x_12_1_13; float x_12_1_14; float x_12_1_15; float x_12_1_16; unsigned int x_12_1_17; unsigned int x_12_1_18; } x12; int x13; BOOL x14; float x15; float x16; float x17; float x18; struct Matrix<float, 4, 1> { float x_19_1_1[4]; } x19; struct Matrix<float, 4, 1> { float x_20_1_1[4]; } x20; int x21; int x22; int x23; BOOL x24; BOOL x25; BOOL x26; float x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; BOOL x37; int x38; float x39; float x40; float x41; unsigned char x42; unsigned char x43; unsigned short x44; unsigned char x45; unsigned char x46; unsigned char x47; unsigned char x48; unsigned char x49; BOOL x50; BOOL x51; float x52; int x53; BOOL x54; BOOL x55; float x56; BOOL x57; BOOL x58; struct _retain_ptr<const __CFString *, geo::_retain_cf<const __CFString *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { int (**x_59_1_1)(); struct __CFString {} *x_59_1_2; struct _retain_cf<const __CFString *> { } x_59_1_3; struct _release_cf { } x_59_1_4; } x59; struct _retain_ptr<const __CFString *, geo::_retain_cf<const __CFString *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { int (**x_60_1_1)(); struct __CFString {} *x_60_1_2; struct _retain_cf<const __CFString *> { } x_60_1_3; struct _release_cf { } x_60_1_4; } x60; struct _retain_ptr<const __CFString *, geo::_retain_cf<const __CFString *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { int (**x_61_1_1)(); struct __CFString {} *x_61_1_2; struct _retain_cf<const __CFString *> { } x_61_1_3; struct _release_cf { } x_61_1_4; } x61; struct _retain_ptr<const __CFString *, geo::_retain_cf<const __CFString *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { int (**x_62_1_1)(); struct __CFString {} *x_62_1_2; struct _retain_cf<const __CFString *> { } x_62_1_3; struct _release_cf { } x_62_1_4; } x62; struct _retain_ptr<const __CFString *, geo::_retain_cf<const __CFString *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { int (**x_63_1_1)(); struct __CFString {} *x_63_1_2; struct _retain_cf<const __CFString *> { } x_63_1_3; struct _release_cf { } x_63_1_4; } x63; struct Matrix<float, 4, 1> { float x_64_1_1[4]; } x64; BOOL x65; struct FontOptions { struct _retain_ptr<const __CFString *, geo::_retain_cf<const __CFString *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { int (**x_1_2_1)(); struct __CFString {} *x_1_2_2; struct _retain_cf<const __CFString *> { } x_1_2_3; struct _release_cf { } x_1_2_4; } x_66_1_1; float x_66_1_2; float x_66_1_3; float x_66_1_4; bool x_66_1_5; bool x_66_1_6; } x66; }*)arg1 atZoom:(float)arg2 updateOnlyContinuousValues:(BOOL)arg3 contentScale:(float)arg4 scaleFactor:(int)arg5;
- (void)getNavShieldStyle:(struct { BOOL x1; float x2; float x3; }*)arg1 atZoom:(float)arg2 contentScale:(float)arg3 scaleFactor:(int)arg4;
- (void)getRoadSignStyle:(struct { BOOL x1; float x2; float x3; }*)arg1 atZoom:(float)arg2 contentScale:(float)arg3 scaleFactor:(int)arg4;
- (BOOL)isPOITextEverVisible;
- (unsigned int)layer;
- (double)mapWidthInEmsForZoom:(int)arg1 scaleFactor:(int)arg2;
- (unsigned int)maxVisibleZoom;
- (unsigned int)minArrowZoom;
- (unsigned int)minVisibleZoom;
- (double)minimumMultiShieldGapForZoom:(int)arg1;
- (double)minimumRoadArrowSpacingForZoom:(int)arg1;
- (double)minimumRoadLabelSpacingForZoom:(int)arg1 scaleFactor:(int)arg2;
- (double)minimumShieldSpacingForZoom:(int)arg1;
- (BOOL)showShieldTextAsLabelAtZoom:(float)arg1;
- (BOOL)visibleAtMaxZoom:(float)arg1;

@end
