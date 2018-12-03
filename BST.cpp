//
//  BST.cpp
//  TreeProject
//
//  Created by Toby Dragon on 11/13/14.
//  Copyright (c) 2014 Toby Dragon. All rights reserved.
//

#include <iostream>
#include "BST.h"

BST::BST(){
    root = nullptr;
}

void deleteSubTree(BTNode* current){
    //TODO
}

BST::~BST(){
    deleteSubTree(root);
}

void add(BTNode* current,  int newValue){
    if (newValue == current->getItem()){
        throw DuplicateValueException();
    }
    else if (newValue < current->getItem()){
        BTNode* child = current->getLeft();
        if (child != nullptr){
            add(child, newValue);
        }
        else {
            current->setLeft(new BTNode(newValue));
        }
    }
    else { //newValue > current->getItem()
        BTNode* child = current->getRight();
        if (child != nullptr){
            add(child, newValue);
        }
        else {
            current->setRight(new BTNode(newValue));
        }
    }
}

void BST::add(int newValue){
    if (root == nullptr){
        root = new BTNode(newValue);
    }
    else {
        ::add(root, newValue);
    }
}

bool find(BTNode *current, int itemToFind) {
    //TODO
    if(current== nullptr){
        return false;

    }
    else {
        if (current->getItem() == itemToFind) {
            return true;
        } else if (itemToFind < current->getItem()) {
            current = current->getLeft();
            find(current, itemToFind);
        } else if (itemToFind > current->getItem()) {
            current = current->getRight();
            find(current, itemToFind);
        }
    }

}

bool BST::find(int itemToFind) {
    return ::find(root, itemToFind);
}

void printInOrder(BTNode* current){
    //TODO

    if(current != nullptr){
        if(current->getLeft()!= nullptr){
            printInOrder(current->getLeft());

        }
        std::cout<<current->getItem()<<", ";
        if(current->getRight()!= nullptr){
            printInOrder(current->getRight());

        }


    }
    else{
        std::cout<<"The tree is empty\n";
    }

}

void BST::printInOrder(){
    ::printInOrder(root);
}

int itemCount(BTNode* current){
    //TODO
   int count = 1;
    if (current->getLeft() != nullptr) {
        count += itemCount(current->getLeft());
    }
    if (current->getRight() != nullptr) {
        count += itemCount(current->getRight());
    }
    return count;
}

int BST::itemCount(){
    return ::itemCount(root);
}

int height(BTNode* current){
    //TODO
    return -1;
}


int BST::height(){
    return ::height(root);
}








