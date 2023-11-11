#include<bits/stdc++.h>
using namespace std;
// measure of how spread out numbers are = standard deviation
// it is the square root of variance
float calculation(float data[]) {
    float sum=0.0,mean,std_dev=0.0;
    for(int i=0;i<10;i++) {
        sum+=data[i];
    }
    mean=sum/10;
    for(int i=0;i<10;i++) {
        std_dev+=pow(data[i]-mean,2);
    }
    return sqrt(std_dev/10);
}

int main() {
    int i;
    float data[10];
    cout<<"Enter 10 numbers: "<<endl;
    for(i=0;i<10;i++)
    cin>>data[i];
    float ans=calculation(data);
    cout<<"Standard Deviation: "<<ans;
}