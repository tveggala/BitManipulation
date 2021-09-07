/* swap even and odd bits of a given number */
// Input  is 23 (00010111)
// Output is 43 (00101011)

#include <bits/stdc++.h>
using namespace std;

unsigned int swapBits(unsigned int x)
{
  unsigned int even_bits = x & 0xAAAAAAAA;	// Get all even bits of x
  unsigned int odd_bits = x & 0x55555555;	// Get all odd bits of x
  even_bits >>= 1; 				// Right shift even bits
  odd_bits <<= 1; 				// Left shift odd bits
  return (even_bits | odd_bits); 		// Combine even and odd bits
}
int main()
{
 unsigned int x = 23;
 cout << swapBits(x);
 return 0;
}
