#include <iostream>
#include "GameManager.h"

using namespace std;





int main() {
   int n;
   while (n < 3 || n > 10) {
       cout << "How big of a board do you want? (Minimum is 3, and Maximum is 10): " << '\n';
       cin >> n;
   }


     GameManager game(n);
     game.printBoard();
    
    
     while (!game.isGameOver()) {
         game.getPlayerInput(); 
         game.togglePlayerChar();
         game.printBoard();
     }


    return 0;
}