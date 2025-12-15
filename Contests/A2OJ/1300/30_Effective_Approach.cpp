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
  vi arr(n + 1), A(n + 1), B(n + 1);
  for (int i = 1; i <= n; i++) {
    int v; cin >> v; 
    arr[i] = v;
    A[v] = i;
  }
  for (int i = n, j = 1; i >= 1; i--) 
    B[arr[i]] = j++;
  int q; cin >> q;
  ll ans1 = 0, ans2 = 0;
  while (q--) {
    int v; cin >> v;
    ans1 += A[v];
    ans2 += B[v];
  }
  cout << ans1 << ' ' << ans2 << '\n';
  return 0;
}
