#include <iostream>
#include "GameManager.h"

using namespace std;





int main() {
   int n;
   cout << "How big of a board do you want? (Minimum is 3): " << '\n';
   cin >> n;
    GameManager game(n);
    game.printBoard();
   
    while (!game.isGameOver()) {
        game.getPlayerInput(); 
        game.togglePlayerChar();
        game.printBoard();
    }


    return 0;
}