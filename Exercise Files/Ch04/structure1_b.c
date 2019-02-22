#include <stdio.h>

int main()
{
	struct bank {
		int account;
		float balance;
	};
    struct bank checking;

    checking.account = 1234;
    checking.balance = 568.39;

    printf("Checking account %d has %f\n",
            checking.account,
            checking.balance
          );

    struct bank saving;

    saving.account = 203;
    saving.balance = 1209.98;

    printf("Savings account %d has %f \n",
            saving.account,
            saving.balance
          );
    return(0);
}
