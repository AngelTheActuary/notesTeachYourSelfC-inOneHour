/* pag. 540
STL set AND multiset
INSERTING ELEMENTS IN AN STL SET AND MULTISET

set      -> guarda elementos UNICOS y ORDENADOS automaticamente.
            Si insertas un valor que ya existe, se ignora.
multiset -> tambien guarda los elementos ORDENADOS, pero SI permite duplicados.

Ambos estan implementados internamente como un arbol binario de busqueda
balanceado (normalmente un arbol rojo-negro), por eso:
  - insert, find y count cuestan O(log n)
  - recorrerlos con un iterador siempre da los elementos en orden ascendente
*/

#include<set>
#include<iostream>
using namespace std;

// Declaracion de una funcion plantilla: sirve para imprimir CUALQUIER
// contenedor STL (set, multiset, list, vector...), porque el tipo
// "Container" lo deduce el compilador al momento de llamarla.
template<typename Container>
void PrintContents (const Container & stlContainer);

int main() {
    // Contenedores vacios de enteros
    set<int> setIntegers;
    multiset<int> msetIntegers;

    // Insertamos en desorden a proposito: el set los acomoda solo
    setIntegers.insert(60);
    setIntegers.insert(-1);
    setIntegers.insert(3000);
    cout<<"Writing the contents of the set to the screen"<<endl;
    PrintContents(setIntegers);          // Imprime: -1, 60, 3000 (ordenados)

    // Copiamos todo el set al multiset usando un rango de iteradores
    // [begin, end): el multiset queda con -1, 60, 3000
    msetIntegers.insert(setIntegers.begin(), setIntegers.end());

    // Insertamos 3000 otra vez. En un set esto se ignoraria,
    // pero el multiset SI acepta el duplicado
    msetIntegers.insert(3000);

    cout<<"Writing the contents of the multiset to the screen"<<endl;
    PrintContents(msetIntegers);         // Imprime: -1, 60, 3000, 3000

    // count() regresa cuantas veces aparece un valor.
    // En un set solo puede dar 0 o 1; en un multiset puede ser mayor.
    cout<<"Number of instances of '3000' in the multiset are: '";
    cout<<msetIntegers.count(3000)<<"'"<<endl;   // Imprime: '2'

    return 0;
}

// Definicion de la funcion plantilla
template<typename Container>
void PrintContents (const Container & stlContainer) {
    // "typename" es OBLIGATORIO aqui: Container::const_iterator depende
    // del parametro de la plantilla, y sin "typename" el compilador no
    // sabe que se trata de un TIPO (podria ser una variable estatica).
    //
    // Usamos const_iterator porque el contenedor se recibio como const:
    // solo podemos leer los elementos, no modificarlos.
    typename Container::const_iterator iElementLocator = stlContainer.begin();

    // end() apunta UNA posicion despues del ultimo elemento,
    // por eso se recorre mientras el iterador sea distinto de end()
    while (iElementLocator!=stlContainer.end()) {
        cout<<*iElementLocator<<endl;    // * desreferencia: obtiene el valor
        iElementLocator++;               // avanza al siguiente elemento (en orden)
    }
}