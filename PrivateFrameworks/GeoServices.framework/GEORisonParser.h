/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORisonParser : NSObject {
    NSNumberFormatter *_formatter;
    NSMutableCharacterSet *_risonEscapes;
    NSMutableCharacterSet *_risonTerminators;
}

- (id)arrayWithReaderInfo:(struct { char *x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)boolWithReaderInfo:(struct { char *x1; unsigned int x2; unsigned int x3; }*)arg1;
- (void)dealloc;
- (id)dictionaryWithReaderInfo:(struct { char *x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)init;
- (id)keyWithReaderInfo:(struct { char *x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)nullWithReaderInfo:(struct { char *x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)numberWithReaderInfo:(struct { char *x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)objectFromRisonString:(id)arg1;
- (id)objectWithReaderInfo:(struct { char *x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)stringFromArray:(id)arg1;
- (id)stringFromDictionary:(id)arg1;
- (id)stringFromNull:(id)arg1;
- (id)stringFromNumber:(id)arg1;
- (id)stringFromRisonObject:(id)arg1;
- (id)stringFromString:(id)arg1;
- (id)stringLiteralWithReaderInfo:(struct { char *x1; unsigned int x2; unsigned int x3; }*)arg1;

@end
