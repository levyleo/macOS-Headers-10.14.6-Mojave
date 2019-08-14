//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNLDAPServices, OS_ldap_connection;

__attribute__((visibility("hidden")))
@interface CNLDAPConnection : NSObject
{
    id <CNLDAPServices> _ldapServices;
    NSObject<OS_ldap_connection> *_connection;
}

+ (id)connectionWithURLString:(id)arg1 ldapServices:(id)arg2;
+ (id)connectionWithURLString:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_ldap_connection> *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) id <CNLDAPServices> ldapServices; // @synthesize ldapServices=_ldapServices;
- (void).cxx_destruct;
- (void)executeFetchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)executeFetchRequest:(id)arg1;
- (id)connect;
- (id)observableWithFilter:(id)arg1 baseDN:(id)arg2 scope:(unsigned long long)arg3 resultLimit:(unsigned int)arg4 attributes:(id)arg5;
- (id)observableWithFetchRequest:(id)arg1;
- (id)initWithURL:(id)arg1 ldapServices:(id)arg2;
- (id)initWithURL:(id)arg1;

@end
