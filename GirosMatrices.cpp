#include<iostream>
#include<string>

using namespace std;

// Declaramos lasvariables globales 
int m, n , k; 
int matriz[1002][1002]; 

// Función para giro horizontal
void operacionHorizontal(){
  // Pivote sobre el que se girará 
  int pivote = m / 2;
  for(int j = 0; j < pivote; j++){
    for(int i = 0; i < n; i++){
      swap(matriz[i][j], matriz[i][m-j-1]); 
    }
  }    
}

// Función para giro vertical
void operacionVertical(){
   // Pivote sobre el que se girará 
  int pivote = n / 2;
  for(int i = 0; i < pivote; i++){
    for(int j = 0; j < m; j++){
      swap(matriz[i][j], matriz[n-i-1][j]); 
    }
  }
}

// Método main 
int main(){
  
  // Vamos a leer de la consola
  cin >> n >> m;
  // Para el número de giros verticales y horizontales 
  int h = 0, v = 0; 
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> matriz[i][j]; 
    }
  }
  // La variable k tiene el número de operaciones que se harán 
  cin >> k; 
  // Leemos el tipo de giro que se irá haciendo 
  for(int i = 0; i < k; i++){
    char op;
    cin >> op;
    if(op == 'V'){
      v++;
    }else{
      h++; 
    }
  }

  if((h % 2) == 1){
    operacionHorizontal(); 
  }
  if((v % 2) == 1){
    operacionVertical(); 
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout << matriz[i][j] << " "; 
    }
    cout << endl; 
  }
  return 0; 
}
