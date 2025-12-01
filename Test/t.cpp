#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> freq(2 * n + 2, 0);   // un poco más grande por seguridad
        for (int i = 0; i < 2 * n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }
        
        int ans = 0;
        for (int i = 1; i <= 2 * n; i++) {
            if (freq[i] == 0) continue;
            
            // Siempre podemos hacer que aparezca impar en al menos una subsecuencia → +1
            ans++;
            
            // Solo si la frecuencia es PAR y >=2 podemos hacerlo impar en AMBAS → +1 extra
            if (freq[i] >= 2 && freq[i] % 2 == 0) {
                ans++;
            }
        }
        
        cout << ans << '\n';
    }
    return 0;
}
