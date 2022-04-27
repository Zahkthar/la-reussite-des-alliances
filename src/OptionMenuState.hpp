#ifndef OPTION_MENU_STATE_HPP_INCLUDED
#define OPTION_MENU_STATE_HPP_INCLUDED

#include <iostream>

#include "SFML/Graphics.hpp"

#include "State.hpp"

class OptionMenuState : public State
{
private:
	// Variables

	// Functions
	void initImages();
	void initSounds();
	void initFonts();
	void initVariables();
	
public:
	OptionMenuState(StateData* state_data);
	virtual ~OptionMenuState();

	// Functions
	void updateInput(const float& dt);
	void update(const float& dt);
	void render(sf::RenderTarget* target = NULL);
};

#endif // OPTION_MENU_STATE_HPP_INCLUDED
