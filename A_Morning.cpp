#include <bits/stdc++.h>
using namespace std;

string pin = "1234567890";

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int time = 0, index = 0;
        string s;
        cin >> s;

        for(int i = 0; i < 4; i++)
        {
            if(s[i] == pin[index])
                time++;
            else if(s[i] == '0')
            {
                time += (10 - index);
                index = 9;
            }
            else if(pin[index] == '0')
            {
                time += 10 - (s[i] - 48);
                time++;
                index = (s[i] - 48) - 1;
            }
            else if(s[i] < pin[index])
            {
                while(pin[index] != s[i])
                {
                    index--;
                    time++;
                }
                time++;
            }
            else
            {
                while(pin[index] != s[i])
                {
                    index++;
                    time++;
                }
                time++;
            }
        }
        cout << time << endl;
    }
}