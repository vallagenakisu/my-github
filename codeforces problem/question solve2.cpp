#include<bits/stdc++.h> 
using namespace std;
class matrix1
{
    int a[3][3];
    public:
    matrix1()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            cin>>a[i][j];
        }
    }
    void display()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
    friend matrix1 operator + (matrix1 obj1,matrix1 obj2)
    {
        matrix1 c;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                c.a[i][j]=obj1.a[i][j]+obj2.a[i][j];
            }
           
        }
        return c;
    }
    friend ostream& operator <<(ostream&out, matrix1 obj )
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            out<<obj.a[i][j]<<" ";
            cout<<endl;
        }
        return out;
    }

};
template<class t>
t add(t a ,t b)
{
    return a+b;
}
int main()
{
    matrix1 a,b;
    //a.display();
    // matrix1 c=add(a,b);
    // c.display();
    cout<<add(a,b);


}