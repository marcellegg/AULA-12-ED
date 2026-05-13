#include <iostream>
#include <list>
#include <string>
#include <windows.h>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

class Fila {

private:
    list<Pessoa> fila;

public:

    
    void enfileirar(string nome, int idade) {

        Pessoa p;

        p.nome = nome;
        p.idade = idade;

        fila.push_back(p);
    }

    
    void desenfileirar() {

        if (fila.empty()) {

            cout << "Fila vazia!\n";
            return;
        }

        cout << "\nAtendendo: "
             << fila.front().nome
             << " - "
             << fila.front().idade
             << " anos\n";

        Sleep(2000);

        cout << "Paciente atendido!\n";

        fila.pop_front();

        Sleep(1000);
    }

    
    void mostrarFilaSemRegra() {

        cout << "\n===== FILA SEM PRIORIDADE =====\n\n";

        for (auto p : fila) {

            cout << p.nome
                 << " - "
                 << p.idade
                 << " anos\n";

            Sleep(500);
        }
    }

   
    void mostrarFilaComRegra() {

        cout << "\n===== FILA COM PRIORIDADE =====\n\n";

        cout << "PRIORIDADE (+60 anos):\n\n";

    
        for (auto p : fila) {

            if (p.idade > 60) {

                cout << p.nome
                     << " - "
                     << p.idade
                     << " anos\n";

                Sleep(500);
            }
        }

        cout << "\nDEMAIS PACIENTES:\n\n";

      
        for (auto p : fila) {

            if (p.idade <= 60) {

                cout << p.nome
                     << " - "
                     << p.idade
                     << " anos\n";

                Sleep(500);
            }
        }
    }
};

int main() {

    Fila fila;

    // 15 pessoas
    fila.enfileirar("Joao", 25);
    fila.enfileirar("Maria", 30);
    fila.enfileirar("Carlos", 70);
    fila.enfileirar("Ana", 22);
    fila.enfileirar("Lucia", 65);
    fila.enfileirar("Pedro", 40);
    fila.enfileirar("Fatima", 75);
    fila.enfileirar("Jose", 33);
    fila.enfileirar("Marcia", 55);
    fila.enfileirar("Paulo", 61);
    fila.enfileirar("Roberto", 28);
    fila.enfileirar("Eulalia", 50);
    fila.enfileirar("Agenor", 45);
    fila.enfileirar("Fernanda", 19);
    fila.enfileirar("Ricardo", 38);

    // FILA NORMAL
    fila.mostrarFilaSemRegra();

    Sleep(3000);

    // FILA COM PRIORIDADE
    fila.mostrarFilaComRegra();

    Sleep(3000);

   
    cout << "\n===== INICIANDO ATENDIMENTO =====\n";

    fila.desenfileirar();
    fila.desenfileirar();
    fila.desenfileirar();

    cout << "\nFim do atendimento.\n";

    return 0;
}
