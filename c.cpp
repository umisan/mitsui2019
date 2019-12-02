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
    int x;
    cin >> x;
    int count = x / 100;
    rep(o, count + 1){
        rep(s, count + 1){
            rep(c, count + 1){
                rep(k, count + 1){
                    rep(a, count + 1){
                        int temp = o * 100 + s * 101 + c * 102 + k * 103 + a * 104;
                        int diff = x - temp;
                        if(diff >= 0 && diff % 105 == 0)
                        {
                            cout << 1 << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << 0 << endl;
}