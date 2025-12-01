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
  vector<set<int>> arr(n + 1);
  for (int i = 0; i < m; i++) {
    int s; cin >> s;
    vi S(s);
    for (int& v : S) cin >> v;
    for (int i = 0; i < s - 1; i++) {
      for (int j = i + 1; j < s; j++) {
          arr[S[i]].insert(S[j]);
          arr[S[j]].insert(S[i]);
        }
    }
  }
  bool valid = true;
  //for (int i = 1; i <= n; i++) cout << arr[i].size() << ' '; cout << '\n';
  for (int i = 1; i <= n; i++) 
    if (arr[i].size() != n - 1) 
      valid = false;
  cout << (valid ? "Yes" : "No");

  return 0;
}
