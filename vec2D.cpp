//二次元平面幾何に関するライブラリ
struct Vector2D
{
    /* data */
    double x;
    double y;
};

double distance2D(Vector2D a, Vector2D b)
{
    return pow((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y), 0.5);
}

double cross2D(Vector2D a ,Vector2D b)
{
    return (a.y * b.x - a.x * b.y);
}

double Distancepointandline(Vector2D p, Vector2D a, Vector2D b)
{
    Vector2D ab, ap;

    ab.x = b.x - a.x;
    ab.y = b.y - a.y;
    ap.x = p.x - a.x;
    ap.y = p.y - a.y;

    double S = abs(cross2D(ab, ap));

    double d = distance2D(a, b);

    return S / d;
}
