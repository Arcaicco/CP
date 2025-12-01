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

ll func(ll n) {
  if (n == 0) return 1;
  return func(n - 1) * n;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  ll n; cin >> n;
  cout << func(n);
  return 0;
}
