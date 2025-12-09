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
  int n, m; cin >> n >> m;
  vi N(n), M(m);
  for (int& v : N) cin >> v;
  for (int& v : M) cin >> v;
  sort(N.begin(), N.end());
  sort(M.begin(), M.end());
  int v = max(N.back(), N.front() * 2);
  cout << (v < M.front() && N.front() * 2 <= v ? v : -1);
  return 0;
}
