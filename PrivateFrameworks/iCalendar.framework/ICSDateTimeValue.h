/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSDateTimeValue : ICSDateValue <NSCoding> {
    int _hour;
    int _minute;
    int _second;
}

@property (readonly) int hour;
@property (readonly) int minute;
@property (readonly) int second;

- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)components;
- (int)dateType;
- (void)encodeWithCoder:(id)arg1;
- (int)hour;
- (id)initWithCoder:(id)arg1;
- (id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3;
- (id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3 hour:(int)arg4 minute:(int)arg5 second:(int)arg6;
- (int)minute;
- (int)second;

@end
