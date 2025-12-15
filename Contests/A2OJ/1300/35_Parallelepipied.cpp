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
  int a, b, c; cin >> a >> b >> c;
  int x = round(sqrt(a * b / c));
  int y = round(sqrt(a * c / b));
  int z = round(sqrt(b * c / a));
  cout << x * 4 + y * 4 + z * 4 << '\n';
  return 0;
}
