/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUSearchDataSource : NSObject {
    RadioSearchRequest *_activeRequest;
    double _activeRequestTimeInterval;
    <RUSearchDataSourceDelegate> *_delegate;
    double _minimumSearchTimeInterval;
    RadioSearchRequest *_queuedRequest;
}

@property (nonatomic) <RUSearchDataSourceDelegate> *delegate;

- (void).cxx_destruct;
- (void)_updateResultForQueuedSearchRequest;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)updateResultWithSearchRequest:(id)arg1;

@end
