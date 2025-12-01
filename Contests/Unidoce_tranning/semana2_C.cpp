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

  int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
  /*
  set<int> st{a, b, c, d, e};
  cout << st.size();
  */
  vi arr{a, b, c, d, e};
  sort(arr.begin(), arr.end());
  auto it = unique(arr.begin(), arr.end());
  cout << it - arr.begin();

  return 0;
}
