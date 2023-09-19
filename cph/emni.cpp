// #include<bits/stdc++.h>
// using namespace std;
// class complex1
// {
//   int real;
//   int img;
//   public:
//   complex1()
//   {
//     real=0;img=0;
//   }
//   complex1(int a,int b)
//   {
//     real=a;
//     img=b;
//   }
// #include<bits/stdc++.h>
// using namespace std;
// class complex1
// {
//   int real;
//   int img;
//   public:
//   complex1()
//   {
//     real=0;img=0;
//   }
//   complex1(int a,int b)
//   {
//     real=a;
//     img=b;
//   }
//   friend ostream &operator <<(ostream &o, complex1 &a)
//   {
//     o<<a.real<<"+i"<<a.img;
//     return o;
//   }
//   friend istream & operator >>(istream &o, complex1 &a)
//   {
//     o>>a.real>>a.img;
//     return o;
//   }
//   friend complex1 operator +(complex1 a, complex1 b)
//   {
//     complex1 c(a.real+b.real,a.img+b.img);
//     return c;
//   }
//   friend complex1 operator -(complex1 a, complex1 b)
//   {
//     complex1 c;
//     c.real=a.real-b.real;
//     c.img=a.img-b.img;
//     return c;
//   }
//   friend void operator ++(complex1 &a,int )
//   {
//     a.real++;a.img++;
//   }
//   friend void operator --(complex1 &a,int )
//   {
//     a.real--;a.img--;
//   }
//   friend void operator == (complex1 &a,int x)
//   {
//     a.real=x;
//     a.img=x;
//   }
// };
// };
// class matrix 
// {
//   complex1 a[2][2];
//   public:
//   matrix()
//   {
//     for(int i=0;i<2;i++)
//     {
//       for(int j=0;j<2;j++)
//       {
//         a[i][j]==0;
//       }
//     }
//   }
//   friend istream &operator >>(istream &in, matrix &m)
//   {
//     {
//       for(int i=0;i<2;i++)
//       {
//         for(int j=0;j<2;j++)
//         {
//           cin>>m.a[i][j];
//         }
//       }
//     }
//     return in;
//   }
//   friend ostream &operator <<(ostream &in, matrix &m)
//   {
//     {
//       for(int i=0;i<2;i++)
//       {
//         for(int j=0;j<2;j++)
//         {
//           cout<<m.a[i][j]<<" ";
//         }
//         cout<<endl;
//       }
//     }
//     return in;
//   }
//   friend matrix operator +(matrix &m,matrix &n)
//   {
//     matrix c;
//     for(int i=0;i<2;i++)
//     {
//       for(int j=2;j<2;j++)
//       {
//         c.a[i][j]=m.a[i][j]+n.a[i][j];
//       }
//     }
//     return c;
//   }

// };
// class myarray
// {
//   complex1 a[10];
//   public:
//   complex1 &operator [] ( int x)
//   {
//     return a[x];
//   }
// };
// int main()
// {
//   complex1 c(7,8);
//   myarray x;
//   x[1]=c;
//   cout<<x[1];
// }
// #include<bits/stdc++.h>
// using namespace std;
// template <class T> 
// void fun(const T &x) 
// { 
// static int count= 0; 
// cout << "x =" << x <<" count= "<<count++<<endl;
// return; 
// }
// int main () 
// {
// fun<int> (1); 
// fun<int> (2); 
// fun<double> (1.1); 
// return 0; 
// // }
// class myclass
// {
//   public:
//   int a,b,c,d;
//   void get()
//   {
//     cout<<a<<b<<c<<d;
//   }
// };
// int main()
// {
//   myclass a={1,2,3,4};
//   a.get();
// }
// #include<iostream>
// using namespace std;
// class A
// {
//   public:
//   A(){cout<<" 1 ";}
//   A(A &obj){cout<<" 2 ";}
// };
// class B: virtual A
// {
//   public:
//   B(){cout<<" 3 ";}
//   B(B &obj){cout<<" 4 ";}
// };
// class C:virtual A
// {
//   public:
//   C(){cout<<" 5 ";}
//   C(C & obj){ cout<<" 6 ";}

// };
// class D:B,C
// {
//   public:
//   D(){cout<<" 7 ";}
//   D(D& obj){cout<<" 8 ";}
// };
// int main()
// {
//   D d1;
//   D d(d1);
// }

