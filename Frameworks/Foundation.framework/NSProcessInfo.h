/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSProcessInfo : NSObject {
    NSArray *arguments;
    int automaticTerminationOptOutCounter;
    NSDictionary *environment;
    NSString *hostName;
    NSString *name;
}

@property (readonly) unsigned int activeProcessorCount;
@property (readonly, copy) NSArray *arguments;
@property BOOL automaticTerminationSupportEnabled;
@property (readonly, copy) NSDictionary *environment;
@property (readonly, copy) NSString *globallyUniqueString;
@property (readonly, copy) NSString *hostName;
@property (readonly) struct { int x1; int x2; int x3; } operatingSystemVersion;
@property (readonly, copy) NSString *operatingSystemVersionString;
@property (readonly) unsigned long long physicalMemory;
@property (readonly) int processIdentifier;
@property (copy) NSString *processName;
@property (readonly) unsigned int processorCount;
@property (readonly) double systemUptime;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)processInfo;

- (void)_disableAutomaticTerminationOnly:(id)arg1;
- (void)_enableAutomaticTerminationOnly:(id)arg1;
- (void)_exitIfSuddenTerminationEnabledWithStatus:(int)arg1;
- (void)_exitWhenSuddenTerminationEnabledWithStatus:(int)arg1;
- (void)_reactivateActivity:(id)arg1;
- (int)_suddenTerminationDisablingCount;
- (unsigned int)activeProcessorCount;
- (id)arguments;
- (BOOL)automaticTerminationSupportEnabled;
- (id)beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (id)beginSuspensionOfSystemBehaviors:(unsigned long long)arg1 reason:(id)arg2;
- (void)dealloc;
- (void)disableAutomaticTermination:(id)arg1;
- (void)disableSuddenTermination;
- (void)enableAutomaticTermination:(id)arg1;
- (void)enableSuddenTermination;
- (void)endActivity:(id)arg1;
- (void)endSystemBehaviorSuspension:(id)arg1;
- (id)environment;
- (id)globallyUniqueString;
- (id)hostName;
- (BOOL)isOperatingSystemAtLeastVersion:(struct { int x1; int x2; int x3; })arg1;
- (BOOL)isTranslated;
- (unsigned int)operatingSystem;
- (id)operatingSystemName;
- (struct { int x1; int x2; int x3; })operatingSystemVersion;
- (id)operatingSystemVersionString;
- (void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 block:(id /* block */)arg3;
- (void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)performExpiringActivityWithReason:(id)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)physicalMemory;
- (int)processIdentifier;
- (id)processName;
- (unsigned int)processorCount;
- (void)setArguments:(id)arg1;
- (void)setAutomaticTerminationSupportEnabled:(BOOL)arg1;
- (void)setProcessName:(id)arg1;
- (double)systemUptime;
- (id)userFullName;
- (id)userHomeDirectory;
- (id)userName;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (void)_disableAutomaticTerminationWithoutSettingRelaunchable:(id)arg1;
- (void)_enableAutomaticTerminationWithoutSettingRelaunchable:(id)arg1;

@end
