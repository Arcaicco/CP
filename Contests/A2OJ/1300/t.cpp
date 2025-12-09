#include <bits/stdc++.h>
using namespace std;

int main() {
    long long grande = 1000000000000000001; // Termina en 1
    double d = grande; // Lo pasamos a double
    
    // Imprimimos con mucha precisión
    cout << fixed << setprecision(20);
    cout << "Long long: " << grande << endl;
    cout << "Double   : " << d << endl;
    
    // Salida probable en tu PC:
    // Long long: 1000000000000000001
    // Double:    1000000000000000000  <-- ¡Perdió el 1 final!
}
