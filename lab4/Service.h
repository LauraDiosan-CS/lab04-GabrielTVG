#pragma once
#include "Repository.h"
#include "Exercitii.h"

class Service
{
private:
	Repository rep;
	typedef void(Service::* Undo)(GymExercise g);
	//using Undo = void(Service::*)();
	//void(Service::* undo[30])();
	Undo undo[30];
	int pozitie;
public:
	Service();
	void adaugareElement(const GymExercise& g);
	int gasireElement(const GymExercise& g);
	void stergereElement(GymExercise& g, int i);
	void updateElement(GymExercise g, char* nume, int series, int reps, int kg);
	void filtrareDupaX(int x, GymExercise* filtru, int& lungime);
	void stergereDupa5();
	int getSize();
	GymExercise* getAll();
	GymExercise elementPozitiaI(int i);
	~Service();
};