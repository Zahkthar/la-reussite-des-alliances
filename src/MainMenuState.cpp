#include "MainMenuState.hpp"

void MainMenuState::initImages() {
	if(!this->playButtonTexture.loadFromFile("../res/Images/buttons/playButton.png")) {  }
	if(!this->optionButtonTexture.loadFromFile("../res/Images/buttons/optionButton.png")) {  }
	if(!this->quitButtonTexture.loadFromFile("../res/Images/buttons/quitButton.png")) {  }
}

void MainMenuState::initSounds() {

}

void MainMenuState::initFonts() {
	
}

void MainMenuState::initVariables() {
	this->greenBackground.setFillColor(sf::Color(23, 109, 0));
	this->greenBackground.setSize(sf::Vector2f(this->window->getSize().x, this->window->getSize().y));
	this->greenBackground.setPosition(0, 0);

	this->playButtonSprite.setTexture(this->playButtonTexture);
	this->playButtonSprite.setPosition(sf::Vector2f(this->window->getSize().x / 2 - this->playButtonSprite.getTexture()->getSize().x / 2, this->window->getSize().y / 2 - this->playButtonSprite.getTexture()->getSize().y / 2 - this->playButtonSprite.getTexture()->getSize().y * 2));

	this->optionButtonSprite.setTexture(this->optionButtonTexture);
	this->optionButtonSprite.setPosition(sf::Vector2f(this->window->getSize().x / 2 - this->optionButtonSprite.getTexture()->getSize().x / 2, this->window->getSize().y / 2 - this->optionButtonSprite.getTexture()->getSize().y / 2));

	this->quitButtonSprite.setTexture(this->quitButtonTexture);
	this->quitButtonSprite.setPosition(sf::Vector2f(this->window->getSize().x / 2 - this->quitButtonSprite.getTexture()->getSize().x / 2, this->window->getSize().y / 2 - this->quitButtonSprite.getTexture()->getSize().y / 2 + this->quitButtonSprite.getTexture()->getSize().y * 2));
}

MainMenuState::MainMenuState(StateData* state_data) : State(state_data) {
	this->initImages();
	this->initSounds();
	this->initFonts();
	this->initVariables();
}

MainMenuState::~MainMenuState() {

}

bool MainMenuState::isMouseInTheButton(sf::Sprite button) {
	return button.getGlobalBounds().contains(static_cast<sf::Vector2f>(this->mousePosWindow));
}

void MainMenuState::updateInput(const float& dt) {
	(void)dt; //We will not use this variable here.
	
	if(sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && isMouseInTheButton(this->playButtonSprite)) {
		this->states->push(new GameNormalState(this->stateData));
	}
	
	if(sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && isMouseInTheButton(this->optionButtonSprite)) {
		this->states->push(new OptionMenuState(this->stateData));
	}

	if(sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && isMouseInTheButton(this->quitButtonSprite)) {
		this->endState();
	}
}

void MainMenuState::update(const float& dt) {
	this->updateMousePositions();
	this->updateInput(dt);
}

void MainMenuState::render(sf::RenderTarget* target) {
	if (!target) {
		target = this->window;
	}
	
	// Render things
	this->window->draw(this->greenBackground);
	this->window->draw(this->playButtonSprite);
	this->window->draw(this->optionButtonSprite);
	this->window->draw(this->quitButtonSprite);
}