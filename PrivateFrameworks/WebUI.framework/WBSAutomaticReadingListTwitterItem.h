/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSAutomaticReadingListTwitterItem : WBSAutomaticReadingListItem {
    NSString *_displayURLString;
    NSString *_expandedURLString;
    NSString *_originatorProfileImageURLString;
    NSString *_originatorScreenName;
    NSDate *_retweetCreationDate;
}

@property (nonatomic, copy) NSString *displayURLString;
@property (nonatomic, copy) NSString *expandedURLString;
@property (nonatomic, copy) NSString *originatorProfileImageURLString;
@property (nonatomic, copy) NSString *originatorScreenName;
@property (nonatomic, copy) NSDate *retweetCreationDate;

- (void).cxx_destruct;
- (id)_profileImageURLStringWithSuffix:(id)arg1;
- (id)biggerOriginatorProfileImageURL;
- (id)description;
- (id)displayString;
- (struct _NSRange { unsigned int x1; unsigned int x2; })displayURLRange;
- (id)displayURLString;
- (id)domainString;
- (id)expandedURLString;
- (id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2;
- (id)originatorProfileImageURL;
- (id)originatorProfileImageURLString;
- (id)originatorProfileURL;
- (id)originatorScreenName;
- (id)retweetCreationDate;
- (id)retweeterProfileURL;
- (void)setDisplayURLString:(id)arg1;
- (void)setExpandedURLString:(id)arg1;
- (void)setOriginatorProfileImageURLString:(id)arg1;
- (void)setOriginatorScreenName:(id)arg1;
- (void)setRetweetCreationDate:(id)arg1;
- (id)socialSource;
- (id)sourceRecordCreationDate;
- (id)sourceRecordURL;

@end
