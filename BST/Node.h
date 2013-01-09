/* 
 * File:   Node.h
 * Author: Rajini Kanth
 *
 * Created on 9. tammikuuta 2013, 22:51
 */

#ifndef NODE_H
#define	NODE_H

#include <iostream>
using namespace std;

class Node {
public:
    string data;
    Node *left;
    Node *right;
    Node(string d){
        data = d;
        left = NULL;
        right = NULL;
    }
};


#endif	/* NODE_H */

