#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
  unordered_map<string,int> map; //Key-value Pair -> Key=string, value=int
  pair<string,int> p1;
  p1.first = "Shaurya";
  p1.second = 99;

  pair<string,int> p2;
  p2.first = "Anjay";
  p2.second = 90;

  pair<string,int> p3;
  p3.first = "Anshuman";
  p3.second = 91;

  map.insert(p1);
  map.insert(p2);
  map.insert(p3);

  //ANOTHER WAY TO INSERT
  map["Shreya"] = 89;
  map["Ashmit"] = 87;

  //for(pair<string,int> ele : map){ //INSTEAD USE AUTO for pair<string,int>
  for(auto ele : map){
    cout<<ele.first<<" "<<ele.second<<endl;
  }
  cout<<endl<<endl;
  map.erase("Ashmit");

  for(auto ele : map){
    cout<<ele.first<<" "<<ele.second<<endl;
  }
}