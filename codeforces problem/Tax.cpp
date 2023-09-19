#include<bits/stdc++.h>
using namespace std;
float tax(char G,int net_income)
{
    float tax=0;
    if(G=='M' && net_income>300000)
    {
        int taxable=net_income-300000;
        if(taxable<=100000)
        tax=taxable*(5/100.00);
        else if(taxable<=300000)
        tax=taxable*(10/100.00);
        else if(taxable <=400000)
        tax=taxable*(15/100.00);
        else if(taxable <=500000)
        tax=taxable*(20/100.00);
        else
        tax=taxable*(25/100.00);
    }
    else if(G=='F' && net_income>350000){
       int taxable=net_income-350000;
        if(taxable<=100000)
        tax=taxable*(5/100.00);
        else if(taxable<=300000)
        tax=taxable*(10/100.00);
        else if(taxable <=400000)
        tax=taxable*(15/100.00);
        else if(taxable <=500000)
        tax=taxable*(20/100.00);
        else
        tax=taxable*(25/100.00);

    }
    return tax;
}
void taxrebate(float *tax)
{
    cout<<"Enter Your Investment="<<endl;
    float invest;
    cin>>invest;
    float maxinvest= (*tax)*(20/100.00);
    if( invest >maxinvest )
    cout<<"Investment Reached Limit"<<endl;
    else 
    {
        *tax=(*tax)-(invest*(25/100.00));
    }
}
void city(float *tax)
{
    cout<<"Enter Your City"<<endl;
    string city;
    cin>>city;
    string a,b,c,d;
    a="Dhaka";b="Chattogram";
    c="City Corp";d="Not";
    if(city==a || city==b)
    *tax=*tax+5000;
    else if(city==c)
    *tax=*tax+4000;
    else 
    tax=tax+3000;
}
int main()
{
    char G;
    cout<<"Enter Your Gender(if Male M else F)-"<<endl;
    cin>>G;
    int monthly;
    cout<<"Enter Your Monthly Income-"<<endl;
    cin>>monthly;
    int yearly=monthly*12;
    cout<<"Your Yearly Income is ="<<yearly<<endl;
    int bonus,other;
    cout<<"Enter Your Bonus"<<endl;
    cin>>bonus;
    cout<<"Enter Your Other Sources of Income"<<endl;
    cin>>other;
    int net_income=yearly+bonus+other;
    cout<<"Your Net Income is ="<<net_income<<endl;
    float tax1=tax(G,net_income);
    taxrebate(&tax1);
    city(&tax1);
    cout<<"Your Income Tax is ="<<tax1;
}
