/*
Programmer: Garth Bates
Project: Oarsman
Discription: SteadyState.h heads the functions used for steady state workouts
Date Started: 03/20/2022
*/

#pragma once
#include <iostream>
#include <fstream>
#include <string>

using std::ifstream;

#include <fstream>

class SteadyState {
public:
    void addEntry();
    void printWeekResults();
    void printMonthResults();
    void printYearResults();

private:
    ifstream mCsvStream;

    void openInFile();
    void openOutFile();
    void printResults();
    void recordEntry();

};