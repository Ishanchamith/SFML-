#include "Game.h"

int main() {
    // initialize game object
    Game game;

    // game loop
    while (game.isOpen()) 
    {
        // update the game
        game.update();

        // render the game
        game.render();
    }

    // end of application

    return 0;
}