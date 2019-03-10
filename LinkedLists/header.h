//
// Created by uidm5560 on 3/1/2019.
//

#ifndef LINKEDLIST_HEADER_H
#define LINKEDLIST_HEADER_H

#include <iostream>
#include <cstdlib>
using namespace std;

class LinkedList {

private:
    typedef struct node {
        int data;
        node* next;
    }* nodePtr;

    nodePtr head;
    int nrElem;

public:
    LinkedList();
    void addNodeAtTheEndOfList(int addValue);
    void deleteNode(int delValue);
    void displayList();
    void findMiddle();
    void insertInPosition(int insertValue, int position);
    int getIndex(int index);
    void addAtHead(int val);
    void deleteAtIndex(int index);
    ~LinkedList();

};


#endif //LINKEDLIST_HEADER_H
