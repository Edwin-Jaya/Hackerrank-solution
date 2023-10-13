#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
    private :
        vector<int>scores;
        
    public :
        void push_scores(int user_inp){
            scores.push_back(user_inp);
        }
        
        vector<int> get_scores(){
            return scores;
        }
        
        void input(){
            int nilai;

            for(int i = 0;i<5;i++){
                cin>>nilai;
                push_scores(nilai);
            }

        }

        int calculateTotalScore(){
            int count = 0;
            for(int i=0;i<scores.size();i++){
                count+=scores[i];
            }
            return count;
        }
        
        
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
