#include <iostream>

using namespace std;

int main()
{
    double matrix[3][4];
    int i=0;

    cout << "Enter a 3 by 4 matrix row by row: "<<endl;
    while(i<3) {
  int j=0;
   while(j < 4) {
    cin>> matrix[i][j];
    j++;
  }
  i++;
}

     for (int col = 0; col < 4; col++) {
        double sum = 0;
        for (int row = 0; row < 3; row++) {
            sum += matrix[row][col];
        }
          cout << "Sum of the elements at column " << col << " is " << sum << endl;
     }

    return 0;
}
