//競技プログラミング用のテンプレート
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <string>
#include <math.h>

#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

using namespace std;
using ll = long long int;
using p = pair<int, int>;
using pl = pair<ll, ll>;
using v = vector<int>;
using vd = vector<double>;
using vs = vector<string>;
using vl = vector<ll>;

int main()
{
    int n;
    cin >> n;
    vl a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    ll mod = 1000000007;
    vector<vl> memo(3, vl(n + 1, 0));
    rep(i, n)
    {
        rep(j, 3)
        {
            memo[j][i + 1] = memo[j][i];
        }
        rep(j, 3)
        {
            if(memo[j][i] == a[i])
            {
                memo[j][i + 1] = memo[j][i] + 1;
                break;
            }
        }
    }
    ll count = 1;
    rep(i, n)
    {
        int temp = 0;
        rep(j, 3)
        {
            if(memo[j][i] == a[i])
            {
                temp++;
            }
        }
        count = (count * temp) % mod;
    }
    cout << count << endl;
}