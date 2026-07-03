#include<iostream>
#include<vector>
#include<algorithm>

namespace MiEspacio {
    void saludar() {
        std::cout<<"Hola desde MiEspacio!"<<std::endl;
    }
}

int main() {
    MiEspacio::saludar(); //Uso del namespace explícitamente
    return 0;
}

/*
#include<bits/stdc++.h>
Utilizar esta librería facilita la programación de soluciones
al no tener que escribir uno por uno los imports utilizados y disponer
de las funciones necesarias sin preocuparse por dónde están.

Sin embargo, cabe destacar que esta práctica no es estándar y se recomienda
únicamente en contextos como la programación competitiva. 
Además, la disponibilidad de este encabezado depende de la configuración
específica del compilador y no está garantizada en todas las versiones
de GCC, aunque es común en entornos basados en g++

*/

typedef struct {
    //miembros
} structConTypedef;

//En lugar de trabajarlas como:

struct {
    //miembros
} structSinTypedef;

//forma reducida de declarar ambas:

structConTypedef myStruct;
struct structSinTypedef;

typedef vector<int> vi;

typedef long long ll; //Enteros largos
typedef long double ld; //Flotantes de doble precisión largos






