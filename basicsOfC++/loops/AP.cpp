 #include<iostream>
 using namespace std;
 int main(){
    // AP 1, 3, 5, 7....
    int a,d,n;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter d : ";
    cin>>d;
    cout<<"Enter n : ";
    cin>>n;

    //first way
    int an = a + (n-1)*d;
    for(int i=a; i<=an; i=i+d){
        cout<<i<<endl;
    }
    


 }