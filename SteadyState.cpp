/*
Programmer: Garth Bates
Project: Oarsman
Discription: SteadyState.cpp houses the functions for the SteadyState class
Date Started: 03/20/2022
*/

#include "SteadyState.h"

void SteadyState::openInFile(){
    mCsvStream.open("steadystate.csv");
}