#include "linkedlist.h"
#include <iostream>

LinkedList::LinkedList() {
    head = nullptr;
}
Node *LinkedList::getHead() {
    return head;
}

void LinkedList::inputLList(int k) {
    for(int i = 1; i < k; i++) {
        int x;
        cin >> x;
        addLast(x);
    }
}

int LinkedList::get(int index) {
    Node *temp = head;
    if(temp == nullptr) return -1;
    int i = 0;
    while(temp != nullptr && i < index) {
        temp = temp->next;
        i++;
    }
    return temp->data;
}

void LinkedList::addFirst(int n) {
    Node *newNode = new Node(n);
    newNode->next = head;
    head = newNode;
}

void LinkedList::addLast(int n) {
    Node *newNode = new Node(n);
    if(head == nullptr) {
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void LinkedList::addMid(int index, int n) {
    if(index == 1) {
        addFirst(n);
        return;
    }
    Node *temp = head;
    if(temp == nullptr) return;
    for(int i = 1; i < index-1; i++) {
        temp = temp->next;
    }
    Node *newNode = new Node(n);
    newNode->next = temp->next;
    temp->next = newNode;
}

void LinkedList::deleteFirst() {
    if(head == nullptr) return;
    Node *temp = head;
    head = head->next;
    delete temp;
}

void LinkedList::deleteLast() {
    if(head == nullptr) return;
    if(head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    Node *temp = head;
    while(temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

void LinkedList::deleteMid(int index) {
    if(index == 1) {
        deleteFirst();
        return;
    }
    Node *temp = head;
    if(temp == nullptr || temp->next == nullptr) return;
    for(int i = 1; i < index-1; i++) {
        temp = temp->next;
    }
    Node *delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
}

void LinkedList::tranverseForward() {
    Node *temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void LinkedList::tranverseBackward(Node *node) {
    if(!node) return;
    tranverseBackward(node->next);
    cout << node->data << " ";
}

