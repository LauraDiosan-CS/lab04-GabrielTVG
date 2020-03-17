#include "Operation.h"
void filtrareX(Repository &rep, int x, GymExercise filtru[], int& lungime)
{
	lungime = 0;
	int verificare = 0;
	for (int i = 0; i < rep.dim(); i++)
	{
		GymExercise exercitii = rep.getItemFromPos(i);
		verificare = exercitii.getSeries() * exercitii.getReps() * exercitii.getKg();
		if (verificare > x)
			filtru[lungime++] = exercitii;
	}
}

void stergere5(Repository &rep)
{
	int verificare;
	for (int i = 0; i < rep.dim();)
	{
		GymExercise exercitii = rep.getItemFromPos(i);
		verificare = exercitii.getKg() * exercitii.getReps();
		if (verificare < 5)
			rep.delElem(exercitii, i);
		else
			i++;
	}
}