#include "UI.h"
#include "Service.h"
#include <iostream>
using namespace std;
UI::UI()
{

}

void UI::adaugareExercitiu()
{
	int serii, reps, kg;
	char nume[20];
	cout << endl << "Nume exercitiu: ";
	cin >> nume;
	cout << endl << "Numar de serii:";
	cin >> serii;
	cout << endl << "Numar of reps:";
	cin >> reps;
	cout << endl << "Greutate:";
	cin >> kg;
	cout << endl;
	GymExercise g(nume, serii, reps, kg);
	//rep.addElem(g);
	ser.adaugareElement(g);

}

void UI::afisareExercitii()
{
	cout << endl << "Data viitoare afisare, nu avem inca... -_-" << endl;
}

void UI::filtrareDupaXUI()
{
	int x, lungime;
	GymExercise filtru[20];
	cout << endl << "Citire X:";
	cin >> x;
	//filtrareX(rep, x, filtru, lungime);
	ser.filtrareDupaX(x, filtru, lungime);
	cout << endl << "Afisare nu avem inca... -_-" << endl;
}

void UI::stergereDupa5UI()
{
	//stergere5(rep);
	ser.stergereDupa5();
	cout << endl << "Afisare nu avem inca... -_-" << endl;
}

void UI::updateExercitiu()
{
	int serii, reps, kg, pozitie;
	char nume[20];
	cout << endl << "Pozitia exercitiului: ";
	cin >> pozitie;
	if (pozitie<1 || pozitie>ser.getSize())
		cout << "Pozitie invalida";
	else
	{
		GymExercise s = ser.elementPozitiaI(pozitie);
		cout << endl << "Nume exercitiu nou: ";
		cin >> nume;
		cout << endl << "Numar de serii nou:";
		cin >> serii;
		cout << endl << "Numar of reps nou:";
		cin >> reps;
		cout << endl << "Greutate noua:";
		cin >> kg;
		cout << endl;
		ser.updateElement(s, nume, serii, reps, kg);
	}
}

UI::~UI()
{

}