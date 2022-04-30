#include "GameNormalState.hpp"

void GameNormalState::initImages() {
    if(!this->pickButtonTexture.loadFromFile("../res/Images/buttons/pickButton.png")) {  }

	// Loading deck textures
	if(!this->cardTextures[0].loadFromFile("../res/Images/cards/H1.png")) {  }
	if(!this->cardTextures[1].loadFromFile("../res/Images/cards/H2.png")) {  }
	if(!this->cardTextures[2].loadFromFile("../res/Images/cards/H3.png")) {  }
	if(!this->cardTextures[3].loadFromFile("../res/Images/cards/H4.png")) {  }
	if(!this->cardTextures[4].loadFromFile("../res/Images/cards/H5.png")) {  }
	if(!this->cardTextures[5].loadFromFile("../res/Images/cards/H6.png")) {  }
	if(!this->cardTextures[6].loadFromFile("../res/Images/cards/H7.png")) {  }
	if(!this->cardTextures[7].loadFromFile("../res/Images/cards/H8.png")) {  }
	if(!this->cardTextures[8].loadFromFile("../res/Images/cards/H9.png")) {  }
	if(!this->cardTextures[9].loadFromFile("../res/Images/cards/H10.png")) {  }
	if(!this->cardTextures[10].loadFromFile("../res/Images/cards/H11.png")) {  }
	if(!this->cardTextures[11].loadFromFile("../res/Images/cards/H12.png")) {  }
	if(!this->cardTextures[12].loadFromFile("../res/Images/cards/H13.png")) {  }
	
	if(!this->cardTextures[13].loadFromFile("../res/Images/cards/D1.png")) {  }
	if(!this->cardTextures[14].loadFromFile("../res/Images/cards/D2.png")) {  }
	if(!this->cardTextures[15].loadFromFile("../res/Images/cards/D3.png")) {  }
	if(!this->cardTextures[16].loadFromFile("../res/Images/cards/D4.png")) {  }
	if(!this->cardTextures[17].loadFromFile("../res/Images/cards/D5.png")) {  }
	if(!this->cardTextures[18].loadFromFile("../res/Images/cards/D6.png")) {  }
	if(!this->cardTextures[19].loadFromFile("../res/Images/cards/D7.png")) {  }
	if(!this->cardTextures[20].loadFromFile("../res/Images/cards/D8.png")) {  }
	if(!this->cardTextures[21].loadFromFile("../res/Images/cards/D9.png")) {  }
	if(!this->cardTextures[22].loadFromFile("../res/Images/cards/D10.png")) {  }
	if(!this->cardTextures[23].loadFromFile("../res/Images/cards/D11.png")) {  }
	if(!this->cardTextures[24].loadFromFile("../res/Images/cards/D12.png")) {  }
	if(!this->cardTextures[25].loadFromFile("../res/Images/cards/D13.png")) {  }
	
	if(!this->cardTextures[26].loadFromFile("../res/Images/cards/S1.png")) {  }
	if(!this->cardTextures[27].loadFromFile("../res/Images/cards/S2.png")) {  }
	if(!this->cardTextures[28].loadFromFile("../res/Images/cards/S3.png")) {  }
	if(!this->cardTextures[29].loadFromFile("../res/Images/cards/S4.png")) {  }
	if(!this->cardTextures[30].loadFromFile("../res/Images/cards/S5.png")) {  }
	if(!this->cardTextures[31].loadFromFile("../res/Images/cards/S6.png")) {  }
	if(!this->cardTextures[32].loadFromFile("../res/Images/cards/S7.png")) {  }
	if(!this->cardTextures[33].loadFromFile("../res/Images/cards/S8.png")) {  }
	if(!this->cardTextures[34].loadFromFile("../res/Images/cards/S9.png")) {  }
	if(!this->cardTextures[35].loadFromFile("../res/Images/cards/S10.png")) {  }
	if(!this->cardTextures[36].loadFromFile("../res/Images/cards/S11.png")) {  }
	if(!this->cardTextures[37].loadFromFile("../res/Images/cards/S12.png")) {  }
	if(!this->cardTextures[38].loadFromFile("../res/Images/cards/S13.png")) {  }
	
	if(!this->cardTextures[39].loadFromFile("../res/Images/cards/C1.png")) {  }
	if(!this->cardTextures[40].loadFromFile("../res/Images/cards/C2.png")) {  }
	if(!this->cardTextures[41].loadFromFile("../res/Images/cards/C3.png")) {  }
	if(!this->cardTextures[42].loadFromFile("../res/Images/cards/C4.png")) {  }
	if(!this->cardTextures[43].loadFromFile("../res/Images/cards/C5.png")) {  }
	if(!this->cardTextures[44].loadFromFile("../res/Images/cards/C6.png")) {  }
	if(!this->cardTextures[45].loadFromFile("../res/Images/cards/C7.png")) {  }
	if(!this->cardTextures[46].loadFromFile("../res/Images/cards/C8.png")) {  }
	if(!this->cardTextures[47].loadFromFile("../res/Images/cards/C9.png")) {  }
	if(!this->cardTextures[48].loadFromFile("../res/Images/cards/C10.png")) {  }
	if(!this->cardTextures[49].loadFromFile("../res/Images/cards/C11.png")) {  }
	if(!this->cardTextures[50].loadFromFile("../res/Images/cards/C12.png")) {  }
	if(!this->cardTextures[51].loadFromFile("../res/Images/cards/C13.png")) {  }

	if(!this->cardTextures[52].loadFromFile("../res/Images/cards/backCard.png")) {  }
}

