#ifndef GAME_NORMAL_STATE_HPP_INCLUDED
#define GAME_NORMAL_STATE_HPP_INCLUDED

#include <iostream>

#include "SFML/Graphics.hpp"

#include "State.hpp"

typedef struct card{
	char couleur;
	int number;
	int textureID;
} card;

class GameNormalState : public State
{
private:
	// Variables
	sf::RectangleShape greenBackground;

	sf::Texture pickButtonTexture;
	sf::Sprite pickButtonSprite;

	

	// Functions
	void initImages();
	void initSounds();
	void initFonts();
	void initVariables();
	
public:
	GameNormalState(StateData* state_data);
	virtual ~GameNormalState();

	// Functions
	void updateInput(const float& dt);
	void update(const float& dt);
	void render(sf::RenderTarget* target = NULL);
};

#endif // GAME_NORMAL_STATE_HPP_INCLUDED
