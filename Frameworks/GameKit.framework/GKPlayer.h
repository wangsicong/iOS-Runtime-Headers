/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame, GKPlayerInternal, NSArray, NSDate, NSString;

@interface GKPlayer : NSObject {
    NSArray *_friends;
    GKPlayerInternal *_internal;
    GKGame *_lastPlayedGame;
}

@property(copy) NSString * alias;
@property(readonly) NSString * cacheKey;
@property(readonly) unsigned int detailPieces;
@property(readonly) NSString * displayName;
@property(readonly) NSString * firstName;
@property(retain) NSArray * friends;
@property(readonly) BOOL hasPhoto;
@property(retain) GKPlayerInternal * internal;
@property(readonly) BOOL isFriend;
@property(readonly) NSString * lastName;
@property(readonly) NSDate * lastPlayedDate;
@property(retain) GKGame * lastPlayedGame;
@property(readonly) NSDate * lastSeenDate;
@property unsigned int numberOfFriends;
@property(retain) NSString * playerID;
@property(readonly) struct { int x1; int x2; int x3; int x4; int x5; int x6; } stats;
@property(copy) NSString * status;
@property(readonly) unsigned int validPieces;

+ (void)acceptFriendRequestsFromPlayerIDs:(id)arg1 withHandles:(id)arg2 handler:(id)arg3;
+ (id)anonymousPlayer;
+ (id)cacheKeyForPlayerID:(id)arg1;
+ (void)declineFriendRequestsFromPlayerIDs:(id)arg1 handler:(id)arg2;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (void)loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadPlayersForIdentifiers:(id)arg1 withPieces:(unsigned int)arg2 withCompletionHandler:(id)arg3;
+ (int)sizeForPhotoSize:(int)arg1;
+ (id)unknownPlayer;

- (void)_postChangeNotification;
- (void)acceptFriendRequestWithCompletionHandler:(id)arg1;
- (id)attributedDisplayName;
- (id)attributedDisplayNameWithIdentifiableName:(BOOL)arg1 withFont:(id)arg2;
- (id)attributedDisplayNameWithIdentifiableName:(BOOL)arg1;
- (id)attributedIdentifiableName:(id)arg1 withFont:(id)arg2 foreColor:(id)arg3 shadowColor:(id)arg4;
- (id)cacheKey;
- (void)dealloc;
- (void)declineFriendRequestWithCompletionHandler:(id)arg1;
- (id)description;
- (unsigned int)detailPieces;
- (id)displayName;
- (id)displayNameWithIdentifiableName:(BOOL)arg1 quoteAlias:(BOOL)arg2;
- (id)email;
- (id)emails;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)friends;
- (BOOL)hasPhoto;
- (unsigned int)hash;
- (id)identifiableNameIncludingSurname:(BOOL)arg1;
- (id)imageURLForPhotoSizeList;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (BOOL)isAnonymousPlayer;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFriend;
- (BOOL)isLocalPlayer;
- (BOOL)isUnknownPlayer;
- (id)lastPlayedGame;
- (void)loadCommonFriends:(BOOL)arg1 profilePieces:(unsigned int)arg2 asPlayersWithCompletionHandler:(id)arg3;
- (void)loadFriendIDsWithCompletionHandler:(id)arg1;
- (void)loadFriendsAsPlayersWithCompletionHandler:(id)arg1;
- (void)loadGamesPlayed:(id)arg1;
- (void)loadGamesPlayedDetailsWithCompletionHandler:(id)arg1;
- (void)loadGamesPlayedIncludingInstalledGames:(BOOL)arg1 completionHandler:(id)arg2;
- (void)loadPhotoForSize:(int)arg1 withCompletionHandler:(id)arg2;
- (void)loadProfilePieces:(unsigned int)arg1 withCompletionHandler:(id)arg2;
- (void)loadRecentMatchesForGame:(id)arg1 block:(id)arg2;
- (void)photoCountWithCompletionHandler:(id)arg1;
- (id)photoURLForSize:(int)arg1;
- (void)postChangeNotification;
- (id)quotedAlias:(id)arg1 withFont:(id)arg2 foreColor:(id)arg3 shadowColor:(id)arg4;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setFriends:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setLastPlayedGame:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)sortName;
- (struct { int x1; int x2; int x3; int x4; int x5; int x6; })stats;
- (void)updateNamesFromAddressBook;
- (id)valueForUndefinedKey:(id)arg1;

@end
