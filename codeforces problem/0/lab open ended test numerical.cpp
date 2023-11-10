#include <bits/stdc++.h>
#include <fstream>
#define f(i, n) for (int i = 0; i < n; i++)
using namespace std;
string e1, e2;
vector<double> string_to_coefficient(string s)
{
    vector<double> vgs;
    int num = 0;
    int sign = 1;
    int idx = 0;
    if (s[0] == '-')
    {
        sign = -1;
        idx = 1;
    }
    for (; idx < s.length(); idx++)
    {
        if (s[idx] <= '9' && s[idx] >= '0')
        {
            num = num * 10 + (s[idx] - '0');
        }
        else
        {
            if (num == 0)
                num = 1;
            vgs.push_back(sign * num);
            num = 0;
            sign = 1;
            idx++;
            if (s[idx] == '-')
            {
                sign = -1;
            }
        }
    }
    vgs.push_back(sign * num);
    return vgs;
}
void gausSeidel()
{
    cin >> e1 >> e2;


    vector<double> v1 = string_to_coefficient(e1);
    vector<double> v2 = string_to_coefficient(e2);
    double a1, b1, c1;
    double a2, b2, c2;
    a1 = v1[0];
    b1 = v1[1];
    c1 = v1[2];

    a2 = v2[0];
    b2 = 2 * v2[0];
    c2 = -1 * v2[0];
    // cout << a1 << " " << a2 << endl;
    // cout << b1 << " " << b2 << endl;
    // cout << c1 << " " << c2 << endl;

    double x = 0, y = 0;
    double px = 9, py = 9;
    int it=0;
    while (abs(px - x) > 0.0001 || abs(py - y) > 0.0001)
    {
        it++;
        px = x;
        py = y;
  
        x = (c1 - b1 * y) / a1;
        y = (c2 - a2 * x) / b2;
        cout << "error "<<it << " "<< px-x <<" and " << py-y << endl;
    }
    cout << fixed << setprecision(5) <<"final answer is "<< x << " " << y << " " << endl;
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    gausSeidel();
    ifstream in("filename.txt");
    if (in.is_open())
    {
        string ac,bc;
        getline(in, ac);
        getline(in, bc);

        cout << ac << endl;
        cout << bc << endl;
     

        in.close();
    }
}
