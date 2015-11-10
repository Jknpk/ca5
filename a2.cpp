#include<iostream>
#include "array2d.h"
using namespace std;


int main(){
  
  
  int n = 3;
  int m = 5;
  int p = 5;
  int q = 7;

  
  
  Array2d<int> matrix1(n,m,3);
  Array2d<int> matrix2(p,q,4);
  
  // Spaltenanzahl der ersten Matrix muss gleich der Zeilenanzahl der 2. Matrix sein
  // Ergebnismatrix ist dann Zeilenahl der ersten und Spaltenzahl der 2. Matrix

  //matrix3 = matrix1 * matrix2

  // Vorraussetzungen pruefen
  if(m != p){
    cout << "Spaltenzahl der 1. Matrix stimmt nicht mit Zeilenzahl der 2. Matrix ueberein.";
    exit(1);
  }

  int r = n;
  int s = q;  
  Array2d<int> matrix3(r,s);
  
  
  for(int i = 0; i < r; i++){
    for(int j = 0; j < s; j++){
	
      for(int k = 0; k < m; k++){   // m und p sind gleich!
	
	     

      
      
    
    
    
      }
      
      matrix3.at(i,j)=;
      
    }
  }
  
  
  
  return 0;
  
}