// PROGRAM TO REVERSE A SENTENCE USING STACK
#include <iostream>
#include <stack>
using namespace std;
void reverse1(string s)
{
    stack<string> st;
    string word = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            st.push(word);
            word = "";
        }
        else
        {
            word += s[i];
        }
    }
    st.push(word);
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}
int main()
{
    string se;
    cout << "enter the string" << endl;
    getline(cin, se);
    reverse1(se);
}