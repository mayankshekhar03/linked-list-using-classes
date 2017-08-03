#include "LinkedList.h"

LinkedList::LinkedList()
{
    head->data = "NO DATA";
    head->next = NULL;
    listLength = 0;
}

bool LinkedList::insertNode(node* newNode, int position){
    if (position <= 0 || position > listLength+1){
        cout<<"\nSpecified position doesn't exist."<<endl;
        return false;
    }
    if (head->next == NULL){
        head->next = newNode;
        newNode->next = NULL;
        listLength++;
        return true;
    }
    int count = 1;
    node* p = head;
    node* q = p->next;
    while(q){
        if (count == position){
            p->next = newNode;
            newNode->next = q;
            listLength++;
            return true;
        }
        p = q;
        q = p->next;
        count++;
    }
    if (count == position){
            p->next = newNode;
            newNode->next = q;
            listLength++;
            return true;
    }
    cout<<"\nNode wasn't added to the list."<<endl;
    return false;
}

bool LinkedList::removeNode(int position){
    if (position <= 0 || position > listLength+1){
        cout<<"\nInvalid position."<<endl;
        return false;
    }
    if (head->next == NULL){
        cout<<"\nNothing to remove."<<endl;
        return false;
    }
    int count = 1;
    node* p = head;
    node* q = head->next;
    while(q){
        if (count == position){
            p->next = q->next;
            delete q;
            listLength--;
            return true;
        }
        p = q;
        q = p->next;
        count++;
    }
    cout<<"\nNothing removed."<<endl;
    return false;
}

void LinkedList::printList(){
    int count = 0;
    node * p = head;
    node * q = p->next;
    while(q){
        p = q;
        cout << "\n-----------------------------\n";
        cout << "\t position: " << count+1 << endl;
        cout << "\t data: " << p -> data << endl;
        count++;
        q = p->next;
    }
}

LinkedList::~LinkedList(){
    node* p = head;
    node* q = p->next;
    while (q){
        p = q;
        q = p->next;
        if (q) delete p;
    }
}
