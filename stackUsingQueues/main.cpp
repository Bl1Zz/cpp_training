#include <iostream>
#include <bits/stdc++.h>
#include "header.h"

using namespace std;

int main() {
    Stack* stack = new Stack();
    stack->push(1);
    stack->push(2);
    int top = stack->top();
    cout<<top<<endl;
    stack->pop();
    bool empty = stack->isEmpty();
    cout<<empty<<endl;
    return 0;
}