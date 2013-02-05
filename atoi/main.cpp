/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 22. tammikuuta 2013, 6:06
 */

#include <iostream>
#include <ctype.h>

using namespace std;

/*
 * 
 */


int atoi(const char *c){
    int value = 0;
    while(isdigit(*c)){
       value = value * 10;
       value += (int)(*c - '0');
       c++;
    }
    
    return value;
    
}
int main(int argc, char** argv) {

    cout << atoi("345")<<endl;
    return 0;
}

