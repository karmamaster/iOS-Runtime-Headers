/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGCuratedEventKey : NSObject <SGEntityKey> {
    NSString *_externalId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *externalId;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)isSupportedEntityType:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)externalId;
- (unsigned int)hash;
- (id)initWithExternalId:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCuratedEventKey:(id)arg1;
- (id)serialize;

@end
