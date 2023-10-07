#include<iostream>
using namespace std;
int main()
{
    int p0=3;//first term of the sequence
    int p1=0;//second term of the sequence
    int p2=2;//third term of the sequence
    int pn;//n'th term of the sequence
    int n;//number of terms to be displayed on the screen
    int ctr=3;//number of terms displayed currently
    cout<<"Enter the number of terms:"; 
    cin>>n;
    cout<<"The Perrin Sequence is ....\n";
    cout<<p0<<"\t"<<p1<<"\t"<<p2;
    pn=p1+p0;//p(n)=p(n-2)+p(n-3)
    while(ctr<n)
        {
            //displaying n'th term
            cout<<"\t"<<pn;
            //updating the terms of the sequence for the next iteration
            p0=p1;
            p1=p2;
            p2=pn;
            pn=p0+p1;
            // updating ctr value
            ctr++;
            
        }
    return 0;
}