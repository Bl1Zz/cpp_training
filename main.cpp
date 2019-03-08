#include <iostream>
#include <cstdlib>
#include "header.h"

using namespace std;

int main() {
    LinkedList obj;
    int index;
//    obj.addNodeAtTheEndOfList(2);
//    obj.addNodeAtTheEndOfList(5);
//    obj.addNodeAtTheEndOfList(1);
//    obj.addNodeAtTheEndOfList(7);
//    obj.addNodeAtTheEndOfList(9);
//    obj.addNodeAtTheEndOfList(3);
//    obj.addNodeAtTheEndOfList(89);
//    obj.addNodeAtTheEndOfList(5465);
//    obj.addNodeAtTheEndOfList(55);
//    obj.displayList();
//    obj.findMiddle();
//    obj.deleteNode(2);
//    obj.displayList();
//    obj.deleteNode(3);
//    obj.displayList();
//    obj.deleteNode(7);
//    obj.displayList();
//    obj.deleteNode(87894);
//    obj.displayList();
//    obj.addNodeAtTheEndOfList(9);
//    obj.addNodeAtTheEndOfList(3);
//    obj.displayList();
//    obj.findMiddle();

    obj.insertInPosition(3, 0);
    obj.insertInPosition(4, 1);
    obj.insertInPosition(5, 2);
    obj.insertInPosition(7, 3);
    obj.insertInPosition(9, 4);
    //obj.findMiddle();
    obj.addAtHead(99);
    obj.displayList();
    cout<<"\ngetElementByIndex : ";
    index = obj.getIndex(3);
    cout<<index<<endl;
    obj.deleteAtIndex(4);
    obj.displayList();





}