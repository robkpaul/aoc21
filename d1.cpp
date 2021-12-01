#include<iostream>
#include<fstream>
#include<vector>

int part1(vector<int> input){
    int ans;
    for(vector<int>::iterator i = input.begin(); i != input.end(); i++){
        for(vector<int>::iterator j = input.begin(); j != input.end(); j++){
            
        }
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
    cout << part1(input) << endl;// << part2(input) << endl;
}