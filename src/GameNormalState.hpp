#ifndef GAME_NORMAL_STATE_HPP_INCLUDED
#define GAME_NORMAL_STATE_HPP_INCLUDED

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

#include "SFML/Graphics.hpp"

#include "State.hpp"

typedef struct card{
	char couleur; // "C", "S", "D" and "H"
	int number; // 1 = A; 11 = J; 12 = Q; 13 = K
	sf::Sprite cardSprite;
} card;

class GameNormalState : public State
{
private:
	// Variables
	bool currentPickButtonState = false;
	bool oldPickButtonState = false;

	bool currentLeftClicButtonState = false;
	bool oldLeftClicButtonState = false;

	sf::RectangleShape greenBackground;

	sf::Texture pickButtonTexture;
	sf::Sprite pickButtonSprite;

	// cardsTextures && cards : [0...12] -> Hearts; [13...25] -> Diamonds; [26...38] -> Spades; [39...51] -> Clubs; [52] for cardTextures
	sf::Texture cardTextures[53];

	std::vector<card> deck;
	std::vector<card> board;

	card theBackCard; // The card to display on top of the deck

	// Functions
	void initImages();
	void initSounds();
	void initFonts();
	void initVariables();
	
public:
	GameNormalState(StateData* state_data);
	virtual ~GameNormalState();

	// Functions
	void shuffleDeck();
	bool isMouseInTheSprite(sf::Sprite sprite);
	void updateCardsPosition();

	void updateInput(const float& dt);
	void update(const float& dt);
	void render(sf::RenderTarget* target = NULL);
};

#endif // GAME_NORMAL_STATE_HPP_INCLUDED
