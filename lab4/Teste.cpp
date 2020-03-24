#include "Operation.h"
#include "Exercitii.h"
#include "Repository.h"
#include "Service.h"
#include "assert.h"
#include "cassert"
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

void testAdaugare()
{
	GymExercise s1("test", 1, 1, 1);
	Repository rep;
	Service ser;
	assert(rep.dim() == 0);
	rep.addElem(s1);
	assert((rep.dim() == 1) && rep.getItemFromPos(0) == s1);
	ser.adaugareElement(s1);
	assert((ser.getSize() == 2) && ser.elementPozitiaI(1) == s1);
}

void testStergere()
{
	GymExercise s1("test", 2, 2, 2);
	Repository rep;
	Service ser;
	rep.addElem(s1);
	rep.addElem(s1);
	assert(rep.dim() == 2);
	rep.delElem(s1, 0);
	assert(rep.dim() == 1);
	ser.stergereElement(s1, 0);
	assert(ser.getSize() == 0);
}

void testCautare()
{
	GymExercise s1("test1", 2, 2, 2);
	GymExercise s2("test2", 1, 1, 5);
	GymExercise s3("test3", 2, 2, 3);
	GymExercise s4("test4", 0, 0, 0);
	GymExercise s5("test5", 4, 4, 4);
	Repository rep;
	Service ser;
	rep.addElem(s1);
	rep.addElem(s2);
	rep.addElem(s3);
	rep.addElem(s4);
	assert(rep.findElem(s3) == 2);
	assert(rep.findElem(s5) == -1);
	assert(ser.gasireElement(s1) == 0);
	assert(ser.gasireElement(s2) == 1);
}

void testUpdate()
{
	GymExercise s1("test", 1, 1, 1);
	Repository rep;
	Service ser;
	rep.addElem(s1);
	assert(s1.getName() == "test" && s1.getSeries() == 1 && s1.getReps() == 1 && s1.getKg() == 1);
	char nume[] = "dada";
	rep.updateElem(s1, nume, 2, 2, 2);
	assert(s1.getName() == "dada" && s1.getSeries() == 2 && s1.getReps() == 2 && s1.getKg() == 2);
	char nume1[] = "nunu";
	ser.updateElement(s1, nume1, 3, 3, 3);
	assert(s1.getName() == "nunu" && s1.getSeries() == 3 && s1.getReps() == 3 && s1.getKg() == 3);
}