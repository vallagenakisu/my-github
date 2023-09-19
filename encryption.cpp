#include<bits/stdc++.h>
using namespace std;
void mid_marks(int a[],int i)
{
    cout<<"Class "<<i<<endl;
    for(int i=0;i<10;i++)
    {
        if(a[i]>=80)
        cout<<"A+"<<endl;
        else if(a[i]>=75)
        cout<<"A"<<endl;
        else if(a[i]>=70)
        cout<<"A-"<<endl;
        else if(a[i]>=65)
        cout<<"B+"<<endl;
        else if(a[i]>=60)
        cout<<"B"<<endl;
        else if(a[i]>=55)
        cout<<"B-" <<endl;
        else if(a[i]>=50)
        cout<<"C+"<<endl;
        else if(a[i]>=45)
        cout<<"C"<<endl;
        else if(a[i]>=40)
        cout<<"D"<<endl;
        else
        cout<<"F"<<endl;
    }
}
int main()
{
    int a[10],b[10],c[10];
    for(int i=0;i<10;i++)
    cin>>a[i];
    for(int i=0;i<10;i++)
    cin>>b[i];
    for(int i=0;i<10;i++)
    cin>>c[i];
    mid_marks(a,1);
    mid_marks(b,2);
    mid_marks(c,3);

}