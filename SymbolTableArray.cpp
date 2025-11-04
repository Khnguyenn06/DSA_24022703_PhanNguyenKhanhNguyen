#include <iostream>
#include <string>
using namespace std;

// Cấu trúc Entry (key, value)
struct Entry {
    string key;
    string value;
};

// Lớp Symbol Table dùng mảng
class SymbolTableArray {
private:
    Entry table[100];
    int count;

public:
    SymbolTableArray() {
        count = 0;
    }

    // Thêm hoặc cập nhật một cặp key-value
    void insert(string key, string value) {
        for (int i = 0; i < count; i++) {
            if (table[i].key == key) {
                table[i].value = value;
                return;
            }
        }

        // 2️⃣ Nếu chưa có → thêm mới vào cuối mảng
        if (count < 100) {
            table[count].key = key;
            table[count].value = value;
            count++;
        } else {
            cout << "Symbol Table is full!" << endl;
        }
    }

    // Tìm giá trị theo key
    string lookup(string key) {
        for (int i = 0; i < count; i++) {
            if (table[i].key == key)
                return table[i].value;
        }
        return "Not Found";
    }

    // Xóa một key
    void remove(string key) {
        for (int i = 0; i < count; i++) {
            if (table[i].key == key) {
                // Dịch các phần tử phía sau lên một vị trí
                for (int j = i; j < count - 1; j++) {
                    table[j] = table[j + 1];
                }
                count--;
                return;
            }
        }
        cout << "Key not found: " << key << endl;
    }

    // In toàn bộ bảng
    void display() {
        for (int i = 0; i < count; i++) {
            cout << table[i].key << " : " << table[i].value << endl;
        }
    }

    // Trả về số phần tử hiện có
    int size() {
        return count;
    }
};
