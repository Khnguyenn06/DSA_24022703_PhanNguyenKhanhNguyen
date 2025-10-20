#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class PriorityQueue {
private:
    vector<int> pq;

public:
    // Chèn một giá trị vào hàng đợi ưu tiên
    void insert(int value) {
        pq.push_back(value);
    }

    // Xóa giá trị lớn nhất và trả về giá trị đó
    int delMax() {
        if (isEmpty()) {
            return -1;
        }

        auto max = max_element(pq.begin(), pq.end());
        int maxValue = *max;
        pq.erase(max);
        return maxValue;
    }

    // Kiểm tra hàng đợi có rỗng không
    bool isEmpty() {
        return pq.empty();
    }

    // Trả về giá trị lớn nhất
    int max() {
        if (isEmpty()) {
            return -1;
        }
        return *max_element(pq.begin(), pq.end());
    }

    // Trả về số phần tử trong hàng đợi
    int size() {
        return pq.size();
    }
};

