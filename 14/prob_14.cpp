//
// Created by Tristan S. Charpentier on 4/14/17.
//

#include <iostream>

long long step(long long in)
{
    if (in % 2 == 0)
        return in / 2;
    else
        return 3*in + 1;
}

int main()
{
    long long num = 1;
    int record_length = 1;
    int longest_num = 1;
    for (int i = 2; i < 1000000; i++)
    {
        num = i;
        int iterations = 0;
        while ((num = step(num)) != 1)
            iterations++;
        if (iterations > record_length)
        {
            record_length = iterations;
            longest_num = i;
        }
    }

    std::cout << record_length << " produced by i = " << longest_num << "\n";
}
