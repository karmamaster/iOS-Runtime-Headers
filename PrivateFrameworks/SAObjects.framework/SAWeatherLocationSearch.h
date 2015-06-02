/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherLocationSearch : SADomainCommand

@property (nonatomic, copy) NSURL *identifier;
@property (nonatomic, copy) NSString *locationId;

+ (id)locationSearch;
+ (id)locationSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)locationId;
- (BOOL)requiresResponse;
- (void)setIdentifier:(id)arg1;
- (void)setLocationId:(id)arg1;

@end
