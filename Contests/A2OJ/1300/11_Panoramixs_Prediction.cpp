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

const int N = 100;
vi primes;
int spf[N];

void sieve() {
  spf[1] = 1;
  for (int i = 2; i < N; i++) {
    if (spf[i] == 0) {
      spf[i] = i;
      primes.push_back(i);
    }
    for (int& p : primes) {
      if (p > spf[i] || (ll) p * i >= N) break;
      spf[i * p] = p;
    }
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  sieve();
  int n, m; cin >> n >> m;
  auto it = upper_bound(primes.begin(), primes.end(), n);
  cout << (*it == m ? "YES" : "NO");
  return 0;
}
