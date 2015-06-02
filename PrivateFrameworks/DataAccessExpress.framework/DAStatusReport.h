/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAStatusReport : NSObject {
    NSString *_accountType;
    NSNumber *_averageHBI;
    NSDate *_creationDate;
    NSString *_displayName;
    NSNumber *_downloadedElements;
    NSNumber *_failedNetworkRequests;
    NSNumber *_failedProtocolRequests;
    NSNumber *_falseMoreAvailableCount;
    int _numHBIDataPoints;
    NSString *_persistentUUID;
    NSString *_protocolVersion;
    NSNumber *_successfulRequests;
    BOOL _syncingAllowed;
    NSNumber *_timeInNetworking;
    NSNumber *_timeSpan;
    NSNumber *_uploadedElements;
}

@property (nonatomic, retain) NSString *accountType;
@property (nonatomic, retain) NSNumber *averageHBI;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSNumber *downloadedElements;
@property (nonatomic, retain) NSNumber *failedNetworkRequests;
@property (nonatomic, retain) NSNumber *failedProtocolRequests;
@property (nonatomic, retain) NSNumber *falseMoreAvailableCount;
@property (nonatomic) int numHBIDataPoints;
@property (nonatomic, retain) NSString *persistentUUID;
@property (nonatomic, retain) NSString *protocolVersion;
@property (nonatomic, retain) NSNumber *successfulRequests;
@property (nonatomic) BOOL syncingAllowed;
@property (nonatomic, retain) NSNumber *timeInNetworking;
@property (nonatomic, retain) NSNumber *timeSpan;
@property (nonatomic, retain) NSNumber *uploadedElements;

- (void).cxx_destruct;
- (id)accountType;
- (id)averageHBI;
- (id)creationDate;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)downloadedElements;
- (id)failedNetworkRequests;
- (id)failedProtocolRequests;
- (id)falseMoreAvailableCount;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)mergeStatusReport:(id)arg1;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteFalseMoreAvailableResponse;
- (void)noteNewHBIDataPoint:(int)arg1;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1 numUploadedElements:(int)arg2;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (int)numHBIDataPoints;
- (id)persistentUUID;
- (id)protocolVersion;
- (void)setAccountType:(id)arg1;
- (void)setAverageHBI:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDownloadedElements:(id)arg1;
- (void)setFailedNetworkRequests:(id)arg1;
- (void)setFailedProtocolRequests:(id)arg1;
- (void)setFalseMoreAvailableCount:(id)arg1;
- (void)setNumHBIDataPoints:(int)arg1;
- (void)setPersistentUUID:(id)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setSuccessfulRequests:(id)arg1;
- (void)setSyncingAllowed:(BOOL)arg1;
- (void)setTimeInNetworking:(id)arg1;
- (void)setTimeSpan:(id)arg1;
- (void)setUploadedElements:(id)arg1;
- (id)successfulRequests;
- (BOOL)syncingAllowed;
- (id)timeInNetworking;
- (id)timeSpan;
- (id)uploadedElements;

@end
