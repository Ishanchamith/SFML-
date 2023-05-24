#include "Game.h"

void Game::initVariables()
{
}

void Game::initWindow()
{
    /*
        @return void 

        - Initialize window
    */

    this->videoMode.width = 1024;
    this->videoMode.height = 720;
    this->window = new sf::RenderWindow(this->videoMode, "Game", sf::Style::Titlebar | sf::Style::Close);
    this->window->setFramerateLimit(60);
}

Game::Game() 
{
    this->initVariables();
    this->initWindow();
}

Game::~Game()
{
    delete this->window;
}

void Game::update()
{
    this->eventPolling();
}

void Game::render()
{
}

bool Game::isOpen()
{
    /*
        @return void

        Returns whether window is open or not.
    */
    return this->window->isOpen();
}

void Game::eventPolling()
{
    // event polling
    while (this->window->pollEvent(this->event)) 
    {
        switch (event.type) 
        {
            case sf::Event::Closed:
                this->window->close();
                break;

            case sf::Event::KeyPressed:
                if(event.key.code == sf::Keyboard::Escape)
                    this->window->close();
                    break;
        }
    }
}
