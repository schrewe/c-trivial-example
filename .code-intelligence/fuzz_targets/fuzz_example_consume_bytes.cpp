#include <stdint.h>
#include <stddef.h>

extern "C" {
#include <stdlib.h>
#include "example.h"
}

void consume_bytes(const char *string, size_t len);

// extern "C" int FUZZ_INIT_WITH_ARGS(int *argc, char ***argv) {
extern "C" int FUZZ_INIT() {

  // Add global setup code here - called once before fuzzing starts

  return 0;
}

extern "C" int FUZZ(const char *Data, size_t Size) {

  // process fuzzer input (*Data) and setup local objects necessary to call the function under test

  consume_bytes(Data,Size);

  // reset state and free all locally allocated resources

  return 0;
}
