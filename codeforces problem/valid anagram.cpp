#include<bits/stdc++.h>
using namespace std;
class Complex
{
    int real;
    int img;
    public:
    Complex()
    {
        real=0;
        img=0;
    }
    Complex(int a,int b)
    {
        real=a;
        img=b;
    }
Complex operator + ( Complex const &a )
{
    Complex sum;
    sum.real=real+a.real;
    sum.img=img+a.img;
    return sum;

}
    void getdata()
    {
        cout<<real<<" +i"<<img<<endl;
    }
    void setdata(int a,int b)
    {
        real =a;
        img= b;
    }
};

template<class t>
t avg(t a[],int size)
{
    t s=0;
    for(int i=0;i<size;i++)
    s=s+a[i];
    return s;
}
int main()
{
    int a[5]={1,2,3,4,5};
    cout<<avg(a,5)<<endl;
    Complex b[5];
    for(int i=0;i<5;i++)
    {
        int r,f;
        cin>>r>>f;
        b[i].setdata(r,f);
    }
    // for(int i=0;i<5;i++)
    // {
    //     b[i].getdata();
    // }
    avg(b,5);

}