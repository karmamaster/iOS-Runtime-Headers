/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairNAckMessage : IDSSocketPairMessage {
    BOOL _fileXfer;
    unsigned int _offset;
    unsigned short _priority;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
}

@property (nonatomic, readonly) BOOL fileXfer;
@property (nonatomic, readonly) unsigned short priority;
@property (nonatomic, readonly) unsigned int sequenceNumber;
@property (nonatomic, readonly) unsigned short streamID;

- (id)_nonHeaderData;
- (unsigned char)command;
- (BOOL)fileXfer;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 priority:(unsigned short)arg3 fileXfer:(BOOL)arg4;
- (unsigned short)priority;
- (unsigned int)sequenceNumber;
- (unsigned short)streamID;

@end
