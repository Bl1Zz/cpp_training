//
// Created by uidm5560 on 3/12/2019.
//

#include <iostream>
#include <bits/stdc++.h>
#include "header.h"

using namespace std;

int Stack::pop() {
    if(q1.queue::empty())
        return -1;

    while (q1.queue::size() != 1) {
        q2.queue::push(q1.queue::front());
        q1.queue::pop();
    }

    q1.queue::pop();
    size--;

    //swap q1 and q2
    queue<int> aux = q1;
    q1 = q2;
    q2 = aux;
}

void Stack::push(int value) {
    q1.queue::push(value);
    size++;
}

int Stack::top() {
    if(q1.queue::empty())
        return -1;
    while(q1.queue::size() != 1){
        q2.queue::push(q1.queue::front());
        q1.queue::pop();
    }

    int tmp = q1.queue::front();
    q1.queue::pop();
    queue <int> aux = q1;
    q1 = q2;
    q2 = aux;
    return tmp;
}

bool Stack::isEmpty() {
    return size == 0 ? true : false;
}