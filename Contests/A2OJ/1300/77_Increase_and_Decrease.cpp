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
  vi arr(n);
  ll sum = 0;
  for (int& v : arr) {
    cin >> v;
    sum += v;
  }
  int m = sum / n;
  int val = arr.back();
  for (int i = 0; i < n - 1; i++) {
    if (m > arr[i]) val = val - (m - arr[i]);
    else val = val + (arr[i] - m);
  }
  cout << (val == m ? n : n - 1);

  return 0;
}