void GameNormalState::initSounds() {

}

void GameNormalState::initFonts() {
	
}

void GameNormalState::initVariables() {
	this->greenBackground.setFillColor(sf::Color(23, 109, 0));
	this->greenBackground.setSize(sf::Vector2f(this->window->getSize().x, this->window->getSize().y));
	this->greenBackground.setPosition(0, 0);

	this->pickButtonSprite.setTexture(this->pickButtonTexture);
	this->pickButtonSprite.setPosition(sf::Vector2f(0, this->window->getSize().y - this->pickButtonSprite.getTexture()->getSize().y));
	
	// Cards creation
	this->deck.push_back({ 'H', 1, sf::Sprite(cardTextures[0]) });
	this->deck.push_back({ 'H', 2, sf::Sprite(cardTextures[1]) });
	this->deck.push_back({ 'H', 3, sf::Sprite(cardTextures[2]) });
	this->deck.push_back({ 'H', 4, sf::Sprite(cardTextures[3]) });
	this->deck.push_back({ 'H', 5, sf::Sprite(cardTextures[4]) });
	this->deck.push_back({ 'H', 6, sf::Sprite(cardTextures[5]) });
	this->deck.push_back({ 'H', 7, sf::Sprite(cardTextures[6]) });
	this->deck.push_back({ 'H', 8, sf::Sprite(cardTextures[7]) });
	this->deck.push_back({ 'H', 9, sf::Sprite(cardTextures[8]) });
	this->deck.push_back({ 'H', 10, sf::Sprite(cardTextures[9]) });
	this->deck.push_back({ 'H', 11, sf::Sprite(cardTextures[10]) });
	this->deck.push_back({ 'H', 12, sf::Sprite(cardTextures[11]) });
	this->deck.push_back({ 'H', 13, sf::Sprite(cardTextures[12]) });
	
	this->deck.push_back({ 'D', 1, sf::Sprite(cardTextures[13]) });
	this->deck.push_back({ 'D', 2, sf::Sprite(cardTextures[14]) });
	this->deck.push_back({ 'D', 3, sf::Sprite(cardTextures[15]) });
	this->deck.push_back({ 'D', 4, sf::Sprite(cardTextures[16]) });
	this->deck.push_back({ 'D', 5, sf::Sprite(cardTextures[17]) });
	this->deck.push_back({ 'D', 6, sf::Sprite(cardTextures[18]) });
	this->deck.push_back({ 'D', 7, sf::Sprite(cardTextures[19]) });
	this->deck.push_back({ 'D', 8, sf::Sprite(cardTextures[20]) });
	this->deck.push_back({ 'D', 9, sf::Sprite(cardTextures[21]) });
	this->deck.push_back({ 'D', 10, sf::Sprite(cardTextures[22]) });
	this->deck.push_back({ 'D', 11, sf::Sprite(cardTextures[23]) });
	this->deck.push_back({ 'D', 12, sf::Sprite(cardTextures[24]) });
	this->deck.push_back({ 'D', 13, sf::Sprite(cardTextures[25]) });
	
	this->deck.push_back({ 'S', 1, sf::Sprite(cardTextures[26]) });
	this->deck.push_back({ 'S', 2, sf::Sprite(cardTextures[27]) });
	this->deck.push_back({ 'S', 3, sf::Sprite(cardTextures[28]) });
	this->deck.push_back({ 'S', 4, sf::Sprite(cardTextures[29]) });
	this->deck.push_back({ 'S', 5, sf::Sprite(cardTextures[30]) });
	this->deck.push_back({ 'S', 6, sf::Sprite(cardTextures[31]) });
	this->deck.push_back({ 'S', 7, sf::Sprite(cardTextures[32]) });
	this->deck.push_back({ 'S', 8, sf::Sprite(cardTextures[33]) });
	this->deck.push_back({ 'S', 9, sf::Sprite(cardTextures[34]) });
	this->deck.push_back({ 'S', 10, sf::Sprite(cardTextures[35]) });
	this->deck.push_back({ 'S', 11, sf::Sprite(cardTextures[36]) });
	this->deck.push_back({ 'S', 12, sf::Sprite(cardTextures[37]) });
	this->deck.push_back({ 'S', 13, sf::Sprite(cardTextures[38]) });
	
	this->deck.push_back({ 'C', 1, sf::Sprite(cardTextures[39]) });
	this->deck.push_back({ 'C', 2, sf::Sprite(cardTextures[40]) });
	this->deck.push_back({ 'C', 3, sf::Sprite(cardTextures[41]) });
	this->deck.push_back({ 'C', 4, sf::Sprite(cardTextures[42]) });
	this->deck.push_back({ 'C', 5, sf::Sprite(cardTextures[43]) });
	this->deck.push_back({ 'C', 6, sf::Sprite(cardTextures[44]) });
	this->deck.push_back({ 'C', 7, sf::Sprite(cardTextures[45]) });
	this->deck.push_back({ 'C', 8, sf::Sprite(cardTextures[46]) });
	this->deck.push_back({ 'C', 9, sf::Sprite(cardTextures[47]) });
	this->deck.push_back({ 'C', 10, sf::Sprite(cardTextures[48]) });
	this->deck.push_back({ 'C', 11, sf::Sprite(cardTextures[49]) });
	this->deck.push_back({ 'C', 12, sf::Sprite(cardTextures[50]) });
	this->deck.push_back({ 'C', 13, sf::Sprite(cardTextures[51]) });

	this->theBackCard = { 'B', 0, sf::Sprite(cardTextures[52]) };

	for(size_t i = 0; i < deck.size(); ++i) {
		this->deck[i].cardSprite.setScale(3.0f, 3.0f);
		this->deck[i].cardSprite.setPosition(sf::Vector2f(this->window->getSize().x - this->deck[i].cardSprite.getTexture()->getSize().x * this->deck[i].cardSprite.getScale().x, this->window->getSize().y - this->deck[i].cardSprite.getTexture()->getSize().y * this->deck[i].cardSprite.getScale().y - 25));
	}
	
	this->theBackCard.cardSprite.setScale(3.0f, 3.0f);
	this->theBackCard.cardSprite.setPosition(deck.back().cardSprite.getPosition());

	shuffleDeck();
}

