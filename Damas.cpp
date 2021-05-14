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
			tablero [c][j] = NULL; 
		}
	}

	tablero [0][0] = new Casilla(new Pieza(true, false));  
	tablero [0][2] = new Casilla(new Pieza(true, false));
	tablero [0][4] = new Casilla(new Pieza(true, false));  
	tablero [0][6] = new Casilla(new Pieza(true, false)); 
	tablero [1][1] = new Casilla(new Pieza(true, false));  
	tablero [1][3] = new Casilla(new Pieza(true, false));
	tablero [1][5] = new Casilla(new Pieza(true, false));  
	tablero [1][7] = new Casilla(new Pieza(true, false)); 
	tablero [2][0] = new Casilla(new Pieza(true, false));  
	tablero [2][2] = new Casilla(new Pieza(true, false));
	tablero [2][4] = new Casilla(new Pieza(true, false));  
	tablero [2][6] = new Casilla(new Pieza(true, false)); 
	
	tablero [5][1] = new Casilla(new Pieza(false, false));  
	tablero [5][3] = new Casilla(new Pieza(false, false));
	tablero [5][5] = new Casilla(new Pieza(false, false));  
	tablero [5][7] = new Casilla(new Pieza(false, false)); 
	tablero [6][0] = new Casilla(new Pieza(false, false));  
	tablero [6][2] = new Casilla(new Pieza(false, false));
	tablero [6][4] = new Casilla(new Pieza(false, false));  
	tablero [6][6] = new Casilla(new Pieza(false, false)); 
	tablero [7][1] = new Casilla(new Pieza(false, false));  
	tablero [7][3] = new Casilla(new Pieza(false, false));
	tablero [7][5] = new Casilla(new Pieza(false, false));  
	tablero [7][7] = new Casilla(new Pieza(false, false)); 
	
	for (int c =0; c < 8; c++){
		for (int j = 0; j < 8;j++){
			if (tablero [c][j] == NULL){
				tablero [c][j] = new Casilla(NULL);
			}
		}
	}
	
}

void Damas :: imprimirtablero(){
	for (int c =0; c < 8; c++){
		cout << "|";
		for (int j = 0; j < 8;j++){
			Casilla* casilla = tablero [c][j];
			Pieza* pieza = casilla->GETpieza(); 
			if (pieza != NULL){
				Casilla* objeto = tablero [c][j];
				Pieza* objeto2 = objeto->GETpieza(); 
				bool n = objeto2->GETbando();
				 if (n == false){
					cout << 'X' << " ";
				}else if (n == true){
					cout << 'O' << " ";
				}
			}else {
				cout << ' ' << " ";
			}
		}
		cout << "|";
		cout <<endl; 
	}
}

int Damas :: validargane(){
	int pblancas = 0; 
	int pnegras = 0; 
	int veredicto = 0; 
	for (int c =0; c < 8; c++){
		for (int j = 0; j < 8;j++){
			Casilla* casilla = tablero [c][j];
			Pieza* pieza = casilla->GETpieza(); 
			if (pieza != NULL){
				Casilla* objeto = tablero [c][j];
				Pieza* objeto2 = objeto->GETpieza(); 
				bool n = objeto2->GETbando();
				 if (n == false){
					pnegras++; 
				}else if (n == true){
					pblancas++; 
				}
			}else {
				
			}
		}
		cout <<endl; 
	}
	if (pblancas == 0){
		veredicto = 2;  //gano el negro
	}else if (pnegras == 0){
		veredicto = 1;  //gano el blanco
	}else if (pnegras > 0 && pblancas > 0){
		veredicto = 0;  //nadie gano
	}
	return veredicto; 
}

bool Damas :: validarmover(int turno, int fila, int columna, int x, int y){
	bool validar = false; 
	Casilla* casilla = matriz [fila][columna];
	Pieza* pieza = casilla->GETpieza();
	Casilla* casilla2 = matriz [x][y];
	Poeza* pieza2 = casilla2->GETpieza();
	bool n = pieza->GETbando(); 
	if ((fila < 0 || columna < 0 || x < 0 || y < 0) || (fila > 7 || columna > 7 || x > 7 || y > 7)){
		
	}else if (pieza == NULL || pieza2 != NULL){
		
	}else if (turno == 1 && bando == false){
		
	}else if (turno == 2 && bando == true){
		
	}else {
		validar = true; 
	}
	return validar; 
}

void Damas :: jugar(){
	
	iniciartablero();
	int turno = 0;
	bool ganar = false;  
	cout << "---------------D A M E R O------------" <<endl; 
	while (ganar == false){
		cout << "------------TABLERO-----------" <<endl; 
		imprimirtablero();
		if (turno == 0){
			cout << "Turno del jugador 1: Piezas BLANCAS" << endl; 
			bool v = false;
			int fila; 
			int columna; 
			int x; 
			int y; 
			while (v == false){
				cout << "Ingrese la fila de la ficha que desea mover: " <<endl; 
				cin >> fila; 
				cout << "Ingrese la columna de la ficha que desea mover: " <<endl; 
				cin >> columna; 
				cout << "Ingrese la fila a la que se desea mover:  " << endl; 
				cin >> x; 
				cout << "Ingrese la columna a la que se desea mover: " <<endl; 
				cin >> y; 
				v = validarmover(turno, fila, columna, x, y);
				if (v == true){
					
				}
			} 
		}else if (turno == 1){
			
		}
	}
	imprimirtablero();
}


Damas::~Damas(){

}