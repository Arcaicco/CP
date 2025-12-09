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
  int n, k; cin >> n >> k;
  vi arr(n); 
  for (int& v : arr) cin >> v;
  int sum = 0, ans = 1, mx = 0;
  for (int i = 0; i < k; i++) 
    sum += arr[i];
  mx = sum;
  for (int i = k; i < n; i++) {
    sum = sum + arr[i] - arr[i - k];
    if (sum < mx) {
      mx = sum;
      ans = i - k + 2;
    }
  }
  cout << ans;

  return 0;
}
