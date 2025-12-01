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
  multiset<int> st;
  for (int i = 0; i < n; i++) {
    int v; cin >> v; st.insert(v);
  }
  for (int i = 0; i < m; i++) {
    int v; cin >> v;
    auto it = st.upper_bound(v);
    if (it == st.begin()) { cout << -1 << '\n'; continue; }
    it--;
    cout << *it << '\n';
    st.erase(it);
  }
  return 0;
}
