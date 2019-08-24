//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CLKUIAtlasBackingStructure {
    void *bytes;
    unsigned int length;
    unsigned int width;
    unsigned int height;
    unsigned int planes;
    unsigned int planeLength;
    unsigned int bytesPerPixel;
    unsigned int mipCount;
    unsigned char format;
    unsigned char filter;
    unsigned char wrap;
    _Bool mipmaps;
};

struct CLKUIGLUniforms {
    int rotation;
    int dialRadius;
    int sampleRadius;
    int sampleCenter;
    int primaryTexture;
    int primaryTextureRect;
    int secondaryTexture;
    int secondaryTextureRect;
    int aspect;
};

struct CLKUIQuadSize {
    int _field1;
    int _field2;
};

struct NSNumber {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

#pragma mark Typedef'd Structures

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;
