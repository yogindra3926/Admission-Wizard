#include<bits/stdc++.h>
#include "obcM.h"
#include "obcF.h"
#include "stF.h"
#include "stM.h"
#include "openM.h"
#include "openF.h"
#include "scM.h"
#include "scF.h"
#include "ewsF.h"
#include "ewsM.h"

using namespace std;
int main(){
   
    cout<<"choose your gender"<<endl;
    int gender;
    cout<<"1.Female"<<endl;
    cout<<"2.Male"<<endl;
    cin>>gender;
    int cat;
        cout<<"choose your category"<<endl;
        cout<<"1.OPEN"<<endl;
        cout<<"2.OBC"<<endl;
        cout<<"3.ST"<<endl;
        cout<<"4.SC"<<endl;
        cout<<"5.EWS"<<endl;
        cin>>cat;
        switch (cat)
        {
        case 1:
        if(gender==2){
            openM();
        }
        else{
            openF();
        }

    break;
    case 2:
    if(gender==2){
   obcM();
    }
    else if(gender==1){
        obcF();
    }
   break;
   case 3:
   if(gender==2){
    stM();
   }
   else{
    stF();
   }
   break;
   case 4:
   if(gender==2){
    scM();
   }
   else if(gender==1){
    scF();
   }
   break;
   case 5:
   if(gender==1){
    ewsF();
   }
   else if(gender==2){
    ewsM();
   }

        }
    
        return 0;

}