/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray, NSMutableDictionary;

@interface VKRealisticPolygonMaker : NSObject {
    NSMutableArray *_polygons;
    NSMutableDictionary *_styleForPolygon;
}

- (void)addPolygonForPoints:(const struct { float x1; float x2; }*)arg1 pointCount:(unsigned int)arg2 withStyle:(id)arg3;
- (void)dealloc;
- (void)generateIndexedTrianglesWithHandler:(id)arg1;

@end
