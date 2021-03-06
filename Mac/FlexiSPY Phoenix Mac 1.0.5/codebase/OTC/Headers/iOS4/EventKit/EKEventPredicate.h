/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSPredicate.h"

@class NSArray, NSDate, NSString, NSTimeZone;

@interface EKEventPredicate : NSPredicate
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_uid;
    NSArray *_calendars;
    NSTimeZone *_timeZone;
}

+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventIdentifier:(id)arg4 calendars:(id)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventIdentifier:(id)arg4 calendars:(id)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSString *eventIdentifier;
@property(readonly, nonatomic) NSArray *calendars;
@property(readonly, nonatomic) NSTimeZone *timeZone;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)predicateFormat;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

