#include<bits/stdc++.h>
using namespace std;
class shape
{
public:
    int base;
    int height;
    float length,width;
    char ch;

    shape(int a,int b)
    {
        base=a;
        height =b;
        ch='t';
    }
    shape(float a,float b)
    {
        length=a;
        width=b;
        ch='r';
    }
    void info(){
    if(ch=='t'){
        cout<<"base:"<<base<<endl;
        cout<<"height: "<<height<<endl;
    }
    else {
        cout<<"length:"<<length<<endl;
        cout<<"width:"<<width<<endl;
    }
    }
    float area()
    {
        if(ch=='t')
        {
            shape_type(ch);
            return .5*base*height;
        }
        else
        {
           shape_type(ch);
                       return length*width;
        }
    }
void shape_type(char ch){
if(ch=='t') cout<<"triangle"<<endl;
else  cout<<"rectungale"<<endl ;
}
~shape(){
}
};

int main()
{

    int a,b;
    float c,d;
    cin>>a>>b>>c>>d;
    shape s(a,b);
    s.info();
    shape s1(c,d);
    s1.info();
    cout<<s.area()<<endl;
    cout<<s1.area()<<endl;

}