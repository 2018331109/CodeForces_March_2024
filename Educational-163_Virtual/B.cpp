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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int b=arr[0]%10;
    int a=arr[0]/10;
    int last;
    if(a<=b)
    {
        last=b;
    }
    else
    {
        last=arr[0];
    }
    for(int i=1; i<n; i++)
    {
        b=arr[i]%10;
        a=arr[i]/10;
        if(a<=b and a>=last)
        {
            last=b;
        }
        else if(arr[i]>=last)
        {
            last=arr[i];
        }
        else
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

