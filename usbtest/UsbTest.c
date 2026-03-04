#include <stdio.h>
#include "pico/stdlib.h"
void led_off(int pin);
void led_on(int pin);

int main(){
    //Initialise I/O
    stdio_init_all(); 

    // Initialise GPIO (Green LED connected to pin 25)
    gpio_init(25);
    gpio_set_dir(25, GPIO_OUT);

    char userInput;

    //Main Loop 
    while(1){
        //Get User Input
        printf("Command (1 = on or 0 = off):\n");
        userInput = getchar();

        if(userInput == '1'){
            led_on(25);
        }
        else if(userInput == '0'){
           led_off(25);
        }
        else{
            printf("Invalid Input!\n");
        }
    }
}

void led_off(int pin){
     // Turn Off LED
            gpio_put(pin, 0); // Set pin 25 to high.
            printf("LED switched off!\n");
}

void led_on(int pin){
     // Turn Off LED
            gpio_put(pin, 0); // Set pin 25 to high.
            printf("LED switched off!\n");
}
