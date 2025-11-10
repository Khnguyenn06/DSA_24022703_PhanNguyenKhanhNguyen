#include <iostream>
#include <list>
#include <vector>
using namespace std;

class HashTableChaining {
private:
    int size;
    vector<list<int>> table;

    int hashFunction(int key) {
        return key % size;
    }

public:
    HashTableChaining(int s) : size(s) {
        table.resize(size);
    }

    // Thêm key vào bảng băm
    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    // Xóa key
    void remove(int key) {
        int index = hashFunction(key);
        table[index].remove(key);
    }

    // Tìm key
    bool search(int key) {
        int index = hashFunction(key);
        for (int x : table[index])
            if (x == key) return true;
        return false;
    }

    // In ra toàn bộ bảng băm
    void display() {
        for (int i = 0; i < size; i++) {
            cout << i << ": ";
            for (int x : table[i])
                cout << x << " -> ";
            cout << "NULL\n";
        }
    }
};
