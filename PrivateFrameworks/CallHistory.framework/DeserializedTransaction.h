/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface DeserializedTransaction : NSObject {
    CHRecentCall * _call;
    unsigned int  _type;
}

@property (retain) CHRecentCall *call;
@property unsigned int type;

- (void).cxx_destruct;
- (id)call;
- (id)initWithCall:(id)arg1 andType:(unsigned int)arg2;
- (void)setCall:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end
