#include <iostream>
#include <list>
#include <windows.h>
#include <string>

using namespace std;

class Fila {
public:

    void enfileirar(string elemento) {
        lista.push_back(elemento);
    }

    string desenfileirar() {
        if (lista.empty()) {
            return "Fila vazia!";
        }

        string elemento = lista.front();
        lista.pop_front();
        return elemento;
    }
    
        bool vazia() {
        return lista.empty();
        
    }

    void mostrarElementosFila() {
    	 for (auto i : lista) {
            cout << "Elemento: " << i << endl;

            }
        }


private:
    list<string> lista;
};

int main() {

    Fila fila;

    fila.enfileirar("Joao");
    fila.enfileirar("Jose");
    fila.enfileirar("Maria");
    fila.enfileirar("Lucia");
    fila.enfileirar("Fatima");
    fila.enfileirar("Carlos");
    fila.enfileirar("Ana");
    fila.enfileirar("Pedro");
    fila.enfileirar("Paulo");

    cout << "Fila inicial\n";
     fila.mostrarElementosFila();
     
         Sleep(1000);

    cout << "\nReceberam a aposentadoria:\n";

    cout << fila.desenfileirar() << endl;
    cout << fila.desenfileirar() << endl;
    cout << fila.desenfileirar() << endl;
    cout << fila.desenfileirar() << endl;
    cout << fila.desenfileirar() << endl;

    cout << "\nNovos aposentados chegaram na fila:\n";

    fila.enfileirar("Pedro");
    fila.enfileirar("Eulalia");
    fila.enfileirar("Marcia");
    fila.enfileirar("Agenor");

      cout << "\nFila Atualizada:\n";
    fila.mostrarElementosFila();

    return 0;
}
