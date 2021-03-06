/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableIndexSet, TTActiveTextStorage, TTLogicalScreenString, TTProfile, TTScrollbackTextStorage;

@interface TTLogicalScreen : NSObject
{
    TTProfile *_profile;
    struct CGSize logicalSize;
    struct _NSRange _scrollRange;
    CDStruct_9b71c0a5 _cursorPosition;
    TTScrollbackTextStorage *_scrollbackStorage;
    TTActiveTextStorage *_activeStorage;
    BOOL _isInverted;
    BOOL _isCursorVisible;
    BOOL _isAlternateScreenActive;
    TTActiveTextStorage *_savedActiveStorage;
    CDStruct_9b71c0a5 _savedCursorPosition;
    BOOL _isResizing;
    unsigned long long _resizeDepth;
    unsigned long long _savedRowCount;
    unsigned long long _savedCursorOffset;
    NSMutableIndexSet *_doubleHighTopLines;
    NSMutableIndexSet *_doubleHighBottomLines;
    NSMutableIndexSet *_doubleWideLines;
    CDStruct_bff1fa32 *_unicharEndOfLineOffsetCache;
    unsigned long long _unicharOffsetCacheCursorOffset;
    unsigned long long _unicharOffsetCacheCursorLine;
    CDStruct_bff1fa32 *_unicharOffsetCacheUTF8Buffer;
    CDStruct_bff1fa32 *_unicharOffsetCacheUTF16Buffer;
    CDStruct_bff1fa32 *_unicharOffsetCacheRunBuffer;
    unsigned long long _unicharOffsetCacheGenerationNumber;
    TTLogicalScreenString *_unicharOffsetCacheString;
    NSMutableIndexSet *_dirtyLines;
    BOOL _isBlitSafe;
}

+ (id)keyPathsForValuesAffectingValueForRowCount;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)initWithProfile:(id)arg1 columnCount:(unsigned long long)arg2 rowCount:(unsigned long long)arg3;
- (void)dealloc;
- (id)profile;
- (void)setProfile:(id)arg1;
- (id)scrollbackStorage;
- (unsigned long long)rowCount;
- (void)setRowCount:(unsigned long long)arg1;
- (BOOL)validateRowCount:(id *)arg1 error:(id *)arg2;
- (unsigned long long)columnCount;
- (void)setColumnCount:(unsigned long long)arg1;
- (unsigned long long)lineCount;
- (unsigned long long)scrollbackLineCount;
- (void)beginResizeOperation;
- (void)endResizeOperation;
- (void)setRowCount:(unsigned long long)arg1 columnCount:(unsigned long long)arg2;
- (struct CGSize)contentSize;
- (CDStruct_4bcfbbae)cursorPosition;
- (void)setCursorPosition:(CDStruct_4bcfbbae)arg1;
- (CDStruct_4bcfbbae)displayCursorPosition;
- (unsigned long long)cursorLine;
- (void)setCursorLine:(unsigned long long)arg1;
- (unsigned long long)cursorColumn;
- (void)setCursorColumn:(unsigned long long)arg1;
- (void)setCursorRowWrapped:(BOOL)arg1;
- (BOOL)isCursorRowWrapped;
- (unsigned long long)logicalWidthForRow:(unsigned long long)arg1;
- (struct _NSRange)lineRangeForLine:(unsigned long long)arg1;
- (unsigned long long)sizeForLine:(unsigned long long)arg1;
- (unsigned long long)cursorLineSize;
- (void)setSize:(unsigned long long)arg1 forLine:(unsigned long long)arg2;
- (void)setCursorLineSize:(unsigned long long)arg1;
- (CDStruct_4bcfbbae)insertUTF8Characters:(const char *)arg1 length:(unsigned long long)arg2 withAttributes:(CDStruct_45ade667)arg3 atPosition:(CDStruct_4bcfbbae)arg4;
- (CDStruct_4bcfbbae)overwriteUTF8Characters:(const char *)arg1 length:(unsigned long long)arg2 withAttributes:(CDStruct_45ade667)arg3 atPosition:(CDStruct_4bcfbbae)arg4;
- (void)deleteUTF8Characters:(unsigned long long)arg1 atPosition:(CDStruct_4bcfbbae)arg2;
- (void)deleteAndReverseWrapUTF8Characters:(unsigned long long)arg1 atPosition:(CDStruct_4bcfbbae)arg2;
- (void)deleteUTF8CharactersInLineRange:(struct _NSRange)arg1;
- (void)shiftLineRange:(struct _NSRange)arg1 inDirection:(unsigned long long)arg2 byAmount:(unsigned long long)arg3;
- (void)truncateScrollbackFromBeginningToLineLength:(unsigned long long)arg1;
- (BOOL)isAlternateScreenActive;
- (void)setAlternateScreenActive:(BOOL)arg1;
- (BOOL)isInverted;
- (void)setInverted:(BOOL)arg1;
- (BOOL)isCursorVisible;
- (void)setCursorVisible:(BOOL)arg1;
- (void)setAutoWrap:(BOOL)arg1;
- (BOOL)autoWrap;
- (struct _NSRange)scrollRange;
- (void)setScrollRange:(struct _NSRange)arg1;
- (void)getLine:(unsigned long long)arg1 UTF8Characters:(CDStruct_bff1fa32 *)arg2 runs:(CDStruct_bff1fa32 *)arg3;
- (unsigned long long)displayWidthForCharacter:(int)arg1;
- (unsigned long long)logicalWidthForCharacter:(int)arg1;
- (void)setBlitSafe:(BOOL)arg1;
- (BOOL)isBlitSafe;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)clearScrollback;
- (void)pullLinesFromScrollback:(unsigned long long)arg1 toActiveStorage:(id)arg2 scanningForEmptyLines:(unsigned long long)arg3;
@property struct CGSize logicalSize; // @synthesize logicalSize;

@end

