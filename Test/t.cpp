#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, l, r;
    cin >> n >> l >> r;

    // Vamos a imprimir los valores de 'a' directamente sin guardar el vector completo.
    // Necesitamos recordar el valor del prefijo anterior (prev_b).
    // Inicialmente b_0 = 0.
    int prev_b = 0; 

    for(int i = 1; i <= n; i++) {
        int curr_b;

        // APLICAMOS LA LÓGICA DEL EDITORIAL:
        if (i == r) {
            // "with the exception that b_r = l - 1"
            curr_b = l - 1;
        } else {
            // "The easiest construction is b_i = i"
            curr_b = i;
        }

        // "The array a can be reconstructed as a_i = b_i XOR b_{i-1}"
        cout << (curr_b ^ prev_b) << (i == n ? "" : " ");

        // Actualizamos el anterior para la siguiente iteración
        prev_b = curr_b;
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
