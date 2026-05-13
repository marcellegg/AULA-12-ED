#include <iostream>
#include <list>

using namespace std;

class Fila {
public:
	Fila() {}
	
	void enfileirar (int elemento){
		lista.push_back(elemento);
	}
	
    int desenfileirar() {
    	if (lista.empty()) {
    	return -1;
		
	}
	
	int elemento = lista.front();
	lista.pop_front();
	return elemento;
	
}
  
  bool vazia() {
  	return lista.empty();
  }
  void mostrarElementosFila(){
  	for (auto i: lista){
  	     cout << "Elementos " <<i << endl;
	  }
  }
  
private:
	list<int> lista;
  };              
  
  int main() {
  	Fila fila;
  	
  	fila.enfileirar(1);
  	fila.enfileirar(2);
  	fila.enfileirar(3);
  	fila.desenfileirar();
  	
  	fila.mostrarElementosFila();
  	
    return 0;
  }
