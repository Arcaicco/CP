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

const int N = 1e7 + 5;
vi primes, spf(N + 1); 

void sieve() {
  spf[1] = 1;
  for (int i = 2; i <= N; i++) {
    if (spf[i] == 0) {
      spf[i] = i;
      primes.push_back(i);
    }
    for (int& p : primes) {
      if (p > spf[i] || (ll)p * i > N) break;
      int v = i * p;
      spf[v] = p;
    }
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  sieve();
  int n; cin >> n;
  for (int i = 0; i < n; i++) 
    cout << primes[i] << ' ';
  return 0;
}
