/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLComputePipelineReflection : NSObject {
    NSArray *_arguments;
    NSArray *_builtInArguments;
    struct { 
        unsigned int kernelRegisterSpill : 1; 
        unsigned int threadgroupBarrier : 1; 
        unsigned int deviceMemoryAtomics : 1; 
        unsigned int threadgroupMemoryAtomics : 1; 
        unsigned int reserved : 60; 
    } _flags;
}

@property (readonly) NSArray *arguments;

- (id).cxx_construct;
- (id)arguments;
- (id)builtInArguments;
- (void)dealloc;
- (id)description;
- (id)initWithSerializedData:(id)arg1 options:(unsigned int)arg2 flags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 60; })arg3;

@end
