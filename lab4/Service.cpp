#include "Service.h"
#include "Operation.h"

Service::Service()
{

}

void Service::adaugareElement(const GymExercise& g)
{
	this->rep.addElem(g);
}

int Service::gasireElement(const GymExercise& g)
{
	return this->rep.findElem(g);
}

void Service::stergereElement(GymExercise& g, int i)
{
	this->rep.delElem(g, i);
}

void Service::updateElement(GymExercise g, char* nume, int series, int reps, int kg)
{
	this->rep.updateElem(g, nume, series, reps, kg);
}

void Service::filtrareDupaX(int x, GymExercise *filtru, int &lungime)
{
	filtrareX(this->rep, x, filtru, lungime);
}

void Service::stergereDupa5()
{
	stergere5(this->rep);
}

int Service::getSize()
{
	return this->rep.dim();
}

GymExercise* Service::getAll()
{
	return this->rep.getAll();
}

GymExercise Service::elementPozitiaI(int i)
{
	return this->rep.getItemFromPos(i);
}

Service::~Service()
{

}