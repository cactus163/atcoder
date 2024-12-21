#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    int ans = 0;
    while(n%2 == 0)
    {
        n /= 2;
        ans++;
    }
    return ans;
}

int main()
{
 int n;
 cin >> n;
 vector<int> a(n);
 for (int i=0; i<n;i++) cin >> a[i];
 int ans = 1000000000;
 for(int i = 0; i < n; i++)
 {
     ans = min(ans, solve(a[i]));
 }
    cout << ans << endl;
}