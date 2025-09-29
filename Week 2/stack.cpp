#include <iostream>
using namespace std;

class stackList {
private:
    List list;
    int count;
public:
    stackList() {
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    void push(int item) {
        list.addLast(item);
        count++;
    }

    int pop() {
        if(isEmpty()) return -1;
        int value = list.get(count - 1);
        list.deleteLast();
        count--;
        return value;
    }

    int top() {
         if(isEmpty()) return -1;
         return list.get(count - 1);
    }

    int size(){
        return count;
    }
};

class stackLList {
private:
    LinkedList llist;
    int count;
public:
    stackLList() {
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    void push(int item) {
        llist.addFirst(item);
        count++;
    }

    int pop() {
        if(isEmpty()) return -1;
        int value = llist.get(0);
        llist.deleteFirst();
        count--;
        return value;
    }

    int top() {
            if(isEmpty()) return -1;
            return llist.get(0);
        }

    int size() {
        return count;
    }
};

int main() {
    stackList sL;
    sL.push(10);
    sL.push(20);
    sL.push(30);
    cout << sL.pop() << endl;
    cout << sL.top() << endl;
    cout << sL.size() << endl;

    stackLList sLL;
    sLL.push(15);
    sLL.push(20);
    sLL.push(25);
    cout << sLL.pop() << endl;
    cout << sLL.top() << endl;
    cout << sLL.size() << endl;
    return 0;
}
