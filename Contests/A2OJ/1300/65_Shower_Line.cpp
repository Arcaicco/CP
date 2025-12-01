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
 
vvi mat(N, vi(N));
vi arr = {1, 2, 3, 4, 5};
ll ans = 0;
 
ll f() {
  ll sum = 0;
  for (int i = 0; i < N; i++) 
    for (int j = i + 1; j < N; j+= 2) {
      int a = arr[j] - 1, b = arr[j - 1] - 1;
      sum += mat[a][b] + mat[b][a];
    }
  return sum;
}
 
void bf(int e) {
  if (e == N) {
    ans = max(ans, f());
    return;
  }
  for (int i = e; i < N; i++) {
    swap(arr[i], arr[e]);
    bf(e + 1);
    swap(arr[i], arr[e]);
  }
}
 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      cin >> mat[i][j];
 
  bf(0);
  cout << ans;
 
  return 0;
}
