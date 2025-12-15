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
  string a, b; cin >> a >> b;
  for (char& c : a) c = tolower(c);
  for (char& c : b) c = tolower(c);
  bool con1 = false, con2 = false;
  for (int i = 0; i < a.size(); i++) {
    char c1 = a[i], c2 = b[i];
    if (c1 > c2) {
      con1 = true; break;
    }
    if (c1 < c2) {
      con2 = true; break;
    }
  }
  if (!con1 && !con2) cout << 0;
  else if (con1) cout << 1;
  else cout << -1;
  return 0;
}
