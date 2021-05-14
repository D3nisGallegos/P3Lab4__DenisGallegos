#ifndef PIEZA_H
#define PIEZA_H
#include <iostream>
#include <cstdlib>

class Pieza {
	
	private: 
	bool bando = NULL; 
	bool reina = NULL; 
	
	public:
		Pieza();
		Pieza(bool, bool);
		bool GETbando();
		bool GETreina();
		void convertirblanca();
		void convertirnegra(); 
		void convertirreina();
		~Pieza();
};

#endif