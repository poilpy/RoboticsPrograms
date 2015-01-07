#include <iostream>
#include <vector>
#include <fstream>

int main () 
{
    std::vector<int> values;
    std::ofstream textFile("primes.txt");

    for (int i=2; i<100; i++) 
        for (int j=2; j<i; j++)
        {
            if (i % j == 0) 
                break;
            else
                values.push_back(i);
        }   
    
    textFile << '\n';
    return 0;
}