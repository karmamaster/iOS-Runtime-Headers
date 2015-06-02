/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCall : NSObject <NSSecureCoding> {
    NSString *_abLabel;
    int _abUid;
    BOOL _allowsTTYSettingChanges;
    double _clientMessageReceiveTime;
    NSString *_companyName;
    BOOL _connected;
    BOOL _connecting;
    BOOL _connectingToRelay;
    int _disconnectedReason;
    NSString *_displayName;
    int _displayNameBreakPoint;
    BOOL _endpointOnCurrentDevice;
    int _faceTimeIDStatus;
    BOOL _hasUpdatedAudio;
    double _hostCreationTime;
    double _hostMessageSendTime;
    NSString *_isoCountryCode;
    NSString *_overrideName;
    struct { 
        unsigned int imageType : 2; 
        unsigned int abUidIsValid : 1; 
        unsigned int dialAssisted : 1; 
        unsigned int dialedFromEmergencyUI : 1; 
        unsigned int isEmergencyCall : 1; 
        unsigned int isEmergencyCallIsValid : 1; 
        unsigned int joiningConference : 1; 
        unsigned int leavingConference : 1; 
    } _phoneCallFlags;
    int _provisionalHoldStatus;
    BOOL _requestingHandoff;
    BOOL _requiresAudioReinterruption;
    BOOL _ringtoneSuppressedRemotely;
    BOOL _shouldSuppressRingtone;
    NSString *_sourceIdentifier;
    NSString *_suggestedDisplayName;
    int _transitionStatus;
    NSString *_uniqueProxyIdentifier;
    BOOL _wantsHoldMusic;
}

@property (nonatomic) BOOL allowsTTYSettingChanges;
@property (nonatomic, readonly, copy) NSString *audioCategory;
@property (nonatomic, readonly, copy) NSString *audioMode;
@property (getter=isBlocked, nonatomic, readonly) BOOL blocked;
@property (nonatomic, readonly, copy) NSString *callHistoryIdentifier;
@property (nonatomic, readonly) int callIdentifier;
@property (nonatomic, readonly, copy) NSString *callUUID;
@property (nonatomic, readonly, copy) NSString *callerNameFromNetwork;
@property (nonatomic) double clientMessageReceiveTime;
@property (nonatomic, readonly, retain) NSString *conferenceIdentifier;
@property (getter=isConnected, nonatomic) BOOL connected;
@property (getter=isConnecting, nonatomic) BOOL connecting;
@property (getter=isConnectingToRelay, nonatomic) BOOL connectingToRelay;
@property (nonatomic, readonly, copy) NSString *destinationID;
@property (nonatomic) int disconnectedReason;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) int endedError;
@property (nonatomic, readonly) unsigned int endedReason;
@property (getter=isEndpointOnCurrentDevice, nonatomic) BOOL endpointOnCurrentDevice;
@property (nonatomic, readonly, copy) NSString *errorAlertMessage;
@property (nonatomic, readonly, copy) NSString *errorAlertTitle;
@property (nonatomic) int faceTimeIDStatus;
@property (nonatomic, readonly) BOOL hasReceivedFirstFrame;
@property (nonatomic) BOOL hasUpdatedAudio;
@property (nonatomic) double hostCreationTime;
@property (nonatomic) double hostMessageSendTime;
@property (getter=isHostedOnCurrentDevice, nonatomic, readonly) BOOL hostedOnCurrentDevice;
@property (nonatomic, readonly) BOOL isActive;
@property (nonatomic) BOOL isOnHold;
@property (nonatomic) BOOL isSendingAudio;
@property (nonatomic) BOOL isSendingVideo;
@property (nonatomic, readonly) BOOL isVideo;
@property (nonatomic, copy) NSString *isoCountryCode;
@property (nonatomic, readonly, retain) NSData *localFrequency;
@property (nonatomic, readonly) float localVolume;
@property (nonatomic, readonly) BOOL managesAudioInterruptions;
@property (nonatomic, readonly) BOOL needsManualInCallSounds;
@property (getter=isOutgoing, nonatomic, readonly) BOOL outgoing;
@property (nonatomic, readonly) BOOL playsConnectedSound;
@property (nonatomic) int provisionalHoldStatus;
@property (nonatomic, readonly, retain) NSData *remoteFrequency;
@property (nonatomic, readonly, retain) IMAVChatParticipant *remoteParticipant;
@property (nonatomic, readonly, copy) NSDictionary *remoteUnavailableUserInfo;
@property (getter=isRequestingHandoff, nonatomic) BOOL requestingHandoff;
@property (nonatomic) BOOL requiresAudioReinterruption;
@property (nonatomic) BOOL ringtoneSuppressedRemotely;
@property (nonatomic, readonly) int service;
@property (nonatomic, readonly) BOOL shouldIgnoreStatusChange;
@property (nonatomic, readonly) BOOL shouldPlayHoldMusic;
@property (nonatomic) BOOL shouldSuppressRingtone;
@property (nonatomic, copy) NSString *sourceIdentifier;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) int status;
@property (getter=isStatusFinal, nonatomic, readonly) BOOL statusFinal;
@property (nonatomic, readonly) BOOL statusIsProvisional;
@property (copy) NSString *suggestedDisplayName;
@property (nonatomic, readonly) int supportedModelType;
@property (nonatomic) int transitionStatus;
@property (nonatomic, copy) NSString *uniqueProxyIdentifier;
@property (getter=isVoicemail, nonatomic, readonly) BOOL voicemail;
@property (nonatomic) BOOL wantsHoldMusic;
@property (nonatomic, readonly) BOOL wasDeclined;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (BOOL)supportsSecureCoding;

