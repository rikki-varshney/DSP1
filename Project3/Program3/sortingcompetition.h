#ifndef SORTINGCOMPETITION_H
#define SORTINGCOMPETITION_H
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
//Chris Perez and Andre Gras
using namespace std;

class SortingCompetition
{
public:
    SortingCompetition();
    //basic constructor that accepts an input
    //file name
    SortingCompetition(const string& inputFileName);


    //change the input file name
    void setFileName(const string& inputFileName);

    //read the data from the file and store it in
    //a linear data structure.
    //No sorting actions can be done in this method.
    //This includes no duplicate removal or anything else
    //that could make your sorting more efficient later.
    //Literally, the 5th word in the file should be
    //in the 5th place in your structure.
    bool readData();

    //copy the data from the original data structure
    //into a second location that will be used for sorting.
    //This will allow you to sort the same data set (with
    //the same starting order of elements) multiple times.
    //You can then calculate the average of execution times for
    //one data set against one algorithm.
    //No sorting actions can be done in this method.
    bool prepareData();

    //sort the data based on the criteria set forth in the
    //hand out.
    //THIS IS THE FUNCTION THAT WILL BE TIMED.
    void sortData();

    //using outputFileName, write the "sorted" data structure
    //to the file. This will be used to test the validity of
    //your sorting algorithm (in other words, did it sort properly?).
    void outputData(const string& outputFileName);

    bool swap(int spot1, int spot2);

    char* StringCopy(char *temp, string &wordTemp);

    int partition(int from, int to);

    void Bubble();

    void QuickSort(int from, int to);

private:
    ifstream fileReader;
    ofstream fileOut;
    vector<char*> words;
    const string inputFileName;
    //char** wordArray;
};

#endif // SORTINGCOMPETITION_H
