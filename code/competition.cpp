#pragma GCC optimize(3) // O3

// #define FMT_HEADER_ONLY // comment 线上比赛调试的时候可以用下
// #include <fmt/ranges.h> // comment 不过提交的时候记得注释掉
// #define pp(v) fmt::print("{}\n", v) // comment

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i=a; i < (b); i ++)
#define trav(a,x) for (auto& a: x)
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x) (int)(x).size()
#define endl "\n" // promote speed
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;


void solve(int tcase){

}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(nullptr);

    int T;
    cin >> T;
    rep(t, 1 , T + 1){
        solve(t);
    }
}