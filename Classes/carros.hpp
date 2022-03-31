#include <iostream>
using namespace std;

class Carros{

	public:
		void set_nome(string n);
		string getNome();
		void set_combustivel(float a);
		float getCombustivel();
		void mover(float a);
		void set_distancia(float a);
		float getDistancia();
	
	private:
		string get_nome;
		float get_combustivel;
		float get_distancia;

};