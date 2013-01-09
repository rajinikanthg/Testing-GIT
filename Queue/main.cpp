/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 9. tammikuuta 2013, 10:29
 */

#include <iostream>
#include "Queue.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Queue letters;
    letters.in("A");
    letters.in("B");
    letters.in("C");
    letters.in("D");
    letters.in("E");
    letters.in("F");
    
    letters.show();
    
    letters.out();
    
    letters.show();
    
    letters.in("G");
    letters.show();
    return 0;
}

