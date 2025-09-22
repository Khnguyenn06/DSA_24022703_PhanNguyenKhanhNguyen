/*#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int n) {
        data = n;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node *head;
public:
    LinkedList();
    Node *getHead();

    void inputLList(int k);
    int get(int index);

    void addFirst(int n);
    void addLast(int n);
    void addMid(int index, int n);

    void deleteFirst();
    void deleteLast();
    void deleteMid(int index);

    void tranverseForward();
    void tranverseBackward(Node *node);
};

#endif // LINKEDLIST_H_INCLUDED*/
