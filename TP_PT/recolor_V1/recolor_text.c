#include <stdio.h>
#include "game.h"

int main(void){

color tab[SIZE*SIZE];

game g = game_new(tab,12);

game_delete(g);

};