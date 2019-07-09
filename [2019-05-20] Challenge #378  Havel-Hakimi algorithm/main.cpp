/*It was a dark and stormy night. Detective Havel and
 Detective Hakimi arrived at the scene of the crime.
 Other than the detectives, there were 10 people present.
 They asked the first person, "out of the 9 other people here,
 how many had you already met before tonight?"
 The person answered "5".
 They asked the same question of the second person,
 who answered "3". And so on. The 10 answers they got
 from the 10 people were:
 5 3 0 2 6 2 0 7 2 5
 The detectives looked at the answers carefully and deduced that
 there was an inconsistency, and that somebody must be lying.
 (For the purpose of this challenge, assume that
 nobody makes mistakes or forgets, and if X has met Y,
 that means Y has also met X.)
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> warmup(vector<int> tab)
{
    for (int i=0; i<tab.size(); i++)
    {
        if (tab[i] ==0)
        {
            tab.erase(tab.begin() + i);
        }
    }
    return tab;
}

void print_vec(vector<int> tab)
{
   for (int i=0; i<tab.size(); i++)
    {
        cout<<tab[i]<<endl;
    }
}

bool havel_hakimi_algorithm(vector<int> tab)
{
    stable_sort(tab.begin(), tab.end());
    reverse(tab.begin(), tab.end());
    while(tab.size()>=0)
    {
        cout << tab.size() <<endl;
        if (tab[0]==0 && tab[tab.size()-1]==0)
        {
            cout << "true" <<endl;
            return true;
        }
        if (tab[0]<0)
        {
            cout << "false" <<endl;
            return false;
        }
        tab.erase(tab.begin());
        for (int i=0; i<tab.size(); i++)
        {
            tab[i] = tab[i] - 1;
        }
    }
    return false;
}
int main()
{
    vector<int> tab = {5, 3, 0, 2, 6, 2, 0, 7, 2, 5};
    tab = warmup(tab);
    if (havel_hakimi_algorithm(tab))
    {
        cout<<"tab jest grafem"<<endl;
    }
    else
    {
        cout<<"tab nie jest grafem"<<endl;
    }
    return 0;
}
