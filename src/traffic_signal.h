#ifndef TRAFFIC_SIGNAL_H
#define TRAFFIC_SIGNAL_H

#define SIZE 4

// Define the TrafficSignal structure
typedef struct {
    int light_state[SIZE];  // Light states (0 - Red, 1 - Green, 2 - Yellow)
    int current_green;      // Index for the current green light
} TrafficSignal;

// Function declarations
void initTrafficSignal(TrafficSignal *signal);
void rotateSignal(TrafficSignal *signal);
void display(TrafficSignal *signal);

#endif // TRAFFIC_SIGNAL_H
