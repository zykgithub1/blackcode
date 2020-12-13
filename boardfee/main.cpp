//
//

#include <stdafx.h>
#include <iostream>
using namespace std;

class mincost_chuanfei {
public:
    int n;
    int **p, **m,**t;

    void data_read()
    {
        int i, j;
        cin >> n;
        p = new int*[n];
        for (i = 0; i < n; i++) p[i] = new int[n+1];//p[i][j]表示i站直接到j站的费用，i@(0,n-1),j@(1,n)
        m = new int*[n];
        for (i = 0; i < n; i++) m[i] = new int[n+1];//m[i][j]表示i站到j站的最少费用
        t = new int*[n];
        for (i = 0; i < n; i++) t[i] = new int[n+1];//t[i][j]用于跟踪i站到j站之间断开的某一站序号，用于构造最优解
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j <= n; j++) cin >> p[i][j];
        }
    }

    void data_processing()
    {
        int i, j, s,tmp;
        for (s = 1; s<=n; s++)//让步距s从1加大到n
        {
            for (i = 0; i<=n - s; i++)//i@(0,n-s)
            {
                j = s + i;//j等于i+步距s
                if (s == 1) { m[i][j] = p[i][j]; t[i][j] = j; }
                else {
                    tmp = p[i][j]; t[i][j] = j;
                    for (int k = i + 1; k < j; k++)
                    {
                        if (m[i][k] + m[k][j] < tmp) { tmp = m[i][k] + m[k][j]; t[i][j]=k;}
                    }
                    m[i][j] = tmp;

                     }
            }
        }

    }

    void Traceback(int i, int j, int** t)
    {
        if (t[i][j] == j) {
            cout << "start:"<<i<<"      end:"<<j << endl; return;
        }
        Traceback(i, t[i][j], t);
        Traceback(t[i][j], j, t);
    }



    void data_output()
    {
        cout << "the min cost:" << m[0][n] << endl;
        Traceback(0, n, t);

    }
};




int main()
{
    mincost_chuanfei dd;
    dd.data_read();
    dd.data_processing();
    dd.data_output();


    return 0;
}
