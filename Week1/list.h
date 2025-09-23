#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

class List {
private:
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size;
public:
    List();
    void inputArray();
    int get(int index);

    void addFirst(int n);
    void addLast(int n);
    void addMid(int index, int n);

    void deleteFirst();
    void deleteLast();
    void deleteMid(int index);

    void tranverseForward();
    void tranverseBackward();
};

#endif // LIST_H_INCLUDED


