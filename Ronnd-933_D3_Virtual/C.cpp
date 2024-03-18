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
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(i+5<=n and s.substr(i, 5)=="mapie")
        {
            cnt++, i+=4;
        }
        else if(i+3<=n and s.substr(i, 3)=="map" or s.substr(i, 3)=="pie")
        {
            cnt++;
            i+=2;
        }
    }
    cout<<cnt<<endl;
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
