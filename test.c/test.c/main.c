//
//  main.c
//  TempratureConverter
//
//  Created by Joseph Priest on 11/17/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//
//  This code will take the temprature in farenheit from the user and convert it to celcius.
//
//


#include <stdio.h>

// Function for conversion, pass by refrence
float convert(float *temprature){
    *temprature= *temprature * (9/5) + 32.0;//  Equation to farenheit
    return *temprature;
}

//Function to print out, pass by value
void printTemp(float temprature){
    printf("Your tempature in farenheit is %.2f\n", temprature);
}

//Main execution for program
int main(int argc, const char * argv[])
{
    float temprature;
    int quit = 1;
    //User loop for conversion of n tempratures
    while (quit == 1){
        printf("Please enter the temprature in celcius:\n");
        scanf("%f", &temprature);
        convert(&temprature);
        printTemp(temprature);
        printf("Enter 1 if you'd like to continue, enter anything else to exit\n");
        scanf("%d", &quit);
    }
    return 0; //No errors
}

