//This file was created to show simple use and creation of structs and other functionalities of C language to basically simulate OOP features

#include <stdio.h>
#include <string.h>

struct Car_s {
    char model[20];
    char color[10];
    int speed;
} Car_default = {"none","white",0};

typedef struct Car_s Car;


//Method
void accelerate (Car* car, int amount){
    car ->speed += amount;
    printf("Speeding up.");
}

void slowdown (Car* car, int amount){
    car -> speed -= amount;
    printf("Slowing down.");
}


void print_car(Car *car){
    printf("Model: %s |Color: %s |Speed: %d km/h\n", car->model, car->color, car->speed);
}

Car Create_Car(const char *model, const char *color){
    Car c;
    strcpy(c.model, model);
    strcpy(c.color, color);
    c.speed = 0;
    return c;
}

int main(){
    Car myCar= Create_Car("Honda","Blue");

    accelerate(&myCar, 20);
    print_car(&myCar);
    
    slowdown(&myCar,20);
    print_car(&myCar);

    return 0;
}