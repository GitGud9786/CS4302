#ifndef COORDINATE_H
#define COORDINATE_H
class Coordinate
{
    public:
        Coordinate():abcissa(0),ordinate(0) {};
        Coordinate(float x,float y):abcissa(x),ordinate(y) {};
        ~Coordinate();

        float Getabcissa() { return abcissa; }
        void Setabcissa(float val) { abcissa = val; }
        float Getordinate() { return ordinate; }
        void Setordinate(float val) { ordinate = val; }

        float getDistance(const Coordinate &C)const;
        float getDistance();
        void move_x(float val);
        void move_y(float val);
        void movE(float val);

        bool operator >= (Coordinate &C);
        bool operator <= (Coordinate &C);
        bool operator == (Coordinate &C);
        bool operator != (Coordinate &C);

        void operator ++ ();
        void operator -- ();
        void operator ++ (int);
        void operator -- (int);
    protected:

    private:
        float abcissa;
        float ordinate;
};

#endif // COORDINATE_H
