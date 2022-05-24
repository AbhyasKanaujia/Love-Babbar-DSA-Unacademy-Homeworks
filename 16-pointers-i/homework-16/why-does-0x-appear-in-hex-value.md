# Why Does 0x appear in Hex value?

`0x` appears in a hexadecimal literal to distinguish it from other tokens(variable name or functon name).&#x20;

`ABCDE123` could mean either of these things. It cannot be distinguished easily. It contains valid digits to be an hexadecimal number and is also a valid token name.&#x20;

The creators of C/C++ decided to use a leading `0x`.

A leading 0 is not allowed as a valid token name in this laguage. So anything starting with 0 is sure to be a number.&#x20;

Only having 0 is not enough as it is reserved for signifying octal number. So `0123` is surely an octal number.&#x20;

`0x123` or `0xABDC` are surely hexadecimal litreals.&#x20;
