#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<vi> vvi;

const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  vi arr(n);
  for (int& v : arr) cin >> v;
  int mx = 0, mn = 200, mxi = -1, mni = -1;
  for (int i = 0; i < n; i++) {
    if (mx < arr[i]) {
      mx = arr[i], mxi = i + 1;
    }
    if (mn >= arr[i]) {
      mn = arr[i], mni = i + 1;
    }
  }

  int ans = 0;
  ans += mxi - 1;
  ans += n - mni;
  if (mni < mxi) ans--;
  cout << ans;
  return 0;
}
