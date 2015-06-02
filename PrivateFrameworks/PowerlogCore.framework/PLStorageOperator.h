/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLStorageOperator : PLOperator

+ (id)entryEventForwardDefinitionConfiguration;
+ (id)entryEventForwardDefinitionSchemaChange;
+ (id)entryEventForwardDefinitionTimeOffset;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitionArchive;
+ (id)entryEventPointDefinitionMerge;
+ (id)entryEventPointDefinitionOTA;
+ (id)entryEventPointDefinitions;

- (void)initOperatorDependancies;
- (void)log;
- (void)logEventForwardSchemaChange:(id)arg1;
- (void)logEventForwardTimeOffset:(id)arg1;
- (void)logEventNoneConfiguration:(id)arg1;
- (void)logEventPointArchive:(id)arg1;
- (void)logEventPointMerge:(id)arg1;
- (void)logEventPointOTA:(id)arg1;
- (id)trimmingConditionsForRolloverAtDate:(id)arg1;

@end
