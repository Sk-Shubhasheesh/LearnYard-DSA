// By deafut the largest value will be the priority
#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> q;
    q.push(1);
    q.push(12);
    q.push(11);
    q.push(25);
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;

    // reverse order priority queue
    priority_queue<int, vector<int>, greater<int>> p_que;
    p_que.push(1);
    p_que.push(12);
    p_que   .push(11);
    p_que.push(25);
    while (!p_que.empty())
    {
        cout << p_que.top() << " ";
        p_que.pop();
    }
    cout << endl;
}