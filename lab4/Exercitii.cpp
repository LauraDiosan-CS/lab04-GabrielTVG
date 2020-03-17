#include "Exercitii.h"
#include <cstring>

GymExercise::GymExercise()
{
	name = NULL;
	numberOfSeries = 0;
	numberOfReps = 0;
	weightKg = 0;
}
GymExercise::GymExercise(const char* name, int numberOfSeries, int numberOfReps, int weightKg)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name,strlen(name)+1, name);
	this->numberOfSeries = numberOfSeries;
	this->numberOfReps = numberOfReps;
	this->weightKg = weightKg;
}
GymExercise::GymExercise(const GymExercise& g)
{
	this->name = new char[strlen(g.name) + 1];
	strcpy_s(this->name,strlen(g.name)+1, g.name);
	this->numberOfSeries = g.numberOfSeries;
	this->numberOfReps = g.numberOfReps;
	this->weightKg = g.weightKg;
}
char* GymExercise::getName()
{
	return name;
}

void GymExercise::setName(char* nume)
{
	if (name)
		delete[]name;
	name = new char[strlen(nume) + 1];
	strcpy_s(name,strlen(nume)+1, nume);
}

int GymExercise::getSeries()
{
	return numberOfSeries;
}

void GymExercise::setSeries(int series)
{
	numberOfSeries = series;
}

int GymExercise::getReps()
{
	return numberOfReps;
}

void GymExercise::setReps(int reps)
{
	numberOfReps = reps;
}

int GymExercise::getKg()
{
	return weightKg;
}

void GymExercise::setKg(int kg)
{
	weightKg = kg;
}

GymExercise::~GymExercise()
{
	if (name)
		delete[]name;
	name = NULL;
	numberOfSeries = 0;
	numberOfReps = 0;
	weightKg = 0;
}

GymExercise& GymExercise::operator=(const GymExercise& g)
{
	if (this == &g)
		return *this;
	if (name)
		delete[]name;
	name = new char[strlen(g.name) + 1];
	strcpy_s(name,strlen(g.name)+1, g.name);
	numberOfReps = g.numberOfReps;
	numberOfSeries = g.numberOfSeries;
	weightKg = g.weightKg;
	return *this;
}

bool GymExercise::operator==(const GymExercise& g)
{
	return (strcmp(name, g.name) == 0 && (numberOfSeries == g.numberOfSeries) && (numberOfReps == g.numberOfReps) && (weightKg == g.weightKg));
}

/*
ostream& operator<<(ostream& os, GymExercise g)
{
	os << "Nume:" << g.name << " Serii:" << g.numberOfSeries << " Reps:" << g.numberOfReps << " Greutate:" << g.weightKg;
	return os;
}
*/