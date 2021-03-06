/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLPointyBuildingProgram : VGLFogProgram {
    struct { 
        float x; 
        float y; 
        float z; 
    float _alpha;
    } _cameraPositionInTileSpace;
    float _scale;
    int _uAlpha;
    int _uCameraPositionInTileSpace;
    int _uScale;
}

@property float alpha;
@property struct { float x1; float x2; float x3; } cameraPositionInTileSpace;
@property float scale;

+ (id)program;

- (float)alpha;
- (struct { float x1; float x2; float x3; })cameraPositionInTileSpace;
- (id)init;
- (float)scale;
- (void)setAlpha:(float)arg1;
- (void)setCameraPositionInTileSpace:(struct { float x1; float x2; float x3; })arg1;
- (void)setScale:(float)arg1;

@end
