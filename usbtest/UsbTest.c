#include <stdio.h>
#include "pico/stdlib.h"
void pin_off(int pin);
void pin_on(int pin);

int main(){
    //Initialise I/O
    stdio_init_all(); 

    // Initialise GPIO (Green LED connected to pin 25)
    gpio_init(21);
    gpio_set_dir(21, GPIO_OUT);
    gpio_init(20);
    gpio_set_dir(20, GPIO_OUT);

    char userInput;

    //Main Loop 
    while(1){
        //Get User Input
        printf("Command (u = up or d = down or s = stop):\n");
        userInput = getchar();

        if(userInput == 'u'){
            pin_off(20);
            pin_on(21);
            printf("Arm is going up\n");
        }
        else if(userInput == 'd'){
           pin_off(21);
           pin_on(20);
           printf("Arm is going down\n");
        }
        else if(userInput == 's'){
           pin_on(20);
           pin_on(21);
           printf("Arm is stopped\n");
        }
        else{
            printf("Invalid Input!\n");
        }
    }
}

void pin_off(int pin){
     // Turn Off LED
            gpio_put(pin, 0); // Set pin 25 to high.
            
}

void pin_on(int pin){
     // Turn Off LED
            gpio_put(pin, 1); // Set pin 25 to high.
           
}
