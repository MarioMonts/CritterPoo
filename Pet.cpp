#include "Pet.h"
#include "iostream"
#include "string"
using namespace std;

Pet::Pet(string name, int hunger)
{
	cout << "Ha nacido una nueva mascota!" << endl;
	m_Hunger = hunger;
	m_Name = name;

}

void Pet::Greet()
{

	cout << "Hola soy " << m_Name << ", tengo hambre.->Nivel de Hambre = " << m_Hunger << endl;



}