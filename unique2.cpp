#include<iostream>
using namespace std;
void findunique2(int *a,int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res^a[i];
    }
    int temp=res;
   int i=0;
    while(temp>0)
    {
      if(temp&1)
      {
      break;
      }
      i++;
      temp=temp>>1;
    }
    int mask=(1<<i);
    int firstno=0;
    for(i=0;i<n;i++)
    {
        if((mask & a[i])!=0)
        {
            firstno=firstno^a[i];
        }
    }
    int secondno=res^firstno;
    cout<<firstno<<endl;
    cout<<secondno<<endl;
    

}
int main()
{
    int n,i;
    int a[]={1,3,5,6,3,2,1,2};
    n=sizeof(a)/sizeof(int);
    findunique2(a,n);
}
