/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCLayoutHint : NSObject <TSDHint> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _charRange;
}

@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } charRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (Class)archivedHintClass;

- (id).cxx_construct;
- (struct _NSRange { unsigned int x1; unsigned int x2; })charRange;
- (id)copyForArchiving;
- (id)firstChildHint;
- (id)initWithArchive:(const struct TOCLayoutHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Range {} *x5; }*)arg1 unarchiver:(id)arg2;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)isFirstHint;
- (id)lastChildHint;
- (void)offsetByDelta:(int)arg1;
- (BOOL)overlapsWithSelection:(id)arg1;
- (void)saveToArchive:(struct TOCLayoutHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Range {} *x5; }*)arg1 archiver:(id)arg2;

@end
