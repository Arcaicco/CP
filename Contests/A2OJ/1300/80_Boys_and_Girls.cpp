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
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int a, b; cin >> a >> b;
  if (a > b) 
    while (a > 0 && b > 0) {
      cout << "BG";
      a--, b--;
    }
  else 
    while (a > 0 && b > 0) {
      cout << "GB";
      a--, b--;
    }
  while (a--) cout << 'B';
  while (b--) cout << 'G';
  return 0;
}
