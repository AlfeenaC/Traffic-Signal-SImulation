#include <stdio.h>
#include <unistd.h> 

#define SIZE 4

typedef struct {
    int light_state[SIZE];  // Light states (0 - Red, 1 - Green, 2 - Yellow)
    int current_green;      // Index for the current green light
} TrafficSignal;

// Initialize the traffic signal
void initTrafficSignal(TrafficSignal *signal) {
    for (int i = 0; i < SIZE; i++) {
        signal->light_state[i] = 0;  // Start with all lights as red
    }
    signal->current_green = 0;
    signal->light_state[signal->current_green] = 1;   // Green light for the first direction
    signal->light_state[(signal->current_green + 1) % SIZE] = 2;  // Yellow light for the next direction
}

// Rotate the traffic signal to the next state
void rotateSignal(TrafficSignal *signal) {
    signal->light_state[signal->current_green] = 0;  // Set current green to red
    int current_yellow = (signal->current_green + 1) % SIZE;
    signal->light_state[current_yellow] = 0;  // Set current yellow to red
    
    // Move to the next green direction
    signal->current_green = (signal->current_green + 1) % SIZE;
    signal->light_state[signal->current_green] = 1;  // Set new green light
    signal->light_state[(signal->current_green + 1) % SIZE] = 2;  // Set yellow light for the next direction
}

// Display the current state of the traffic signal
void display(TrafficSignal *signal) {
    char *directions[SIZE] = {"North", "East", "South", "West"};
    char *colors[3] = {"Red", "Green", "Yellow"};
   
    for (int i = 0; i < SIZE; i++) {
        printf("%s light is %s\n", directions[i], colors[signal->light_state[i]]);
    }
    printf("\n");  // Print a blank line after each cycle
}

int main() {
    TrafficSignal trafficSignal;
    initTrafficSignal(&trafficSignal);
    int cycle_count = 0;
   
    // Simulate 4 cycles
    while (cycle_count < 4) {
        display(&trafficSignal);       // Display the state of the signal
        sleep(5);                      // Wait for 5 seconds (simulation of light duration)
        rotateSignal(&trafficSignal);  // Rotate to the next signal state
        cycle_count++;                 // Increment the cycle count
    }

    return 0;
}
