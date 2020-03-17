#pragma once
class GymExercise {
private:
	char* name;
	int numberOfSeries;
	int numberOfReps;
	int weightKg;
public:
	GymExercise();
	GymExercise(const char* name, int numberOfSeries, int numberOfReps, int weightKg);
	GymExercise(const GymExercise& g);
	char* getName();
	void setName(char* nume);
	int getSeries();
	void setSeries(int series);
	int getReps();
	void setReps(int reps);
	int getKg();
	void setKg(int kg);
	GymExercise& operator=(const GymExercise& g);
	bool operator==(const GymExercise& g);
	~GymExercise();
};