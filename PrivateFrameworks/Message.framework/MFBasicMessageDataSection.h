/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection> {
    BOOL _complete;
    NSData *_data;
    NSString *_partName;
    BOOL _partial;
}

@property (getter=isComplete, nonatomic) BOOL complete;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *partName;
@property (getter=isPartial, nonatomic) BOOL partial;

- (id)data;
- (void)dealloc;
- (BOOL)isComplete;
- (BOOL)isPartial;
- (id)partName;
- (void)setComplete:(BOOL)arg1;
- (void)setData:(id)arg1;
- (void)setPartName:(id)arg1;
- (void)setPartial:(BOOL)arg1;

@end
