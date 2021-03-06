/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSMutableDictionary, NSString;

@interface UIKBTree : NSObject <NSCopying> {
    NSMutableDictionary *cache;
    NSString *name;
    NSMutableDictionary *properties;
    NSMutableArray *subtrees;
    int type;
}

@property(readonly) BOOL acceptsShiftLock;
@property(retain) NSMutableDictionary * cache;
@property(readonly) BOOL modifiesKeyplane;
@property(retain) NSString * name;
@property(retain) NSMutableDictionary * properties;
@property(retain) NSMutableArray * subtrees;
@property int type;

+ (id)key;
+ (id)keyboard;
+ (id)mergeStringForKeyName:(id)arg1;
+ (id)shapesForControlKeyShapes:(id)arg1 options:(int)arg2;
+ (BOOL)shouldSkipCacheString:(id)arg1;
+ (id)stringForType:(int)arg1;
+ (id)treeOfType:(int)arg1;
+ (id)uniqueName;

- (id)_cacheRootNameForKey:(id)arg1;
- (BOOL)_needsScaling;
- (int)_variantType;
- (BOOL)acceptsShiftLock;
- (id)alternateKeyplaneName;
- (id)attributeSet:(BOOL)arg1;
- (id)autolocalizedKeyCacheIterator;
- (BOOL)avoidsLanguageIndicator;
- (BOOL)behavesAsShiftKey;
- (BOOL)boolForProperty:(id)arg1;
- (id)cache;
- (id)cacheDisplayString;
- (void)cacheKey:(id)arg1;
- (id)cachedKeysByKeyName:(id)arg1;
- (void)clearTransientCaches;
- (id)clientVariantActionName;
- (id)clientVariantRepresentedString;
- (int)clipCorners;
- (id)componentName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)disabled;
- (int)displayRowHint;
- (id)displayString;
- (int)displayType;
- (int)displayTypeHint;
- (id)findLeftMoreKey;
- (id)firstCachedKeyWithName:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)geometries;
- (id)geometriesOrderedByPosition;
- (id)geometry;
- (id)geometrySet:(BOOL)arg1;
- (BOOL)ghost;
- (int)highlightedVariantIndex;
- (int)indexOfSubtree:(id)arg1;
- (id)initWithType:(int)arg1 withName:(id)arg2 withProperties:(id)arg3 withSubtrees:(id)arg4 withCache:(id)arg5;
- (id)initWithType:(int)arg1;
- (int)intForProperty:(id)arg1;
- (int)interactionType;
- (BOOL)isClientVariantOverride;
- (BOOL)isDuplicateOfTree:(id)arg1;
- (BOOL)isEqualToTree:(id)arg1;
- (BOOL)isGenerated;
- (BOOL)isHashed;
- (BOOL)isLeafType;
- (BOOL)isLetters;
- (BOOL)isSameAsTree:(id)arg1;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)isShiftKeyplane;
- (id)keyAttributes;
- (id)keyForString:(id)arg1;
- (id)keySet;
- (id)keyplaneForKey:(id)arg1;
- (id)keys;
- (id)keysByKeyName:(id)arg1;
- (id)keysOrderedByPosition;
- (id)keysOrderedByPositionWithoutZip;
- (id)keysWithString:(id)arg1;
- (id)layoutName;
- (id)localizationKey;
- (BOOL)looksLike:(id)arg1;
- (BOOL)looksLikeShiftAlternate;
- (BOOL)modifiesKeyplane;
- (id)name;
- (id)nameFromAttributes;
- (BOOL)noLanguageIndicator;
- (BOOL)notUseCandidateSelection;
- (id)numberForProperty:(id)arg1;
- (id)overrideDisplayString;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paddedFrame;
- (id)properties;
- (id)recursiveDescription;
- (void)removeClientVariantActionInfo;
- (BOOL)renderAsStringKey;
- (BOOL)renderAsStringKeyExcludingPunctuation:(BOOL)arg1;
- (int)rendering;
- (id)representedString;
- (void)setAttributes:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setClientVariantActionName:(id)arg1;
- (void)setClientVariantRepresentedString:(id)arg1;
- (void)setClipCorners:(int)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setDisplayRowHint:(int)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setDisplayType:(int)arg1;
- (void)setDisplayTypeHint:(int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrameOnly:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGeometry:(id)arg1;
- (void)setGhost:(BOOL)arg1;
- (void)setHighlightedVariantIndex:(int)arg1;
- (void)setInteractionType:(int)arg1;
- (void)setIsClientVariantOverride:(BOOL)arg1;
- (void)setIsGenerated:(BOOL)arg1;
- (void)setName:(id)arg1;
- (BOOL)setObject:(id)arg1 forProperty:(id)arg2;
- (void)setOverrideDisplayString:(id)arg1;
- (void)setPaddedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setProperties:(id)arg1;
- (void)setRendering:(int)arg1;
- (void)setRepresentedString:(id)arg1;
- (void)setShape:(id)arg1;
- (void)setShouldSkipCandidateSelection:(BOOL)arg1;
- (void)setSplitMode:(int)arg1;
- (void)setSubtrees:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setType:(int)arg1;
- (void)setVariantPopupBias:(id)arg1;
- (void)setVariantType:(int)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)setVisualStyle:(int)arg1;
- (id)shape;
- (id)shiftAlternateKeyplaneName;
- (BOOL)shouldCacheKey;
- (BOOL)shouldSkipCandidateSelection;
- (int)splitMode;
- (id)stringForProperty:(id)arg1;
- (id)subtreeAtIndexPath:(id)arg1 withPosition:(int)arg2;
- (id)subtreeWithName:(id)arg1 rows:(id)arg2;
- (id)subtreeWithName:(id)arg1;
- (id)subtreeWithType:(int)arg1;
- (id)subtrees;
- (BOOL)subtreesAreOrdered;
- (id)subtreesWithProperty:(id)arg1 value:(id)arg2;
- (BOOL)supportsType:(int)arg1;
- (int)textAlignment;
- (int)type;
- (id)unhashedName;
- (void)updateDictationKeyOnNumberPads:(BOOL)arg1;
- (void)updateMoreAndInternationalKeysWithOptions:(int)arg1;
- (void)updateVariantTypeForActions:(unsigned int)arg1;
- (BOOL)usesAdaptiveKeys;
- (BOOL)usesAutoShift;
- (BOOL)usesKeyCharging;
- (id)variantDisplayString;
- (id)variantPopupBias;
- (int)variantType;
- (BOOL)visible;
- (int)visualStyle;
- (void)zipAttributes;
- (void)zipGeometries:(BOOL)arg1 attributes:(BOOL)arg2;
- (void)zipGeometrySet;

@end
