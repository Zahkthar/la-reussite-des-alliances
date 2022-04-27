#ifndef MAIN_MENU_STATE_HPP_INCLUDED
#define MAIN_MENU_STATE_HPP_INCLUDED

#include <iostream>

#include "SFML/Graphics.hpp"

#include "State.hpp"

class MainMenuState : public State
{
private:
	// Variables
	const int BUTTON_HEIGHT = 50;
	const int BUTTON_WIDTH = 400;

	sf::RectangleShape playButton;
	sf::RectangleShape optionButton;
	sf::RectangleShape quitButton;

	// Functions
	void initImages();
	void initSounds();
	void initFonts();
	void initVariables();
	
public:
	MainMenuState(StateData* state_data);
	virtual ~MainMenuState();

	// Functions
	bool isMouseInTheButton(sf::RectangleShape button);

	void updateInput(const float& dt);
	void update(const float& dt);
	void render(sf::RenderTarget* target = NULL);
};

#endif // MAIN_MENU_STATE_HPP_INCLUDED
