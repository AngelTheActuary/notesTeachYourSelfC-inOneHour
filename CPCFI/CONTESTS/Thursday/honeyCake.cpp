#include <iostream>
using namespace std;

long long divisores[3000]; // los divisores de n (nunca son mas de ~1344)

int main(){
    long long w, h, d, n;
    cin >> w >> h >> d;
    cin >> n;

    // paso 1: encuentro todos los divisores de n
    int cantidad = 0;
    for(long long i = 1; i * i <= n; i++){
        if(n % i == 0){
            divisores[cantidad] = i;
            cantidad++;
            if(i != n / i){              // no repetir la raiz cuadrada exacta
                divisores[cantidad] = n / i;
                cantidad++;
            }
        }
    }

    // paso 2: pruebo a (partes en w) y b (partes en h), c queda forzado
    for(int i = 0; i < cantidad; i++){
        long long a = divisores[i];
        if(w % a != 0) continue;        // a debe dividir a w

        long long m = n / a;            // lo que falta repartir: b*c = m

        for(int j = 0; j < cantidad; j++){
            long long b = divisores[j];
            if(m % b != 0) continue;    // b debe dividir a m
            if(h % b != 0) continue;    // y a h

            long long c = m / b;        // c ya no se elige, esta forzado
            if(d % c == 0){
                // encontre la terna: imprimo CORTES (partes - 1)
                cout << a - 1 << " " << b - 1 << " " << c - 1 << "\n";
                return 0;
            }
        }
    }

    cout << -1 << "\n";
    return 0;
}