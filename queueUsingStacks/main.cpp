#include <iostream>
#include <bits/stdc++.h>
#include "header.h"

using namespace std;
int main() {
    MyQueue* queue = new MyQueue();
    queue->push(1);
    queue->push(2);
    auto x = queue->peek();
    cout<<"peek: "<<x<<endl;
    queue->pop();
    //queue->pop();
    bool y = queue->empty();
    cout<<y<<endl;


    return 0;
}