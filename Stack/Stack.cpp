#include "Stack.h"

Stack::Stack(){
    top = -1;
}

void Stack::push(string value){
    ++top;
    datastore[top] = value;
}

string Stack::pop(){
    string retVal = datastore[top];
    top--;
    return retVal;
}

string Stack::peek(){
    return datastore[top];
}

bool Stack::isEmpty(){
    if(top == -1){
        return true;
    }else {
        return false;
    }
}

int Stack::count(){
    return top + 1;
}

void Stack::clear(){
    for (int i=0; i <= top-1; ++i){
        datastore[i] = "";
    }
    top = -1;
}