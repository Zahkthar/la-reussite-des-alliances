#include "GameNormalState.hpp"

void GameNormalState::initImages() {
    if(!this->pickButtonTexture.loadFromFile("../res/Images/buttons/pickButton.png")) {  }

	// Loading cards textures
	if(!this->cardTextures[0].loadFromFile("../res/Images/cards/backCard.png")) {  }

	if(!this->cardTextures[1].loadFromFile("../res/Images/cards/H1.png")) {  }
	if(!this->cardTextures[2].loadFromFile("../res/Images/cards/H2.png")) {  }
	if(!this->cardTextures[3].loadFromFile("../res/Images/cards/H3.png")) {  }
	if(!this->cardTextures[4].loadFromFile("../res/Images/cards/H4.png")) {  }
	if(!this->cardTextures[5].loadFromFile("../res/Images/cards/H5.png")) {  }
	if(!this->cardTextures[6].loadFromFile("../res/Images/cards/H6.png")) {  }
	if(!this->cardTextures[7].loadFromFile("../res/Images/cards/H7.png")) {  }
	if(!this->cardTextures[8].loadFromFile("../res/Images/cards/H8.png")) {  }
	if(!this->cardTextures[9].loadFromFile("../res/Images/cards/H9.png")) {  }
	if(!this->cardTextures[10].loadFromFile("../res/Images/cards/H10.png")) {  }
	if(!this->cardTextures[11].loadFromFile("../res/Images/cards/H11.png")) {  }
	if(!this->cardTextures[12].loadFromFile("../res/Images/cards/H12.png")) {  }
	if(!this->cardTextures[13].loadFromFile("../res/Images/cards/H13.png")) {  }
	
	if(!this->cardTextures[14].loadFromFile("../res/Images/cards/D1.png")) {  }
	if(!this->cardTextures[15].loadFromFile("../res/Images/cards/D2.png")) {  }
	if(!this->cardTextures[16].loadFromFile("../res/Images/cards/D3.png")) {  }
	if(!this->cardTextures[17].loadFromFile("../res/Images/cards/D4.png")) {  }
	if(!this->cardTextures[18].loadFromFile("../res/Images/cards/D5.png")) {  }
	if(!this->cardTextures[19].loadFromFile("../res/Images/cards/D6.png")) {  }
	if(!this->cardTextures[20].loadFromFile("../res/Images/cards/D7.png")) {  }
	if(!this->cardTextures[21].loadFromFile("../res/Images/cards/D8.png")) {  }
	if(!this->cardTextures[22].loadFromFile("../res/Images/cards/D9.png")) {  }
	if(!this->cardTextures[23].loadFromFile("../res/Images/cards/D10.png")) {  }
	if(!this->cardTextures[24].loadFromFile("../res/Images/cards/D11.png")) {  }
	if(!this->cardTextures[25].loadFromFile("../res/Images/cards/D12.png")) {  }
	if(!this->cardTextures[26].loadFromFile("../res/Images/cards/D13.png")) {  }
	
	if(!this->cardTextures[27].loadFromFile("../res/Images/cards/S1.png")) {  }
	if(!this->cardTextures[28].loadFromFile("../res/Images/cards/S2.png")) {  }
	if(!this->cardTextures[29].loadFromFile("../res/Images/cards/S3.png")) {  }
	if(!this->cardTextures[30].loadFromFile("../res/Images/cards/S4.png")) {  }
	if(!this->cardTextures[31].loadFromFile("../res/Images/cards/S5.png")) {  }
	if(!this->cardTextures[32].loadFromFile("../res/Images/cards/S6.png")) {  }
	if(!this->cardTextures[33].loadFromFile("../res/Images/cards/S7.png")) {  }
	if(!this->cardTextures[34].loadFromFile("../res/Images/cards/S8.png")) {  }
	if(!this->cardTextures[35].loadFromFile("../res/Images/cards/S9.png")) {  }
	if(!this->cardTextures[36].loadFromFile("../res/Images/cards/S10.png")) {  }
	if(!this->cardTextures[37].loadFromFile("../res/Images/cards/S11.png")) {  }
	if(!this->cardTextures[38].loadFromFile("../res/Images/cards/S12.png")) {  }
	if(!this->cardTextures[39].loadFromFile("../res/Images/cards/S13.png")) {  }
	
	if(!this->cardTextures[40].loadFromFile("../res/Images/cards/C1.png")) {  }
	if(!this->cardTextures[41].loadFromFile("../res/Images/cards/C2.png")) {  }
	if(!this->cardTextures[42].loadFromFile("../res/Images/cards/C3.png")) {  }
	if(!this->cardTextures[43].loadFromFile("../res/Images/cards/C4.png")) {  }
	if(!this->cardTextures[44].loadFromFile("../res/Images/cards/C5.png")) {  }
	if(!this->cardTextures[45].loadFromFile("../res/Images/cards/C6.png")) {  }
	if(!this->cardTextures[46].loadFromFile("../res/Images/cards/C7.png")) {  }
	if(!this->cardTextures[47].loadFromFile("../res/Images/cards/C8.png")) {  }
	if(!this->cardTextures[48].loadFromFile("../res/Images/cards/C9.png")) {  }
	if(!this->cardTextures[49].loadFromFile("../res/Images/cards/C10.png")) {  }
	if(!this->cardTextures[50].loadFromFile("../res/Images/cards/C11.png")) {  }
	if(!this->cardTextures[51].loadFromFile("../res/Images/cards/C12.png")) {  }
	if(!this->cardTextures[52].loadFromFile("../res/Images/cards/C13.png")) {  }
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
}

GameNormalState::GameNormalState(StateData* state_data) : State(state_data) {
	this->initImages();
	this->initSounds();
	this->initFonts();
	this->initVariables();
}

GameNormalState::~GameNormalState() {
	
}

void GameNormalState::updateInput(const float& dt) {
	(void)dt; //We will not use this variable here.

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) { this->endState(); }
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
}