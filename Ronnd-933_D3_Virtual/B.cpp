#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "yes" << endl;
#define no cout << "no" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N = 200005;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<n-1; i++)
    {
        int cnt=a[i]/2;
        int op=min(cnt, min(a[i-1], a[i+1]));
        a[i-1]-=op, a[i]-=(op*2), a[i+1]-=op;
    }

    for(int i=0; i<n; i++)
    {
        if(a[i])
        {
            no;
            return;
        }
    }
    yes;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}
