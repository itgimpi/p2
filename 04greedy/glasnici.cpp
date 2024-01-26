#include <bits/stdc++.h>

using namespace std;

int main()
{
    double d;cin>>d;
    int n;cin>>n;
    vector<double>p(n);
    for(int i=0;i<n;i++)
        cin>>p[i];
    double t=0.0; //pocetno vreme
    double p0=p[0]; //pozicija prvog
    for(int i=1;i<n;i++){ //za sve ostale glasnike
        if(p[i]-t-p0>d){ //ako su ostali van dometa prvom
            t+=(p[i]-t-p0-d)/2.0; //krene trcati prema njemu
            p0=p[i]-t; //pocetni glasnik je sledeci koji dobije poruku
        }
        else{p0=min(p[i]+t,p0+d);}} //ako je u dometu odma pocinje da trci
        
    
    cout<<fixed<<showpoint<<setprecision(3)<<t<<endl; //tri decimale 

    return 0;
}