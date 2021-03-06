#include "State.hpp"

State::State(StateData* state_data) {
	this->stateData = state_data;
	this->window = state_data->window;
	this->states = state_data->states;
	this->quit = false;
	this->paused = false;
}

State::~State() {

}

// Accessors
const bool& State::getQuit() const {
	return this->quit;
}

// Functions
void State::endState() {
	this->quit = true;
}

void State::pauseState() {
	this->paused = true;
}

void State::unpauseState() {
	this->paused = false;
}

void State::updateMousePositions(sf::View* view) {
	this->mousePosScreen = sf::Mouse::getPosition();
	this->mousePosWindow = sf::Mouse::getPosition(*this->window);

	if (view) {
		this->window->setView(*view);
	}

	this->mousePosView = this->window->mapPixelToCoords(sf::Mouse::getPosition(*this->window));

	this->window->setView(this->window->getDefaultView());
}