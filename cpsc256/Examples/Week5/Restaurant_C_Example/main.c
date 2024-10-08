/*
 * File:   main.c
 * Author: brash
 *
 * Created on October 14, 2022, 9:59 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *  Simple program to illustrate the use of structures in C
 */

typedef struct Restaurant_struct {
    char name[20];
    int rating;
    char price[5];
    char cuisine[30];
    int id;
} Restaurant;

Restaurant InitRestaurant() {
    Restaurant newRestaurant;
    strcpy(newRestaurant.name, "No Name");
    newRestaurant.rating = -1;
    strcpy(newRestaurant.price,"Empty");
    strcpy(newRestaurant.cuisine,"Empty");
    newRestaurant.id=-1;

    return newRestaurant;
}

int GetRating(Restaurant myRestaurant) {
    return myRestaurant.rating;
}

Restaurant SetRating(Restaurant myRestaurant, int myRating) {
    myRestaurant.rating = myRating;
    return myRestaurant;
}

void Report(Restaurant myRestaurant) {
    printf("%s\n", myRestaurant.name);
    printf("%d\n", myRestaurant.rating);
    printf("----------------\n");
}

int main(int argc, char** argv) {
    
    Restaurant moes = InitRestaurant();
    Restaurant schooners = InitRestaurant();
    Restaurant mickeydees = InitRestaurant();
    
    moes = SetRating(moes, 3);
    schooners = SetRating( schooners, 5);
    mickeydees = SetRating( mickeydees, 1);

    Report(moes);

    return (EXIT_SUCCESS);
}

