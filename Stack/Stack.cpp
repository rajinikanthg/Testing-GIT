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