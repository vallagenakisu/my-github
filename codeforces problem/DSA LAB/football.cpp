#include<bits/stdc++.h>

using namespace std;
bool equal(string a,string b)
{
    if(a.size()==b.size())
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=b[i])
            return false;
        }
    }
    else 
    return false;
    return true;
}
int main()
{
  int n;
  cin>>n;
  vector<string> a;
  for(int i=0;i<n;i++)
  {
    string c;
    cin>>c;
    a.push_back(c);
  }
  int b=0,d=0;
  string c=a[0],f;
  for(int i=0;i<n;i++)
  {
    if(equal(c,a[i]))
    b++;
    else 
    {
        f=a[i];
        d++;
    }
  }
  if(b>d) cout<<c;
  else cout<<f;


}