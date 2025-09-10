#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cstdlib>

/*
1. Clarify the problem: if a problem is not clear, ask questions to the interviewer.
2. Think out loud: explain your thought process to the interviewer.
3. Write down the steps: write down the steps you will take to solve the problem.
4. Implement the solution: implement the solution.
5. Test the solution: test the solution.
6. Optimize the solution: optimize the solution.
7. Write the code: write the code.
8. Test the code: test the code.
9. Debug the code: debug the code.
10. Submit the solution: submit the solution.

feel free to ask the interviewer what time complexity is expected and what is the expected space complexity.
even if he is evasive, you may get a hint from his answer.

work on concrete examples.
*/

int delete_duplicates(vector<int>& arr){
    int n = arr.size();
    int count = 0;
    int current = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] != current){
            count++;
            current = arr[i];
        }
    }
    
    return count;
}

//enumerate all primes to n
void enumerate_primes(int n){
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for(int i=2;i*i<=n;i++){
        if(is_prime[i]){
            for(int j=i*i;j<=n;j+=i){
                is_prime[j] = false;
            }
        }
    }
}


//look_and_say_sequence
string next_word(string s) {
    string res = "";
    int count = 0;
    char current = s[0];
    for (auto c : s) {
        if (c == current) {
            count += 1;
        } else {
            res += to_string(count) + c;
            count = 1;
            current = c;
        }
    }
    return result;
}

string look_and_say(int n) {
    if (n < 1) {
        return "";
    }
    if (n == 1) {
        return "1";
    }

    string word = look_and_say(n - 1);
    return next_word(word);
}


int main(){
    int n = 5;
    cout << look_and_say(n) << endl;
    return 0;
}
