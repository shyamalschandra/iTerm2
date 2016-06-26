#import <Cocoa/Cocoa.h>
#import "ITAddressBookMgr.h"
#import "NSDictionary+iTerm.h"

@interface iTermHotkeyPreferencesModel : NSObject

@property(nonatomic, assign) NSUInteger keyCode;
@property(nonatomic, assign) NSEventModifierFlags modifiers;
@property(nonatomic, copy) NSString *characters;
@property(nonatomic, copy) NSString *charactersIgnoringModifiers;
@property(nonatomic, assign) BOOL hotKeyAssigned;

@property(nonatomic, assign) BOOL hasModifierActivation;
@property(nonatomic, assign) iTermHotKeyModifierActivation modifierActivation;

@property(nonatomic, assign) BOOL autoHide;
@property(nonatomic, assign) BOOL showAutoHiddenWindowOnAppActivation;
@property(nonatomic, assign) BOOL animate;

// Radio buttons
@property(nonatomic, assign) iTermHotKeyDockPreference dockPreference;

@property(nonatomic, readonly) NSDictionary<NSString *, id> *dictionaryValue;

@end

@interface iTermHotkeyPreferencesWindowController : NSWindowController

// Assign to this before using it. UI will be updated on assignemnt. Model will be updated when
// the user interacts with the UI.
@property(nonatomic, retain) iTermHotkeyPreferencesModel *model;
@property(nonatomic, copy) NSArray<iTermHotKeyDescriptor *> *descriptorsInUseByOtherProfiles;

- (void)setExplanation:(NSString *)explanation;

@end
