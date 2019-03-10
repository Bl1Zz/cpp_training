//
// Created by Admin on 10.03.2019.
//

#include <iostream>
#include <string>
#include "header.h"

using namespace std;

Stack::Stack() : head(NULL){}

Stack::~Stack() {

    item* p1;
    item* p2;
    p1 = head;
    while (p1 != NULL){
        p2 = p1;
        p1 = p1->prev;
        p2->prev = NULL;
        delete p2;
    }
}

void Stack::push(string name, int value) {
    item* n = new item;
    n->name = name;
    n->value = value;

    if(head == NULL){
        head = n;
        head->prev = NULL;
    } else {
        n->prev = head;
        head = n;
    }
}

void Stack::readItem(Stack::item *r) {
    cout << "-----------------"<<endl;
    cout<<"name:  "<<r->name<<endl;
    cout<<"name:  "<<r->value<<endl;
    cout << "-----------------"<<endl;
}

void Stack::pop() {
    if(head == NULL)
        cout<<"pop(): Stack is empty"<<endl;
    else {
        item* p = head;
        readItem(p);
        head = head->prev;
        p->prev = NULL;
        delete p;
    }
}

void Stack::displayStack() {
    item* p = head;
    if(head == NULL)
        cout<<"Stack is empty"<<endl;

    while(p != NULL){
        readItem(p);
        p = p->prev;
    }

}


