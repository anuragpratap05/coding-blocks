#include<iostream>
using namespace std;
int getbit(int n, int i)
{
    return(n&(1<<i)==0)!=0?1:0;

}
int main()
{
    int n,i;
    cin>>n>>i;
    cout<<getbit(n,i);
}
