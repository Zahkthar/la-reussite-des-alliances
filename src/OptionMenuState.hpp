#ifndef OPTION_MENU_STATE_HPP_INCLUDED
#define OPTION_MENU_STATE_HPP_INCLUDED

#include <iostream>
#include <fstream>

#include "SFML/Graphics.hpp"

#include "State.hpp"

class OptionMenuState : public State
{
private:
	// Variables
	bool currentLeftClicButtonState = false;
	bool oldLeftClicButtonState = false;

	sf::RectangleShape greenBackground;

	sf::Texture applyButtonTexture;
	sf::Sprite applyButtonSprite;
	
	sf::Texture plusVolumeButtonTexture;
	sf::Sprite plusVolumeButtonSprite;

	sf::Texture minusVolumeButtonTexture;
	sf::Sprite minusVolumeButtonSprite;

	sf::Font musicVolumeFont;
	sf::Text musicVolumeText;
	int volumeStep = 5;
	int musicVolume = 50;

	// Functions
	void initImages();
	void initSounds();
	void initFonts();
	void initVariables();
	
public:
	OptionMenuState(StateData* state_data);
	virtual ~OptionMenuState();

	// Functions
	bool isMouseInTheSprite(sf::Sprite sprite);

	void updateInput(const float& dt);
	void update(const float& dt);
	void render(sf::RenderTarget* target = NULL);
};

#endif // OPTION_MENU_STATE_HPP_INCLUDED
