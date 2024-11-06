#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" 
#include <cmath>
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() 
	 {
		n = 0;
		double a = 1 / x;
		s = a;
		do {
			n++;
			s += a;
		} while (abs(a) >= eps);
	}
