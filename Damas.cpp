#include "Damas.h"
#include <iostream>

using namespace std; 

Damas::Damas(){

}

void Damas :: iniciartablero(){
	tablero = new Casilla**[8];
	for (int c =0; c < 8; c++){
		tablero [c] = new Casilla* [8];
	}
	
	for (int c =0; c < 8; c++){
		for (int j = 0; j < 8;j++){
			if (c % 2 == 1 && (j == 0 || j == 2 || j == 6)){
				if (j == 6){ 
					tablero [c][j] = new Casilla(new Pieza(false, false));  
				}else {
					tablero [c][j] = new Casilla(new Pieza(true, false)); 
				}
			}else if (c % 2 == 0 && (j == 1 || j == 5 || j == 7 )){
				if (j == 1){
					tablero [c][j] = new Casilla(new Pieza(true, false)); 
				}else {
					tablero [c][j] = new Casilla(new Pieza(false, false)); 
				}
			}
		}
	}
}

void Damas :: imprimirtablero(){
	for (int c =0; c < 8; c++){
		for (int j = 0; j < 8;j++){
			Casilla* objeto = tablero [c][j];
			Pieza* pieza = objeto->GETpieza();
			bool n = pieza->GETbando();
			if (n == true){
				cout << 'O' << " ";
			}else if (n == false){
				cout << 'X' << " ";
			}
		}
		cout <<endl; 
	}
}

void Damas :: jugar(){
	iniciartablero();
	imprimirtablero();
}


Damas::~Damas(){

}