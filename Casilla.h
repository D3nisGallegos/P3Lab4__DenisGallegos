#ifndef CASILLA_H
#define CASILLA_H
#include "Pieza.h"
#include <iostream>
#include <cstdlib>

class Casilla {
	
	private: 
	Pieza* pieza; 
	
	
	public:
		Casilla(Pieza* );
		Casilla();
		void asignarbandoapieza(bool );
		void eliminarpieza(); 
		void asignarpieza(Pieza* ); 
		Pieza* GETpieza(); 
		~Casilla();
		
};

#endif