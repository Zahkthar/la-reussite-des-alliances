#include "GameNormalState.hpp"

void GameNormalState::initImages() {
    if(!this->pickButtonTexture.loadFromFile("../res/Images/buttons/playButton.png")) {  }
    if(!this->jumpButtonTexture.loadFromFile("../res/Images/buttons/playButton.png")) {  }
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

	this->jumpButtonSprite.setTexture(this->jumpButtonTexture);
	this->jumpButtonSprite.setPosition(sf::Vector2f(this->window->getSize().x / 2, this->window->getSize().y - this->pickButtonSprite.getTexture()->getSize().y));
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
	this->window->draw(this->jumpButtonSprite);
}