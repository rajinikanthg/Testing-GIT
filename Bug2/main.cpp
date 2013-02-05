/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 2. helmikuuta 2013, 9:08
 */

#include <iostream>

using namespace std;

/*
 * 
 */

bool f(int n){
    n = n + 1;
    if(n < 10)
        return true;
    else
        return false;
}
int main(int argc, char** argv) {

    int n = 0;
    int sum = 0;
    while(f(n)&&n)
        sum += n;
    cout << "Sum : "<<sum;
    return 0;
}

