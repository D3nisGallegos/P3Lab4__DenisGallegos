#ifndef DAMAS_H
#define DAMAS_H
#include "Pieza.h"
#include "Casilla.h"
#include <iostream>
#include <cstdlib>



class Damas{
	
	private: 
	Casilla*** tablero; 
	
	public:
		Damas();
		void iniciartablero(); 	
		void imprimirtablero();
		int validargane(); 
		bool validarmover(int, int, int, int, int);
		void mover(int, int, int, int);
		bool validarcaptura(int, int, int, int, int);
		bool comer(int, int, int, int, int);
		void capturarpiezas(); 
		void jugar();
		~Damas();
		
};

#endif