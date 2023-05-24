/*
    class that act as game engine
*/

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>

class Game
{
    // private variables
private:
    sf::RenderWindow *window;
    sf::Event event;
    sf::VideoMode videoMode;

    //  initializer functions
    void initVariables();
    void initWindow();

public:
    // constructor & destructor
    Game();
    ~Game();

    // accesser functions
    bool isOpen();

    // control functions
    void eventPolling();

    // update functions & render functions
    void update();
    void render();
};
