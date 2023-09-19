#include<bits/stdc++.h>
using namespace std;
class Complex
{
    int real;
    int img;
    public:
    Complex()
    {
        real=0;img=0;
    }
    Complex(int a,int b)
    {
        real=a;img=b;
    }
    friend istream& operator >> (istream& in , Complex &obj)
    {
        in>>obj.real>>obj.img;
        return in;
    }
    friend ostream& operator <<(ostream &out, Complex &obj)
    {
        out<<obj.real<<" +i"<<obj.img;
        return out;
    }
    Complex operator +(Complex &obj)
    {
        Complex res;
        res.real=real+obj.real;
        res.img=img+obj.img;
        return res;
    }
};
template<class T>
class Matrix
{
    T data[2][2];
    public:

    friend istream& operator >> (istream & in, Matrix& obj )
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            in>>obj.data[i][j];
        }
        return in;
    }
       friend ostream& operator << (ostream & out, Matrix& obj )
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            out<<obj.data[i][j];
            cout<<endl;
        }
        return out;
    }
    Matrix operator +( Matrix & obj)
    {
        Matrix a;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                a.data[i][j]=data[i][j]+obj.data[i][j];
            }
        }
        return a;
    }
};
int main()
{
    Matrix<Complex> a,b,c;
    cin>>a;
    cin>>b;
    //cout<<a;
    c=a+b;
    cout<<c;

}