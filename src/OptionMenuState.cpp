#include "OptionMenuState.hpp"

void OptionMenuState::initImages() {
    
}

void OptionMenuState::initSounds() {

}

void OptionMenuState::initFonts() {
	
}

void OptionMenuState::initVariables() {
    
}

OptionMenuState::OptionMenuState(StateData* state_data) : State(state_data) {
	this->initImages();
	this->initSounds();
	this->initFonts();
	this->initVariables();
}

OptionMenuState::~OptionMenuState() {

}

void OptionMenuState::updateInput(const float& dt) {
	(void)dt; //We will not use this variable here.
}

void OptionMenuState::update(const float& dt) {
	this->updateMousePositions();
	this->updateInput(dt);
}

void OptionMenuState::render(sf::RenderTarget* target) {
	if (!target) {
		target = this->window;
	}
	
	// Render things
}