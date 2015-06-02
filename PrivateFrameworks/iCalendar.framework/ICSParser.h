/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSParser : NSObject {
    NSData *_data;
    ICSTokenizer *_lexer;
    int _options;
}

@property (readonly) ICSTokenizer *lexer;

+ (id)entitiesFromNSData:(id)arg1 options:(int)arg2;

- (BOOL)createPropertyType:(int)arg1 component:(id)arg2 withName:(id)arg3;
- (void)dealloc;
- (id)initWithData:(id)arg1 options:(unsigned int)arg2;
- (id)lexer;
- (id)makeComponent:(char *)arg1;
- (void)parseComponent:(id)arg1;
- (id)parseData;
- (void)parseParameter:(id)arg1;
- (BOOL)parseProperty:(id)arg1;

@end
