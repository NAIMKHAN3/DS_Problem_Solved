#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    
    if (q.size() != st.size())
    {
        cout << "NO";
        return 0;
    }
    while (!q.empty())
    {
        if (q.front() != st.top())
        {
            cout << "NO";
            return 0;
        }
        q.pop();
        st.pop();
    }
    cout << "YES";

    return 0;
}