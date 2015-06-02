/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NotesDataCollectorChange : NSObject {
    NSString *_accountIdentifier;
    int _accountType;
    int _entity;
    int _operation;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) int accountType;
@property (nonatomic) int entity;
@property (nonatomic) int operation;

+ (id)changeForEntity:(int)arg1 operation:(int)arg2 account:(id)arg3;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (int)accountType;
- (int)entity;
- (int)operation;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountType:(int)arg1;
- (void)setEntity:(int)arg1;
- (void)setOperation:(int)arg1;

@end
