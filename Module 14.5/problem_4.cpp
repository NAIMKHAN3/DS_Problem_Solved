#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    // cout << st.size();
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}