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
  string sa, sb; cin >> sa >> sb;
  int n = (int)sa.size();
  int ans[(int)sa.size()];
  for (int i = 0; i < (int)sa.size(); i++) {
    int a = sa[i] - '0';
    int b = sb[i] - '0';
    ans[i] = a ^ b;
  }
  for (int i = 0; i < n; i++) cout << ans[i];
  return 0;
}
