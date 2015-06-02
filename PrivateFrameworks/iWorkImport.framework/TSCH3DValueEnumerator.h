/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DValueEnumerator : NSObject {
    struct ValueEnumerator { 
        BOOL mForward; 
        unsigned int mIndex; 
        unsigned int mMax; 
        double mValue; 
    } mImp;
}

@property (nonatomic, readonly) double value;

- (id).cxx_construct;
- (id)enumerator;
- (unsigned int)index;
- (BOOL)isValid;
- (BOOL)isValidNonZero;
- (id)nextObject;
- (void)setValue:(double)arg1;
- (double)value;

@end
