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
  ll n; cin >> n;
  int cnt = 0;
  while (n) {
    if (n % 10 == 7 || n % 10 == 4) cnt++;
    n /= 10;
  }

  n = cnt;
  if (n == 0) { cout << "NO"; return 0; }
  bool valid = true;
  while (n) {
    if (n % 10 != 7 && n % 10 != 4) valid = false;
    n /= 10;
  }
  cout << (valid ? "YES" : "NO");
  return 0;
}
