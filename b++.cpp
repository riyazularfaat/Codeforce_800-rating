#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    
    while(n--)
    {
        string s;
        cin >> s;
        if(s.find("++") != string::npos){
            sum++;
        }
        else if(s.find("--") != string::npos){
            sum--;
        }
    }
    cout << sum;
    return 0;
}