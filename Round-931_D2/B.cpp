#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF=1e18;
const int md=998244353;

void solve()
{
    int n;
    cin>>n;
    /*
    int a[45]= {0, 1, 2, 1, 2, 3, 1, 2, 3, 2, 1, 2, 2, 2, 3, 1, 2, 3, 2, 3, 2, 3, 3, 3, 3, 2, 3, 3, 3, 4, 2, 3, 4, 3, 4, 3, 3, 4, 4, 4, 3, 4, 4, 4, 5};
    */
    int ans=0;
    if(n>=30)
    {
        ans=(n-30)/15;
        n-=ans*15;
    }

    int total=n;

    vector<int>coins= {1, 3, 6, 10, 15};

    vector<int>dp(n+1, n+1);
    dp[0]=0;
    for(auto coin:coins)
    {
        for(int now=coin; now<=total; now++)
        {
            dp[now]=min(dp[now], dp[now-coin]+1);
        }
    }

    ans+=dp[n];
    cout<<ans<<endl;



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

