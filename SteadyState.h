/*
Programmer: Garth Bates
Project: Oarsman
Discription: SteadyState.h heads the functions used for steady state workouts
Date Started: 03/20/2022
*/

#pragma once
#include <iostream>
#include <fstream>

using std::ifstream;

#include <fstream>

class SteadyState {
public:
    void addEntry();
    void printWeekResults();
    void printMonthResults();
    void printYearResults();

private:
    void openInFile();
    void openOutFile();
    void printResults();

};