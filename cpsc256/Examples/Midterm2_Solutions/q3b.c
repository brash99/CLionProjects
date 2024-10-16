#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Restaurant_struct {
    char name[20];
    char cuisine[20];
    int rating;
} Restaurant;

Restaurant InitRestaurant() {
    Restaurant newrestaurant;
    strcpy(newrestaurant.name, "No Name");
    strcpy(newrestaurant.cuisine, "No Cuisine");
    newrestaurant.rating = -1;
    return newrestaurant;
}

int main() {

    Restaurant a = InitRestaurant();
    printf("%s\n", a.name);
    printf("%s\n", a.cuisine);
    printf("%d\n", a.rating);

    return 0;
}

