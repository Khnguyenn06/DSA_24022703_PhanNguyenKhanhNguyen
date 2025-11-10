#include <iostream>
#include <vector>
using namespace std;

class HashTableLinear {
private:
    int size;
    vector<int> table;
    const int EMPTY = -1;
    const int DELETED = -2;

    int hashFunction(int key) {
        return key % size;
    }

public:
    HashTableLinear(int s) : size(s) {
        table.resize(size, EMPTY);
    }

    // Thêm key vào bảng băm
    void insert(int key) {
        int index = hashFunction(key);
        int start = index;
        do {
            if (table[index] == EMPTY || table[index] == DELETED) {
                table[index] = key;
                return;
            }
            index = (index + 1) % size;
        } while (index != start);
        cout << "Bảng băm đầy, không thể chèn!" << key << endl;
    }

    // Tìm key
    bool search(int key) {
        int index = hashFunction(key);
        int start = index;
        do {
            if (table[index] == EMPTY) return false;
            if (table[index] == key) return true;
            index = (index + 1) % size;
        } while (index != start);
        return false;
    }

    // Xóa key
    void remove(int key) {
        int index = hashFunction(key);
        int start = index;
        do {
            if (table[index] == EMPTY) return;
            if (table[index] == key) {
                table[index] = DELETED;
                return;
            }
            index = (index + 1) % size;
        } while (index != start);
    }

    // In bảng băm
    void display() {
        cout << "Index\tValue\n";
        for (int i = 0; i < size; i++) {
            cout << i << "\t";
            if (table[i] == EMPTY) cout << "EMPTY";
            else if (table[i] == DELETED) cout << "DELETED";
            else cout << table[i];
            cout << "\n";
        }
    }
};
