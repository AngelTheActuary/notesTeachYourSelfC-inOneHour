#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t > 0) {
        long long x, y;
        cin >> x >> y;
        long long n = x + y;

        // condiciones de imposibilidad
        bool posible = true;
        if (y < x) {
            posible = false;              // siempre hay al menos tantos impares como pares
        }
        if (n % 2 == 0 && x == 0) {
            posible = false;              // raiz con subtree par obliga x >= 1
        }

        if (!posible) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";

            long long sig;   // siguiente numero de nodo disponible
            long long a, b;  // cuantas cerezas y cuantos pares de hojas

            if (n % 2 == 0) {
                // base: raiz 1 con una hoja 2 -> ya llevo (1 par, 1 impar)
                cout << 1 << " " << 2 << "\n";
                sig = 3;
                a = x - 1;
                b = (y - x) / 2;
            } else {
                // base: raiz sola -> llevo (0 par, 1 impar)
                sig = 2;
                a = x;
                b = (y - 1 - x) / 2;
            }

            // cerezas: nodo colgado de la raiz + hoja colgada de ese nodo
            for (long long i = 0; i < a; i = i + 1) {
                cout << 1 << " " << sig << "\n";
                cout << sig << " " << sig + 1 << "\n";
                sig = sig + 2;
            }

            // pares de hojas: dos hojas directas de la raiz
            for (long long i = 0; i < b; i = i + 1) {
                cout << 1 << " " << sig << "\n";
                cout << 1 << " " << sig + 1 << "\n";
                sig = sig + 2;
            }
        }

        t = t - 1;
    }
    return 0;
}