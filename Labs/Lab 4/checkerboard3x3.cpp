#include <iostream>
using namespace std;
// function
int main()
{
    int width, height; 
    int k, m;
    k = 3;
    m = 1;

    string st = "*";
    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height: ";
    cin >> height;

    cout << "Shape: " << endl;

    for (int i = 0; i < height; i++)
    {
      if ((i + 1) % (3 + m) == 0)
      {
        for (int x = 0; x < width; x++)
        {
          if ((x / 3) % 2 == 0)
            cout << " ";
          else
            cout << "*";
        }

      if (m % 3 == 0)
        m += 4;
      else
        m += 1;
      }
      else
      {
        for (int x = 0; x < width; x++)
        {
          if ((x / 3) % 2 == 0)
            cout << "*";
          else
            cout << " ";
        }
      }
      cout << endl;
    }
}