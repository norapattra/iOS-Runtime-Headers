/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKRoadPainter;

@interface VKRoadMapModel : VKVectorMapModel {
    BOOL _drawRoads;
    VKRoadPainter *_roadPainter;
}

@property BOOL drawRoads;

- (void)dealloc;
- (void)drawDebugScene:(id)arg1 WithContext:(id)arg2;
- (BOOL)drawRoads;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (id)init;
- (unsigned int)mapLayerPosition;
- (void)setDrawRoads:(BOOL)arg1;

@end
