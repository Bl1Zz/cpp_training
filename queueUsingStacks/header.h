//
// Created by uidm5560 on 3/12/2019.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#ifndef QUEUEUSINGSTACKS_HEADER_H
#define QUEUEUSINGSTACKS_HEADER_H

class  MyQueue{

private:
    stack <int> s1, s2;

public:
    MyQueue(){}
    void push(int x);
    int pop();
    int peek();
    bool empty();



};


#endif //QUEUEUSINGSTACKS_HEADER_H
