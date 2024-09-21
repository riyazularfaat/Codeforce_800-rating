#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    int result;
    int r, c;
    for (int i = 0; i < 5; i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            int x = arr[i][j];
            if(x==1){
                r = i + 1;
                c = j + 1;
            }
        }
    }
    result = abs(r - 3) + abs(c - 3);
    cout << result << endl;
    return 0;
}