#include <iostream>
using namespace std;

const int N = 1e5;

struct Stack {
    int st[N];
    int tt;

    void init() {
        tt = -1;
    }

    void add(int x) {
        st[++tt] = x;
    }

    void remove() {
        if (tt >= 0) --tt;
    }

    int last() {
        return st[tt];
    }

    bool empty() {
        return tt == -1;
    }
};

struct Queue {
    int q[N];
    int hh, tt;

    void init() {
        hh = 0;
        tt = -1;
    }

    void add(int x) {
        q[++tt] = x;
    }

    void remove() {
        if (hh <= tt) ++hh;
    }

    int front() {
        return q[hh];
    }

    int back() {
        return q[tt];
    }

    bool empty() {
        return hh > tt;
    }
};

int main() {
    Stack s;
    s.init();
    s.add(1);
    s.add(55);
    cout << s.empty() << endl;
    s.remove();
    cout << s.last() << endl;

    Queue q;
    q.init();
    q.add(10);
    q.add(20);
    cout << q.empty() << endl;
    cout << q.front() << " " << q.back() << endl;
    q.remove();
    cout << q.front() << endl;

    return 0;
}