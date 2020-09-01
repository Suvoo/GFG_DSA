/* https://practice.geeksforgeeks.org/problems/determinant-of-a-matrix-1587115620/1/?track=ppc-matrix&batchId=221
https://www.geeksforgeeks.org/determinant-of-a-matrix/
*/

import java.io.*;
import java.util.*;
class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n = sc.nextInt();
            int matrix[][] = new int[n][n];
            
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                  matrix[i][j] =sc.nextInt();
            }
            Solution ob = new Solution();
            System.out.println(ob.determinantOfMatrix(matrix, n));
        }
    }
}// } Driver Code Ends




class Solution
{
   static void getCofactor(int mat[][], 
			int temp[][], int p, int q, int n) 
	{ 
		int i = 0, j = 0; 
	
		// Looping for each element of 
		// the matrix 
		for (int row = 0; row < n; row++) 
		{ 
			for (int col = 0; col < n; col++) 
			{ 
				
				// Copying into temporary matrix 
				// only those element which are 
				// not in given row and column 
				if (row != p && col != q) 
				{ 
					temp[i][j++] = mat[row][col]; 
	
					// Row is filled, so increase 
					// row index and reset col 
					//index 
					if (j == n - 1) 
					{ 
						j = 0; 
						i++; 
					} 
				} 
			} 
		} 
	} 
	
	/* Recursive function for finding determinant 
	of matrix. n is current dimension of mat[][]. */
	static int determinantOfMatrix(int mat[][], int n) 
	{ 
		int D = 0; // Initialize result 
	
		// Base case : if matrix contains single 
		// element 
		if (n == 1) 
			return mat[0][0]; 
		
		// To store cofactors 
		int temp[][] = new int[n][n]; 
		
		// To store sign multiplier 
		int sign = 1; 
	
		// Iterate for each element of first row 
		for (int f = 0; f < n; f++) 
		{ 
			// Getting Cofactor of mat[0][f] 
			getCofactor(mat, temp, 0, f, n); 
			D += sign * mat[0][f] 
			* determinantOfMatrix(temp, n - 1); 
	
			// terms are to be added with 
			// alternate sign 
			sign = -sign; 
		} 
	
		return D; 
	} 
}
