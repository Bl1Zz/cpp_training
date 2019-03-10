
#include <iostream>
#include <string>
#include "header.h"

using namespace std;

int main() {
    Stack obj;
    obj.push("first",11);
    obj.push("second",22);
    obj.push("third",33);
    obj.displayStack();
    cout<<"test pop()"<<endl;
    obj.pop();
    obj.pop();
    obj.displayStack();
    return 0;
}