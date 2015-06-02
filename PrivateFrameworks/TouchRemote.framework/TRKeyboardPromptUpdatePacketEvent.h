/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRKeyboardPromptUpdatePacketEvent : TRPacketEvent {
    int _keyboardType;
    BOOL _secureText;
    unsigned long long _sessionID;
    NSString *_subtitle;
    NSString *_text;
    NSString *_title;
    int _updateType;
}

@property (nonatomic, readonly) int keyboardType;
@property (getter=isSecureText, nonatomic, readonly) BOOL secureText;
@property (nonatomic, readonly) unsigned long long sessionID;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) int updateType;

+ (unsigned int)_packetEventType;

- (void).cxx_destruct;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (id)description;
- (id)initWithKeyboardType:(int)arg1 secureText:(BOOL)arg2 sessionID:(unsigned long long)arg3 subtitle:(id)arg4 text:(id)arg5 title:(id)arg6 updateType:(int)arg7;
- (BOOL)isSecureText;
- (int)keyboardType;
- (unsigned long long)sessionID;
- (id)subtitle;
- (id)text;
- (id)title;
- (int)updateType;

@end
