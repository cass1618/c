CS 205 Program 1
Cassandra Copp

The makefile contains a rule to build each of the 4 required programs.
Each program has a main() function so they need to be built separately.

To run each program, enter make followed by the name of the target.
Then enter ./ followed by the name of the target.

1. Find the number of primes less than a user inputted number.
make find_primes
./find_primes

2. Find the 1001th prime.
make find_1001th_prime
./find_1001th_prime

3. Find the greatest product of 5 consecutive numbers in the given number.
make find_greatest_product
./find_greatest_product

4. Find the sum of multiples of 3 and 5 less than number inputted as argument.
make sum_of_multiples
./sum_of_multiples 123

**Replace "123" with desired input.