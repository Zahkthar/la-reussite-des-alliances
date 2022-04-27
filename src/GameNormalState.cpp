#include "GameNormalState.hpp""

void GameNormalState::initImages() {
    
}

void GameNormalState::initSounds() {

}

void GameNormalState::initFonts() {
	
}

void GameNormalState::initVariables() {
    
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
}