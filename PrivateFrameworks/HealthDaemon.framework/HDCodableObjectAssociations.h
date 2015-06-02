/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableObjectAssociations : PBCodable <NSCopying> {
    NSData *_associationUuid;
    NSData *_objectUuids;
}

@property (nonatomic, retain) NSData *associationUuid;
@property (nonatomic, readonly) BOOL hasAssociationUuid;
@property (nonatomic, readonly) BOOL hasObjectUuids;
@property (nonatomic, retain) NSData *objectUuids;

- (void).cxx_destruct;
- (id)associationUuid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedAssociationUUID;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAssociationUuid;
- (BOOL)hasObjectUuids;
- (unsigned int)hash;
- (id)initWithAssociationUUID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectUuids;
- (BOOL)readFrom:(id)arg1;
- (void)setAssociationUuid:(id)arg1;
- (void)setObjectUuids:(id)arg1;
- (void)writeTo:(id)arg1;

@end
