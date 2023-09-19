#include<bits/stdc++.h>
using namespace std;
class shape
{
    private:
    int a,base,height,lenght;
    char t;
    public:
    shape()   
    {
        cout<<-1;
    }
    shape(int a)
    {
        lenght=a;
        t='S';
    }
    shape(int a,int b)
    {
        base=b;
        lenght=a;
        t='T';
    }
    shape(float a,float b)
    {
        base =b;
        lenght=a;
        t='R';
    }
    void shapetype()
    {
        if(t=='S')
        cout<<"SQUARE";
        else if(t=='T')
        cout<<"Triangle"<<endl;
        else 
        cout<<"Rectangle"<<endl;
    }
    void info()
    {
        if(t=='S')
        {
            cout<<" Lenght is="<<lenght<<endl;
        }
        else if(t=='T')
        {
            cout<<"base is : "<<base<<endl<<"Length is : "<<lenght<<endl;
        }
        else 
        {
            cout<<"base is : "<<base<<endl<<"Lenght is : "<<lenght<<endl;
        }
    }
    int area()
    {
        if(t=='S')
        return lenght*lenght;
        else if(t=='T')
        return base*lenght;
        else 
        return base*lenght;
    }
    //~shape();
};
int main()
{
    int a,b;
    float c,d;
    cin>>a>>b>>c>>d;
    shape s(a,b);
    s.shapetype();
    s.info();
    cout<<s.area()<<endl;
    shape p(c,d);
    p.shapetype();
    p.info();
    cout<<p.area()<<endl;
    


}
