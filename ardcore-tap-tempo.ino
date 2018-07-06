// Tempo tapped clock
// Theil–Sen estimator
// https://en.wikipedia.org/wiki/Theil%E2%80%93Sen_estimator

last_128_steps = int[128];
steps_to_use_for_regression = A0;
//speed_to_change = A1; // nah pretty nuch the same thing
human_triggers = A2;
sample_audio_maybe??? = A3;

void setup() {
  
}

void loop() {
  // do we have a new step?
    // record it
  // should we drop a step right now?
    // do it
}
