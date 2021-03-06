/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MessageTextAttachment, MonitoredInvocation, NSThread, NSURL;

@interface MFMessageURLProtocol : NSURLProtocol {
    MessageTextAttachment *_attachment;
    MonitoredInvocation *_invocation;
    NSThread *_loader;
    BOOL _stopped;
    NSURL *_url;
}

+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)initialize;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (void)_downloadAttachment;
- (void)_downloadedData:(id)arg1 mimeType:(id)arg2;
- (void)dealloc;
- (void)startLoading;
- (void)stopLoading;

@end
