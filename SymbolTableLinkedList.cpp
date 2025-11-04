#include <iostream>
#include <string>
using namespace std;

struct Node {
    string key;
    string value;
    Node* next;

    Node(string k, string v) : key(k), value(v), next(nullptr) {}
};

// Symbol Table dùng Linked List
class SymbolTableLList {
private:
    Node* head;

public:
    SymbolTableList() : head(nullptr) {}

    // Thêm hoặc cập nhật một key
    void insert(string key, string value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->key == key) {
                temp->value = value;
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(key, value);
        newNode->next = head;
        head = newNode;
    }

    // Tìm kiếm giá trị theo key
    string lookup(string key) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->key == key)
                return temp->value;
            temp = temp->next;
        }
        return "Not Found";
    }

    // Xóa một key
    void remove(string key) {
        Node* temp = head;
        Node* prev = nullptr;

        while (temp != nullptr) {
            if (temp->key == key) {
                if (prev == nullptr)
                    head = temp->next;
                else
                    prev->next = temp->next;
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }

    // In toàn bộ bảng
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->key << " : " << temp->value << endl;
            temp = temp->next;
        }
    }

    // Hủy bảng
    ~SymbolTableLList() {
        Node* curr = head;
        while (curr != nullptr) {
            Node* temp = curr;
            curr = curr->next;
            delete temp;
        }
    }
};

