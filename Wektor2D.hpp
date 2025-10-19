class Wektor2D
{
public:
    void setX(double x) { wspx = x; }

    double getX() { return wspx; }

    void setY(double y) { wspy = y; }

    double getY() { return wspy; }

    Wektor2D(double x, double y)
    {
        setX(x);
        setY(y);
    };

    Wektor2D()
    {
        wspx = 0.;
        wspy = 0.;
    };
    // tu dziala chyba

private:
    double wspx;
    double wspy;

    // Tutaj napisz implementacje klasy Wektor2D
};

// dodawanie
Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
    double nowyx = v1.getX() + v2.getX();
    double nowyy = v1.getY() + v2.getY();

    return Wektor2D(nowyx, nowyy);
};

// mnozenie
double operator*(Wektor2D v1, Wektor2D v2)
{
    return (v1.getX() * v2.getX()) + (v1.getY() * v2.getY());
}
