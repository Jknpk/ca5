#include<iostream>

using namespace std;

int main(){
  
  cout << "Ich mach mal int matrix[2][3]" << endl;
  
  
    int matrix1[2][3] = {{0, 1, 2}, {4, 5, 6}};
 
    cout << "Speicherplatz fuer ein int matrix[2][3]: " << sizeof(matrix1) << endl;
    
    for(int i = 0; i< 2; i++){
      for(int j = 0; j<3; j++){
	int * a = &(matrix1[0][0]) + i*3 + j;   
	cout << "Berechnung mit Speicherstelle relativ zum Matrixanfang: " << endl << *a << endl << "C++ interne Berechnung des Werts: " << endl << matrix1[i][j] << endl;	
      }
    }

 
    
    
  return 0;
  
}