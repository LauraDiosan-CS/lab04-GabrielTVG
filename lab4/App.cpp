#include <iostream>
#include "Operation.h"
#include "Repository.h"
#include "Teste.h"
using namespace std;
int main()
{
	/*
	name = NULL;
	numberOfSeries = 0;
	numberOfReps = 0;
	weightKg = 0;*/
	int ok = 1,serii,reps,kg,optiune,x,lungime;
	char nume[20];
	Repository rep;
	GymExercise filtru[20];
	GymExercise s1("Model 1", 3, 4, 5);
	GymExercise s2("test2", 2, 1, 3);
	GymExercise s3("test3", 2, 5, 3);
	GymExercise s4("test4", 0, 1, 0);
	rep.addElem(s1);
	rep.addElem(s2);
	rep.addElem(s3);
	rep.addElem(s4);
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
			cout <<endl<< "Nume exercitiu: ";
			cin >> nume;
			cout <<endl<< "Numar de serii:";
			cin >> serii;
			cout <<endl<< "Numar of reps:";
			cin >> reps;
			cout <<endl<< "Greutate:";
			cin >> kg;
			cout << endl;
			GymExercise g(nume, serii, reps, kg);
			rep.addElem(g);
			continue;
		}
		if (optiune == 2)
		{
			cout << endl << "Data viitoare afisare, nu avem inca... -_-" << endl;
			continue;
		}
		if (optiune == 3)
		{
			cout <<endl<<"Citire X:";
			cin >> x;
			filtrareX(rep, x, filtru, lungime);
			cout << endl << "Afisare nu avem inca... -_-" << endl;
			continue;
		}
		if (optiune == 4)
		{
			stergere5(rep);
			continue;
		}
		if (optiune == 5)
			ok = 0;
	}
	return 0;
}