#include "Classes/carros.hpp"

float x;

// o tanque de gasolina armazena no máximo 50 litros e o carro faz 15km/l;

/*
Deve ser possivel:
- Abastecer o carro com uma certa quantidade de combustivel
- Mover o carro em uma determinada distãncia(media em km)
- Retornar a quantidade de combustivel e a distãncia percorrida

No progrma principal:
- Crie 2 carros
- Abasteça com 20 litros no primeiro carro e com 30 no segundo
- Exibir na tela a distancia percorrida e o total de combustivel restante para cada um
*/

int DistanciaPercorrida(float a, float b, float c){
	float Distancia = 0;
	if(a == Distancia && c== 0){
		cout << "Defina o valor para mover o carro e a gasolina do mesmo acabou:\n";
	}else{
		
		cout << "A distancia percorrida pelo carro " << b << "é :" << a << "Km\n";
    int i;

		
		do{
			c--;
	
		}while(a > 15);
		
		cout << "A Gasolina que ainda tem em tanque do carro é " <<c<< " l\n";
		
	}
	return 0;
}

int main() {
	Carros c1,c2;

	c1.set_nome("Relampago marquinhos");
	c1.set_combustivel(20);
	c2.set_nome("Relampago marquinhos 2");
	c2.set_combustivel(30);

	cout << "Defina o valor para mover o primeiro carro :\n";
	cin >> x;

	c1.set_distancia(x);

	DistanciaPercorrida(x,1,20);

  cout << "Defina o valor para mover o segundo carro :\n";
	cin >> x;

	c2.set_distancia(x);
  DistanciaPercorrida(x,2,30);
	
}