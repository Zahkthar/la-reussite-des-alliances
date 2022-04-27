#include "MainMenuState.hpp"

void MainMenuState::initImages() {
	
}

void MainMenuState::initSounds() {

}

void MainMenuState::initFonts() {
	
}

void MainMenuState::initVariables() {
	this->playButton.setSize(sf::Vector2f(this->BUTTON_WIDTH, this->BUTTON_HEIGHT));
	this->playButton.setFillColor(sf::Color(107, 7, 26));
	this->playButton.setOutlineColor(sf::Color(58, 58, 58));
	this->playButton.setOutlineThickness(2.0f);
	this->playButton.setPosition(sf::Vector2f(this->window->getSize().x / 2 - this->playButton.getSize().x / 2, this->window->getSize().y / 2 - this->playButton.getSize().y / 2 - this->BUTTON_HEIGHT * 2));
	
	this->optionButton.setSize(sf::Vector2f(this->BUTTON_WIDTH, this->BUTTON_HEIGHT));
	this->optionButton.setFillColor(sf::Color(107, 7, 26));
	this->optionButton.setOutlineColor(sf::Color(58, 58, 58));
	this->optionButton.setOutlineThickness(2.0f);
	this->optionButton.setPosition(sf::Vector2f(this->window->getSize().x / 2 - this->optionButton.getSize().x / 2, this->window->getSize().y / 2 - this->optionButton.getSize().y / 2));

	this->quitButton.setSize(sf::Vector2f(this->BUTTON_WIDTH, this->BUTTON_HEIGHT));
	this->quitButton.setFillColor(sf::Color(107, 7, 26));
	this->quitButton.setOutlineColor(sf::Color(58, 58, 58));
	this->quitButton.setOutlineThickness(2.0f);
	this->quitButton.setPosition(sf::Vector2f(this->window->getSize().x / 2 - this->quitButton.getSize().x / 2, this->window->getSize().y / 2 - this->quitButton.getSize().y / 2 + this->BUTTON_HEIGHT * 2));
}

MainMenuState::MainMenuState(StateData* state_data) : State(state_data) {
	this->initImages();
	this->initSounds();
	this->initFonts();
	this->initVariables();
}

MainMenuState::~MainMenuState() {

}

bool MainMenuState::isMouseInTheButton(sf::RectangleShape button) {
	return this->mousePosWindow.x > button.getPosition().x && this->mousePosWindow.x < button.getPosition().x + button.getSize().x &&
	   	   this->mousePosWindow.y > button.getPosition().y && this->mousePosWindow.y < button.getPosition().y + button.getSize().y;
}

void MainMenuState::updateInput(const float& dt) {
	(void)dt; //We will not use this variable here.
	
	//this->states->push(new AnotherState(this->stateData)); -> push un enfant de State dans states
	//this->endState(); -> Supprime le top de states

	// A régler : Quand on clique sur le bouton, le bouton se clique plusieurs fois. Ici ça ne pose pas de problème vu qu'on change de State, mais c'est un peu sale, il faudrait ajouter un oldClicState et currentClicState ou un truc du genre 
	if(sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && isMouseInTheButton(this->playButton)) {
		std::cout << "playButton clicked" << std::endl;
	}
	
	if(sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && isMouseInTheButton(this->optionButton)) {
		std::cout << "optionButton clicked" << std::endl;
	}

	if(sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && isMouseInTheButton(this->quitButton)) {
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
	this->window->draw(this->playButton);
	this->window->draw(this->optionButton);
	this->window->draw(this->quitButton);
}