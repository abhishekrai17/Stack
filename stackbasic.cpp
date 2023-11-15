//BASIC PROGRAMS OF STACK
#include <iostream>
using namespace std;

#define n 100
// creating a stack
class stack
{
  int *arr;
    int top;   

public:
   
    stack()
    {
        arr = new int[n];
        top = -1;
    }


// creating push method
void push(int n1)
{
    if (top == n - 1)
    {
        cout << "Overflow" << endl;
    }
    top++;
    arr[top] = n1;
}
// creating pop method
void pop()
{
    if (top == -1)
    {
        cout << "underflow" << endl;
    }
    top--;
}

// creating top method
int peep()
{
    if (top == -1)
    {
        cout << "underflow" << endl;
    }
    return arr[top];
}};
// creating the  main method
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    int a = st.peep();
    cout << "the top element is " << a << endl;
    st.pop();
    int b = st.peep();
    cout << "the top element after pop method performed  is " << b << endl;
}
