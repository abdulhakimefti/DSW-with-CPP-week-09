#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;
int main()
{
    vector<int> V(3, -1);
    for (int i = 0; i < V.size(); i++)
    {
        cout << V[i] << " ";
    }
    cout << endl;
    V.push_back(4);
    vector<int>::iterator it;
    for (it = V.begin(); it != V.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (auto element : V)
    {
        cout << element << " ";
    }
    cout << endl;

    priority_queue<int, vector<int>> pq;
    pq.push(3);
    pq.push(5);
    pq.push(6);
    pq.push(1);
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    priority_queue<P, vector<P>,greater<P>> pr;
    pr.push(make_pair(3, 5));
    pr.push(make_pair(9, 4));
    pr.push(make_pair(7, 6));
    pr.push(make_pair(5, 1));
    while (!pr.empty())
    {
        cout << pr.top().first << "||"<<pr.top().second<<endl;
        pr.pop();
    }
    cout << endl;
    return 0;
}