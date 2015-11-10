#include<iostream>
#include "array2d.h"
using namespace std;
int main(){
  
  int n = 5;
  int m = 4;
  int p = 4;
  int q = 9;
  
  Array2d<int> matrix1(n,m,3);
  Array2d<int> matrix2(p,q,4);
  
  // Spaltenanzahl der ersten Matrix muss gleich der Zeilenanzahl der 2. Matrix sein
  // Ergebnismatrix ist dann Zeilenzahl der ersten und Spaltenzahl der 2. Matrix

  //matrix3 = matrix1 * matrix2

  // Vorraussetzungen pruefen
  if(m != p){
    cout << "Spaltenzahl der 1. Matrix stimmt nicht mit Zeilenzahl der 2. Matrix ueberein.";
    exit(1);
  }

  int r = n;
  int s = q;  
  Array2d<int> matrix3(r,s);
 // int summe = 0;
  for(int i = 0; i < r; i++){
    for(int j = 0; j < s; j++){
	matrix3.at(i,j) = 0;
      for(int k = 0; k < m; k++){   // m und p sind gleich!
		matrix3.at(i,j) = (matrix3.at(i,j) + matrix1.at(i, k) * matrix2.at(k, j));    
      }
    }
  }
  printArray(matrix1);
  cout << endl << "    X    " << endl << endl;
  printArray(matrix2);
  cout << endl << "    =    " << endl << endl;
  printArray(matrix3);
  
  return 0;
  
}