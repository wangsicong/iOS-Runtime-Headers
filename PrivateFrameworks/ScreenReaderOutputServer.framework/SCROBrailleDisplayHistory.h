/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleDisplayHistory : NSObject  {
    struct __CFArray { } *_announcements;
    struct __CFArray { } *_unreadSnapshot;
    int _currentIndex;
    int _unreadCount;
}

+ (void)initialize;

- (void)addString:(id)arg1;
- (void)snapshotUnread;
- (void)markSnapshotAsRead;
- (BOOL)hasUnread;
- (id)currentString;
- (BOOL)moveToNext;
- (BOOL)moveToPrevious;
- (BOOL)isOnMostRecent;
- (void)moveToMostRecent;
- (BOOL)_moveIndexBy:(long)arg1;
- (id)init;
- (void)dealloc;

@end