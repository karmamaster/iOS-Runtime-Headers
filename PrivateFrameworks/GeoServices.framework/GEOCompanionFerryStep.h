/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionFerryStep : PBCodable <NSCopying> {
    struct { 
        unsigned int maneuverType : 1; 
    } _has;
    int _maneuverType;
}

@property (nonatomic) BOOL hasManeuverType;
@property (nonatomic) int maneuverType;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasManeuverType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)maneuverType;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasManeuverType:(BOOL)arg1;
- (void)setManeuverType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
