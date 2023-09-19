#include<bits/stdc++.h>
using namespace std;
class complex1
{
    int real,img;
    public:
    complex1(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    complex1 operator +(complex1 const &obj)
    {
        complex1 res(real+obj.real,img+obj.img);
        return res;
    }
    void print()
    {
        cout<<real<<"+i"<<img;
    }

};
int main()
{
    complex1 c1(5,8),c2(6,9);
    complex1 c3;
    c3=c1+c2;
    c3.print();
}