/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFSystemLog : NSObject

+ (id)sharedInstance;

- (BOOL)isLoggingToFile;
- (void)startLoggingToFile:(id)arg1;
- (void)stopLoggingToFile;
- (void)writeLevel:(unsigned int)arg1 facility:(id)arg2 path:(const char *)arg3 line:(unsigned int)arg4 function:(const char *)arg5 format:(id)arg6;

@end
