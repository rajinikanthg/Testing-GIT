/* 
 * File:   Queue.h
 * Author: Rajini Kanth
 *
 * Created on 9. tammikuuta 2013, 10:30
 */

#ifndef QUEUE_H
#define	QUEUE_H

#include <string>
#include <iostream>
using namespace std;

class Queue {
private:
    string datastore[100];
    int back;
    const static int front = 0;
    
   // private member functions 
    void shift();
    
public:
    Queue();    
    void in(string value);
    string out();
    void show();
};


#endif	/* QUEUE_H */

