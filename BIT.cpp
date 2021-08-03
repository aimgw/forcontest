//Binary indexed tree (最大値)
//1indexでの入力を想定 
template<typename T> 
struct BIT
{
    /* data */
    int n;
    vector<T> datas;

    /*functions*/
    void init(int N){
        n = N;
        datas.resize(N+1, 0); //BITは1index
    }

    void update(int i, T val){
        for(; i <= n; i += i&-i){
            datas[i] = max(datas[i], val);
        }
    }

    T getmax(int i){
        T ans = 0;
        for(; i > 0; i -= i&-i){
            ans = chmax(ans, datas[i]);
        }
        return ans;
    }
};
