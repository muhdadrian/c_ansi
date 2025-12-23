   #include <stdio.h>
   /* print Fahrenheit-Celsius table
       for fahr = 0, 20, ..., 300; floating-point version */
int main()
   {
     float fahr, celsius;
     float lower, upper, step;
lower = 0;
upper = 300;
step = 20;
/* lower limit of temperatuire scale */
/* upper limit */
/* step size */
     fahr = lower;
     while (fahr <= upper) {
         celsius = (5.0/9.0) * (fahr-32.0);
         printf("%3.0f %6.1f\n", fahr, celsius);
         fahr = fahr + step;
}
   }

// This is much the same as before, except that fahr and celsius are declared to be float and the formula for conversion is written in a more natural way. We were unable to use 5/9 in the previous version because integer division would truncate it to zero. A decimal point in a constant indicates that it is floating point, however, so 5.0/9.0 is not truncated because it is the ratio of two floating-point values.

// If an arithmetic operator has integer operands, an integer operation is performed. If an arithmetic operator has one floating-point operand and one integer operand, however, the integer will be converted to floating point before the operation is done. If we had written (fahr-32), the 32 would be automatically converted to floating point. Nevertheless, writing floating-point constants with explicit decimal points even when they have integral values emphasizes their floating-point nature for human readers.

// The detailed rules for when integers are converted to floating point are in later chapter. For now, notice that the assignment;

// fahr = lower;
// and the test

// while (fahr <= upper)
// also work in the natural way - the int is converted to float before the operation is done.

// The printf conversion specification %3.0f says that a floating-point number (here fahr) is to be printed at least three characters wide, with no decimal point and no fraction digits. %6.1f describes another number (celsius) that is to be printed at least six characters wide, with 1 digit after the decimal point. The output looks like this:
    //  0   -17.8
    // 20    -6.7
    // 40     4.4
    // ...

// Width and precision may be omitted from a specification: %6f says that the number is to be at least six characters wide; %.2f specifies two characters after the decimal point, but the width is not constrained; and %f merely says to print the number as floating point.

/*
%d    |   print as decimal integer
%6d   |   print as decimal integer, at least 6 characters wide
%f    |   print as floating point
%6f   |   print as floating point, at least 6 characters wide
%.2f  |   print as floating point, 2 characters after decimal point
%6.2f |   print as floating point, at least 6 wide and 2 after decimal point
 */


 // Among others, printf also recognizes %o for octal, %x for hexadecimal, %c for character, %s for character string and %% for itself.
