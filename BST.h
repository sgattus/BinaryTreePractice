//
//  BST.h
//  TreeProject
//
//  Created by Toby Dragon on 11/13/14.
//  Copyright (c) 2014 Toby Dragon. All rights reserved.
//

#ifndef __TreeProject__BST__
#define __TreeProject__BST__

#include "BTNode.h"

class DuplicateValueException : std::exception{};

class BST{
private:
    BTNode* root;

public:
    BST();
    ~BST();

    //@post inserts item into correct place in tree
    void add(int newItem);

    //@returns true if the item is in the tree, false otherwise
    bool find(int itemToFind);

    //@post prints the items to the screen in numerical order, comma separated
    void printInOrder();

    //@returns the number of items in the tree
    int itemCount();

    //@returns the height of the tree
    int height();
};

#endif /* defined(__TreeProject__BST__) */
