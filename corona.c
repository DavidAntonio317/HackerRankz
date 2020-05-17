#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include "header.h"

int birthdayCakeCandles(int ar_count, int* ar) {
    int max = 0;
    int count = 0;
    int * candles = malloc(ar_count * sizeof(int));

    for(int i=0; i<ar_count; i++){
        candles[i] = 0;
       
    }

    while(count<ar_count){

        for(int j=0;j<ar_count;j++){

            if( (count>=j && (ar[count] == ar[j]) ) && (candles[j]!= 0)){
                continue;
            }
            else if(ar[count] == ar[j]){
                candles[count]++;
            }
        }


        count++;
    }

    for(int i=0; i<ar_count; i++){
        printf("%d ", candles[i]);
    }

}


int main(){

    int n = 4;
    
    int arr[4] = {3,2,1,3};

    birthdayCakeCandles(4,arr);
    
    return 0;
}

