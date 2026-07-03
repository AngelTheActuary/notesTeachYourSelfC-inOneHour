#include <iostream>
using namespace std;

int cartas[1005]; // arreglo global, estilo principiante

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> cartas[i];
    }

    int izquierda = 0;        // extremo izquierdo disponible
    int derecha = n - 1;      // extremo derecho disponible
    int puntosSereja = 0;
    int puntosDima = 0;
    bool turnoSereja = true;  // Sereja empieza

    while(izquierda <= derecha){
        int elegida;

        // ambos son greedy: agarran el extremo mas grande
        if(cartas[izquierda] > cartas[derecha]){
            elegida = cartas[izquierda];
            izquierda++;
        }else{
            elegida = cartas[derecha];
            derecha--;
        }

        // se la anoto al jugador en turno
        if(turnoSereja){
            puntosSereja = puntosSereja + elegida;
        }else{
            puntosDima = puntosDima + elegida;
        }

        turnoSereja = !turnoSereja; // cambia el turno
    }

    cout << puntosSereja << " " << puntosDima << "\n";
    return 0;
}