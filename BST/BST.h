/* 
 * File:   BST.h
 * Author: Rajini Kanth
 *
 * Created on 9. tammikuuta 2013, 22:53
 */

#ifndef BST_H
#define	BST_H
#include "Node.h"


class BST{
private:
    Node *root;
    void Isert(string data, Node *aNode);
    Node *Search(string data, Node *aNode);
    void preOrder(Node *aNode);
    void inOrder(Node *aNode);
    void postOrder(Node *aNode);
public:
    BST();
    void Isert(string data);
    Node *Search(string data);
    void preOrder();
    void inOrder();
    void postOrder();
};


#endif	/* BST_H */

