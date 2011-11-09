/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSString, NSDictionary;

@interface AVChatParticipantStatusNugget : NSObject <NSCoding> {
    NSString *_imHandleName;
    NSString *_imHandleID;
    NSString *_invitedBy;
    NSString *_vcPartyID;
    BOOL _sendingAudio;
    BOOL _sendingVideo;
    BOOL _usingICE;
    unsigned int _ardRole;
    unsigned int _state;
    int _error;
    unsigned int _reason;
}

@property(readonly) NSDictionary * dictionaryDescription;
@property(readonly) NSString * name;
@property(readonly) NSString * ID;
@property(readonly) NSString * invitedBy;
@property(readonly) NSString * vcPartyID;
@property(readonly) BOOL sendingAudio;
@property(readonly) BOOL sendingVideo;
@property(readonly) BOOL isUsingICE;
@property(readonly) unsigned int ardRole;
@property(readonly) unsigned int state;
@property(readonly) int error;
@property(readonly) unsigned int reason;

+ (id)filterNuggets:(id)arg1 filterEndedState:(BOOL)arg2 convertFromDict:(BOOL)arg3;
+ (id)nuggetWithDictionaryDescription:(id)arg1;

- (id)invitedBy;
- (unsigned int)reason;
- (id)name;
- (unsigned int)state;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ID;
- (int)error;
- (void)dealloc;
- (void)setVCPartyID:(id)arg1;
- (unsigned int)ardRole;
- (BOOL)sendingVideo;
- (BOOL)sendingAudio;
- (id)dictionaryDescription;
- (void)_configureWithDictionaryDescription:(id)arg1;
- (id)vcPartyID;
- (BOOL)isUsingICE;
- (id)initWithParticipant:(id)arg1;

@end