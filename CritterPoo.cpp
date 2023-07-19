
#include <iostream>
#include "Pokemon.h"
#include "Critter1.h"
#include "Pet.h"

using namespace std;

int main()
{

	Pet pet1("Pedro", 35);
	Pet pet2("Juan", 25);
	Pet pet3("Miguel", 100);

	pet1.Greet();
	pet2.Greet();
	pet3.Greet();

   //EJEMPLOS DE CREACION DE OBJETOS Y SU LLAMADO

	Critter1 crit1;
	Critter1 crit2;

	crit1.m_Hunger = 9;
	cout << "Crit1s Hunger level is" << crit1.m_Hunger << "\n";

	crit2.m_Hunger = 30;
	cout << "Crit2s Hunger level is" << crit2.m_Hunger << "\n";


	crit1.Greet();
	crit2.Greet();

	Pokemon poke1;
	Pokemon poke2;

	poke1.m_Hp = 35;
	cout << "Poke1 Hp level is " << poke1.m_Hp << "\n";

	poke2.m_Speed = 90;
	cout << "Poke1 Speed level is " << poke1.m_Speed << "\n";




}

