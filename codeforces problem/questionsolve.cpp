#include<bits/stdc++.h>
using namespace std;
class complexx
{
    float real,img;
    public:
    complexx(float r=0,float i=0)
    {
        real=r;img=i;
    }
    complexx operator +(complexx a)
    {
        complexx res;
        res.real=real+a.real;
        res.img=img+a.img;
        return res;
    }
    complexx operator / (int a)
    {
        complexx res;
        res.real=real/a;
        res.img=img/a;
        return res;

    }
    void print()
    {
        cout<<real<<" +i"<<img;
    }
    friend ostream& operator << (ostream &out, complexx t)
    {
        out<<t.real<<" +i"<<t.img;
        return out;
    }

};
template <class t>
t avg(t a[],float n)
{
    t avg=0;
    for(int i=0;i<n;i++)
    avg=avg+a[i];
    return avg/n;
}
int main()
{
    complexx b[5];
    for(int i=0;i<5;i++)
    {
        int c,d;cin>>c>>d;
        complexx f(c,d);
        b[i]=f;
    }
    string a;
    a.push_back('a');
    a.push_back('a');
    a.push_back('a');
    a.push_back('b');
    cout<<a<<endl;

    cout<<avg(b,5);
}