- (id)_displayNameWithSeparator:(id)arg1;
- (void)_handleCallerIDChange;
- (void)_handleIdentityChange;
- (void)_handleManagesAudioInterruptionsChange;
- (void)_handleStatusChange;
- (void)_loadCallDetails;
- (void)_setPrimitiveDisconnectedReason:(int)arg1;
- (void)_setPrimitiveEndpointOnCurrentDevice:(BOOL)arg1;
- (void)_setPrimitiveShouldSuppressRingtone:(BOOL)arg1;
- (void)_setPrimitiveWantsHoldMusic:(BOOL)arg1;
- (int)abUID;
- (BOOL)allowsTTYSettingChanges;
- (void)answer;
- (void)answerWithSourceIdentifier:(id)arg1;
- (id)audioCategory;
- (id)audioMode;
- (double)callDuration;
- (id)callDurationString;
- (id)callHistoryIdentifier;
- (int)callIdentifier;
- (int)callStatus;
- (id)callUUID;
- (id)callerNameFromNetwork;
- (long)causeCode;
- (double)clientMessageReceiveTime;
- (id)companyName;
- (id)conferenceIdentifier;
- (id)contactImageDataWithFormat:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationID;
- (void)disconnect;
- (void)disconnectWithReason:(int)arg1;
- (int)disconnectedReason;
- (id)displayFirstName;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (int)endedError;
- (unsigned int)endedReason;
- (id)errorAlertMessage;
- (id)errorAlertTitle;
- (int)faceTimeIDStatus;
- (id)handoffInfo;
- (BOOL)hasReceivedFirstFrame;
- (BOOL)hasSupport:(int)arg1;
- (BOOL)hasUpdatedAudio;
- (void)hold;
- (double)hostCreationTime;
- (double)hostMessageSendTime;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)inviteWithCallIdentifier:(int)arg1;
- (BOOL)isActive;
- (BOOL)isAlerting;
- (BOOL)isBlocked;
- (BOOL)isConferenced;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (BOOL)isConnectingToRelay;
- (BOOL)isDownlinkMuted;
- (BOOL)isEmergencyCall;
- (BOOL)isEndpointOnCurrentDevice;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHostedOnCurrentDevice;
- (BOOL)isMuted;
- (BOOL)isOnHold;
- (BOOL)isOutgoing;
- (BOOL)isRequestingHandoff;
- (BOOL)isSendingAudio;
- (BOOL)isSendingVideo;
- (BOOL)isStatusFinal;
- (BOOL)isTTY;
- (BOOL)isUplinkMuted;
- (BOOL)isVideo;
- (BOOL)isVoicemail;
- (id)isoCountryCode;
- (void)joinConference;
- (void)leaveConference;
- (id)localFrequency;
- (float)localVolume;
- (id)localizedLabel;
- (BOOL)managesAudioInterruptions;
- (id)multiLineDisplayName;
- (BOOL)needsManualInCallSounds;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (BOOL)playsConnectedSound;
- (int)provisionalHoldStatus;
- (id)remoteFrequency;
- (id)remoteParticipant;
- (id)remoteUnavailableUserInfo;
- (BOOL)requiresAudioReinterruption;
- (void)resetProvisionalHoldStatus;
- (void)resetProvisionalStatuses;
- (void)resetWantsHoldMusic;
- (BOOL)ringtoneSuppressedRemotely;
- (int)service;
- (void)setAllowsTTYSettingChanges:(BOOL)arg1;
- (void)setClientMessageReceiveTime:(double)arg1;
- (void)setConnected:(BOOL)arg1;
- (void)setConnecting:(BOOL)arg1;
- (void)setConnectingToRelay:(BOOL)arg1;
- (void)setDisconnectedReason:(int)arg1;
- (void)setDisplayName:(id)arg1;
- (BOOL)setDownlinkMuted:(BOOL)arg1;
- (void)setEndpointOnCurrentDevice:(BOOL)arg1;
- (void)setFaceTimeIDStatus:(int)arg1;
- (void)setHasUpdatedAudio:(BOOL)arg1;
- (void)setHostCreationTime:(double)arg1;
- (void)setHostMessageSendTime:(double)arg1;
- (void)setIsOnHold:(BOOL)arg1;
- (void)setIsSendingAudio:(BOOL)arg1;
- (void)setIsSendingVideo:(BOOL)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (BOOL)setMuted:(BOOL)arg1;
- (void)setOverrideName:(id)arg1;
- (void)setProvisionalHoldStatus:(int)arg1;
- (void)setRequestingHandoff:(BOOL)arg1;
- (void)setRequiresAudioReinterruption:(BOOL)arg1;
- (void)setRingtoneSuppressedRemotely:(BOOL)arg1;
- (void)setShouldSuppressRingtone:(BOOL)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setSuggestedDisplayName:(id)arg1;
- (void)setTransitionStatus:(int)arg1;
- (void)setUniqueProxyIdentifier:(id)arg1;
- (BOOL)setUplinkMuted:(BOOL)arg1;
- (void)setWantsHoldMusic:(BOOL)arg1;
- (void)setWasDialAssisted:(BOOL)arg1;
- (void)setWasDialedFromEmergencyUI:(BOOL)arg1;
- (BOOL)shouldIgnoreStatusChange;
- (BOOL)shouldPlayDTMFTone;
- (BOOL)shouldPlayHoldMusic;
- (BOOL)shouldSuppressRingtone;
- (id)sourceIdentifier;
- (double)startTime;
- (int)status;
- (BOOL)statusIsProvisional;
- (id)suggestedDisplayName;
- (int)supportedModelType;
- (void)suppressRingtone;
- (id)totalDataUsed;
- (int)transitionStatus;
- (void)unhold;
- (id)uniqueProxyIdentifier;
- (void)updateForDisconnection;
- (void)updateWithCall:(id)arg1;
- (BOOL)wantsHoldMusic;
- (BOOL)wasDeclined;
- (BOOL)wasDialAssisted;
- (BOOL)wasDialedFromEmergencyUI;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

- (id)_image;
- (id)desktopImage;
- (id)image;
- (id)smallImage;

@end
