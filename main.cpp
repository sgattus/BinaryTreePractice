//  main.cpp
//  TreeProject

#include <iostream>
#include "BST.h"

int main(){
    BST myTree = BST();
    myTree.add(20);
    myTree.add(40);
    myTree.add(30);

    myTree.add(6);
    myTree.add(3);
    myTree.add(100);
    myTree.add(12);
    myTree.add(14);
    myTree.add(35);

    std::cout << "\nTesting\n" << std::endl;
    bool allWorking = true;
    if (myTree.find(40) == false){
        allWorking = false;
        std::cout << "FAIL: couldn't find 40" << std::endl;
    }
    if (myTree.find(6) == false){
        allWorking = false;
        std::cout << "FAIL: couldn't find 6" << std::endl;
    }
    if (myTree.find(100) == false){
        allWorking = false;
        std::cout << "FAIL: couldn't find 100" << std::endl;
    }
    if (myTree.find(0) == true){
        allWorking = false;
        std::cout << "FAIL: found 0" << std::endl;
    }
    if (myTree.find(1000) == true){
        allWorking = false;
        std::cout << "FAIL: found 1000" << std::endl;
    }

    if (allWorking){
        std::cout << "pass find" << std::endl;
    }
    myTree.printInOrder();
    
   std::cout << "\nTotal node count:" << myTree.itemCount() << std::endl;
    std::cout << "Height:" << myTree.height() << std::endl;

    return 0;
}
