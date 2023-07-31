class Solution {
public:
    double myPow(double x, int n) {
        // double a = 1.0;
        // while(n != 0){
        //     if(n > 0){
        //         a = a*x;
        //         n--;
        //     }
        //     else{
        //         a = a/x;
        //         n++;
        //     }
        // }
        // return a;
        return myPowHelper(x,n);
    }

private:
    double myPowHelper(double x, int n){
        if(x == 0)  return 0;
        if(n == 0)  return 1;

        double res = myPowHelper(x,n/2);
        res *= res;
        if(n % 2 != 0){
            return (n > 0) ? res * x: res / x;
        }
        else{
            return res;
        }
    }
};
