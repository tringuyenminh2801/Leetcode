class Solution {
public:
    int romanToInt(string s) {
        int len = s.length();
        int result = 0;
        int current = 0;
        while(current < len){
            if(s[current] == 'I'){
                if (s[current + 1] == 'V'){
                    result += 4;
                    current += 2;
                }
                else if (s[current + 1] == 'X'){
                    result += 9;
                    current += 2;
                }
                else{
                    result++;
                    current++;
                }
            }
            else if (s[current] == 'X'){
                if (s[current + 1] == 'L'){
                    result += 40;
                    current += 2;
                }
                else if (s[current + 1] == 'C'){
                    result += 90;
                    current += 2;
                }
                else{
                    result += 10;
                    current++;
                }
            }
            else if (s[current] == 'C'){
                if (s[current + 1] == 'D'){
                    result += 400;
                    current += 2;
                }
                else if (s[current + 1] == 'M'){
                    result += 900;
                    current += 2;
                }
                else{
                    result += 100;
                    current++;
                }
            }
            else if (s[current] == 'V'){
                result += 5;
                current++;
            }
            else if (s[current] == 'L'){
                result += 50;
                current++;
            }
            else if (s[current] == 'D'){
                result += 500;
                current++;
            }
            else if (s[current] == 'M'){
                result += 1000;
                current++;
            }
        }
        return result;
    }
};