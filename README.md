# WIMS Motor/Agitation Motor Assembly Code

This Arduino code example demonstrates how to control a WIMS pump/agitation motor using a two-channel relay. The motor activation time can be either set in the code or dynamically adjusted using a potentiometer.

## Author
- Trevor Snodgrass

## Last Modified
- 2016

## Requirements
- Arduino board
- Two-channel relay
- Potentiometer (optional for dynamic control)
- WIMS pump/agitation motor circuit

## Usage
1. Connect the WIMS pump/agitation motor to the relay.
2. Connect a potentiometer (optional) to analog pin A0 for dynamic control.
3. Upload the code to your Arduino board.

## Pin Configuration
- Pump Activation Pin: 7 (You can modify this in the code)
- Potentiometer Pin: A0

## Functionality
- The pump is initially deactivated.
- The motor activation time can be set in the code or adjusted dynamically with a potentiometer.
- The code includes a function for motor control, making it modular and easy to understand.

## Code Modification
- Adjust the `pumpActivationPin` if your relay is connected to a different pin.
- Modify the `activationTime` variable for a fixed activation time.
- Customize the code as needed for your specific setup.

## Disclaimer
Copying or using this code without explicit permission from the author or company will result in legal action.

Feel free to reach out if you have any questions or suggestions!
