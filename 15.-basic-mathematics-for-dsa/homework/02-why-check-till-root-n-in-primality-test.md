# 02 Why check till root N in primality test?

#### Intuitive Understanding

Let m = sqrt(x).&#x20;

Then m \* m = x

Let x be non prime

Then x = a \* b

Then there could be only 3 possible cases

a < m < b

a > m > b

a = m = b

What's not possible is

a > m and b > m

The product is sure to be too large.&#x20;

So for primality test we only test for min(a, b) <=m.

#### Mathematic Proof

Let x  be a non prime number&#x20;

then x = a \* b where 1 < a <= b < x

Multiplying both sides by a and b&#x20;

eq 1 -> a^2 <= ab

eq2 ab <= b^2

We know ab = x

So a^2 <= x <= b^2

Taking squareroot

a <= sqrt(x) <= b

So we need to only check till square root of x to get one of the factors to perform the primality test.

$$
f(x) = x * e^{2 pii \xi x}
$$

