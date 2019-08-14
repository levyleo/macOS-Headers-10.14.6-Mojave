//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioBufferList;

struct AudioStreamBasicDescription {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct AudioStreamRangedDescription {
    struct AudioStreamBasicDescription _field1;
    struct AudioValueRange _field2;
};

struct AudioValueRange {
    double _field1;
    double _field2;
};

struct OpaqueAudioConverter;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    float *_field5;
    struct OpaqueAudioConverter **_field6;
    struct OpaqueAudioConverter **_field7;
    struct AudioBufferList **_field8;
    struct AudioBufferList **_field9;
    struct AudioBufferList **_field10;
    struct AudioBufferList *_field11;
} CDStruct_3e00b629;
