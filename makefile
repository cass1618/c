COBJS = find_primes.o find1001.o greatest_product.o sum_of_multiples.o
CSRCS1 = find_primes.c
CSRCS2 = find1001.c
CSRCS3 = greatest_product.c
CSRCS4 = sum_of_multiples.c

CC=gcc
CFLAGS = -m32 -Wall -Werror -std=c11 -g3
LDFLAGS = -m32 -lm
TARGETS = find_primes find_1001th_prime find_greatest_product sum_of_multiples

.PHONY: clean

hello:
	echo "Please enter make + the program you would like to build.\nfind_primes\nfind_1001th_prime\nfind_greatest_product\nsum_of_multiples"

find_primes: $(CSRCS1)
	$(CC) $(CFLAGS) -o $(@) $(CSRCS1) $(LDFLAGS)

find_1001th_prime: $(CSRCS2)
	$(CC) $(CFLAGS) -o $(@) $(CSRCS2) $(LDFLAGS)

find_greatest_product: $(CSRCS3)
	$(CC) $(CFLAGS) -o $(@) $(CSRCS3) $(LDFLAGS)

sum_of_multiples: $(CSRCS4)
	$(CC) $(CFLAGS) -o $(@) $(CSRCS4) $(LDFLAGS)


clean:
	rm -f $(TARGETS)