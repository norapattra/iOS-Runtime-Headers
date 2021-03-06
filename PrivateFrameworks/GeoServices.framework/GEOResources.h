/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSString;

@interface GEOResources : PBCodable {
    NSMutableArray *_attributionBadges;
    NSMutableArray *_attributions;
    NSString *_authToken;
    NSMutableArray *_fonts;
    NSMutableArray *_icons;
    NSMutableArray *_regionalResources;
    NSString *_resourcesURL;
    NSMutableArray *_styleSheets;
    NSMutableArray *_textures;
    NSMutableArray *_tileGroups;
    NSMutableArray *_tileSets;
    NSMutableArray *_xmls;
}

@property(retain) NSMutableArray * attributionBadges;
@property(retain) NSMutableArray * attributions;
@property(retain) NSString * authToken;
@property(retain) NSMutableArray * fonts;
@property(readonly) BOOL hasAuthToken;
@property(readonly) BOOL hasResourcesURL;
@property(retain) NSMutableArray * icons;
@property(retain) NSMutableArray * regionalResources;
@property(retain) NSString * resourcesURL;
@property(retain) NSMutableArray * styleSheets;
@property(retain) NSMutableArray * textures;
@property(retain) NSMutableArray * tileGroups;
@property(retain) NSMutableArray * tileSets;
@property(retain) NSMutableArray * xmls;

- (void)addAttribution:(id)arg1;
- (void)addAttributionBadge:(id)arg1;
- (void)addFont:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)addRegionalResource:(id)arg1;
- (void)addStyleSheet:(id)arg1;
- (void)addTexture:(id)arg1;
- (void)addTileGroup:(id)arg1;
- (void)addTileSet:(id)arg1;
- (void)addXml:(id)arg1;
- (id)attributionAtIndex:(unsigned int)arg1;
- (id)attributionBadgeAtIndex:(unsigned int)arg1;
- (id)attributionBadges;
- (unsigned int)attributionBadgesCount;
- (id)attributions;
- (unsigned int)attributionsCount;
- (id)authToken;
- (void)clearAttributionBadges;
- (void)clearAttributions;
- (void)clearFonts;
- (void)clearIcons;
- (void)clearRegionalResources;
- (void)clearStyleSheets;
- (void)clearTextures;
- (void)clearTileGroups;
- (void)clearTileSets;
- (void)clearXmls;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fontAtIndex:(unsigned int)arg1;
- (id)fonts;
- (unsigned int)fontsCount;
- (BOOL)hasAuthToken;
- (BOOL)hasResourcesURL;
- (unsigned int)hash;
- (id)iconAtIndex:(unsigned int)arg1;
- (id)icons;
- (unsigned int)iconsCount;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)regionalResourceAtIndex:(unsigned int)arg1;
- (id)regionalResources;
- (unsigned int)regionalResourcesCount;
- (id)resourcesURL;
- (void)setAttributionBadges:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setFonts:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setRegionalResources:(id)arg1;
- (void)setResourcesURL:(id)arg1;
- (void)setStyleSheets:(id)arg1;
- (void)setTextures:(id)arg1;
- (void)setTileGroups:(id)arg1;
- (void)setTileSets:(id)arg1;
- (void)setXmls:(id)arg1;
- (id)styleSheetAtIndex:(unsigned int)arg1;
- (id)styleSheets;
- (unsigned int)styleSheetsCount;
- (id)textureAtIndex:(unsigned int)arg1;
- (id)textures;
- (unsigned int)texturesCount;
- (id)tileGroupAtIndex:(unsigned int)arg1;
- (id)tileGroups;
- (unsigned int)tileGroupsCount;
- (id)tileSetAtIndex:(unsigned int)arg1;
- (id)tileSets;
- (unsigned int)tileSetsCount;
- (void)writeTo:(id)arg1;
- (id)xmlAtIndex:(unsigned int)arg1;
- (id)xmls;
- (unsigned int)xmlsCount;

@end
