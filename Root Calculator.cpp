/*You probably know that the roots of the quadratic equation
ax2 + bx + c = 0
are given by :
x1 = (-b + sqrt(b2
	- 4ac)) / 2a and
	x2 = (-b - sqrt(b2
		- 4ac)) / 2a
	Write a program that asks the user to enter a, b, c, then calculates and prints the roots.
	Make sure to include all necessary operators and parentheses!
	Run it with different values :
a = 1, b = -4, c = 4 should give two equal roots of value 2
a = 1, b = -5, c = 6 should give 3 and 2
a = 6, b = -7, c = -5 should give 1.67 and -0.5
 */
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
int main() {


    using namespace std;

    int main() {



        double a, b, c, x1, x2;
        cout << "Please provide the a value: ";
        cin >> a;

        cout << "Please provide the b value: ";
        cin >> b;

        cout << "Please provide the c value: ";
        cin >> c;


        x1 = -(b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        cout << "The x1 is: " << x1 << endl;


        x2 = -(b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        cout << "The x2 is: " << x2 << endl;

        return 0;

        //it could be done by if & else too!



}



