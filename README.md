# Traffic-Signal-Simulation

The Traffic Signal Simulation System simulates a basic traffic signal operation in four directions: North, East, South, and West. It cycles through traffic light states (Green, Yellow, Red) in a structured manner, enabling vehicle flow control for improved safety and efficiency. The simulation is implemented in C, utilizing structured data and basic control flow to manage the signal states dynamically.



## Features
- Four traffic lights (North, East, South, and West).
- Green, Yellow, and Red light states.
- Each light changes in a cyclic manner.
- The simulation runs for four cycles, displaying the state of each light every time.
## Functions used:
1. initTrafficSignal() - Initializes the traffic signal, setting up the initial state.
2. rotateSignal() - Transitions the light states to simulate traffic flow.
3. display() - Shows the current light status for each direction.

## Requirements
- C Compiler (e.g., GCC)
- POSIX compliant system (Linux/macOS) for `sleep()` function.

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/traffic-signal-simulation.git
2.Navigate to the project directory:
   ```bash
   cd traffic-signal-simulation
   ```
3.Compile the project:
   ```bash
   make
   ```
4.To run the simulation:
   ```bash
   ./traffic_signal
   ```

## Output:
North light is Green

East light is Yellow

South light is Red

West light is Red




