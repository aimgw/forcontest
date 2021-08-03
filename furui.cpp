//エラトスネスの篩によって素数を列挙

const int M = 1000000;    //MAXに値を入れる
int sosu[M];

void furui(){
    for (int i = 2; i <= M; i++)
        sosu[M] = 1;
    for (int i = 2; i*i <= M; i++)
    {
        if(sosu[i])
        {
            for (int j = 2; i * j <= M; j++)
            {
                sosu[i * j] = 0;
            }
        }
    }
}

