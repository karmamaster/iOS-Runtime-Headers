/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBAxis : NSObject

+ (Class)chbAxisClassWith:(id)arg1;
+ (Class)chbAxisClassWith:(struct XlChartPlotAxis { int (**x1)(); int x2; struct XlChartTextFrame {} *x3; struct XlChartLineStyle {} *x4; struct XlChartLineStyle {} *x5; struct XlChartLineStyle {} *x6; struct XlChartLineStyle {} *x7; struct XlChartFillStyle {} *x8; struct XlChartPicF {} *x9; struct XlChartTick {} *x10; unsigned short x11; unsigned short x12; bool x13; bool x14; }*)arg1 plotAxis:(int)arg2;
+ (int)chbAxisIdForPlotAxis:(int)arg1 state:(id)arg2;
+ (int)chdAxisPositionFromAxisType:(int)arg1;
+ (id)readWithXlPlotAxis:(int)arg1 state:(id)arg2;
+ (int)xlPlotAxisTypeFrom:(int)arg1;

@end
