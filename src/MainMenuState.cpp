#include "MainMenuState.hpp"

void MainMenuState::initImages() {
	
}

void MainMenuState::initSounds() {

}

void MainMenuState::initFonts() {
	
}

void MainMenuState::initVariables() {

}

MainMenuState::MainMenuState(StateData* state_data) : State(state_data)
{
	this->initImages();
	this->initSounds();
	this->initFonts();
	this->initVariables();
}

MainMenuState::~MainMenuState()
{

}

void MainMenuState::updateInput(const float& dt)
{
	(void)dt; //We will not use this variable here.
	
	//this->states->push(new AnotherState(this->stateData)); -> push un enfant de State dans states
	//this->endState(); -> Supprime le top de states
}

void MainMenuState::update(const float& dt)
{
	this->updateMousePositions();
	this->updateInput(dt);
}

void MainMenuState::render(sf::RenderTarget* target)
{
	if (!target) {
		target = this->window;
	}
	
	// Render things
}