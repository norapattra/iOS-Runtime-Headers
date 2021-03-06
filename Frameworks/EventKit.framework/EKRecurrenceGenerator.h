/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSArray, NSCalendar, NSDate, NSTimeZone;

@interface EKRecurrenceGenerator : NSObject {
    BOOL _allDay;
    NSCalendar *_calendar;
    NSArray *_daysOfTheMonth;
    NSArray *_daysOfTheWeek;
    NSArray *_daysOfTheYear;
    unsigned int _duration;
    NSDate *_endDate;
    NSDate *_eventEndDate;
    NSDate *_eventStartDate;
    NSTimeZone *_eventTimeZone;
    int _frequency;
    int _interval;
    NSArray *_monthsOfTheYear;
    NSArray *_setPositions;
    BOOL _shouldPinMonthDays;
    int _weekStart;
    NSArray *_weeksOfTheYear;
}

@property BOOL allDay;
@property(copy) NSArray * daysOfTheMonth;
@property(copy) NSArray * daysOfTheWeek;
@property(copy) NSArray * daysOfTheYear;
@property(copy) NSDate * endDate;
@property(copy) NSDate * eventEndDate;
@property(copy) NSDate * eventStartDate;
@property(copy) NSTimeZone * eventTimeZone;
@property(copy) NSArray * monthsOfTheYear;
@property(copy) NSArray * setPositions;
@property(copy) NSArray * weeksOfTheYear;

+ (id)generator;

- (id)_computeRecurrenceEndDate:(int)arg1;
- (double)_convertAbsoluteTime:(double)arg1 fromTimeZone:(id)arg2 toTimeZone:(id)arg3;
- (id)_copyDailyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned int)arg4;
- (id)_copyMonthlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned int)arg4;
- (id)_copyOccurrenceDatesBetweenStartDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2 timeZone:(id)arg3 limit:(int)arg4;
- (id)_copySimpleYearlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned int)arg4;
- (id)_copyWeeklyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned int)arg4;
- (id)_copyYearlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned int)arg4;
- (BOOL)_isSimpleYearlyRecurrence;
- (void)_prepareForCalRecurrence:(void*)arg1 locked:(BOOL)arg2;
- (void)_prepareForEKRecurrence:(id)arg1;
- (void)_prepareForPersistentRecurrence:(id)arg1;
- (void)_setupForCalEvent:(void*)arg1 locked:(BOOL)arg2;
- (void)_setupForEKEvent:(id)arg1;
- (void)_setupForPersistentEvent:(id)arg1;
- (BOOL)_validateCalDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 pinned:(BOOL)arg2;
- (BOOL)allDay;
- (id)copyOccurrenceDatesWithCalEvent:(void*)arg1 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 timeZone:(id)arg4 limit:(int)arg5 locked:(BOOL)arg6;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(int)arg7;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg4 timeZone:(id)arg5 limit:(int)arg6;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 timeZone:(id)arg4 limit:(int)arg5;
- (id)copyOccurrenceDatesWithEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg4 timeZone:(id)arg5 limit:(int)arg6;
- (id)copyOccurrenceDatesWithEvent:(id)arg1 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 timeZone:(id)arg4 limit:(int)arg5;
- (id)copyOccurrenceDatesWithInitialDate:(id)arg1 calRecurrences:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 timeZone:(id)arg5;
- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (id)daysOfTheYear;
- (void)dealloc;
- (id)endDate;
- (id)eventEndDate;
- (id)eventStartDate;
- (id)eventTimeZone;
- (id)init;
- (BOOL)isOccurrenceDate:(id)arg1 validForEvent:(id)arg2;
- (id)monthsOfTheYear;
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg1 exceptionDates:(id)arg2 initialDate:(id)arg3 afterDate:(id)arg4;
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg1 initialDate:(id)arg2 afterDate:(id)arg3;
- (BOOL)occurrenceDate:(id)arg1 matchesRecurrenceRule:(id)arg2 forEvent:(id)arg3 includeDetachedEventsInSeries:(BOOL)arg4;
- (void)setAllDay:(BOOL)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEventEndDate:(id)arg1;
- (void)setEventStartDate:(id)arg1;
- (void)setEventTimeZone:(id)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (id)setPositions;
- (void)setSetPositions:(id)arg1;
- (void)setWeeksOfTheYear:(id)arg1;
- (id)weeksOfTheYear;

@end
