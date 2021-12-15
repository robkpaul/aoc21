#include<iostream>
#include<fstream>
#include<queue>
#include<utility>
#include<string>

using namespace std;

int part2(vector<int> input){
    return 0;
}

int part1(queue<pair<string, int>> input){
    int depth = 0;
    int pos = 0;
    while(!input.empty()){
        string inst = input.front().first;
        int dist = input.front().second;
        input.pop();
        if(inst == "forward"){
            pos += dist;
        } 
        else if(inst == "down"){
            depth += dist;
        }
        else if(inst == "up"){
            depth -= dist;
        }
    }
    return depth*pos;
}

int main(){
    ifstream ifile("inputs/d2.in");
    queue<pair<string, int>> input;
    string s;
    int i;
    while(ifile >> s >> i){
        pair<string, int> p(s, i);
        input.push(p);
    }
    cout << part1(input) << endl; //<< part2(input) << endl;
    return 0;
}