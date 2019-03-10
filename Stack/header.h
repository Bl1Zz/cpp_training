//
// Created by Admin on 10.03.2019.
//

#ifndef STACK_HEADER_H
#define STACK_HEADER_H

#include <string>
#include <iostream>
using namespace std;
class Stack {

private:
    struct item {
        string name;
        int value;
        item* prev;
    };
    item* head;

public:
    void push(string name, int value);
    void pop();
    void readItem(item* r);
    void displayStack();
    Stack();
    ~Stack();

};

#endif //STACK_HEADER_H
