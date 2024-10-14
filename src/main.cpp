//******************************************************************************
// File name:   main.cpp
// Author:      CS Faculty
// Date:        xx/xx/xxxx (Replace xx/xx/xxxx with month/day/year)
// Class:       CS150-xx (Replace xx with your section number)
// Assignment:  Hello World
// Purpose:     Display the message Hello World to the screen
// Hours:       0.25
//******************************************************************************

#include <iostream>
#include <fstream>

using namespace std;

int main () {
  const string FILE_NAME = "data/sales.txt";
  const int QUANTITY = 100;
  const char SALE_CHARACTER = '*';

  int numStores;
  int storeSales;

  ifstream inFile;

  inFile.open (FILE_NAME);
  if (inFile.fail ()) {
    cout << "Error Opening File: " << FILE_NAME << endl;
    exit (EXIT_FAILURE);
  }

  inFile.close ();

  return EXIT_SUCCESS;
}