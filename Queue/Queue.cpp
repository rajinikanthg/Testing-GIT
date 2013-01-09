#include "Queue.h"

Queue::Queue(){
    back = -1;
}

void Queue::in(string value){
    ++back;
    datastore[back] = value;
}

void Queue::shift(){
    for(int i = 0; i<=back -1; ++i){
        datastore[i] = datastore[i+1];
    }
    back--;
}

string Queue::out(){
    string retVal = datastore[back];
    shift();
    return retVal;
}

void Queue::show(){
    for(int i = front; i<=back; ++i){
        cout << datastore[i] << " ";
    }
    cout << endl;
}