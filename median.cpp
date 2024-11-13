#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

int main() 
{
    ifstream f;
    string filename;
    cout << "Enter the filename: " << endl;
    cin >> filename;
    f.open(filename);
    if (f.is_open())
    {
        cout << "File Opened" << endl;
    } 
    else 
    {
        cout << "could not open file" << endl;
    }

    vector<int> num;  
    string line;
    while (getline(f, line)) 
    {
        stringstream ss(line);
        string value;
        while (getline(ss, value, ',')) 
        {
            num.push_back(stoi(value));  
        }         
    }
    int size = num.size();
    int median;
    if (size % 2 == 0) 
    {
        int num1 = num[size / 2];
        int num2 = num[(size / 2) - 1];
        median = (num1 + num2) / 2;
        cout << "Median: " << median << endl;
    } 
    else 
    {
            
        median = num[size / 2];
        cout << "Median: " << median << endl;
    }

        f.close();  
        return 0;
    }
    

    

