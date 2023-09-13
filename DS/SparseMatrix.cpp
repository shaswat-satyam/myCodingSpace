#include <iostream>
using namespace std;

int main() {
    int sparseMatrix[4][5] = {{2,3,0,0,0},
                            {0,0,4,0,0},
                            {5,6,0,0,0},
                            {0,0,0,0,7}};
   int size = 0;
   cout << "The Sparse Matrix is " << endl;
   cout << " |";
   for(int i = 0; i < 5;i++ ){
        cout << i << " ";
   }
   
   cout << endl << "----------------" << endl;
   
   for(int i = 0 ; i < 4; i++){
       for(int j = 0; j < 5; j++){
            if (j == 0){
                cout << i << "|";
            }
           cout << sparseMatrix[i][j] << " ";
           if(sparseMatrix[i][j] != 0){
               size++;
           }
       }
       cout << endl;
   }
   
   int compactMatrix[3][size];
   int idx = 0;
   
   for(int i = 0 ; i < 4; i++){
       for(int j = 0; j < 5; j++){
           if(sparseMatrix[i][j] != 0){

               compactMatrix[0][idx] = i;
               compactMatrix[1][idx] = j;
               compactMatrix[2][idx] = sparseMatrix[i][j];
               idx++;
           }
       }
   }
   
   cout << endl;
   cout << "The Compact Matrix is " << endl;
   cout << "idx| ";
   for(int i = 0; i < size;i++){
        cout << i << " ";
   }
    cout << endl << "------------------" << endl;
   for(int i = 0 ; i < 3; i++){
       for(int j = 0; j < size; j++){
            if(j == 0){
                switch (i){
                    case 0:
                        cout << "Row| ";
                        break;
                    case 1:
                        cout << "Col| ";
                        break;
                    case 2:
                        cout << "Val| ";
                        break;
                }
            }
           cout << compactMatrix[i][j] << " ";

       }
       cout << endl;
   }
   
    return 0;
}