#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H


class SavingsAccount
{
    public:
        SavingsAccount();
        ~SavingsAccount();

        float GetsavingsBalance() { return savingsBalance; }
        void SetsavingsBalance(float val) { savingsBalance = val; }
        float GetannualInterestRate() { return annualInterestRate; }
        void SetannualInterestRate(float val) { annualInterestRate = val; }

        float calculateMonthlyInterest();
        void modifyInterest(float n);
    protected:

    private:
        static float annualInterestRate;
        float savingsBalance;
        static int cou;
};

#endif // SAVINGSACCOUNT_H
