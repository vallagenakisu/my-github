#include<bits/stdc++.h>
using namespace std;
class student
{
    private:
    int id,addressno,cgpa;
    public:
    string name;
    int roll;
    void setdata(int a1,int b1,int c1);
    void getdata();

};
void student :: setdata(int a1,int b1,int c1)
{
    id=a1;
    addressno=b1;
    cgpa=c1;
}
void student :: getdata()
{
    cout<<id<<endl;
    cout<<addressno<<endl;
    cout<<cgpa<<endl;
}

int main()
{
    student ekka;
    ekka.setdata(2007121,6969,3);
    ekka.getdata();
}