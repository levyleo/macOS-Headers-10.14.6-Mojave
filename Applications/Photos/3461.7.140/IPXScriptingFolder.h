//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXScriptingContainer.h"

@class RDFolder;

@interface IPXScriptingFolder : IPXScriptingContainer
{
    RDFolder *_representedFolder;
}

@property(retain) RDFolder *representedFolder; // @synthesize representedFolder=_representedFolder;
- (void).cxx_destruct;
- (id)folders;
- (id)albums;
- (id)containers;
- (id)parent;
- (void)setName:(id)arg1;
- (id)name;
- (id)uuid;
- (id)objectSpecifier;
- (id)initWithFolder:(id)arg1 containerClass:(id)arg2 containerSpecifier:(id)arg3 containerKey:(id)arg4;

@end
