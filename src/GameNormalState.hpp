#ifndef GAME_NORMAL_STATE_HPP_INCLUDED
#define GAME_NORMAL_STATE_HPP_INCLUDED

#include <iostream>
#include <cstring>

#include "SFML/Graphics.hpp"

#include "State.hpp"

typedef struct card{
	char couleur; // "C", "S", "D" and "H"
	int number;
} card;

class GameNormalState : public State
{
private:
	// Variables
	sf::RectangleShape greenBackground;

	sf::Texture pickButtonTexture;
	sf::Sprite pickButtonSprite;

	// cardsTextures && cards : [0...12] -> Hearts; [13...25] -> Diamonds; [26...38] -> Spades; [39...51] -> Clubs; [52] for cardTextures, cardTextures[52] is backCard
	sf::Texture cardTextures[53];
	card cards[52];

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
