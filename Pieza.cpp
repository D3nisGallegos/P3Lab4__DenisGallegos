#include "Pieza.h"
#include <iostream>
#include <cstdlib>

Pieza::Pieza(){
	
}

Pieza::Pieza(bool x, bool y){
	bando = x;	
	reina = y; 
}

Pieza::~Pieza(){
	bando = NULL; 
	reina = NULL; 
}


void Pieza :: convertirblanca(){
	bando = true; 
}

void Pieza :: convertirnegra(){
	bando = false; 
}

void Pieza :: convertirreina(){
	reina = true; 
}

bool Pieza :: GETbando(){
	return bando; 
}

bool Pieza :: GETreina(){
	return reina; 
}

