/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 8. tammikuuta 2013, 23:06
 */

#include <iostream>
#include "Stack.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Stack names;
    names.push("Monica");
    names.push("Hillary");
    names.push("Lusia");
    names.push("Ken");
    
    cout << "pop() : "<<names.pop()<<endl;
    cout << "pop() : "<<names.pop()<<endl;
    cout << "pop() : "<<names.pop()<<endl;
    cout << "peek() : "<<names.peek()<<endl;
    cout << "pop() : "<<names.pop()<<endl;
    
    return 0;
}

