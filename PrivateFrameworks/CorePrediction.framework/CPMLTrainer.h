/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

@interface CPMLTrainer : NSObject {
    struct CPMLCDB { struct CPMLStatistics {} *x1; struct sqlite3 {} *x2; struct sqlite3 {} *x3; struct CPMLIterator {} *x4; struct CPMLRemapper {} *x5; struct CPMLTunableData {} *x6; } *cpCDB;
    struct CPMLAlgorithm { int (**x1)(); BOOL x2[32]; struct CPMLCDB {} *x3; struct CPMLTunableData {} *x4; struct CPMLIterator {} *x5; struct CPMLSerialization {} *x6; } *cpMLAlgo;
    struct CPMLTunableData { int x1; void *x2; void *x3; } *cpTuneableData;
    CPMLDB *cpmlDB;
    CPMLSchema *cpmlSchema;
    struct sqlite3 { } *db;
    int mapFunction;
    struct sqlite3 { } *modelDB;
    NSDictionary *modelPlist;
    BOOL shouldFail;
    struct CPMLSerialization { int (**x1)(); bool x2; int x3; int x4; void *x5; struct sqlite3 {} *x6; } *trainerCPSerializer;
    struct CPMLStatistics { struct vector<int, std::__1::allocator<int> > { int *x_1_1_1; int *x_1_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_1_1_3; } x1; struct vector<double, std::__1::allocator<double> > { double *x_2_1_1; double *x_2_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_2_1_3; } x2; struct vector<int, std::__1::allocator<int> > { int *x_3_1_1; int *x_3_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_3_1_3; } x3; struct vector<int, std::__1::allocator<int> > { int *x_4_1_1; int *x_4_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_4_1_3; } x4; struct vector<int, std::__1::allocator<int> > { int *x_5_1_1; int *x_5_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_5_1_3; } x5; int x6; int x7; int x8; int x9; bool x10; struct vector<double, std::__1::allocator<double> > { double *x_11_1_1; double *x_11_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_11_1_3; } x11; struct vector<double, std::__1::allocator<double> > { double *x_12_1_1; double *x_12_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_12_1_3; } x12; struct vector<double, std::__1::allocator<double> > { double *x_13_1_1; double *x_13_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_13_1_3; } x13; struct vector<double, std::__1::allocator<double> > { double *x_14_1_1; double *x_14_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_14_1_3; } x14; struct vector<double, std::__1::allocator<double> > { double *x_15_1_1; double *x_15_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_15_1_3; } x15; void *x16; } *trainerCPStatistics;
}

- (void).cxx_destruct;
- (void)buildTrainingMachineLearningAlgorithm:(id)arg1;
- (void)dealloc;
- (id)fileProtectionClassRequest:(id)arg1;
- (id)init:(id)arg1 withModelDBPath:(id)arg2 withPropertyList:(id)arg3;
- (void)train:(BOOL)arg1;

@end
