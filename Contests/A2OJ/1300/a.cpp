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

vector<vector<int>> mat(5, vector<int>(5));
vi arr = {1, 2, 3, 4, 5};
ll ans = -1;

void func() {
  ll sum = 0;
  for (int i = 0; i < 5; i++) 
    for (int j = i + 1; j < 5; j += 2) {
      int u = arr[j] - 1, v = arr[j - 1] - 1;
      sum += mat[u][v] + mat[v][u];
    }
  //cout << "sum: " << sum << '\n';
  ans = max(ans, sum);
}

void bf(int e) {
  if (e == 5) {
    //for (int& v : arr) cout << v << ' '; 
    func();
    return;
  }
  for (int i = e; i < 5; i++) {
    swap(arr[i], arr[e]);
    bf(e + 1);
    swap(arr[i], arr[e]);
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  for (int i = 0; i < 5; i++) 
    for (int j = 0; j < 5; j++) cin >> mat[i][j];

  bf(0);
  cout << ans;
  return 0;
}
