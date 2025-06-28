#include <iostream>
#include "10.3.h"

int main(){
    Golf player1 ("John Doe", 10);
    player1.showgolf();
    player1.setHandicap(15);
    player1.showgolf();
    player1.setgolf();
    player1.showgolf();
    return 0;
}