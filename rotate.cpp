//原点を中心として回転させる
//入力元座標(x, y)、回転させたい角度theta

const double pi = 3.14159265359;

pair<double, double> rotate(double x, double y, double theta){
    double rad = pi * theta / 180.9;
    double nx = cos(rad) * x - sin(rad) * y;
    double ny = sin(rad) * x + cos(rad) * y;
    return make_pair(nx, ny);
}