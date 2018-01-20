#include <math.h> //need space between header and library

#include "kaprekarUtils.h"

/**
 * <p>This function tests whether the given input <code>n</code>
 * is a Kaprekar Number or not.  A Kaprekar Number is a non-negative
 * integer n whose square can be split into two positive integers 
 * whose sum is equal to the original number.  For the purposes of 
 * this method, we restrict our consideration to base-10 representations.</p>
 * 
 * For example, 45 is a Kaprekar number, because 
 *   45<sup>2</sup> = 2025 
 * and 
 *   20 + 25 = 45. 
 * 
 * <p>See Wikipedia's  
 * <a href="https://en.wikipedia.org/wiki/Kaprekar_number">Kaprekar Number</a>
 * article for more information.</p>
 * 
 * @param n
 * @return <code>true</code> if <code>n</code> is a Kaprekar Number, 
 * <code>false</code> otherwise.
 */
int isKaprekar(int n) {

  if(n < 1) {
    return 0; //need to return to 0
  }

  int i;
  long square = (long) pow(n, 2);   //changes n to a long and squares it
  int numDigits = (int) log10(square) + 1; //square misspelled change n
  long modulus = 1; //dividing square by zero is undefined
  long first, second;
  for(i=1; i<=numDigits; i++) {		//misspelled vatiable
    modulus *= 10;			//variable misspelled
    first = square / modulus;
    second = square % modulus;
    if(first >= 0 &&			// first is always possitive
       first + second == n && second > 0) {	
      return 1;
    }
  }
  return 0;
  
}
