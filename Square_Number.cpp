/* **************************************************************************

    * File Name : Square_Number.cpp

    * Creation Date : 2018-09-13 22:11:12

    * Last Modified : 2018-09-27 15:26:56

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int Num_1, Num_2; //欲輸入的兩數
    int total; //總和

    while(cin >> Num_1 >> Num_2) //輸入兩數
    {
        if(Num_1 == 0 && Num_2 == 0)
            break; //當兩數皆為0，則跳出迴圈
        else
        {
            total = 0; //初始化total
            for(int i = Num_1; i <= Num_2; i++) //i從第一個數開始到第二個數結束              
            {    
                int s = sqrt(i); //將i開根號存入s
                if(s * s == i)
                    total++; //若s平方回去與i相同，則total加一
                //若原本無法開根號，則開出來數字平方回去不會與原本i相同
            }
            cout << total << endl; //印出total
        }
    }
    return 0;
}
