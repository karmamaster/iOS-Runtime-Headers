/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectRetrieveCompleted : SABaseCommand <SADomainObjectCommand, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *objects;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)domainObjectRetrieveCompleted;
+ (id)domainObjectRetrieveCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)objects;
- (void)setObjects:(id)arg1;

@end
