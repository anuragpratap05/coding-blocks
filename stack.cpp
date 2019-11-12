#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<string>s;
    s.push("apple");
    s.push("mango");
    s.push("guava");
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
