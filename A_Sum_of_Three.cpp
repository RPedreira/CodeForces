#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        if(num <= 6)
        {
            cout << "NO" << endl;
        }
        else if((num - 1) % 2)
        {
            int menor, maior;
            maior = num / 2;
            menor = maior - 1;
            while(maior % 3 == 0 || menor % 3 == 0 && (menor > 1))
            {
                maior++;
                menor--;
            }
            if(menor == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl << "1 " << menor << " " << maior << endl;
            }
        }
        else
        {
            if((--num / 2) % 3 == 0)
            {
                cout << "YES" << endl;
                cout << "1 " << (num / 2) - 1 << " " << (num / 2) + 1 << endl;
            }
            else if((num / 2) - 3 > 1)
            {
                cout << "YES" << endl;
                cout << "1 " << (num / 2) - 3 << " " << (num / 2) + 3 << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}