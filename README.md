# ardcore-tap-tempo
Works like a virtual flywheel for the purposes of letting a live musician dictate the speed of the clock.

## analog input
for use with a foot pedal or contact microphone, reads in an audio-like signal and follows the envelope

## clock input
for use with an expression pedal module that will output a standard eurorack trigger or gate

## flywheel weight
the heavier the wheel, the less change it will allow to the tempo from moment to moment. zero weight instantiates instant change. infinite weight locks the tempo in place

## slippyness
How much the clock should try to match up the downbeat to the beat of the human. No slip means you can dictate tempo drift outside of the musicality of the output. The maximum slip is still pretty slow

## pulses per quarter note and click track pulse (red)
one digital output is for assisting the human in knowing how quickly they should be tapping. this output can be put through filters to make weird feedback loops. this will always reset when a new clock input is given

## stablized clock reset (green)
??? not sure if this is necessary...? Sometimes pam's new workout needs a kick in the pants. I figure most intuitive way to do this would be to use the same ppqn as the human.

## stablized clock output DAC out
tempo according to all of the given inputs at 24 ppqn
