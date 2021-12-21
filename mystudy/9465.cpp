#include <iostream>

using namespace std;

int main(){
        int cnt;
        cin >> cnt;
        int data[200001][2];
        int len;
        for(int cnt_i = 0; cnt_i < cnt; cnt_i++)
        {
                cin >> len;
                for(int ma = 0; ma < len; ma ++)
                {
                        cin>>data[ma][0];
                }
                for(int ma = 0; ma < len; ma ++)
                {
                        cin>>data[ma][1];
                }
                data[0][0] = data[0][0];
                data[0][1] = data[0][1];
                data[1][0] = data[0][1] +data[1][0];
                data[1][1] = data[0][0] + data[1][1];

                for(int i = 2; i < len; i++)
                {
                        data[i][1] = (data[i-1][0] > data[i-2][0] ? data[i][1] + data[i-1][0] : data[i][1] + data[i-2][0]);
                        data[i][0] = (data[i-1][1] > data[i-2][1] ? data[i][0] + data[i-1][1] : data[i][0] + data[i-2][1]);
                }
                cout << (data[len - 1][1] > data[len - 1][0] ? data[len-1][1] : data[len-1][0])<<endl;
        }
}