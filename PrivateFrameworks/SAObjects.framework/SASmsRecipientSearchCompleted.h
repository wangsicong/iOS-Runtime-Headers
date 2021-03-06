/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, SAPersonAttribute;

@interface SASmsRecipientSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(retain) SAPersonAttribute * recipient;
@property(copy) NSArray * recipients;
@property(copy) NSString * refId;

+ (id)recipientSearchCompleted;
+ (id)recipientSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)recipient;
- (id)recipients;
- (void)setRecipient:(id)arg1;
- (void)setRecipients:(id)arg1;

@end
