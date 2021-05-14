#include <iostream>
#include "Pieza.h"
#include "Casilla.h"
#include "Damas.h"

using namespace std; 



int main(int argc, char** argv) {
	
	Damas* objeto = new Damas();
	objeto->jugar();
	
	return 0;
}

