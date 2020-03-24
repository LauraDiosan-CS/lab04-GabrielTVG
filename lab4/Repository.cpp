#include "Repository.h"

Repository::Repository()
{
	size = 0;
}

void Repository::addElem(GymExercise g)
{
	elem[size++] = g;
}

int Repository::findElem(GymExercise g)
{
	for (int i = 0; i < size; i++)
		if (elem[i] == g)
			return i;
	return -1;
}

void Repository::delElem(GymExercise g, int i)
{
	elem[i] = elem[size - 1];
	size--;
}

void Repository::updateElem(GymExercise g, char* nume, int series, int reps, int kg)
{
	int i = findElem(g);
	elem[i].setName(nume);
	elem[i].setSeries(series);
	elem[i].setReps(reps);
	elem[i].setKg(kg);
}

GymExercise* Repository::getAll()
{
	return elem;
}

int Repository::dim()
{
	return size;
}

Repository::~Repository()
{}

GymExercise Repository::getItemFromPos(int i)
{
	return elem[i];
}