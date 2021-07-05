#include "Game.h"

//using namespace sf;

int main()
{
	//Inicializar la semilla aleatoria
	srand(static_cast<unsigned>(time(0)));

	//Inicializar el objeto de juego
	Game game;

	//Bucle de juego
	while (game.running())
	{
		game.update();
		game.render();
	}

	//Fin de la aplicación
	return 0;
}