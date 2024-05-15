# Flight Safety System (FSS) for Aircraft Automation

*Authors: Mihai-Alexandru Georgescu, Emile Marchandise, Anastasia Soulele*  
*May 2024*

## Project Overview
The **Flight Safety System (FSS)** is an advanced embedded system project aimed at increasing aircraft safety through automation. Designed and developed in a collaborative team of 3 international students, this project leverages cutting-edge sensors and control mechanisms to enhance flight safety by automating critical maneuvers during flight.

## Key Features
- **Dynamic Flight Controls:** Automates pitch and roll based on joystick input with specific thresholds to prevent excessive maneuvers.
- **Safety Protocols:** Maintains horizontal flight under critical conditions and implements automated responses to altitude extremes.
- **Obstacle Avoidance:** Integrates infrared sensors to detect obstacles and automatically adjusts the aircraft's trajectory under poor visibility conditions.
- **Engine Control Management:** Adjusts engine power in response to changes in pitch and roll, enhancing the responsiveness and safety of the aircraft.

## Technical Highlights
- **Embedded Systems Design:** Utilizes a Raspberry Pi interfaced which comes with multiple sensors to simulate real-time aircraft control.
- **Concurrency and Synchronization:** Implements threads synchronized with semaphores to ensure mutual exclusion and maintain system stability.
- **Software Engineering Practices:** Adheres to the DO-178 standard, structuring and documenting the development process through comprehensive UML diagrams:
  - Requirements Diagram
  - Use Case Diagram
  - Block Diagram
  - Activity Diagram
  - Sequence Diagram
  - State Machine Diagram
- **Real-Time Data Processing:** Manages real-time data from control inputs and sensors to dynamically adjust aircraft behavior.

## Repository Contents
- **Enterprise Architect Project:** All UML diagrams visualizing the system architecture and behavior.
- **Source Code Archive:** Complete source code managing the Raspberry Pi and sensor integration, demonstrating practical application of thread synchronization and real-time control.

## Program Setup and Execution Instructions

### Overview
This section provides the necessary commands to compile and run the program.

### Compilation
To compile the program, use the following command:
```bash
make c
```

### Running the Program
After compilation, execute the program with superuser privileges:
```bash
sudo ./MainControl
```
