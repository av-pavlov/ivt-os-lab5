#include <stdlib.h>

int months(const float balance, const float interest_rate, const float monthly_payment) {
	if (monthly_payment < balance * interest_rate / 1200) return -1;
	float remaining_balance = balance;
	int mon = 0;
	while (remaining_balance > 0) {
		remaining_balance -= (monthly_payment - balance * interest_rate / 1200);
		mon++;
	}
	return mon;
}