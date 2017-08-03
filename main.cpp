#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
    node * name = new node; //1
    name->data = "Mayank Shekhar";
    node * sec = new node; //2
    sec->data = "CS32";
    node * roll = new node;  //3
    roll->data = "123456789";
    node * college = new node;  //4
    college->data = "BBDNITM";

    LinkedList myInfo;
    myInfo.insertNode(name, 1);
    myInfo.insertNode(sec, 2);
    myInfo.insertNode(college, 3);
    myInfo.printList();
    cout<<"\n===================================================="<<endl;
    myInfo.insertNode(roll, 3);
    myInfo.printList();
    cout<<"\n===================================================="<<endl;
    myInfo.removeNode(2);
    myInfo.printList();
}
