/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 2. helmikuuta 2013, 20:28
 */

#include <iostream>

using namespace std;

/*
 * 
 */

struct WhiteHouse {
    int *p;
    WhiteHouse(int n){
        p = new int;
        *p = n;
        
    }
    ~WhiteHouse(){
        delete p;
    }
};

WhiteHouse ww(1912);

void f() {
    WhiteHouse fdr(1932);
    fdr = ww;
}
int main(int argc, char** argv) {
    f();
    WhiteHouse gwd(2000);
    cout << *ww.p;
    return 0;
}

