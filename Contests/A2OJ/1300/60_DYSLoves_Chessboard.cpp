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
  int n, m; cin >> n >> m;
  vector<vector<char>> mat(n, vector<char>(m));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) 
      cin >> mat[i][j];

  vector<vector<char>> ans(n, vector<char>(m));
  for (int i = 0; i < n; i++) {
    char c = i & 1 ? 'W' : 'B';
    for (int j = 0; j < m; j++) {
      ans[i][j] = c;
      c = c == 'W' ? 'B' : 'W';
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char c;
      if (mat[i][j] == '-') c = '-';
      else c = ans[i][j];
      cout << c;
    }
    cout << '\n';
  }
  return 0;
}
