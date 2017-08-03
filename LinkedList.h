#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>
using namespace std;
/** Author - Mayank Shekhar (github.com/mayankshekhar03) */

/**struct node holds data (type-string) and reference to the address of
the next node*/
struct node{
    string data;
    node *next;
};

class LinkedList
{
    public:
        LinkedList();
        /**constructor creates the head node and initializes listLength variable to 0 */
        bool insertNode(node* newNode, int position);
        /**the method insertNode takes two arguments newNode and inserts it to the
           position (1 to length of list) given in second argument returns true if
           successful */
        bool removeNode (int position);
        /**takes position of the node to be deleted as argument and returns true if
           deleted */
        void printList ();
        /**prints data of each node of the list */
        ~LinkedList();
    private:
        node * head;
        int listLength;
};

#endif // LINKEDLIST_H
