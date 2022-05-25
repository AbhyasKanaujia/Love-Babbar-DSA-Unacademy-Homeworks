# 04 Time Complexity of Sieve of Eratosthenes

Each prime number p will have to mark N/p numbers as prime. So total markings are:

$$
\frac{N}{2}+\frac{N}{3}+\frac{N}{5}+\frac{N}{7}+\dots+\frac{N}{P}
$$

where P is the largest prime smaller than N.&#x20;

Taking N common

$$
N\left(\frac{1}{2}+\frac{1}{3}+\frac{1}{5}+\frac{1}{7}+\dots+\frac{1}{P}\right)
$$

We know&#x20;

$$
\left(\frac{1}{2}+\frac{1}{3}+\frac{1}{5}+\frac{1}{7}+\dots+\frac{1}{P}\right)=\text{HP of Primes}=\log{\log{P}}
$$

Assuming worst case where P = N

The time compelxity of Sieve of Eratosthenes is

$$
O(N\log{\log{N}})
$$
