
#include "tv_lib.h"

int payment(float payment, char status[15]){
	int tester_p = 0, tester_s = 0;

	if (payment >= 0.01 && payment <= 99999.00){
		tester_p = 1;
	}
	
	if (strcmp(status, "regular") == 0 || strcmp(status, "estudante") == 0 || 
		strcmp(status, "aposentado") == 0 || strcmp(status, "VIP") == 0) {
		tester_s = 1;
	}

	if(tester_p == 1 && tester_s == 1){
		return 0;
	}
	else if (tester_p == 0) {
		return 1;
	}
	else if (tester_s == 0) {
		return 2;
	}
}
