class Solution {
public:
    int reverseDegree(string s) {
        char zi = 'z';
        int sum =0;
        for(int i =0; i< s.size();i++){

            sum+= ((int)(zi)-(int)s[i] +1)*(i+1);
        }
        return sum;
    }
};