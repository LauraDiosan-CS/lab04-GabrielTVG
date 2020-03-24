#pragma once
#include "Service.h"
#include "Exercitii.h"
class UI
{
private:
	Service ser;
public:
	UI();
	void adaugareExercitiu();
	void afisareExercitii();
	void filtrareDupaXUI();
	void stergereDupa5UI();
	~UI();
};