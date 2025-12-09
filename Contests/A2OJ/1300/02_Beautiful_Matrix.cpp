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

const int N = 5;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  vvi mat(N, vi(N));
  pair<int, int> ans;
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) {
      int v; cin >> v;
      if (v == 1) { ans = {i + 1, j + 1}; }
    }

  cout << ( abs(3 - ans.first) + abs(3 - ans.second) );
  return 0;
}
