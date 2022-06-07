#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> getNextGreater(vector<int> v)
{
    vector<int> ngeIndex(v.size());
    stack<int> st;
    for (int i = 0; i < v.size(); i++)
    {
        while (!st.empty() && v[i] > v[st.top()])
        {
            ngeIndex[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        ngeIndex[st.top()] = -1;
        st.pop();
    }
    return ngeIndex;
}

int main()
{
    vector<int> v{4, 5, 2, 25, 7, 8};
    vector<int> ngeIndex = getNextGreater(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " => " << (ngeIndex[i] == -1 ? -1 : v[ngeIndex[i]]) << endl;
    }
    return 0;
}