/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTab : NSObject <NSCopying> {
    int _alignment;
    NSString *_leader;
    float _position;
}

@property (nonatomic) int alignment;
@property (nonatomic, copy) NSString *leader;
@property (nonatomic) float position;

+ (id)displayStringFromTabLeader:(id)arg1;
+ (id)stringFromTabAlignment:(int)arg1 isRTL:(BOOL)arg2;
+ (id)tab;
+ (int)tabAlignmentFromString:(id)arg1 isRTL:(BOOL)arg2;
+ (id)tabLeaderFromDisplayString:(id)arg1;

- (int)alignment;
- (int)compare:(id)arg1;
- (int)compareToPosition:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithArchive:(const struct TabArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; float x5; int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; }*)arg1 unarchiver:(id)arg2;
- (id)initWithPosition:(float)arg1 alignment:(int)arg2 leader:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPosition:(float)arg1;
- (id)leader;
- (float)position;
- (float)positionInInches;
- (void)saveToArchive:(struct TabArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; float x5; int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; }*)arg1 archiver:(id)arg2;
- (void)setAlignment:(int)arg1;
- (void)setLeader:(id)arg1;
- (void)setPosition:(float)arg1;
- (void)setPositionInInches:(float)arg1;

@end
