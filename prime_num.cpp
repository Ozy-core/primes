
#include "prime_num.hpp"

int primes(int i)
{
    vector<int> prime_list;
    int n = i;

    if (i < 1) {
        cout << "This number is not prime or has no prime factors." << endl;
        for(int i=0; prime_list.size(); i++){
            cout<<prime_list[i]<<endl;
        }
        return 0;
    }

    while (n % 2 == 0) {
        prime_list.push_back(2);
        n /= 2;
    }

    for (int factor = 3; factor * factor <= n; factor += 2) {
        while (n % factor == 0) {
            prime_list.push_back(factor);
            n /= factor;
        }
    }

    if (n > 2) {
        prime_list.push_back(n);
    }

    cout << "The prime factors of your number: " << endl;
    for (size_t j = 0; j < prime_list.size(); ++j) {
        cout << prime_list[j] << endl;
    }

    return 0;
}



