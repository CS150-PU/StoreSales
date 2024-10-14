//******************************************************************************
// File name:   main.cpp
// Author:      CS Faculty
// Date:        10/14/24
// Class:       CS150
// Assignment:  In class store sales bar graph
// Purpose:     Solve the following in class problem.
//
//              Problem: An input file contains data on a day’s sales for a 
//              number of stores. Each line contains the sales amounts for each
//              store with the first line containing the number of stores. 
//              This program displays a bar graph of asterisks
//              comparing each store’s sales. Each asterisk represents
//              $100 in sales.
//
//              Sample Data File
//              5
//              1000
//              1200
//              1500
//              800
//              1900
//
//              Sample Output
//              Store 1: **********
//              Store 2: ************
//              Store 3: ***************
//              Store 4: ********
//              Store 5: *******************
// Hours:       .5
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

  inFile >> numStores;
  for (int storeNumber = 1; storeNumber <= numStores; storeNumber++) {
    inFile >> storeSales;
    cout << "Store " << storeNumber << ": ";
    for (int saleCount = 1; saleCount <= storeSales / QUANTITY;
      saleCount++) {
      cout << SALE_CHARACTER;
    }
    cout << endl;
  }

  inFile.close ();

  return EXIT_SUCCESS;
}