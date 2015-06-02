/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

@interface CSLUIPBUIPluginTriggerRequest : PBRequest <NSCopying> {
    NSMutableArray *_dictionarys;
    struct { 
        unsigned int reason : 1; 
    } _has;
    NSString *_name;
    int _reason;
}

@property (nonatomic, retain) NSMutableArray *dictionarys;
@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic) BOOL hasReason;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int reason;

- (void).cxx_destruct;
- (void)addDictionary:(id)arg1;
- (void)clearDictionarys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryAtIndex:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (id)dictionarys;
- (unsigned int)dictionarysCount;
- (BOOL)hasName;
- (BOOL)hasReason;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (int)reason;
- (void)setDictionarys:(id)arg1;
- (void)setHasReason:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setReason:(int)arg1;
- (void)writeTo:(id)arg1;

@end
