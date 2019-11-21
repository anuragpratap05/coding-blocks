#include<iostream>
#include<cstring>
using namespace std;
void filterchars(int *a,int no){
int i=0,sum=0,c;
while(no>0)
{

    if((no&1)==1)
    {


        sum=sum+a[i];
        //if(sum==3)
            //cout<<"yes";
        //break;

        //cout<<a[i];

    }
    //else
        //cout<<"";
        //cout<<sum<<endl;
    i++;
    no=no>>1;
}

//int c,sum;
if(sum==3)
{


    cout<<"yes";

}
    //cout<<sum<<endl;
//cout<<endl;
}
void generatesubsets(int *a,int n)
{
    int i,sum=0;
    //int n=strlen(a);
    //int n=sizeof(a)/sizeof(int);
    int range=(1<<n)-1;
    for(i=0;i<=range;i++)
    {
          if(sum==3)
          {


            cout<<"yes";
        break;
          }


        filterchars(a,i);
    }
}
int main()
{
    int n,i;
    int a[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //int n=sizeof(a)/sizeof(int);

    generatesubsets(a,n);
    return 0;
}