// #include <bits/stdc++.h>
// using namespace std;
// class A1
// {
// public:
//     A1() {}
//     A1(int x)
//     {
//         cout << "Al" << endl;
//     }
// };
// class A2 : virtual public A1
// {
// public:
//     A2(int x) : A1(x)
//     {
//         cout << "A2" << endl;
//     }
// };
// class A3 : virtual public A1
// {
// public:
//     A3(int x) : A1(x)
//     {
//         cout << "A3" << endl;
//     }
// };
// class A4 : public A2
// {
// public:
//     A4(int x) : A2(x)
//     {
//         cout << "A4" << endl;
//     }
// };
// class A5 : public A3
// {
// public:
//     A5(int x) : A3(x)
//     {
//         cout << "A5" << endl;
//     }
// };
// class A6 : public A4, public A5
// {
// public:
//     A6(int x) : A4(x), A5(x)
//     {
//         cout << "A6" << endl;
//     }
// };
// int main()
// {
//     A6 A61(30);
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// class test 
// {
//   public:
//   test()
//   {
//     cout<<"c";
//   }
//   ~test()
//     {
//       cout<<"o";
//     }
// };
// int main()
// {
//   test t1;
//   test();
//   t1.~test();
// }
// #include<bits/stdc++.h>
// using namespace std;
// class Two_D
// {
//   public:
//   int x,y;
//   Two_D()
//   {
//     x=0;y=0;
//   }
//   Two_D(int a,int b)
//   {
//     x=a;y=b;
//   }
//   friend int distance(Two_D &a,Two_D &b);
  
// };
// int distance(Two_D &a ,Two_D &b)
// {
//     int f= sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
//     return f;
// }
// class Three_D : public Two_D
// {
//   public:
//   int z;
//   Three_D()
//   {
//     z=0;
//   }
//   Three_D(int a,int b ,int c) : Two_D(a,b)
//   {
//     z=c;
//   }
//   friend int distance(Three_D &a ,Three_D &b );
  
// };
// int distance(Three_D &a, Three_D &b)
// {
//     int d=sqrt( ( a.x-b.x) *( a.x-b.x) + (a.y-b.y) *(a.y-b.y) + (a.z-b.z) * (a.z-b.z) );
//     return d;
// }
// int main()
// {
//   Three_D a(3,4,5),b(6,7,8);
//   cout<<distance(a,b);
// }
// #include <bits/stdc++.h>
// using namespace std;
// class A
// {
//     public:
//     int a;
//     void get_a()
//     {
//         cout<<a<<endl;
//     }
// };
// class B:virtual public A
// {
//     public:
//     int b;
//     void get_b()
//     {
//         cout<<b<<endl;
//     }
// };
// class C:virtual public A
// {
//     public:
//     int c;
//     void get_c()
//     {
//         cout<<c<<endl;
//     }
// };
// class D:virtual public A
// {
//     public:
//     int d;
//     void get_d()
//     {
//         cout<<d<<endl;
//     }
// };
// //class E:virtual public B
// class E:public B

// {
//     public:
//     int e;
//     void get_e()
//     {
//         cout<<e<<endl;
//     }
// };
// //class F:virtual public B,virtual public C
// class F:public B,virtual public C

// {
//     public:
//     int f;
//     void get_f()
//     {
//         cout<<f<<endl;
//     }
// };
// class G:virtual public C,public D
// {
//     public:
//     int g;
//     void get_g()
//     {
//         cout<<g<<endl;
//     }
// };
// //class H:virtual public F,public E
// class H:public F,public E

// {
//     public:
//     int h;
//     void get_h()
//     {
//         cout<<h<<endl;
//     }
// };
// //class I:virtual public F,public G
// class I:public F,public G

// {
//     public:
//     int i;
//     void get_i()
//     {
//         cout<<i<<endl;
//     }
// };
// class J:public H,public I
// {
//     public:
//     int j;
//     void get_j()
//     {
//         cout<<j<<endl;
//     }
// };

// int main()
// {
//     J x;
//     x.a=9;
//     x.get_a();
//     I y;
//     y.c=0;  //can access c with y after using virtual,but before virtual ambuguity will rise
//     y.get_c();

    
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// class Rectangle
// {
//   public:
//   int lenght,width;
//   Rectangle(int a,int b)
//   {
//     lenght=a;
//     width=b;
//   }
//   Rectangle()
//   {
//     lenght=0;
//     width=0;
//   }

//   virtual int area()
//   {
//     return lenght*width;
//   }

