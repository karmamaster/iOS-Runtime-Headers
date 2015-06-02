/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDurationFormat : NSObject <NSCopying, TSUDataFormat> {
    NSString *mFormat;
    NSString *mName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)formatWithFormat:(id)arg1 name:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)format;
- (id)formatName;
- (unsigned int)hash;
- (id)initWithFormat:(id)arg1 name:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)setFormatName:(id)arg1;

@end
