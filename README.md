# Automatic Gas Leakage Detector

This project is an automatic safety system made to detect LPG gas leakage in a room or house. The main goal is to reduce the risk of fire, explosions, or other accidents caused by gas leaks. The system keeps watching the gas level at all times and reacts immediately when it detects danger.

## About the Project
Many accidents happen because people do not notice gas leaks early. This system helps solve that problem by using a gas sensor that can detect LPG in the air. When the gas level becomes unsafe, the system does not wait for someone to respond. Instead, it takes several automatic actions to protect the place and the people inside.

The project is simple, low-cost, and easy to build for students, hobbyists, or anyone interested in safety automation.

## How the System Works
- The gas sensor constantly checks the air for LPG.
- When the gas level rises above the safe limit, the system reacts by:
  - Turning on a buzzer alarm to warn everyone nearby  
  - Cutting off the house electricity to avoid sparks  
  - Switching on an exhaust fan to remove the gas from the room  

- The fan keeps running until the gas level becomes normal again.
- When the air is safe, the system:
  - Restores the electricity supply  
  - Turns off the buzzer  
  - Turns off the exhaust fan  

This makes the system fully automatic, requiring no manual reset.

## Features
- Automatic detection of LPG gas leakage  
- Buzzer alarm for instant warning  
- Automatic power cut-off for safety  
- Exhaust fan activation to clear leaked gas  
- Continuous air monitoring  
- Restores normal conditions after the gas is removed  
- Simple wiring and easy-to-understand code  

## Components Used
- LPG Gas Sensor (e.g., MQ-series)  
- Microcontroller (Arduino or similar)  
- Buzzer  
- Relay modules for electricity cut-off and fan control  
- Exhaust fan  
- Power supply  
- Connecting wires  

## Applications
- Homes using LPG cylinders  
- Small restaurants  
- Workshops  
- Storage rooms  
- Any place where LPG gas is used  

## Files Included in This Repository
- Source code for the microcontroller  
- Circuit diagram  
- Explanation of how each part works  
- Instructions for building and testing the system  

## Purpose of This Project
This project is designed to make everyday spaces safer by giving early warnings and taking automatic safety actions. Gas leakage can be extremely dangerous, and quick response is important. This system provides that response without waiting for human action.
