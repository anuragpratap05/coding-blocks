#include<iostream>
#include<cstring>
using namespace std;
void filterchar(char *a,int no)
{
    int i=0;
    while(no>0)
    {
        (no&1)?cout<<a[i]:cout<<"";
    
    i++;
    no=no>>1;
    }
    cout<<endl;
}

void generatesubsets(char *a)
{
    int n=strlen(a);
    int range=(1<<n)-1;
    for(int i=0;i<=range;i++)
    {
        filterchar(a,i);
    }

}
int main()
{
  
    char a[100];
    cin>>a;
    generatesubsets(a);
    return 0;
}
