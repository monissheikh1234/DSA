class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>p;

        for(int i =1 ;i<=n ;i++){
             if(i % 3==0 && i%5==0){
                p.push_back("FizzBuzz");
             }

             else if(i%3==0){
                p.push_back("Fizz");
             }

             else if(i%5==0){
                p.push_back("Buzz");
             }

             else{
                p.push_back(to_string(i));
             }
        }

        return p;
        
    }
};