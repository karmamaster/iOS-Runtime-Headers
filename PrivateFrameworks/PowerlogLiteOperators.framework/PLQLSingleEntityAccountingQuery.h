/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLQLSingleEntityAccountingQuery : PLQLAccountingQuery {
    NSString *_entityName;
}

@property (retain) NSString *entityName;

- (void).cxx_destruct;
- (id)entityName;
- (id)runQueryForTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1 withSnapRail:(BOOL)arg2;
- (void)setEntityName:(id)arg1;

@end
