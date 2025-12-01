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
  int n, q; cin >> n >> q;
  int ans = 1;
  vi arr(n + 1), pos(n + 2); pos[n + 1] = n + 1;
  set<int> st;
  for (int i = 1; i <= n; i++) {
    int v; cin >> v; arr[i] = v; pos[v] = i;
    if (st.count(v + 1)) ans++;
    st.insert(v);
  }
  //cout << "ans: " << ans << '\n';

  while (q--) {
    int a, b; cin >> a >> b;
    if (a > b) swap(a, b);
    int val_a = arr[a];
    int val_b = arr[b];

    if (a < pos[val_a - 1] && b > pos[val_a - 1]) ans--;
    if (a < pos[val_a + 1] && b > pos[val_a + 1]) ans++;
    if (b > pos[val_b - 1] && a < pos[val_b - 1]) ans++;
    if (b > pos[val_b + 1] && a < pos[val_b + 1]) ans--;

    if (abs(val_a - val_b) == 1) 
      if (val_a > val_b) ans--;
      else ans++;

    /*
      if (a < pos[val_a - 1] && b > pos[val_a - 1]) cout << 'a';
      if (a < pos[val_a + 1] && b > pos[val_a + 1]) cout << 'b';
      if (b > pos[val_b - 1] && a < pos[val_b - 1]) cout << 'c';
      if (b > pos[val_b + 1] && a < pos[val_b + 1]) cout << 'd';
      */
    swap(arr[a], arr[b]);
    swap(pos[val_a], pos[val_b]);
    cout << ans << '\n';
  }

  return 0;
}
