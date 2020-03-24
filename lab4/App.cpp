#include <iostream>
#include "Operation.h"
#include "Repository.h"
#include "Teste.h"
#include "Service.h"
#include "UI.h"
using namespace std;
int main()
{
	int ok = 1, optiune;
	Service ser;
	UI ui;
	GymExercise filtru[20];
	GymExercise s1("Model 1", 3, 4, 5);
	GymExercise s2("Model 2", 2, 1, 3);
	GymExercise s3("Model 3", 2, 5, 3);
	GymExercise s4("Model 4", 0, 1, 0);
	//rep.addElem(s1);
	//rep.addElem(s2);
	//rep.addElem(s3);
	//rep.addElem(s4);
	ser.adaugareElement(s1);
	ser.adaugareElement(s2);
	ser.adaugareElement(s3);
	ser.adaugareElement(s4);
	cout << "Teste" << endl;
	void testFiltrareX();
	void testStergere5();
	void testAdaugare();
	void testStergere();
	void testCautare();
	void testupdate();
	cout << "Teste trecute" << endl;
	while (ok)
	{
		cout << "1.Citire 2.Afisare(not working yet) 3.Filtrare dupa x 4.Stergere sub 5 5.Iesire"<<endl;
		cin >> optiune;
		if (optiune == 1)
		{
			ui.adaugareExercitiu();
			continue;
		}
		if (optiune == 2)
		{
			ui.afisareExercitii();
			continue;
		}
		if (optiune == 3)
		{
			ui.filtrareDupaXUI();
			continue;
		}
		if (optiune == 4)
		{
			ui.stergereDupa5UI();
			continue;
		}
		if (optiune == 5)
			ok = 0;
	}
	return 0;
}