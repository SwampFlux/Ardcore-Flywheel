# ardcore-tap-tempo
Works like a virtual flywheel for the purposes of letting a live musician dictate the speed of the clock.

## flywheel weight
the heavier the wheel, the less change it will allow to the tempo from moment to moment. zero weight instantiates instant change. infinite weight locks the tempo in place

## pulses per quarter note and click track pulse (red)
one digital output is for assisting the human in knowing how quickly they should be tapping. this output can be put through filters to make weird feedback loops

## analog input
for use with a foot pedal or contact microphone, reads in an audio-like signal and follows the envelope

## clock input
for use with an expression pedal module that will output a standard eurorack trigger or gate

## stablized clock output (green)
tempo according to all of the given inputs.
