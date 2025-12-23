// Variables and Arithmetic Expressions
// The program below uses the formula oC=(5/9)(oF-32) to print the following table of Fahrenheit temperatures and their centigrade or Celsius equivalents:

/*
 1    -17
 20   -6
 40   4
 60   15
 80   26
 100  37
 120  48
 140  60
 160  71
 180  82
 200  93
 220  104
 240  115
 260  126
 280  137
 300  148
 */

 #include <stdio.h>
 /* print Fahrenheit-Celsius table
     for fahr = 0, 20, ..., 300 */
int main()
 {
   int fahr, celsius;
   int lower, upper, step;
lower = 0;
upper = 300;
step = 20;
/* lower limit of temperature scale */
/* upper limit */
/* step size */
   fahr = lower;
   while (fahr <= upper) {
       celsius = 5 * (fahr-32) / 9;
       printf("%d\t%d\n", fahr, celsius);
       fahr = fahr + step;
}
   return 0;
 }

 // In C, all variables must be declared before they are used, usually at the beginning of the function before any executable statements. A declaration announces the properties of variables; it consists of a name and a list of variables, such as:

 // int fahr, celsius;
 // int lower, upper, step;

 // The type int means that the variables listed are integers; by contrast with float, which means floating point, i.e., numbers that may have a fractional part. The range of both int and float depends on the machine you are using; 16-bits ints, which lie between -32768 and +32767, are common, as are 32-bit ints. A float number is typically a 32-bit quantity, with at least six significant digits and magnitude generally between about 10⁻³⁸ and 10³⁸.


 // C provides several other data types besides int and float, including:
 // char character |    - a single byte
 // short          |    short integer
 // long           |    long integer
 // double         |    double-precisionfloatingpoint

 // The size of these objects is also machine-dependent.

 // Computation in the temperature conversion program begins with the assignment statements

 // lower = 0;
 // upper = 300;
 // step = 20;

 // which set the variables to their initial values. Individual statements are terminated by semicolons.

 // The while loop operates as follows: The condition in parentheses is tested. If it is true (fahr is less than or equal to upper), the body of the loop (the three statements enclosed in braces) is executed. Then the condition is re-tested, and if true, the body is executed again. When the test becomes false (fahr exceeds upper) the loop ends, and execution continues at the statement that follows the loop. There are no further statements in this program, so it terminates.

 // we will always indent the statements controlled by the while by one tab stop (which we have shown as four spaces) so you can see at a glance which statements are inside the loop.
// Pick a style that suits you, then use it consistently.

// Most of the work gets done in the body of the loop. The Celsius temperature is computed and assigned to the variable celsius by the statement:

// celsius = 5 * (fahr-32) / 9;

// The reason for multiplying by 5 and dividing by 9 instead of just multiplying by 5/9 is that in C, as in many other languages, integer division truncates: any fractional part is discarded. Since 5 and 9 are integers. 5/9 would be truncated to zero and so all the Celsius temperatures would be reported as zero.

// printf("%d\t%d\n", fahr, celsius);
// causes the values of the two integers fahr and celsius to be printed, with a tab (\t) between them.

// Each % construction in the first argument of printf is paired with the corresponding second argument, third argument, etc.; they must match up properly by number and type, or you will get wrong answers.

// There are a couple of problems with the temperature conversion program. The simpler one is that the output isn't very pretty because the numbers are not right-justified. That's easy to fix; if we augment each %d in the printf statement with a width, the numbers printed will be right-justified in their fields. For instance, we might say:

// printf("%3d %6d\n", fahr, celsius);

// to print the first number of each line in a field three digits wide, and the second in a field six digits wide, like this:

/*
  0     -17
 20     -6
 40      4
 60      15
 80      26
100      37
...
 */

 // The more serious problem is that because we have used integer arithmetic, the Celsius temperatures are not very accurate; for instance, 0°F is actually about -17.8°C, not -17. To get more accurate answers, we should use floating-point arithmetic instead of integer. This requires some changes in the program. Look at the second version at folder 4.
