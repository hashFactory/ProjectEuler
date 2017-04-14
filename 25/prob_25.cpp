//
// Created by Tristan S. Charpentier on 4/14/17.
//

#include <gmp.h>
#include <iostream>

using namespace std;

mpz_t first;
mpz_t second;
mpz_t third;

int next()
{
    mpz_init_set_ui (third, 0);
    mpz_add(third, first, second);
    mpz_set(first, second);
    mpz_set(second, third);

    size_t first_length = mpz_sizeinbase(first, 10);
    size_t second_length = mpz_sizeinbase(second, 10);

    cout << first_length << " + " << second_length << endl;
    return 0;
}

int main()
{
    mpz_init (first);
    mpz_init (second);
    mpz_init_set_ui (first, 1);
    mpz_init_set_ui (second, 1);

    for (int i = 2; i < 10000; i++)
    {
        cout << (i + 1) << ": ";
        next();
    }
}