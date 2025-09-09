
#include "prime_num.hpp"

int primes(int i)
 {
    vector <int> prime_list;
    if(i<1)
    {
        cout<< "This number is not prime.";
        for(int i=0;i<prime_list.size();i++)
        {
            cout<< prime_list[i]<<", ";
        }
        return 0;
    }
    while(i>1)
    {
        if(i%2==0)
        {
            i=i/2;
            prime_list.push_back(2);
        }
        else
        {
            prime_list.push_back(i);
        }
        if(i%3==0)
        {
            i=i/3;
            prime_list.push_back(3);
        }
        else
        {
            prime_list.push_back(i);
        }
    }
    cout<< "The prime factors of your number are: ";
    for(int i=0;i<prime_list.size();i++)
    {
        cout<< prime_list[i]<<", ";
    }
    return 0;
 }
 


