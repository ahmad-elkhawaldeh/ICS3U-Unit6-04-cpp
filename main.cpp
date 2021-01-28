// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: DEC 2021
// This program uses an array


#include<iostream>
#include <ctime>
using namespace std;


double avg(int array[100][100], int row, int col) {
    double sum = 0;
    for (int number = 0; number < row; number++) {
        for (int number2 = 0; number2 < col; number2++){
            sum += array[number][number2];
        }
    }
    int size = row * col;
    return sum/size;
}


int main(){
    int array[100][100];
    int row, col;
    cout << "How many row would you like: ";
    cin >> row;
    cout << "How many columns would you like: ";
    cin >> col;
    srand((unsigned int)time(NULL));
    //generating 2D array with random values
    for (int number = 0; number<row; number++) {
        for (int number2 = 0; number2< col; number2++) {
            array[number][number2]=rand() % 50 + 1;
            cout << array[number][number2] << " ";
        }
        cout << endl;
    }
        //printing average of all elements in 2D array
    cout << "Average of al the numbers is: " << avg(array,row,col);
        
}