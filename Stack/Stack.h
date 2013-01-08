/* 
 * File:   Stack.h
 * Author: Rajini Kanth
 *
 * Created on 8. tammikuuta 2013, 23:07
 */

#ifndef STACK_H
#define	STACK_H

#include <string>

using namespace std;

class Stack {
private:
    string datastore[100];
    int top;
public:
    Stack();
    void push(string value);
    string pop();
    string peek();
};




#endif	/* STACK_H */
