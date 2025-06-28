#include <iostream>
#include "golf.h"

int main(){
    golf player1;
    setgolf(player1, "John Doe", 10);
    showgolf(player1);
    
    handicap(player1, 15);
    showgolf(player1);
    
    golf players[5];
    int i = 0;
    while (i < 5 && setgolf(players[i])){
        showgolf(players[i]);
        i++;
    }
    return 0;
}