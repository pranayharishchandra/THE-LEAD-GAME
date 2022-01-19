// https://www.codechef.com/problems/TLG

#include <bits/stdc++.h>
using namespace std;
int p1, p2;
int lead1;
int lead2;
int s1, s2;
int count1 = 0, count2 = 0;

int main()
{
    int n;
    cin >> n; // number of rounds
    s1 = 0;   // cumlative score of p1
    s2 = 0;   // cumlarive score of p2
    lead1 = INT_MIN;
    lead2 = INT_MIN;
    while (n--)
    {

        cin >> p1 >> p2;

        s1 = p1 + s1; // cumlative score of p1
        s2 = p2 + s2; // cumlarive score of p2

        if (s1 > s2)
        {
            count1++;
            // cout << "1 is leading by " << s1 - s2 << endl;
            if (lead1 < (s1 - s2))
            {
                lead1 = s1 - s2; // saving lead in lead1 when player 1 is in the lead
                // cout << "lead1 is updated to : " << lead1 << endl;
            }
        }
        else
        {
            count2++;
            // cout << "2 is leading by " << abs(s1 - s2) << endl;
            if (lead2 < abs(s1 - s2))
            {
                lead2 = abs(s1 - s2); // saving lead in lead1 when player 2 is in the lead
                // cout << "lead2 is updated to : " << lead2 << endl;
            }
        }
    }

    if (count2 > count1)
    {

        cout << 2 << " " << lead2;
    }
    else
    {

        cout << 1 << " " << lead1;
    }
    return 0;
}
