/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHSemanticTagAndPropertyPair : NSObject <NSCopying> {
    int mProperty;
    TSCHStyleSemanticTag *mSemanticTag;
}

+ (id)pairWithSemanticTag:(id)arg1 property:(int)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initWithSemanticTag:(id)arg1 property:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (int)property;
- (id)semanticTag;

@end