// };
// class Triangle: public Rectangle
// {
//   public :
//   int height;
//   Triangle(int a,int b,int c) :Rectangle(a,b)
//   {
//     height=c;
//   }
//   int area()
//   {
//     return height*width;
//   }
// };
// int main()
// {
//   Rectangle a(3,4);
//   Rectangle *ptr=&a;
//   //cout<<ptr->area();
//   Triangle b(4,5,6);
//   ptr= &b;
//   cout<<ptr->area();
// }
// #include<bits/stdc++.h>
// using namespace std;
// class Base
// {
//   public:
//   virtual void fun()
//   {
//     cout<<"fun";
//   }
// };
// class Derive: public Base
// {
//   public:
//   void fun()
//   {
//     cout<<"DERIVE";
//   }
// };
// int main()
// {
//   Base *ptr=new Derive;
//   Derive  *d=dynamic_cast<Derive*> (ptr);
//   d->fun();
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int a[10]={10};
//   try
//   {
//     for(int i=0;i<=10;i++)
//     {
//       if(i>=6) throw(5);
//       cout<<a[i]<<" ";
//     }
//   }
//   catch(int x)
//   {
//     cout<<"Out of bound error";
//   }
  
// }
// #include<bits/stdc++.h>
// using namespace std;
// class Base1
// {
//   public:
//   virtual void display()
//   {
//     cout<<"BASE1"<<endl;
//   }
// };
// class Base2: Base1
// {
//   public:
//   void display()
//   {
//     cout<<"BASE2"<<endl;
//   }
// };
// class Derived: public Base2
// {
//   public:
//   void display()
//   {
//     cout<<"Derived"<<endl;
//   }
// };
// int main()
// {
//   Derived d;
//   d.display();

// }
// #include<bits/stdc++.h>
// using namespace std;
// class DoubleArray
// {
//   double data;
//   int n;
//   double *arr;
//   double avg;
//   public:
//   DoubleArray(double a[],int n )
//   {
//     this->n =n;
//     arr=new double[n];
//     for(int i=0;i<n;i++)
//     {
//       *(arr+i)=a[i];
//     }
//     avg=0;
//   }
//   DoubleArray(DoubleArray &obj)
//   {
//     n=obj.n;
//     arr=new double[n];
//     for(int i=0;i<n;i++)
//     *(arr+i)= *(obj.arr+i);
//     avg=obj.avg;
//   }
//   void average()
//   {
//     avg=0;
//     for(int i=0;i<n;i++)
//     {
//       avg=*(arr+i)+avg;
//     }
//     avg=avg/n;
//   }
//   void display()
//   {
//     cout<<"the array is ";
//     cout<<endl;
//     for(int i=0;i<n;i++)
//     cout<<*(arr+i)<<" ";
//     cout<<endl;
//     cout<<"Average is"<<avg;
//   }
// };
// int main()
// {
//   double array[]={4,5,6,7};
//   DoubleArray a(array,4);
//   DoubleArray b(a);
//   a.average();
//   a.display();
//   cout<<endl;
//   b.display();
// }
// #include<iostream>
// using namespace std;
// class Base
// {
//   public:
//   int b;
//   void display()
//   {
//     cout<<"BASE"<<endl;
//   }

// };
// class Derived:public Base
// {
//   public: int d;
//   void display()
//   {
//     cout<<"DERIVED "<<endl;
//   }
// };
// int main()
// {
//   Base *bp,b;
//   Derived *dp,d;
//   dp=&d;
//   dp->b=2;dp->d=3;
//   dp->display();
// }
#include<bits/stdc++.h>
using namespace std;
class complexnumber
{
   public:
  int real,img;
  complexnumber()
  {
    real=0;img=0;
  };
  complexnumber(int a,int b)
  {
    real=a;img=b;
  }
  friend complexnumber operator +(complexnumber &a,complexnumber &b)
  {
    complexnumber c(a.real+b.real,a.img+b.img);
    return c;
  }
  friend istream & operator >> (istream &in,complexnumber &a)
  {
    in>>a.real>>a.img;
    return in;
  }
  friend ostream & operator << (ostream &in,complexnumber &a)
  {
    in<<a.real<<"+i"<<a.img;
    return in;
  }
};
int main()
{
  fstream file1,file2;
  file1.open("input.txt", ios::in);
  if(!file1)
  {
    cout<<"FILE DOESNOT EXISTs";
  }
  else 
  {
    file2.open("output.txt",ios::out);
    //complexnumber a,b;
    int a,b;
    while(file1>>a>>b)
    {
      //complexnumber c=a+b;
      //file2<<c.real<<"i+"<<c.img<<endl;
      int sum=a+b;
      file2<<sum<<endl;
    }
    file1.close();
    file2.close();
  }
}
