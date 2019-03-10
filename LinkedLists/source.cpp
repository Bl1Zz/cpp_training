//
// Created by uidm5560 on 3/1/2019.
//

#include <iostream>
#include <cstdlib>
#include "header.h"

using namespace std;

LinkedList::LinkedList() : head(NULL), nrElem(0) { }


LinkedList::~LinkedList() {

    while (head != NULL){
        nodePtr curr = head;
        head = head->next;
        delete curr;
    }
}

void LinkedList::addNodeAtTheEndOfList(int addValue) {
    nodePtr curr = NULL;
    nodePtr n  = new node;
    n->next = NULL;
    n->data = addValue;

    if(head != NULL){
        curr=head;
        while(curr->next != NULL){
            curr=curr->next;
        }
        curr->next = n;
    } else
        head = n;
    nrElem += 1;
}

void LinkedList::displayList() {
    nodePtr curr = head;
    while (curr != NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

void LinkedList::deleteNode(int delValue) {
    nodePtr delPtr = NULL;
    nodePtr curr = head;
    nodePtr temp = head;

    while(curr != NULL && curr->data != delValue){
        temp = curr;
        curr = curr->next;
    }

    if(curr == NULL)
        cout<<"\nValoarea "<<delValue <<" introdusa nu este membru al listei\n";
    else{
        delPtr=curr;
        curr=curr->next;
        temp->next = curr;
        if(delPtr == head){
            head = head->next;
            temp = NULL;
        }
        delete delPtr;
        cout<<"\nelementul " <<delValue<<" a fost sters\n";
        nrElem --;
    }
}

void LinkedList::findMiddle() {

    nodePtr slow = head;
    nodePtr fast = head;

    if(head == NULL)
        cout<<"\Error! List is empty\n";
    else{
        while (fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        cout<<"\nElementul de mijloc este : "<<slow->data <<endl;
    }

}

void LinkedList::insertInPosition(int insertValue, int position) {

    do {
        if(nrElem < position) {
            cout << "Error" << endl;
            break;
        }

        nodePtr first = NULL;
        nodePtr second = NULL;
        nodePtr n = new node;
        n->data = insertValue;
        n->next = NULL;

        if(head == NULL) {
            head = n;
        } else {
            second = head;

            for(int i = 0; i < position; i++) {
                first = second;
                second = second->next;
            }
            n->next = second;
            if (first == NULL) {
                head = n;
            } else {
                first->next = n;
            }
        }
        nrElem ++;
    } while (false);
}

int LinkedList::getIndex(int index) {

    nodePtr curr = head;
    int count = 0;

    while(curr!=NULL){
        if(count == index)
            return curr->data;
        count++;
        curr = curr->next;
    }

    return -1;
}

void LinkedList::addAtHead(int val) {

    nodePtr p = new node;
    p->next = NULL;
    p->data = val;
    p->next = head;
    head = p;
    nrElem ++;
}

void LinkedList::deleteAtIndex(int index) {
    nodePtr curr = head;

    if(head == NULL)
        return;
    if(index == 0) {
        head = curr->next;
        delete curr;
        nrElem--;
        return;
    }

    for (int i = 0; curr != NULL && i< index - 1; ++i)
        curr = curr->next;
    if(curr == NULL || curr->next == NULL)
        return;
    nodePtr tmp = curr->next->next;
    delete curr->next;
    curr->next = tmp;
    nrElem--;
}

