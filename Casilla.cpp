#include "Casilla.h"

Casilla::Casilla(){
	 pieza->~Pieza();
}

Casilla :: Casilla(Pieza* x){
	pieza = x; 
}

void Casilla :: eliminarpieza(){
	pieza->~Pieza(); 
} 

void Casilla :: asignarpieza(Pieza* x){
	pieza = x; 
}

void Casilla :: asignarbandoapieza(bool x){
	if (x == true){
		pieza->convertirblanca();
	}else if (x == false){
		pieza->convertirnegra();
	}
}

Pieza* Casilla :: GETpieza(){
	return pieza; 
}

Casilla::~Casilla(){
	pieza->~Pieza();  
}