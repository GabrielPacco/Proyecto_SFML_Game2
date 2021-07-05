#pragma once

#include <iostream>
#include <ctime>

#include "Player.h"

class Game
{
private:
	sf::VideoMode videoMode;
	sf::RenderWindow* window;
	bool endGame;
	sf::Event sfmlEvent;

	Player player;
	
	void initVariables();
	void initWindow();

public:
	//Constructor y destructor


	Game();
	~Game();

	const bool running() const;
	void pollEvents();
	//Funciones
	void update();
	void render();//funcion para renderizar la ventana 
};
