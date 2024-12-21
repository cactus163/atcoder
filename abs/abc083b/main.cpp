#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        int sum = 0;
        int num = i;
        while(num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        if(a <= sum && sum <= b)
        {
            ans += i;
        }
    }
    cout << ans << endl;
}