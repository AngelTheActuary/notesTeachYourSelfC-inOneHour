#include <iostream>
using namespace std;

long long cuartos[200001];  // cuartos[i] = cuantos cuartos tiene el dormitorio i
long long acumulado[200001]; // acumulado[i] = total de cuartos hasta el dormitorio i

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> cuartos[i];
    }

    // sumas acumuladas: acumulado[i] = cuartos del dormitorio 1 al i
    acumulado[0] = 0;
    for (int i = 1; i <= n; i++) {
        acumulado[i] = acumulado[i - 1] + cuartos[i];
    }

    int dormitorio = 1; // por donde voy caminando (nunca retrocede)

    for (int j = 0; j < m; j++) {
        long long carta;
        cin >> carta;

        // avanzo hasta el dormitorio que contiene esta carta
        while (acumulado[dormitorio] < carta) {
            dormitorio = dormitorio + 1;
        }

        // el cuarto dentro del dormitorio: lo que sobra despues
        // de restar todos los cuartos de los dormitorios anteriores
        long long cuarto = carta - acumulado[dormitorio - 1];

        cout << dormitorio << " " << cuarto << "\n";
    }

    return 0;
}