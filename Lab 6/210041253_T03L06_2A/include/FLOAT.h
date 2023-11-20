#ifndef FLOAT_H
#define FLOAT_H


class FLOAT
{
    public:
        FLOAT(float x=0): data(x){};
        ~FLOAT();

        float Getdata() { return data; }
        void Setdata(float val) { data = val; }

        FLOAT operator + (const FLOAT &f1);
        FLOAT operator - (const FLOAT &f1);
        FLOAT operator * (const FLOAT &f1);
        FLOAT operator / (const FLOAT &f1);
        void operator = (int &i);

    protected:

    private:
        float data;
};

#endif // FLOAT_H
