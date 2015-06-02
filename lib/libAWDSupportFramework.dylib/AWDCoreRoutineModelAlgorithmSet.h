/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelAlgorithmSet : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    } _has;
    NSMutableArray *_instances;
    unsigned long long _timestamp;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSMutableArray *instances;
@property (nonatomic) unsigned long long timestamp;

- (void)addInstance:(id)arg1;
- (void)clearInstances;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (id)instanceAtIndex:(unsigned int)arg1;
- (id)instances;
- (unsigned int)instancesCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setInstances:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
