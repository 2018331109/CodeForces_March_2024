#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
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
    int n, k;
    cin>>n>>k;
    k*=2;
    int a[2*n];
    vector<int>v1, v2;
    int sz1=0;
    int sz2=0;
    map<int, int>mp;
    for(int i=0; i<2*n; i++)
    {
        cin>>a[i];
        if(i<n)
        {
            mp[a[i]]++;
        }
    }

    for(int i=1; i<=n; i++)
    {
        if(!mp[i])
        {
            v2.pb(i), v2.pb(i);
        }
        else if(mp[i]==2)
        {
            v1.pb(i), v1.pb(i);
        }

    }
    for(int i=1; i<=n; i++)
    {
        if(mp[i]==1)
        {
            v1.pb(i), v2.pb(i);
        }
    }

    for(int i=0; i<k; i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<k; i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

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

