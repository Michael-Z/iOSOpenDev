/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class SBApplication;

@interface SBRemoteNotificationEnableSystemwideAlert : SBUnknownSuperclass {
	SBApplication *_app;	// 16 = 0x10
}
- (id)initWithApplication:(id)application;	// 0xee8a9
- (void)dealloc;	// 0xeeb31
- (void)_showNotificationsPrefs;	// 0xeeaf9
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0xeeac5
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0xee901
- (BOOL)shouldShowInLockScreen;	// 0xee8a5
@end
