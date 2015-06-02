/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiProxLeDisconnectionRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    } _has;
    NSString *_peerId;
    NSString *_sessionId;
    unsigned long long _timestamp;
}

@property (nonatomic, readonly) BOOL hasPeerId;
@property (nonatomic, readonly) BOOL hasSessionId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSString *peerId;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPeerId;
- (BOOL)hasSessionId;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerId;
- (BOOL)readFrom:(id)arg1;
- (id)sessionId;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setPeerId:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
