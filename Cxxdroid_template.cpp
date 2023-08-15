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

#define int int64_t
#define endl '\n'
#define f first
#define s second
#define sz(x) int((x).size())
#define bg begin
#define all(x) (x).bg(), (x).end()
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define tp top()
#define bk back()
#define lb lower_bound
#define ub upper_bound
#define get(x) cin >> (x)
#define pr(x) cout << (x) << ' '
#define prl(x) cout << (x) << '\n'
#define prnl cout << '\n'
#define prly prl("YES")
#define prln prl("NO")

const bool prlsolve = 0;
const bool dbg = 0;
const bool mtt = 1;

void solve() {
  
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int _TC = 1;
  if (mtt) {
    cin >> _TC;
  }
  for (int _T = 1; i <= _TC; ++_T) {
    if (dbg) {
      pr("Testcase #");
      prl(_T);
    }
    if (prlsolve) {
      prl(solve());
    } else {
      solve();
    }
    if (dbg) {
      prnl;
    }
  }
}
