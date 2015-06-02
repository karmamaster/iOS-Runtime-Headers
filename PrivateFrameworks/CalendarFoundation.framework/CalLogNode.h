/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogNode : NSObject {
    NSMutableArray *_accumulator;
    unsigned int _accumulatorBufferSize;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CalLogFilter *_filter;
    NSMutableArray *_subnodes;
    <CalLogWriter> *_writer;
}

@property (nonatomic, retain) NSMutableArray *accumulator;
@property (nonatomic) unsigned int accumulatorBufferSize;
@property (nonatomic, retain) CalLogFilter *filter;
@property (nonatomic, retain) NSMutableArray *subnodes;
@property (nonatomic, retain) <CalLogWriter> *writer;

- (void).cxx_destruct;
- (id)accumulator;
- (unsigned int)accumulatorBufferSize;
- (void)addSubnode:(id)arg1;
- (id)allSubnodes;
- (void)clearAccumulator;
- (id)filter;
- (BOOL)flush;
- (void)flushAccumulator;
- (id)init;
- (int)minimumLevelOfNodeTree;
- (void)processEnvelope:(id)arg1;
- (void)removeSubnode:(id)arg1;
- (void)setAccumulator:(id)arg1;
- (void)setAccumulatorBufferSize:(unsigned int)arg1;
- (void)setFilter:(id)arg1;
- (void)setSubnodes:(id)arg1;
- (void)setWriter:(id)arg1;
- (id)subnodes;
- (id)writer;

@end
