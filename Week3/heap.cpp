#include <iostream>
#include <vector>
using namespace std;

class Heap {
private:
    vector<int> heap;

    void swap(int i, int j) {
        int temp = heap[i];
        heap[i] = heap[j];
        heap[j] = temp;
    }

    void swim(int k) {
        while (k > 1 && heap[k / 2] < heap[k]) {
            swap(k, k / 2);
            k = k / 2;
        }
    }

    void sink(int k) {
        int n = heap.size() - 1;
        while (2 * k <= n) {
            int j = 2 * k;
            if (j < n && heap[j] < heap[j + 1]) j++;
            if (heap[k] >= heap[j]) break;
            swap(k, j);
            k = j;
        }
    }

public:
    Heap() {
        heap.push_back(-1);
    }

    // Thêm một phần tử vào heap
    void insert(int value) {
        heap.push_back(value);
        swim(heap.size() - 1);
    }

    // Xóa phần tử lớn nhất
    int delMax() {
        if (isEmpty()) {
            return -1;
        }
        int maxValue = heap[1];
        swap(1, heap.size() - 1);
        heap.pop_back();
        sink(1);
        return maxValue;
    }

    // Trả về phần tử lớn nhất
    int max() {
        if (isEmpty()) {
            return -1;
        }
        return heap[1];
    }

    // Kiểm tra rỗng
    bool isEmpty() {
        return heap.size() <= 1; 5
    }

    // Trả về số phần tử thực tế
    int size() {
        return heap.size() - 1;
    }
};

