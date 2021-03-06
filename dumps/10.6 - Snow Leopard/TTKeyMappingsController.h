/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSArrayController, NSButton, NSPopUpButton, NSTableView, NSTextField, NSWindow, TTKeyMapTextEscaper;

@interface TTKeyMappingsController : NSObject
{
    NSArrayController *_profilesController;
    NSArrayController *_keyMapController;
    NSTableView *_tableView;
    NSWindow *_keyMappingSheet;
    NSPopUpButton *_keyPopUpButton;
    NSPopUpButton *_modifierPopUpButton;
    NSPopUpButton *_actionPopUpButton;
    NSTextField *_actionTextField;
    NSButton *_addButton;
    NSButton *_deleteButton;
    NSButton *_editButton;
    TTKeyMapTextEscaper *_escaper;
    NSArray *_keys;
    NSArray *_modifiers;
    NSArray *_actions;
}

- (void)dealloc;
- (void)awakeFromNib;
- (void)delete:(id)arg1;
- (void)add:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)edit:(id)arg1;
- (void)cancelSheet:(id)arg1;
- (void)okSheet:(id)arg1;
- (void)actionPopupChanged:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;

@end

