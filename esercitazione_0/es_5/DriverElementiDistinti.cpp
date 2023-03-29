#include <iostream>
#include "ElementiDistinti.hpp"

using namespace std;

const int DIM_VET = 6;
const int NUM_RIGHE = 2;
const int NUM_COL = 3;

int main()
{
  int vett[DIM_VET];
  //int mat[NUM_RIGHE][NUM_COL];
  int i;
  //int j;

  cout << "Inserisci un vettore di " << DIM_VET << " valori interi : ";
  for (i = 0; i < DIM_VET; i++)
    cin >> vett[i];
  cout << "Il numero di elementi distinti del vettore e' " 
       << NumeroDistintiVettore(vett,DIM_VET) << endl; 

  // cout << "Inserisci una matrice di " << NUM_RIGHE 
  //      << " righe e " << NUM_COL << " colonne" << endl;
  // for (i = 0; i < NUM_RIGHE; i++)
  //   for (j = 0; j < NUM_COL; j++)
  //     cin >> mat[i][j];

  // cout << "Il numero di elementi distinti della matrice e' " 
  //      << NumeroDistintiMatrice(mat,NUM_RIGHE,NUM_COL) << endl; 
}
