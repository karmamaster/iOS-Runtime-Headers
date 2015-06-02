/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOActiveTileSet : PBCodable <NSCopying> {
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *_availableTiles;
    unsigned int _availableTilesCount;
    unsigned int _availableTilesSpace;
    NSString *_baseURL;
    struct { 
        unsigned int timeToLiveSeconds : 1; 
        unsigned int updateBehavior : 1; 
        unsigned int multiTileURLUsesStatusCodes : 1; 
    } _has;
    NSString *_localizationURL;
    NSString *_multiTileURL;
    BOOL _multiTileURLUsesStatusCodes;
    int _scale;
    NSMutableArray *_sentinelTiles;
    int _size;
    int _style;
    NSMutableArray *_supportedLanguages;
    unsigned int _timeToLiveSeconds;
    int _updateBehavior;
    unsigned int _version;
}

@property (nonatomic, readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*availableTiles;
@property (nonatomic, readonly) unsigned int availableTilesCount;
@property (nonatomic, retain) NSString *baseURL;
@property (nonatomic, readonly) BOOL hasBaseURL;
@property (nonatomic, readonly) BOOL hasLocalizationURL;
@property (nonatomic, readonly) BOOL hasMultiTileURL;
@property (nonatomic) BOOL hasMultiTileURLUsesStatusCodes;
@property (nonatomic) BOOL hasTimeToLiveSeconds;
@property (nonatomic) BOOL hasUpdateBehavior;
@property (nonatomic, retain) NSString *localizationURL;
@property (nonatomic, retain) NSString *multiTileURL;
@property (nonatomic) BOOL multiTileURLUsesStatusCodes;
@property (nonatomic) int scale;
@property (nonatomic, retain) NSMutableArray *sentinelTiles;
@property (nonatomic) int size;
@property (nonatomic) int style;
@property (nonatomic, retain) NSMutableArray *supportedLanguages;
@property (nonatomic) unsigned int timeToLiveSeconds;
@property (nonatomic) int updateBehavior;
@property (nonatomic) unsigned int version;

- (id)_bestLanguageWithOverrideLocale:(id)arg1;
- (void)_resetBestLanguage;
- (void)addAvailableTiles:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (void)addSentinelTile:(id)arg1;
- (void)addSupportedLanguage:(id)arg1;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)availableTiles;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })availableTilesAtIndex:(unsigned int)arg1;
- (unsigned int)availableTilesCount;
- (id)baseURL;
- (void)clearAvailableTiles;
- (void)clearSentinelTiles;
- (void)clearSupportedLanguages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataForGenericTileType:(int)arg1 tileGroupIdentifier:(unsigned int)arg2;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBaseURL;
- (BOOL)hasLocalizationURL;
- (BOOL)hasMultiTileURL;
- (BOOL)hasMultiTileURLUsesStatusCodes;
- (BOOL)hasTimeToLiveSeconds;
- (BOOL)hasUpdateBehavior;
- (unsigned int)hash;
- (BOOL)isAvailableForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalentTileSet:(id)arg1;
- (unsigned int)largestZoomLevelLEQ:(unsigned int)arg1 inRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)localizationURL;
- (unsigned int)maximumZoomLevelInRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minimumZoomLevelInRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)multiTileURL;
- (BOOL)multiTileURLUsesStatusCodes;
- (BOOL)readFrom:(id)arg1;
- (int)scale;
- (id)sentinelTileAtIndex:(unsigned int)arg1;
- (id)sentinelTiles;
- (unsigned int)sentinelTilesCount;
- (void)setAvailableTiles:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 count:(unsigned int)arg2;
- (void)setBaseURL:(id)arg1;
- (void)setHasMultiTileURLUsesStatusCodes:(BOOL)arg1;
- (void)setHasTimeToLiveSeconds:(BOOL)arg1;
- (void)setHasUpdateBehavior:(BOOL)arg1;
- (void)setLocalizationURL:(id)arg1;
- (void)setMultiTileURL:(id)arg1;
- (void)setMultiTileURLUsesStatusCodes:(BOOL)arg1;
- (void)setScale:(int)arg1;
- (void)setSentinelTiles:(id)arg1;
- (void)setSize:(int)arg1;
- (void)setStyle:(int)arg1;
- (void)setSupportedLanguages:(id)arg1;
- (void)setTimeToLiveSeconds:(unsigned int)arg1;
- (void)setUpdateBehavior:(int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (int)size;
- (int)style;
- (id)supportedLanguageAtIndex:(unsigned int)arg1;
- (id)supportedLanguages;
- (unsigned int)supportedLanguagesCount;
- (unsigned int)timeToLiveSeconds;
- (int)updateBehavior;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
