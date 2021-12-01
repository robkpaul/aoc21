#include<iostream>
#include<fstream>
#include<vector>
#include<queue>

using namespace std;

int part2(vector<int> input){
    int ans = 0;
    int prev = input[0]+input[1]+input[2];
    queue<int> q;
    q.push(input[0]);
    q.push(input[1]);
    q.push(input[2]);

    for(vector<int>::iterator i = input.begin()+1; i != input.end(); i++){
        int curr = prev-q.front()+*i;
        if(curr > prev){
            ans++;
        }
        prev = curr;
        q.pop();
        q.push(*i);
    }
    return ans;
}

int part1(vector<int> input){
    int ans = 0;
    int prev = *input.begin();
    for(vector<int>::iterator i = input.begin()+1; i != input.end(); i++){
        if(*i > prev){
            ans++;
        }
        prev = *i;
    }
    return ans;
}

int main(){
    ifstream ifile("inputs/d1.in");
    vector<int> input;
    int i;
    while(ifile >> i){
        input.push_back(i);
    }
    cout << part1(input) << endl << part2(input) << endl;
    return 0;
}