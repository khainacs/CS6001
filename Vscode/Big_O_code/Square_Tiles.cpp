/*
You are selling beautiful geometric pictures. 
Each one consists of 1x1 square tiles arranged into a non-overlapping grid. 
For example:

.##..
.####
.####
.##..
Blue tiles are represented by # characters, and white tiles are represented by.
characters. You do not use other colors.
Not everybody likes blue though, 
and some customers want you to replace all the blue tiles in your picture with red tiles. 
Unfortunately, red tiles only come in the larger 2x22x2 size, which makes this tricky.

./\..
.\//\
./\\/
.\/..
Each red tile is represented here by a pair of / characters in the top-left 
and bottom-right corners, and a pair of \ characters in the other two corners.

Given a blue and white picture, 
can you transform it into a red and white picture in this way?
*/
#include<bits/stdc++.h>

using namespace std;
void square_tiles(int column, int row, string matrix[], int test_case)
{
   
   cin >> test_case;
   for (int index = 1; index <= test_case; index++)
   {
      cin >> row;
      cin.clear();
      fflush(stdin);
      cin >> column;
      bool flag = false;
      for (int i = 0; i < row; i++)
      {
         cin >> matrix[i];
      }
      for (int i = 0; i < row; i++)
      {
         for (int j = 0; j < column; j++)
         {
            if (matrix[i][j] == '#')
            {
               if (((j+1) < column) && (matrix[i][j+1] == '#') && (i+1 < row) && (matrix[i+1][j] == '#') && (matrix[i+1][j+1] == '#'))
               {
                  matrix[i][j] = '/';
                  matrix[i][j+1] = '\\';
                  matrix[i+1][j] = '\\';
                  matrix[i+1][j+1] = '/';

               }
               else
               {
                  flag = true;
                  break;
               }
            }
         }
      }
      cout << "Case #" << index << "\n";
      if (flag == true) 
      {
         cout << "Impossible\n"; 
      }
      else
      {
         for (int i = 0; i < row; i++)
         {
            cout << matrix[i] << endl;
         }
      }      
   } 
}
int main()
{
   int column;
   int row;
   string matrix[53];
   int test_case;
   square_tiles(column, row, matrix, test_case);
}