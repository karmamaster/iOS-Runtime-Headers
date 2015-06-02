/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNFCJCOPRestrictedModeEvent : PBCodable <NSCopying> {
    BOOL _contactless;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int contactless : 1; 
    } _has;
    NSData *_log;
    unsigned long long _timestamp;
}

@property (nonatomic) BOOL contactless;
@property (nonatomic) BOOL hasContactless;
@property (nonatomic, readonly) BOOL hasLog;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSData *log;
@property (nonatomic) unsigned long long timestamp;

- (BOOL)contactless;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasContactless;
- (BOOL)hasLog;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)log;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setContactless:(BOOL)arg1;
- (void)setHasContactless:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setLog:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
