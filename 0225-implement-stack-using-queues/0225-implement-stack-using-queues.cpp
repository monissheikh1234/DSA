#include <iostream>
#include <queue>
using namespace std;

class MyStack {
private:
    queue<int> q;

public:
    MyStack() {
    }

    void push(int x) {
        q.push(x);
        int size = q.size();
        // Move all elements except the newly added one to the back
        for (int i = 1; i < size; ++i) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int topElement = q.front();
        q.pop();
        return topElement;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};