GameNormalState::GameNormalState(StateData* state_data) : State(state_data) {
	this->initImages();
	this->initSounds();
	this->initFonts();
	this->initVariables();
}

GameNormalState::~GameNormalState() {
	
}

void GameNormalState::shuffleDeck() {
	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(this->deck.begin(), this->deck.end(), g);
}

bool GameNormalState::isMouseInTheSprite(sf::Sprite sprite) {
	return sprite.getGlobalBounds().contains(static_cast<sf::Vector2f>(this->mousePosWindow));
}

void GameNormalState::updateCardsPosition() {
	for(size_t i = 0; i < this->board.size(); ++i) {
		this->board[i].cardSprite.setPosition(sf::Vector2f(35 + 100 * (i % 10), 60 + this->board[i].cardSprite.getTexture()->getSize().y * this->board[i].cardSprite.getScale().y * (i / 10)));
	}
}

void GameNormalState::updateInput(const float& dt) {
	(void)dt; //We will not use this variable here.

	this->currentLeftClicButtonState = sf::Mouse::isButtonPressed(sf::Mouse::Button::Left);
	this->currentPickButtonState = sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && isMouseInTheSprite(this->pickButtonSprite);

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) { this->endState(); }

	if(currentPickButtonState != oldPickButtonState && currentPickButtonState == true) {
		if(this->deck.empty() == false) {
			this->board.push_back(this->deck.back());
			this->deck.pop_back();

			updateCardsPosition();
		}
	}

	for(size_t i = 0; i < this->board.size(); ++i) {
		if(this->currentLeftClicButtonState != this->oldLeftClicButtonState && this->currentLeftClicButtonState == 1 && isMouseInTheSprite(this->board[i].cardSprite)) {
			if(i >= 1 && i <= this->board.size() - 1) { // We can't if there is no card left or right
				if(this->board[i - 1].couleur == this->board[i + 1].couleur || this->board[i - 1].number == this->board[i + 1].number) {
					this->board.erase(this->board.begin() + i - 1); // delete the left card so all the card realign themselves
					updateCardsPosition();
				}
			}
		}
	}

	this->oldLeftClicButtonState = this->currentLeftClicButtonState;
	this->oldPickButtonState = this->currentPickButtonState;
}

void GameNormalState::update(const float& dt) {
	this->updateMousePositions();
	this->updateInput(dt);
}

void GameNormalState::render(sf::RenderTarget* target) {
	if (!target) {
		target = this->window;
	}

	// Render things
	this->window->draw(this->greenBackground);
	this->window->draw(this->pickButtonSprite);

	for(size_t i = 0; i < deck.size(); ++i) {
		this->window->draw(deck[i].cardSprite);
	}
	if(this->deck.size() > 0) { this->window->draw(theBackCard.cardSprite); }

	for(size_t i = 0; i < board.size(); ++i) {
		this->window->draw(board[i].cardSprite);
	}
}