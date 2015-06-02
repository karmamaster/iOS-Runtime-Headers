/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricCustomNetworkSetting : PBCodable <NSCopying> {
    unsigned int _autoProxySetCount;
    unsigned int _bootpSetCount;
    unsigned int _customNetworkCount;
    unsigned int _dhcpSetCount;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int autoProxySetCount : 1; 
        unsigned int bootpSetCount : 1; 
        unsigned int customNetworkCount : 1; 
        unsigned int dhcpSetCount : 1; 
        unsigned int manualProxySetCount : 1; 
        unsigned int staticSetCount : 1; 
        unsigned int totalNetworkCount : 1; 
    } _has;
    unsigned int _manualProxySetCount;
    unsigned int _staticSetCount;
    unsigned long long _timestamp;
    unsigned int _totalNetworkCount;
}

@property (nonatomic) unsigned int autoProxySetCount;
@property (nonatomic) unsigned int bootpSetCount;
@property (nonatomic) unsigned int customNetworkCount;
@property (nonatomic) unsigned int dhcpSetCount;
@property (nonatomic) BOOL hasAutoProxySetCount;
@property (nonatomic) BOOL hasBootpSetCount;
@property (nonatomic) BOOL hasCustomNetworkCount;
@property (nonatomic) BOOL hasDhcpSetCount;
@property (nonatomic) BOOL hasManualProxySetCount;
@property (nonatomic) BOOL hasStaticSetCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalNetworkCount;
@property (nonatomic) unsigned int manualProxySetCount;
@property (nonatomic) unsigned int staticSetCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int totalNetworkCount;

- (unsigned int)autoProxySetCount;
- (unsigned int)bootpSetCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)customNetworkCount;
- (id)description;
- (unsigned int)dhcpSetCount;
- (id)dictionaryRepresentation;
- (BOOL)hasAutoProxySetCount;
- (BOOL)hasBootpSetCount;
- (BOOL)hasCustomNetworkCount;
- (BOOL)hasDhcpSetCount;
- (BOOL)hasManualProxySetCount;
- (BOOL)hasStaticSetCount;
- (BOOL)hasTimestamp;
- (BOOL)hasTotalNetworkCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)manualProxySetCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAutoProxySetCount:(unsigned int)arg1;
- (void)setBootpSetCount:(unsigned int)arg1;
- (void)setCustomNetworkCount:(unsigned int)arg1;
- (void)setDhcpSetCount:(unsigned int)arg1;
- (void)setHasAutoProxySetCount:(BOOL)arg1;
- (void)setHasBootpSetCount:(BOOL)arg1;
- (void)setHasCustomNetworkCount:(BOOL)arg1;
- (void)setHasDhcpSetCount:(BOOL)arg1;
- (void)setHasManualProxySetCount:(BOOL)arg1;
- (void)setHasStaticSetCount:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTotalNetworkCount:(BOOL)arg1;
- (void)setManualProxySetCount:(unsigned int)arg1;
- (void)setStaticSetCount:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalNetworkCount:(unsigned int)arg1;
- (unsigned int)staticSetCount;
- (unsigned long long)timestamp;
- (unsigned int)totalNetworkCount;
- (void)writeTo:(id)arg1;

@end
