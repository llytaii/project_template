#pragma once
#include <chrono>

class Stopwatch
{
public:
    using clock_t = std::chrono::_V2::high_resolution_clock;

    void start() { m_start = clock_t::now(); };
    void stop() { m_stop = clock_t::now(); };

    // R (time Resolution): https://en.cppreference.com/w/cpp/numeric/ratio/ratio
    // T (return Type):     float/double
    template<typename R = std::milli, typename T = float>
    T duration() {
        return std::chrono::duration<T, R>{m_stop - m_start}.count();
    };

private:
    using time_point_t = std::chrono::_V2::system_clock::time_point;
    time_point_t m_start{};
    time_point_t m_stop{};
};
