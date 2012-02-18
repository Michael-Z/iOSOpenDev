/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"

@class NSString;

@interface SBCallFailureAlert : SBAlert {
	int _causeCode;	// 60 = 0x3c
	NSString *_address;	// 64 = 0x40
	int _uid;	// 68 = 0x44
	CTCallRef _call;	// 72 = 0x48
}
@property(retain) id callAddress;	// G=0x8e465; S=0x8ec11; converted property
@property(readonly, assign) CTCallRef call;	// G=0x8e455; converted property
+ (BOOL)shouldDisplayForCauseCode:(long)causeCode modemCauseCode:(long)code;	// 0x8e439
+ (void)activateForCall:(CTCallRef)call causeCode:(long)code;	// 0x8f3b9
+ (void)test;	// 0x8f2ed
- (id)initWithCauseCode:(long)causeCode call:(CTCallRef)call;	// 0x8f1c5
- (void)dealloc;	// 0x8f591
- (void)activateWhenPossible;	// 0x8f535
- (id)alertDisplayViewWithSize:(CGSize)size;	// 0x8e485
- (long)causeCode;	// 0x8e445
// converted property getter: - (CTCallRef)call;	// 0x8e455
// converted property getter: - (id)callAddress;	// 0x8e465
- (int)addressBookUID;	// 0x8e475
// converted property setter: - (void)setCallAddress:(id)address;	// 0x8ec11
@end
