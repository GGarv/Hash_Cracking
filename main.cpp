// main.cpp
#include "sha256.hpp"
#include <iostream>
#include <omp.h>
#include <chrono>

int main() {
    std::string target_hash = sha256("Abhinandan123456789");  // Example target hash to crack
    std::cout << "Target hash: " << target_hash << std::endl;

    // Time measurement without OpenMP
    auto start = std::chrono::high_resolution_clock::now();
    brute_force_sha256(target_hash, false);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> time_taken = end - start;
    std::cout << "Time taken without OpenMP: " << time_taken.count() << " seconds" << std::endl;

    // Time measurement with OpenMP
    start = std::chrono::high_resolution_clock::now();
    brute_force_sha256(target_hash, true);
    end = std::chrono::high_resolution_clock::now();
    time_taken = end - start;
    std::cout << "Time taken with OpenMP: " << time_taken.count() << " seconds" << std::endl;

    return 0;
}
