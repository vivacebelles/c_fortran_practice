#include <stdio.h>
#include <math.h>

#ifndef EXP
#ndef   EXP = 3.14
#endndef

int main()
{
	struct bank {
		int account;
		float balance;
        float rate;
        int month;
        float predict;
	};
    struct bank checking;

    checking.account = 1234;
    checking.balance = 568.39;
    checking.rate    = 0.25;
    checking.month   = 12;
    checking.predict = checking.balance*

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
