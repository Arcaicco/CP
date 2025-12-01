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

/*
ll qpow(ll a, ll b, int MOD = MOD) {
  ll res = 1;
  while (b) {
    if (b & 1) res = (res * a) % MOD;
    a = a * a % MOD;
    b >>= 1;
  }
  return res;
}
*/

ll qpow(ll a, ll b, int MOD = MOD) {
  if (b == 1) return a;
  else if (b == 0) return 1;
  if (b & 1) {
    ll val = qpow(a, b / 2);
    val = val * val % MOD;
    return val * a % MOD;
  }
  else {
    ll val = qpow(a, b / 2);
    return val * val % MOD;
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    ll a, b; cin >> a >> b;
    cout << qpow(a, b) << '\n';
  }
  return 0;
}
