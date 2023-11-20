#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
    public:
        Counter(int a,int b);
        ~Counter();

        int Getcou() { return cou; }
        void Setcou(int val) { cou = val; }
        int Getinc_steps() { return inc_steps; }
        void Setinc_steps(int val) { inc_steps = val; }

        void setIncrementStep(const int &step_val);
        void increment();
        void resetCount();

        Counter operator + (const Counter c);
        //Counter operator = (const Counter c);
    protected:

    private:
        int cou;
        int inc_steps;
};

#endif // COUNTER_H
