//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XCEActivity : NSObject
{
    NSString *_name;
    NSObject *_context;
    long long _suspended;
    CDUnknownBlockType _executionBlock;
    CDUnknownBlockType _debugBlock;
    struct {
        unsigned int active:1;
        unsigned int enabled:1;
        unsigned int memorizeWhenDisabled:1;
        unsigned int memorizeWhenSuspended:1;
        unsigned int memorizeWhenExecuting:1;
        unsigned int triggeredWhileMemorizing:1;
        unsigned int stopBeingActiveWhenDisabled:1;
        unsigned int stopBeingActiveWhenSuspended:1;
        unsigned int executing:1;
        unsigned int invalidated:1;
        unsigned int _reserved:22;
    } _flags;
}

@property(copy) CDUnknownBlockType debugBlock; // @synthesize debugBlock=_debugBlock;
@property(copy) CDUnknownBlockType executionBlock; // @synthesize executionBlock=_executionBlock;
@property(readonly, nonatomic) long long suspended; // @synthesize suspended=_suspended;
@property(retain, nonatomic) NSObject *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (void)receiveXCESignal:(id)arg1;
- (void)execute;
- (void)trigger;
- (void)update;
- (void)stopBeingActive;
- (void)startBeingActive;
- (BOOL)shouldBeActive;
- (void)invalidate;
- (void)resume;
- (void)suspend;
@property(nonatomic) BOOL enabled; // @dynamic enabled;
- (id)init;
- (id)value;
- (void)setValue:(id)arg1;
@property(readonly, nonatomic) BOOL supportsValue; // @dynamic supportsValue;
@property(readonly, nonatomic) BOOL invalidated; // @dynamic invalidated;
@property(readonly, nonatomic) BOOL executing; // @dynamic executing;
@property(nonatomic) BOOL stopBeingActiveWhenSuspended; // @dynamic stopBeingActiveWhenSuspended;
@property(nonatomic) BOOL stopBeingActiveWhenDisabled; // @dynamic stopBeingActiveWhenDisabled;
@property(nonatomic) BOOL memorizeWhenExecuting; // @dynamic memorizeWhenExecuting;
@property(nonatomic) BOOL memorizeWhenSuspended; // @dynamic memorizeWhenSuspended;
@property(nonatomic) BOOL memorizeWhenDisabled; // @dynamic memorizeWhenDisabled;

@end
