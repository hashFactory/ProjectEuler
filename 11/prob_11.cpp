//
// Created by Tristan S. Charpentier on 4/14/17.
//

#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ifstream input ("numbers");
    vector<string> lines;
    string line;
    vector< vector<int> > numbers;

    if (input.is_open())
        while (getline(input, line))
            lines.push_back(line);

    for (int i = 0; i < lines.size(); i++)
    {
        lines[i].substr(i, i + 3)
    }

    // Check lines horizontally
    cout << lines[3] << endl;

    return 23;
}
