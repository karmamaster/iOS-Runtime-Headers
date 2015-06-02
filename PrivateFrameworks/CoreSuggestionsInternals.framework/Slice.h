/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface Slice : NSObject {
    unsigned int _end;
    unsigned int _start;
    struct { 
        unsigned short category; 
        unsigned short subtype; 
    } _type;
}

@property (nonatomic, readonly) unsigned int end;
@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property (nonatomic, readonly) unsigned int start;
@property (nonatomic, readonly) struct { unsigned short x1; unsigned short x2; } type;

+ (id)sliceWithType:(struct { unsigned short x1; unsigned short x2; })arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (id)sliceWithType:(struct { unsigned short x1; unsigned short x2; })arg1 start:(unsigned int)arg2 end:(unsigned int)arg3;

- (int)compare:(id)arg1;
- (id)description;
- (unsigned int)end;
- (id)initWithType:(struct { unsigned short x1; unsigned short x2; })arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithType:(struct { unsigned short x1; unsigned short x2; })arg1 start:(unsigned int)arg2 end:(unsigned int)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (unsigned int)start;
- (struct { unsigned short x1; unsigned short x2; })type;

@end
