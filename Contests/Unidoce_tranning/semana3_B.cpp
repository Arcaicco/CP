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
  vi arr;
  for (int i = 2; i <= n; i += 2) arr.push_back(i);
  for (int i = 1; i <= n; i += 2) arr.push_back(i);

  bool valid = true;
  for (int i = 1; i < arr.size(); i++) 
    if (abs(arr[i - 1] - arr[i]) == 1) valid = false;

  if (!valid) { cout << "NO SOLUTION"; return 0; }

  for (int& v : arr) cout << v << ' ';


  return 0;
}
