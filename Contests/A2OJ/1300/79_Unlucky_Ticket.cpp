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
  string str; cin >> str;
  vi A, B;
  for (int i = 0; i < n; i++) A.push_back(str[i] - '0');
  for (int i = n; i < 2 * n; i++) B.push_back(str[i] - '0');

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  bool valid = true;
  if (A.back() > B.back()) {
    for (int i = 0; i < n; i++) 
      if (B[i] >= A[i]) valid = false;
  }
  else if (B.back() > A.back()) {
    for (int i = 0; i < n; i++) 
      if (A[i] >= B[i]) valid = false;
  }
  else 
    valid = false;

  cout << (valid ? "YES" : "NO");

  return 0;
}
