/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionInitResponse : PBCodable <NSCopying> {
    NSString *_addressID;
    GEOLocation *_addressLocation;
    struct { 
        unsigned int numberOfVisitsBucketSize : 1; 
        unsigned int statusCode : 1; 
    } _has;
    unsigned int _numberOfVisitsBucketSize;
    int _statusCode;
}

@property (nonatomic, retain) NSString *addressID;
@property (nonatomic, retain) GEOLocation *addressLocation;
@property (nonatomic, readonly) BOOL hasAddressID;
@property (nonatomic, readonly) BOOL hasAddressLocation;
@property (nonatomic) BOOL hasNumberOfVisitsBucketSize;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) unsigned int numberOfVisitsBucketSize;
@property (nonatomic) int statusCode;

- (id)addressID;
- (id)addressLocation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAddressID;
- (BOOL)hasAddressLocation;
- (BOOL)hasNumberOfVisitsBucketSize;
- (BOOL)hasStatusCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfVisitsBucketSize;
- (BOOL)readFrom:(id)arg1;
- (void)setAddressID:(id)arg1;
- (void)setAddressLocation:(id)arg1;
- (void)setHasNumberOfVisitsBucketSize:(BOOL)arg1;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setNumberOfVisitsBucketSize:(unsigned int)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (void)writeTo:(id)arg1;

@end
