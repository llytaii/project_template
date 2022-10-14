#include "stopwatch.hpp"

#include <fmt/core.h>

int main() {
    Stopwatch sw;
    fmt::print("\'Hello World!\'");
    sw.stop();
    fmt::print(" takes {} ms to print!", sw.duration<std::milli>());
}