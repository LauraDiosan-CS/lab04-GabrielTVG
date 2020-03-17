#pragma once
#include "Exercitii.h"

class Repository
{
private:
	GymExercise elem[20];
	int size;
public:
	Repository();
	void addElem(GymExercise);
	int findElem(GymExercise);
	GymExercise getItemFromPos(int);
	void delElem(GymExercise,int);
	void updateElem(GymExercise , char*, int , int , int);
	GymExercise* getAll();
	int dim();
	~Repository();

};