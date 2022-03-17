#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()

{
     int tomb[10], min;
     for(int i=0, i<10; i++){
        srand(time(NULL));
        tomb[i]=rand%100000;
     }
     min=999;
     for(int i=0; i<10; i++){
        if(tomb[i]<min){
            tomb[i]=min;
        }
     }
    cout << min << endl;
    return 0;
}
