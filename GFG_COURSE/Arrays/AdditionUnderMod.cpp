/* https://practice.geeksforgeeks.org/problems/addition-under-modulo/1/?track=ppc-mathematics&batchId=221 */

int sumUnderModulo(long long a,long long b)
{
    int M=1000000007;
    //your code here
    
    return (a%M + b%M)%M;
}
