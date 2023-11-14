// REVERSE A STACK
#include <iostream>
#include <stack>
using namespace std;
void insert(stack<int> &st, int topel)
{
    if (st.empty())
    {
        st.push(topel);
        return;
    }
    int last = st.top();
    st.pop();
    insert(st, topel);
    st.push(last);
}
void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int topel = st.top();
    st.pop();
    reverse(st);
    insert(st, topel);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverse(st);
    for (int i = 0; i < 4; i++)
    {
        cout << st.top() << endl;
        st.pop();
    }
}