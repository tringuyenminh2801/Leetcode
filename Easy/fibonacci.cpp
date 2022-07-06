class Solution {
public:
    int fib(int n){
        if (n < 2){
            return n;
        }
        else{
            int f0 = 0;
            int f1 = 1;
            int count = 2;
            int result = 0;
            while (count <= n){
                result = f0 + f1;
                f0 = f1;
                f1 = result;
                count++;
            }
            return result;
        }
    }
};

int main(){
    return 0;
}