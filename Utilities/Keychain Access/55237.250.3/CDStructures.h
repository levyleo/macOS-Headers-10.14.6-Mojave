//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AlertInfo {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    long long _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct OpaqueSecKeychainItemRef;

struct OpaqueSecKeychainRef;

struct SecKeychainAttribute;

struct SecKeychainAttributeInfo {
    unsigned int _field1;
    unsigned int *_field2;
    unsigned int *_field3;
};

struct SecKeychainAttributeList {
    unsigned int _field1;
    struct SecKeychainAttribute *_field2;
};

struct SecKeychainCallbackInfo {
    unsigned int _field1;
    struct OpaqueSecKeychainItemRef *_field2;
    struct OpaqueSecKeychainRef *_field3;
    int _field4;
};

struct SecKeychainSettings {
    unsigned int _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned int _field4;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct cssm_acl_keychain_prompt_selector {
    unsigned short version;
    unsigned short flags;
};

struct cssm_data {
    unsigned long long _field1;
    char *_field2;
};

struct cssm_date {
    unsigned char _field1[4];
    unsigned char _field2[2];
    unsigned char _field3[2];
};

struct cssm_guid {
    unsigned int _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned char _field4[8];
};

struct cssm_key {
    struct cssm_keyheader _field1;
    struct cssm_data _field2;
};

struct cssm_keyheader {
    unsigned int _field1;
    struct cssm_guid _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    struct cssm_date _field10;
    struct cssm_date _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
};
