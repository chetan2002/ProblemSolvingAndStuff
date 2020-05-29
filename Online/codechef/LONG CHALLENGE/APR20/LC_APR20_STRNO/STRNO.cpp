#include <bits/stdc++.h>
using namespace std;
#define ll long long


vector<ll> getf(ll x)
{
    vector<ll> ret;
    while (x % 2 == 0)
    {
        x = x / 2;
        ret.push_back(2);
    }
    for (ll i = 3; i <= sqrt(x); i += 2)
    {
        while (x % i == 0)
        {
            x = x / i;
            ret.push_back(i);
        }
    }
    if (x > 2)
        ret.push_back(x);
    return ret;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, k;
        cin >> x >> k;
        vector<ll> temp;
        //se();
        temp = getf(x);
        if (temp.size() >= k)
            cout << 1 << endl;
        else
        {
            cout << 0 << endl;
        }
        //cout << ans << endl;
    }
    return 0;
}
