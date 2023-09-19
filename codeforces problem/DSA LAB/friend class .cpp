#include<bits/stdc++.h>
using namespace std;
class test1 
{
    int a,b;
    public:
    friend class test2;
    void get()
    {
        cin>>a>>b;
    }
};
class test2
{
    public:
    void put(test1 t)
    {
        cout<<t.a<<endl;
        cout<<t.b;
    }
};
int main()
{
    test1 t1;
    test2 t2;
    t1.get();
    t2.put(t1);
}
