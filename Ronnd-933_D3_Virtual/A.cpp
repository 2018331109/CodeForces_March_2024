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
    int n, m, k, ans=0;
    cin>>n>>m>>k;
    int a[n], b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int j=0; j<m; j++)
    {
        cin>>b[j];
    }
    sort(a, a+n);
    sort(b, b+m);

    int i=0, j=0;
    while(j<m and a[i]+b[j]<=k)
    {
        j++;
    }
    ans+=j;
    j--;
    i++;
    while(i<n)
    {
        while(j>=0 and a[i]+b[j]>k)
        {
            //cout<<"j "<<j<<endl;
            j--;
        }

        ans+=j+1;
        i++;
    }

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
