/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 2. helmikuuta 2013, 7:04
 */

#include <iostream>

using namespace std;

int no_of_bits( int n )
{
    if(n == -1){
        cout << "Bigger number, meaning its bigger than integer size."<<endl;
        return 0;
    }
         int count = 0;
        while( n )
            {
          if( n & 1 ) ++count;
           n >>= 1;
           }
      return count;
}

void test(int n) {
    cout << "Count: " <<  no_of_bits(n) << "   Number: "<< n<< endl;
}
int main(int argc, const char** argv) {
    test( 0xFFFFFFF);
}

