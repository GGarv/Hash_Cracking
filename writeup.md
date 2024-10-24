# Brute-Force SHA-256 Hash Cracker

The Brute-Force SHA-256 Hash Cracker is a C++ implementation that utilizes a brute-force approach to find a password by matching its SHA-256 hash. This project demonstrates the principles of password cracking and multithreading using OpenMP, which enhances performance by distributing the workload across multiple threads.

## Overview of the Algorithm
The brute-force algorithm operates by systematically generating potential passwords and computing their SHA-256 hashes until a match is found. The following steps outline the core components of the algorithm:

1. **Password Generation:**  
   Passwords are generated by concatenating a base string (e.g., "password") with an incrementing integer. This ensures a comprehensive search through potential combinations.

2. **Hashing:**  
   Each generated password is hashed using the SHA-256 algorithm. This cryptographic function produces a fixed-size output (256 bits) from an arbitrary input, making it suitable for verifying password integrity.

3. **Matching:**  
   The hashed output is compared to the target hash. If a match is found, the original password is revealed.

4. **Multithreading with OpenMP:**  
   To improve performance, the program uses OpenMP for parallel processing. This allows multiple threads to search for the password simultaneously, reducing the overall execution time.

## Steps in the Cracking Process
1. **Thread Initialization:**  
   The program initializes multiple threads, each responsible for generating and testing passwords in parallel.

2. **Dynamic Scheduling:**  
   OpenMP's dynamic scheduling distributes the workload among threads to optimize CPU utilization, particularly useful when the number of iterations is large.

3. **Critical Section:**  
   A critical section ensures that only one thread can update the shared variable (indicating whether the password has been found) at a time. This prevents race conditions and maintains the integrity of the result.

4. **Early Exit:**  
   Threads continuously check whether another thread has already found the password. If so, they terminate their execution to save computational resources.

## Error Handling and Output
The program outputs the found password and the total number of iterations. If the password is not found within the specified range, it indicates that the search was unsuccessful.

## Advantages and Limitations
**Advantages:**
- **Simplicity:** The brute-force method is straightforward to implement and understand.
- **Comprehensive Search:** This method guarantees that every possible combination will eventually be checked, ensuring that the correct password will be found, given enough time.

**Limitations:**
- **Time-Consuming:** Brute-force attacks can be extremely slow, especially for complex passwords. The time required grows exponentially with the length and complexity of the password.
- **Resource Intensive:** Running multiple threads increases the demand on CPU and memory, which may not be feasible on systems with limited resources.

## Simulations
The performance of the brute-force hash cracker can be evaluated by running simulations with varying parameters:
- **Varying Password Lengths:** Test with different base strings and lengths to observe how the execution time scales.
- **Number of Threads:** Compare the performance of the program with different numbers of threads to identify the optimal configuration for your hardware.
- **Hashing Speed:** Measure the time taken to compute hashes to assess the impact of different hashing algorithms on performance.

## Security Considerations
While this project serves as an educational tool for understanding brute-force attacks, it is essential to recognize that such methods are unethical and illegal when applied to unauthorized systems. Responsible use of this knowledge should focus on enhancing security measures and developing stronger password policies.

## Conclusion
The Brute-Force SHA-256 Hash Cracker illustrates the application of brute-force techniques in the context of password cracking. While this approach is not the most efficient or secure method, it effectively demonstrates the principles of hashing, multithreading, and computational problem-solving. With the growing importance of cybersecurity, understanding such algorithms contributes to building more robust defense mechanisms against unauthorized access.

## Blog Links
- [Hash Cracker Project Blog](https://www.notion.so/Breaking-SHA-256-with-Parallel-Computing-An-OpenMP-Approach-b7de25114a1749d5a59df74ad5b3256a?pvs=4)
