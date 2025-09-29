#include <iostream>
using namespace std;

class queueList {
private:
    List list;
    int count;
public:
    queueList() {
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    void enqueue(int item) {
        list.addLast(item);
        count++;
    }

    int dequeue() {
        if(isEmpty()) return -1;
        int value = list.get(0);
        list.deleteFirst();
        count--;
        return value;
    }

    int front() {
        if(isEmpty()) return -1;
        return list.get(0);
    }

    int size() {
        return count;
    }
};

class queueLList {
private:
    LinkedList llist;
    int count;
public:
    queueLList() {
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    void enqueue(int item) {
        llist.addLast(item);
        count++;
    }

    int dequeue() {
        if(isEmpty()) return -1;
        int value = llist.get(0);
        llist.deleteFirst();
        count--;
        return value;
    }

    int front() {
        if(isEmpty()) return -1;
        return llist.get(0);
    }

    int size() {
        return count;
    }
};

int main() {
    queueList qL;
    qL.enqueue(10);
    qL.enqueue(20);
    qL.enqueue(30);
    cout << qL.dequeue() << endl;
    cout << qL.front() << endl;
    cout << qL.size() << endl;

    queueLList qLL;
    qLL.enqueue(15);
    qLL.enqueue(20);
    qLL.enqueue(25);
    cout << qLL.dequeue() << endl;
    cout << qLL.front() << endl;
    cout << qLL.size() << endl;
    return 0;
}
