//
//  OKAHashMutableDirectedGraph.h
//  DirectedGraph
//
//  Created by Oliver on 30/01/2014.
//  Copyright (c) 2014 Oliver Atkinson @ Common Agency. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OKADirectedGraph.h"

@interface OKAMutableDirectedGraph : NSObject <OKADirectedGraph>

- (void)addEdgeFrom:(id)start destination:(id)destination;
- (void)removeEdgeFrom:(id)start destination:(id)destination;
- (BOOL)containsEdgeFrom:(id)start destination:(id)destination;

- (void)addNode:(id)node;
- (void)removeNode:(id)node;
- (BOOL)containsNode:(id)node;

@end
