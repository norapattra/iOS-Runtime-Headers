/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventInfoHeaderView, UIColor, UITableViewCell;

@interface EKEventTitleDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    UIColor *_color;
    EKEventInfoHeaderView *_header;
    BOOL _showDot;
}

- (id)cellForSubitemAtIndex:(int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;
- (void)reset;

@end
