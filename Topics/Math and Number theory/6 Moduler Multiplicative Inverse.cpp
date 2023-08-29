/*
A * B ≡ 1 mod M

B is the number for B if(A * B % M == 1)

A and M must be co prime 

format theorem =>

A ^ M-1 ≡ 1 % M
means,
A^M-1 % M = 1

A^M-2 ≡ A^-1 mod M (multiply with A^M-1)

A^M-2 % M  = A^-1  (formula)

example : 

A = 2
M = 5 (A and M must be co prime)

2^5-1 % 4 = 2^4 % 5 = 16 % 5 = 1

*/

