/**
 *   author: brownfox2k6
 *   created from Cxxdroid
**/
#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <map>
#include <vector>
#include <set>
#include <queue>
using namespace std;

#define endl '\n'
#define f first
#define s second
#define sz(x) int((x).size())
#define bg begin
#define all(x) (x).bg(), x.end()
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define tp top()
#define bk back()
#define lb lower_bound
#define ub upper_bound
#define pr(x) cout << (x) << ' ';
#define prl(x) cout << (x) << '\n';
#define prl cout << '\n';
#define prly prl("YES")
#define prln prl("NO")

const bool dbg = false;
const bool mtt = true;

void solve() {
  
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  if (mtt) {
    cin >> t;
  }
  for (int i = 1; i <= t; ++i) {
    if (dbg) {
      pr("Testcase #");
      prl(i);
    }
    solve();
    if (dbg) {
      prl;
    }
  }
}
