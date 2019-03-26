//
// Created by uidm5560 on 3/12/2019.
//
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#ifndef STACKUSINGQUEUES_HEADER_H
#define STACKUSINGQUEUES_HEADER_H

class Stack {
private:
    queue<int> q1, q2;
    int size;

public:
    Stack(): size(0) {}
    int pop();
    void push(int value);
    int top();
    bool isEmpty();

};

#endif //STACKUSINGQUEUES_HEADER_H
