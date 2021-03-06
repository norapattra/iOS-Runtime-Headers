/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSLocale : NSObject <NSCopying, NSSecureCoding> {
}

+ (id)ISOCountryCodes;
+ (id)ISOCurrencyCodes;
+ (id)ISOLanguageCodes;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)autoupdatingCurrentLocale;
+ (id)availableLocaleIdentifiers;
+ (id)canonicalLanguageIdentifierFromString:(id)arg1;
+ (id)canonicalLocaleIdentifierFromString:(id)arg1;
+ (unsigned int)characterDirectionForLanguage:(id)arg1;
+ (id)commonISOCurrencyCodes;
+ (id)componentsFromLocaleIdentifier:(id)arg1;
+ (id)currentDeviceLanguageForFacebook;
+ (id)currentLocale;
+ (id)internetServicesRegion;
+ (unsigned int)lineDirectionForLanguage:(id)arg1;
+ (id)localeIdentifierFromComponents:(id)arg1;
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned int)arg1;
+ (id)localeWithLocaleIdentifier:(id)arg1;
+ (id)preferredLanguages;
+ (BOOL)supportsSecureCoding;
+ (id)systemLocale;
+ (unsigned int)windowsLocaleCodeFromLocaleIdentifier:(id)arg1;

- (unsigned long)_cfTypeID;
- (id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2;
- (id)_prefs;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localeIdentifier;
- (id)objectForKey:(id)arg1;

@end
