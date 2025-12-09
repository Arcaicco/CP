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
  while (n++) {
    vi arr;
    int v = n;
    while (v) {
      arr.push_back(v % 10);
      v /= 10;
    }
    sort(arr.begin(), arr.end());
    auto it = unique(arr.begin(), arr.end());
    if (it == arr.end()) {
      cout << n; break;
    }
  }
  return 0;
}
