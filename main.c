/* 
 * File:   main.c
 * Author: Diego
 *
 * Created on 5 aprile 2015, 16.44
 */

#include <stdio.h>
#include <stdlib.h>
#define N 5
/*
 * 
 */
int main(int argc, char** argv) {
    int i, j, posizionamento, vInput[N], vOrdinamento[N];
    for(i = 0; i < N; i++) {
        printf("Inserisci l'elemento %d : ", i);
        scanf("%d", &(vInput[i]));
    }
    for(i = 0; i < N; i++) {
        posizionamento = 0;
        for(j = 0; j < N; j++) {
            if(vInput[i] > vInput[j]) {
                posizionamento++;
            }
        }
        vOrdinamento[posizionamento] = vInput[i];
    }
        printf("Vettore ordinato secondo Metodo Ordinamento Counting-Sort :\n");
    for(i = 0; i < N; i++) {
        printf("%d ", vOrdinamento[i]);
    }
    
    
    return (EXIT_SUCCESS);
}

