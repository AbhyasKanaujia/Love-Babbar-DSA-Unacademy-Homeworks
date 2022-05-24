# Why does pointer size appear 4 bytes on some system and 8 on others?

Pointers are potentially `unsigned integers`. Each number value corresponds to a particular location in RAM.&#x20;

The size of the poitner depends on the architecutre of the system where 4 bytes are used to address 32 bit system and 8 bytes are used to address 64 bit systems.&#x20;

When we say that a system is N-bit(16 bit or 32 bit or 64 bit) we mean to say the size that the system uses to store an integer value.&#x20;

This is also the size of the poitner as mentioned it is an `unsigned integer`.&#x20;

This is also the reason why a 32 bit system can have a maximum of&#x20;
