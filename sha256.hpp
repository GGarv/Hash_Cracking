// sha256.hpp
#ifndef SHA256_HPP
#define SHA256_HPP

#include <string>

std::string sha256(const std::string &input);
void brute_force_sha256(const std::string &target, bool use_openmp);

#endif
