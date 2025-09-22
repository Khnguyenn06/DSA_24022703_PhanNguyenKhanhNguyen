/*#include "list.h"
#include <iostream>

using namespace std;

List::List(){
    size = 0;
    }

void List::inputArray() {
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int List::get(int index) {
    if (index < 0 || index >= size) return 0;
    return arr[index];
}

void List::addFirst(int n) {
    if(size == MAX_SIZE) return;
    for(int i = size; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = n;
    size++;
}

void List::addLast(int n) {
    if(size == MAX_SIZE) return;
    arr[size++] = n;
}

void List::addMid(int index, int n) {
    if(size == MAX_SIZE || index < 0 || index > size) return;
    for(int i = size; i > index; i--) {
        arr[i] = arr[i-1];
    }
    arr[index] = n;
    size++;
}

void List::deleteFirst() {
    if(size == 0) return;
    for(int i = 0; i < size-1; i++) {
        arr[i] = arr[i+1];
    }
    size--;
}

void List::deleteLast() {
    if(size == 0) return;
    size--;
}

void List::deleteMid(int index) {
    if(index < 0 || index >= size) return;
    for(int i = index; i < size-1; i++) {
        arr[i] = arr[i+1];
    }
    size--;
}

void List::tranverseForward() {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void List::tranverseBackward() {
    for(int i = size-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}*/
