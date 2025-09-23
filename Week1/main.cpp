#include <iostream>
#include "list.h"
#include "linkedlist.h"

using namespace std;

int main()
{
    int index, n;
    cin >> index >> n;

    List list;
    list.inputArray();
    cout << list.get(index) << endl;
    list.addFirst(n);
    list.addLast(n);
    list.addMid(index, n);

    list.deleteFirst();
    list.deleteLast();
    list.deleteMid(index);

    list.tranverseForward();
    list.tranverseBackward();

    LinkedList llist;
    int k;
    cin >> k;
    llist.inputLList(k);
    llist.addFirst(n);
    llist.addLast(n);
    llist.addMid(index, n);

    llist.deleteFirst();
    llist.deleteLast();
    llist.deleteMid(index);

    llist.tranverseForward();
    llist.tranverseBackward(llist.getHead());

    return 0;
}

