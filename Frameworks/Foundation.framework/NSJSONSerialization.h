/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSJSONSerialization : NSObject {
    void *reserved;
}

+ (id)JSONObjectWithData:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)JSONObjectWithStream:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dataWithJSONObject:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (BOOL)isValidJSONObject:(id)arg1;
+ (int)writeJSONObject:(id)arg1 toStream:(id)arg2 options:(unsigned int)arg3 error:(id*)arg4;

- (id)init;

@end
