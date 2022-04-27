#ifndef MAIN_MENU_STATE_HPP_INCLUDED
#define MAIN_MENU_STATE_HPP_INCLUDED

#include <iostream>

#include "SFML/Graphics.hpp"

#include "State.hpp"
#include "GameNormalState.hpp"
#include "OptionMenuState.hpp"

class MainMenuState : public State
{
private:
	// Variables
	sf::RectangleShape greenBackground;

	sf::Texture playButtonTexture;
	sf::Texture optionButtonTexture;
	sf::Texture quitButtonTexture;

	sf::Sprite playButtonSprite;
	sf::Sprite optionButtonSprite;
	sf::Sprite quitButtonSprite;

	// Functions
	void initImages();
	void initSounds();
	void initFonts();
	void initVariables();
	
public:
	MainMenuState(StateData* state_data);
	virtual ~MainMenuState();

	// Functions
	bool isMouseInTheButton(sf::Sprite button);

	void updateInput(const float& dt);
	void update(const float& dt);
	void render(sf::RenderTarget* target = NULL);
};

#endif // MAIN_MENU_STATE_HPP_INCLUDED
