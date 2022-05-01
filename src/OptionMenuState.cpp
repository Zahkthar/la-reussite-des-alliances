#include "OptionMenuState.hpp"

void OptionMenuState::initImages() {
    if(!this->applyButtonTexture.loadFromFile("../res/Images/buttons/applyButton.png")) {  }
    if(!this->plusVolumeButtonTexture.loadFromFile("../res/Images/buttons/plusVolumeButton.png")) {  }
    if(!this->minusVolumeButtonTexture.loadFromFile("../res/Images/buttons/minusVolumeButton.png")) {  }
}

void OptionMenuState::initSounds() {

}

void OptionMenuState::initFonts() {
    if(!this->musicVolumeFont.loadFromFile("../res/Fonts/Courier New.ttf")) {  }
}

void OptionMenuState::initVariables() {
	this->greenBackground.setFillColor(sf::Color(23, 109, 0));
	this->greenBackground.setSize(sf::Vector2f(this->window->getSize().x, this->window->getSize().y));
	this->greenBackground.setPosition(0, 0);

	this->applyButtonSprite.setTexture(this->applyButtonTexture);
	this->applyButtonSprite.setPosition(sf::Vector2f(0, this->window->getSize().y - this->applyButtonSprite.getTexture()->getSize().y));
	
	this->musicVolumeText.setFont(this->musicVolumeFont);
	this->musicVolumeText.setCharacterSize(25);
	this->musicVolumeText.setString(std::to_string(this->musicVolume));
	this->musicVolumeText.setPosition(sf::Vector2f(this->window->getSize().x / 2, this->window->getSize().y / 2));

	this->plusVolumeButtonSprite.setTexture(this->plusVolumeButtonTexture);
	this->plusVolumeButtonSprite.setPosition(sf::Vector2f(this->musicVolumeText.getPosition().x + 2 * this->musicVolumeText.getLocalBounds().width, this->musicVolumeText.getPosition().y));
	
	this->minusVolumeButtonSprite.setTexture(this->plusVolumeButtonTexture);
	this->minusVolumeButtonSprite.setPosition(sf::Vector2f(this->musicVolumeText.getPosition().x - this->musicVolumeText.getLocalBounds().width - minusVolumeButtonTexture.getSize().x, this->musicVolumeText.getPosition().y));
}

OptionMenuState::OptionMenuState(StateData* state_data) : State(state_data) {
	this->initImages();
	this->initSounds();
	this->initFonts();
	this->initVariables();
}

OptionMenuState::~OptionMenuState() {

}

bool OptionMenuState::isMouseInTheSprite(sf::Sprite sprite) {
	return sprite.getGlobalBounds().contains(static_cast<sf::Vector2f>(this->mousePosWindow));
}

void OptionMenuState::updateInput(const float& dt) {
	(void)dt; //We will not use this variable here.

	this->currentLeftClicButtonState = sf::Mouse::isButtonPressed(sf::Mouse::Button::Left);

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) { this->endState(); }

	if(this->currentLeftClicButtonState != this->oldLeftClicButtonState && this->currentLeftClicButtonState == true && isMouseInTheSprite(this->applyButtonSprite)) {
		std::ofstream configFile;
		configFile.open("../res/config.ini", std::ios::out | std::ios::trunc);
		configFile << std::to_string(this->musicVolume);
		configFile.close();
	}

	if(this->currentLeftClicButtonState != this->oldLeftClicButtonState && this->currentLeftClicButtonState == true && isMouseInTheSprite(this->plusVolumeButtonSprite)) {
		this->musicVolume += 1;
		this->musicVolumeText.setString(std::to_string(this->musicVolume));
	}

	if(this->currentLeftClicButtonState != this->oldLeftClicButtonState && this->currentLeftClicButtonState == true && isMouseInTheSprite(this->minusVolumeButtonSprite)) {
		this->musicVolume -= 1;
		this->musicVolumeText.setString(std::to_string(this->musicVolume));
	}

	this->oldLeftClicButtonState = this->currentLeftClicButtonState;
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
	this->window->draw(this->greenBackground);
	this->window->draw(this->applyButtonSprite);

	this->window->draw(this->musicVolumeText);
	this->window->draw(this->plusVolumeButtonSprite);
	this->window->draw(this->minusVolumeButtonSprite);
}