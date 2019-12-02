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
    string s;
    cin >> n >> s;
    int count = 0;
    rep(i, 1000)
    {
        string comp = to_string(i);
        if(i < 10){
            comp = "00" + comp;
        }else if(i < 100){
            comp = "0" + comp;
        }
        int index = 0;
        rep(j, n)
        {
            if(index >= 3) break;
            if(comp[index] == s[j])
            {
                index++;
            }
        }
        if(index == 3)
        {
            count++;
        }
    }
    cout << count << endl;
}