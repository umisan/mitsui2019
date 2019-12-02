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
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    if(m1 != m2 && d2 == 1){
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }
}