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
  string a, b, s; cin >> a >> b >> s;
  a += b;
  sort(a.begin(), a.end());
  sort(s.begin(), s.end());
  if (a.size() != s.size()) { cout << "NO\n"; return 0; }

  bool valid = true;
  for (int i = 0; i < s.size(); i++) {
    char c1 = a[i], c2 = s[i];
    if (c1 != c2) valid = false;
  }
  cout << (valid ? "YES\n" : "NO\n");

  return 0;
}
