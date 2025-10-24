# Multiplexed-2-Digit-7-Segment-Display-using-PIC16F877A

🧭 Project Overview

This project demonstrates two-digit number display (98) using 7-segment multiplexing with the PIC16F877A microcontroller.
Multiplexing allows multiple 7-segment displays to share the same segment lines, saving I/O pins and reducing hardware complexity.

⚙️ Hardware & Software Requirements

Hardware:

PIC16F877A Microcontroller

2 × 7-Segment Displays (Common Cathode or Common Anode — depending on wiring)

8 × 330Ω Resistors for segment lines

2 × NPN transistors (if using common cathode displays)

Breadboard / Proteus simulation

Software:

MPLAB X IDE

XC8 Compiler

Proteus 8 Professional

🧩 Proteus Circuit Setup

Controller: PIC16F877A
Oscillator: 20 MHz Crystal (pins 13 & 14)
Connections:

PORTB (RB0–RB7): Connect to segments a–g, dp (through resistors)

PORTC (RC0, RC1): Control the common cathodes (or anodes) of the two displays

Add NPN transistors (e.g., BC547) for digit control if current is high

⚡ Multiplexing Logic

The microcontroller rapidly switches between the two digits — each lit for ~10ms.
Human eyes perceive both digits as continuously ON due to persistence of vision (POV).

▶️ Simulation Steps

Open Proteus_Design.pdsprj in Proteus 8.

Load the compiled .hex file from MPLAB X.

Run the simulation — both digits will display “98” stably.

📸 Output

Displays “98” on two 7-segment displays with smooth multiplexing.

🚀 Future Expansion Ideas

Implement a 2-digit counter (00–99) with delay or button input.

Add a timer-based interrupt for more stable display refresh.

Interface 4-digit multiplexed display for clock or sensor readings.
