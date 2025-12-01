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
  int n, m, k; cin >> n >> m >> k;
  vi N(n), M(m);
  for (int& v : N) cin >> v;
  for (int& v : M) cin >> v;
  sort(N.begin(), N.end());
  sort(M.begin(), M.end());
  
  int j = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int l = N[i] - k < 0 ? 0 : N[i] - k;
    int r = N[i] + k;
    
    while (j < m) {
      if (M[j] < l) { j++; continue; }
      if (M[j] > r) break;
      ans++, j++; break;
    }
  }

  cout << ans;

  return 0;
}
