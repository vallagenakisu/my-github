#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
#include<iterator>
#include<string>
#include<set>
#include<deque>
#include<utility>
#include<map>
#include<math.h>
#include<set>
#include<unordered_set>

#define int long long int

using namespace std;

vector<int>prime;
vector<string>allSubString;


void seive(){
    int arr[30000] = {0};
    for (int i = 2; i < 30000; i++) {
        for (int j = i * i; j < 30000; j+=i) {
            arr[j - 1] = 1;
        }
    }
    for (int i = 1; i < 30000; i++) {
        if (arr[i - 1] == 0)
            prime.push_back(i); 
    }
}

bool isPerfectSquare(long double x)
{
    if (x >= 0) {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

bool isSubstring(string ref, string substr){
    size_t found = ref.find(substr);
    if (found != string::npos)
        return true;
    else
        return false;
}

int lastOccuranceOfSubString(string ref, string substr){
    size_t found = ref.rfind(substr);
    if(found==string::npos)     
        return -1; //not found
    else                        
        return found;
    /*
        if(found!=string::npos)
            return found; 
        this is the index of last occurance, if we already know substr is a substring of ref
    */
}

int firstOccuranceofSubString(string ref, string substr){
    size_t found = ref.find(substr);
    if (found == string::npos)
        return -1;
    else
        return found; 
}

void subString(string str)
{
    for (int i = 0; i < str.length(); i++) {
        string subStr;
        for (int j = i; j < str.length(); j++) {
            subStr += str[j];
            allSubString.push_back(subStr);
        }
    }
}
 
void solve(){
    
}

int32_t main(){ 
    int t;  cin>>t;
    while (t--)
    {
        int a,b,c,d;    cin>>a>>b>>c>>d;
        // int dis = abs(d-b);
        // int x2 = c+dis;
        // int y2= d+dis;
        // int m = ((y2-b)/(x2-a));
        if(d<b) cout<< -1 << endl;
        else{
            int x = a+ abs(b-d);
            if(c>x) cout<< -1 <<endl;
            else    cout<< abs(b-d) + (x -c) <<endl; 
        }
    }
    return 0;
    /*
    notes:
    gcd(a,b)<= min(a,b)
    lcm(a,b)>=max(a,b)
    */
}