//178

#include<iostream>
#include<cmath>

using namespace std;

//Firma 1: Modelo Discreto (tiempo expresado en periodos enteros)
double valorFuturo(double capital, double tasa, int periodos) {
    cout<<"[Resolución: Modelo Discreto (int)]\n";
    return capital*(1+(tasa*periodos));
}

//Firma 2: Modelo continuo (tiempo expresado como variable continua)
double valorFuturo(double capital, double tasa, double tiempo) {
    cout<<"[Resolución: Modelo Continuo (double)\n]";
    return capital*exp(tasa*tiempo);
}

int main() {
    double inversionBase=100000.0; //$100,000
    double tasaRendimiento=0.08; //8%

    int trimestres=4;
    double tiempoAnos=1.0;

    //El compilador empareja (double, double, int) -> Llama a Firma 1
    double fvDiscreto=valorFuturo(inversionBase, tasaRendimiento, trimestres);

    //El compilador empareja (double, double, double) -> Llama a Firma 2
    double fvContinuo=valorFuturo(inversionBase, tasaRendimiento, tiempoAnos);

    cout<<"Valor Futuro Discreto: $"<<fvDiscreto<<"\n";
    cout<<"Valor Futuro Continuo: $"<<fvContinuo<<"\n";

    return 0;
}




