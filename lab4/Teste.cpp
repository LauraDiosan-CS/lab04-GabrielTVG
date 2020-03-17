#include "Operation.h"
#include "Exercitii.h"
#include "Repository.h"
#include "assert.h"
#include <iostream>
using namespace std;

void testFiltrareX()
{
	GymExercise s1("test1", 2, 3, 1);
	GymExercise s2("test2", 1, 1, 3);
	GymExercise s3("test3", 2, 2, 3);
	GymExercise s4("test4", 0, 0, 0);
	Repository rep;
	rep.addElem(s1);
	rep.addElem(s2);
	rep.addElem(s3);
	rep.addElem(s4);
	GymExercise result[10];
	int m = 0;
	filtrareX(rep, 6, result, m);
	assert((m == 1) && result[0] == s3);
}

void testStergere5()
{
	GymExercise s1("test1", 2, 2, 2);
	GymExercise s2("test2", 1, 1, 5);
	GymExercise s3("test3", 2, 2, 3);
	GymExercise s4("test4", 0, 0, 0);
	Repository rep;
	rep.addElem(s1);
	rep.addElem(s2);
	rep.addElem(s3);
	rep.addElem(s4);
	stergere5(rep);
	assert((rep.dim() == 2) && rep.findElem(s2) == 1 && rep.findElem(s3) == 0);
}
