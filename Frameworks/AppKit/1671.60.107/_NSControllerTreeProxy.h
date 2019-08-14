//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTreeNode.h>

#import <AppKit/_NSBindingTree-Protocol.h>

__attribute__((visibility("hidden")))
@interface _NSControllerTreeProxy : NSTreeNode <_NSBindingTree>
{
    id _controller;
}

- (BOOL)_validateValue:(id *)arg1 forKeyPath:(id)arg2 ofObjectAtIndexPath:(id)arg3 error:(id *)arg4;
- (void)_invokeSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 ofObjectAtIndexPath:(id)arg4;
- (id)objectAtIndexPath:(id)arg1;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndexPath:(id)arg3;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndexPath:(id)arg2;
- (id)objectInChildNodesAtIndex:(unsigned long long)arg1;
- (id)descendantNodeAtIndexPath:(id)arg1;
- (id)nodeAtIndexPath:(id)arg1;
- (BOOL)isExpandableAtArrangedObjectIndexPath:(id)arg1;
- (unsigned long long)countForIndexPath:(id)arg1;
- (unsigned long long)count;
- (id)parentNode;
- (id)mutableChildNodes;
- (id)childNodes;
- (unsigned long long)countOfChildNodes;
- (void)sortWithSortDescriptors:(id)arg1 recursively:(BOOL)arg2;
- (BOOL)isLeaf;
- (id)indexPath;
- (id)representedObject;
- (id)initWithController:(id)arg1;

@end
