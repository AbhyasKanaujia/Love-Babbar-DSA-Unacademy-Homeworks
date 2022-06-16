# Binary Search

## Getting Mid while Avoids Integer Overflow

$$
mid=low+((high-low)>>1)
$$

:bomb: `mid = low + (high - low) >> 1` will not work. >>'s precedence is lower, so it needs to be in parentheses.&#x20;
