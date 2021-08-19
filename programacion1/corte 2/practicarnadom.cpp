#include <cstdlib>
#include<iostream>
#include<ctime>
using namespace std;
main(){
    srand(time(0));
    int arreglo[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
        int num = (1+ rand() % 99);
        
        if (num != arreglo[i][j])
        {
            arreglo[i][j] = num;    
        }
        else{
            num = (1+ rand() % 99);
            j = 0;
        }
        
        cout << arreglo[i][j] << " ";
            
        }
        cout << endl;
    }
 }