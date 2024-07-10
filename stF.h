#include<bits/stdc++.h>
using namespace std;
// multimap<int,int>m;
int lenstF(int f){
  int i=0;
  for(;f>0;i++){
    f/=10;
  }
  return i;
}
void func_stF( multimap<int,int>m,vector<string>col_st,vector<string>br_st,vector<int>clos_st){
    int serial=1;
    cout<<"choose any option"<<endl;
    cout<<"1.sort in nirf order"<<endl;
    cout<<"2.exit"<<endl;
    int last;cin>>last;
    switch (last)
    {
        case 1:
  for(auto it:m){
        auto i=it.second;     
        cout<<serial<<".";                                
        cout<<col_st[i];int col_size=20-col_st[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_st[i];
            int br_size=55-br_st[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_st[i];
            int nirf_size=10-lenstF(clos_st[i]);
            // cout<<" "<<nirf_size;
            while(nirf_size--){
              cout<<" ";
            }
            if(it.first==1000){
              cout<<"Not Ranked"<<endl;
            }
            else{

            cout<<it.first<<endl;
            }
            serial++;
    }
    break;

  case 2:
  exit(1);
  break;
    }
    return;
}
void func_stF2( multimap<int,int>&h,multimap<int,int>&m,vector<string>col_st,vector<string>br_st,vector<int>clos_st,vector<int>nirf_st,int st_rank){
    int serial=1;
for(int i=0;i<col_st.size();i++){
    h.insert({clos_st[i],i});
    }
    for(auto it:h){
        auto i=it.second;
        if(clos_st[i]>st_rank){
          m.insert({nirf_st[i],i});
        //   m.first=nirf_st;
        //   m.second=i;
        cout<<serial<<".";
            cout<<col_st[i];int col_size=20-col_st[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_st[i];
            int br_size=55-br_st[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_st[i]<<endl;
            serial++;
        }
    }
}
void func_stF3(multimap<int,int>&h,multimap<int,int>&m,vector<string>col_st,vector<string>br_st,vector<int>clos_st,vector<int>nirf_st,string s,int st_rank){
    int serial=1;
for(int i=0;i<col_st.size();i++){
    h.insert({clos_st[i],i});
}
for(auto it:h){
  auto i=it.second;
  if(br_st[i]==s){
        if(clos_st[i]>st_rank){
          m.insert({nirf_st[i],i});
        //   m.first=nirf_st;
        //   m.second=i;
        cout<<serial<<".";
            cout<<col_st[i];int col_size=20-col_st[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_st[i];
            int br_size=55-br_st[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_st[i]<<endl;
            serial++;
        }
    }
}
}
void func_stF1(multimap<int,int>m,vector<string>col_st,vector<string>br_st,vector<int>clos_st,string s){
     cout<<"choose any option"<<endl;
    cout<<"1.sort in nirf order"<<endl;
    cout<<"2.exit"<<endl;
    int last2;cin>>last2;
    int serial=1;
    switch (last2)
    {
        case 1:
  for(auto it:m){
        auto i=it.second;
    if(br_st[i]==s){
    cout<<serial<<".";
        
        cout<<col_st[i];int col_size=20-col_st[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_st[i];
            int br_size=55-br_st[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_st[i];
            int nirf_size=10-lenstF(clos_st[i]);
            while(nirf_size--){
              cout<<" ";
            }
            if(it.first==1000){
              cout<<"Not Ranked"<<endl;
            }
            else{
            cout<<it.first<<endl;

            }
           serial++; 
    }
  }
  break;
  
  case 2:
  exit(1);
  break;
    }
    return;

}
void stF(){
    cout<<"enter your st_rank"<<endl;
    int st_rank;cin>>st_rank;
      vector<string>col_st;vector<string>br_st;vector<int>clos_st;vector<int>nirf_st;
 {
 { col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(195);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Electronic and Communication engineering");  
    clos_st.push_back(519);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(1093);
    nirf_st.push_back(10);
     col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(1488);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Civil engineering");
    clos_st.push_back(1727);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Computational and Data Science engineering");
    clos_st.push_back(125);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(2067);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Mining engineering");
    clos_st.push_back(3238);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(519);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Information Technology");
    clos_st.push_back(353);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Artificial Intelligence");
    clos_st.push_back(568);
    nirf_st.push_back(10);
   }
   { col_st.push_back("NIT WARANGAL");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(293);
    nirf_st.push_back(21);
    col_st.push_back("NIT WARANGAL");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(686);
    nirf_st.push_back(21);
    col_st.push_back("NIT WARANGAL");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(1619);
    nirf_st.push_back(21);
    col_st.push_back("NIT WARANGAL");
    br_st.push_back("Bio Technology");
    clos_st.push_back(2731);
    nirf_st.push_back(21);
     col_st.push_back("NIT WARANGAL");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(1690);
    nirf_st.push_back(21);
     col_st.push_back("NIT WARANGAL");
    br_st.push_back("Civil engineering");
    clos_st.push_back(1471);
    nirf_st.push_back(21);
     col_st.push_back("NIT WARANGAL");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(1978);
    nirf_st.push_back(21);
     col_st.push_back("NIT WARANGAL");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(1221);
    nirf_st.push_back(21);
   }
   {col_st.push_back("NIT CALICUT");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(569);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(890);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(1569);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Bio Technology");
    clos_st.push_back(1500);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(2053);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Civil engineering");
    clos_st.push_back(2017);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Engineering Physics");
    clos_st.push_back(1867);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Materials Science and engineering");
    clos_st.push_back(1971);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(896);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Production engineering");
    clos_st.push_back(1814);
    nirf_st.push_back(31);
   }
   {col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(511);
    nirf_st.push_back(8);
    col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Civil engineering");
    clos_st.push_back(1394);
    nirf_st.push_back(8);
    col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(25);
    nirf_st.push_back(8);
    col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(426);
    nirf_st.push_back(8);
    col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(733);
    nirf_st.push_back(8);
    col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(1500);
    nirf_st.push_back(8);
    col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(633);
    nirf_st.push_back(8);
    col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Production engineering");
    clos_st.push_back(2278);
    nirf_st.push_back(8);
    col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Instrumentation and Control engineering");
    clos_st.push_back(1406);
    nirf_st.push_back(8);
    }
   { col_st.push_back("NIT Rourkela");
    br_st.push_back("Bio Technology");
    clos_st.push_back(1649);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Ceramic engineering");
    clos_st.push_back(2051);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(1914);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Civil engineering");
    clos_st.push_back(1492);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(237);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(1321);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(850);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(2821);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Mining engineering");
    clos_st.push_back(2958);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Electronics and Instrumentation engineering");
    clos_st.push_back(1053);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Bio Medical engineering");
    clos_st.push_back(1420);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Industrial Design engineering");
    clos_st.push_back(1946);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Food Process engineering");
    clos_st.push_back(2210);
    nirf_st.push_back(15);
   }   
    {col_st.push_back("NIT Nagpur");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(2300);
    nirf_st.push_back(32);
    col_st.push_back("NIT Nagpur");
    br_st.push_back("Civil engineering");
    clos_st.push_back(659);
    nirf_st.push_back(32);
    col_st.push_back("NIT Nagpur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(389);
    nirf_st.push_back(32);
    col_st.push_back("NIT Nagpur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(899);
    nirf_st.push_back(32);
    col_st.push_back("NIT Nagpur");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(503);
    nirf_st.push_back(32);
    col_st.push_back("NIT Nagpur");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(3168);
    nirf_st.push_back(32);
    col_st.push_back("NIT Nagpur");
    br_st.push_back("Mining engineering");
    clos_st.push_back(2513);
    nirf_st.push_back(32);
    col_st.push_back("NIT Nagpur");
    br_st.push_back("Electrical and Electronic engineering");
    clos_st.push_back(956);
    nirf_st.push_back(32);
    }
    { col_st.push_back("NIT Durgapur");
    br_st.push_back("Bio Technology");
    clos_st.push_back(708);
    nirf_st.push_back(34);
    col_st.push_back("NIT Durgapur");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(2699);
    nirf_st.push_back(34);
    col_st.push_back("NIT Durgapur");
    br_st.push_back("Civil engineering");
    clos_st.push_back(2540);
    nirf_st.push_back(34);
    col_st.push_back("NIT Durgapur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(615);
    nirf_st.push_back(34);
    col_st.push_back("NIT Durgapur");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(1388);
    nirf_st.push_back(34);
    col_st.push_back("NIT Durgapur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1342);
    nirf_st.push_back(34);
    col_st.push_back("NIT Durgapur");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(3592);
    nirf_st.push_back(34);
    col_st.push_back("NIT Durgapur");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(2173);
    nirf_st.push_back(34);
    }
     { col_st.push_back("NIT Silchar");
    br_st.push_back("Civil engineering");
    clos_st.push_back(2277);
    nirf_st.push_back(38);
    col_st.push_back("NIT Silchar");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1138);
    nirf_st.push_back(38);
    col_st.push_back("NIT Silchar");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(2605);
    nirf_st.push_back(38);
    col_st.push_back("NIT Silchar");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(835);
    nirf_st.push_back(38);
    col_st.push_back("NIT Silchar");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(3589);
    nirf_st.push_back(38);
    col_st.push_back("NIT Silchar");
    br_st.push_back("Electronics and Instrumentation engineering");
    clos_st.push_back(2976);
    nirf_st.push_back(38);
     }
    {  col_st.push_back("NIT Jaipur");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(2997);
    nirf_st.push_back(46);
     col_st.push_back("NIT Jaipur");
    br_st.push_back("Civil engineering");
    clos_st.push_back(2324);
    nirf_st.push_back(46);
     col_st.push_back("NIT Jaipur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(431);
    nirf_st.push_back(46);
     col_st.push_back("NIT Jaipur");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(1711);
    nirf_st.push_back(46);
     col_st.push_back("NIT Jaipur");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(2257);
    nirf_st.push_back(46);
     col_st.push_back("NIT Jaipur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1000);
    nirf_st.push_back(46);
     col_st.push_back("NIT Jaipur");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(3520);
    nirf_st.push_back(46);

    }
      {col_st.push_back("NIT Allahabad");
    br_st.push_back("Bio Technology");
    clos_st.push_back(3880);
    nirf_st.push_back(47);
      col_st.push_back("NIT Allahabad");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(1657);
    nirf_st.push_back(47);
      col_st.push_back("NIT Allahabad");
    br_st.push_back("Civil engineering");
    clos_st.push_back(2201);
    nirf_st.push_back(47);
      col_st.push_back("NIT Allahabad");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(595);
    nirf_st.push_back(47);
      col_st.push_back("NIT Allahabad");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(1496);
    nirf_st.push_back(47);
      col_st.push_back("NIT Allahabad");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1197);
    nirf_st.push_back(47);
      col_st.push_back("NIT Allahabad");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(2154);
    nirf_st.push_back(47);
      col_st.push_back("NIT Allahabad");
    br_st.push_back("Production and Industrial engineering");
    clos_st.push_back(3777);
    nirf_st.push_back(47);
      }
      {col_st.push_back("NIT Kurukshetra");
    br_st.push_back("Civil engineering");
    clos_st.push_back(2035);
    nirf_st.push_back(50);
     col_st.push_back("NIT Kurukshetra");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(1561);
    nirf_st.push_back(50);
     col_st.push_back("NIT Kurukshetra");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1434);
    nirf_st.push_back(50);
     col_st.push_back("NIT Kurukshetra");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(2318);
    nirf_st.push_back(50);
     col_st.push_back("NIT Kurukshetra");
    br_st.push_back("Production and Industrial engineering");
    clos_st.push_back(3956);
    nirf_st.push_back(50);
     col_st.push_back("NIT Kurukshetra");
    br_st.push_back("Information Technology");
    clos_st.push_back(716);
    nirf_st.push_back(50);
     col_st.push_back("NIT Kurukshetra");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1200);
    nirf_st.push_back(50);
      }   
     { col_st.push_back("NIT Jalandar");
    br_st.push_back("Bio Technology");
    clos_st.push_back(3153);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(3898);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Civil engineering");
    clos_st.push_back(1426);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1484);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(1479);
    nirf_st.push_back(52); col_st.push_back("NIT Jalandar");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1713);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(2918);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Textile engineering");
    clos_st.push_back(4137);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Information Technology");
    clos_st.push_back(1688);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Instrumentation and Control engineering");
    clos_st.push_back(2225);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Industrial and Production engineering");
    clos_st.push_back(2812);
    nirf_st.push_back(52);
     }
    { col_st.push_back("NIT Surat");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(3146);
    nirf_st.push_back(58);
    col_st.push_back("NIT Surat");
    br_st.push_back("Civil engineering");
    clos_st.push_back(1560);
    nirf_st.push_back(58);
    col_st.push_back("NIT Surat");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(467);
    nirf_st.push_back(58);
    col_st.push_back("NIT Surat");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(2009);
    nirf_st.push_back(58);
    col_st.push_back("NIT Surat");
    br_st.push_back("Electricons and Communication engineering");
    clos_st.push_back(1057);
    nirf_st.push_back(58);
    col_st.push_back("NIT Surat");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(2724);
    nirf_st.push_back(58);
    }
     { col_st.push_back("NIT Meghalaya");
    br_st.push_back("Civil engineering");
    clos_st.push_back(1527);
    nirf_st.push_back(60);
     col_st.push_back("NIT Meghalaya");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(640);
    nirf_st.push_back(60);
     col_st.push_back("NIT Meghalaya");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1037);
    nirf_st.push_back(60);
     col_st.push_back("NIT Meghalaya");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(2430);
    nirf_st.push_back(60);
     col_st.push_back("NIT Meghalaya");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(2921);
    nirf_st.push_back(60);
     }
    { col_st.push_back("NIT Patna");
    br_st.push_back("Civil engineering");
    clos_st.push_back(3021);
    nirf_st.push_back(63); 
    col_st.push_back("NIT Patna");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1837);
    nirf_st.push_back(63);
    col_st.push_back("NIT Patna");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(2659);
    nirf_st.push_back(63);
    col_st.push_back("NIT Patna");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1776);
    nirf_st.push_back(63);
    col_st.push_back("NIT Patna");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(2952);
    nirf_st.push_back(63); 
    }
    { col_st.push_back("NIT Raipur");
    br_st.push_back("Bio Technology");
    clos_st.push_back(2941);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(3218);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Civil engineering");
    clos_st.push_back(2428);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(499);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(1887);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1071);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(2642);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(3540);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Mining engineering");
    clos_st.push_back(4225);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Information Technology");
    clos_st.push_back(740);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Bio Medical engineering");
    clos_st.push_back(2945);
    nirf_st.push_back(65);
    }
   {  col_st.push_back("NIT Srinagar");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(4190);
    nirf_st.push_back(66);
    col_st.push_back("NIT Srinagar");
    br_st.push_back("Civil engineering");
    clos_st.push_back(3454);
    nirf_st.push_back(66);
    col_st.push_back("NIT Srinagar");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(974);
    nirf_st.push_back(66);
    col_st.push_back("NIT Srinagar");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(3654);
    nirf_st.push_back(66);
    col_st.push_back("NIT Srinagar");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(3047);
    nirf_st.push_back(66);
    col_st.push_back("NIT Srinagar");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(4045);
    nirf_st.push_back(66);
    col_st.push_back("NIT Srinagar");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(4262);
    nirf_st.push_back(66); 
    col_st.push_back("NIT Srinagar");
    br_st.push_back("Information Technology");
    clos_st.push_back(3309);
    nirf_st.push_back(66);
      }
     { col_st.push_back("NIT Bhopal");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(3506);
    nirf_st.push_back(70);
     col_st.push_back("NIT Bhopal");
    br_st.push_back("Civil engineering");
    clos_st.push_back(1553);
    nirf_st.push_back(70);
     col_st.push_back("NIT Bhopal");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(920);
    nirf_st.push_back(70);
     col_st.push_back("NIT Bhopal");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(1947);
    nirf_st.push_back(70);
     col_st.push_back("NIT Bhopal");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1240);
    nirf_st.push_back(70);
     col_st.push_back("NIT Bhopal");
    br_st.push_back("Mehcanical engineering");
    clos_st.push_back(2370);
    nirf_st.push_back(70);
     }
    { col_st.push_back("NIT Agartala");
    br_st.push_back("Biotechnology and Biochemical engineering");
    clos_st.push_back(3466);
    nirf_st.push_back(80);
     col_st.push_back("NIT Agartala");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(4046);
    nirf_st.push_back(80);
     col_st.push_back("NIT Agartala");
    br_st.push_back("Civil engineering");
    clos_st.push_back(2702);
    nirf_st.push_back(80);
     col_st.push_back("NIT Agartala");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2168);
    nirf_st.push_back(80);
     col_st.push_back("NIT Agartala");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(2953);
    nirf_st.push_back(80);
     col_st.push_back("NIT Agartala");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(2574);
    nirf_st.push_back(80);
     col_st.push_back("NIT Agartala");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(2839);
    nirf_st.push_back(80);
     col_st.push_back("NIT Agartala");
    br_st.push_back("Production engineering");
    clos_st.push_back(4107);
    nirf_st.push_back(80);
     col_st.push_back("NIT Agartala");
    br_st.push_back("Electronics and Instrumentation engineering");
    clos_st.push_back(3152);
    nirf_st.push_back(80);

    }
     {  col_st.push_back("NIT Goa");
    br_st.push_back("Civil engineering");
    clos_st.push_back(960);
    nirf_st.push_back(88);
    col_st.push_back("NIT Goa");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(253);
    nirf_st.push_back(88);
    col_st.push_back("NIT Goa");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1457);
    nirf_st.push_back(88);
    col_st.push_back("NIT Goa");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(1983);
    nirf_st.push_back(88);
    col_st.push_back("NIT Goa");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(1336);
    nirf_st.push_back(88);
     }
    { col_st.push_back("NIT Jamshedpur");
    br_st.push_back("Civil engineering");
    clos_st.push_back(2714);
    nirf_st.push_back(90);
     col_st.push_back("NIT Jamshedpur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(644);
    nirf_st.push_back(90);
     col_st.push_back("NIT Jamshedpur");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(1529);
    nirf_st.push_back(90);
     col_st.push_back("NIT Jamshedpur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1715);
    nirf_st.push_back(90);
     col_st.push_back("NIT Jamshedpur");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(3518);
    nirf_st.push_back(90);
     col_st.push_back("NIT Jamshedpur");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(3770);
    nirf_st.push_back(90);
     col_st.push_back("NIT Jamshedpur");
    br_st.push_back("Production and Industrial engineering");
    clos_st.push_back(3183);
    nirf_st.push_back(90);
     col_st.push_back("NIT Jamshedpur");
    br_st.push_back("Engineering and Computational Mechanics");
    clos_st.push_back(2242);
    nirf_st.push_back(90);

    }
     { col_st.push_back("NIT Manipur");
    br_st.push_back("Civil engineering");
    clos_st.push_back(6054);
    nirf_st.push_back(108);
      col_st.push_back("NIT Manipur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1167);
    nirf_st.push_back(108);
      col_st.push_back("NIT Manipur");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(2429);
    nirf_st.push_back(108);
      col_st.push_back("NIT Manipur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(2044);
    nirf_st.push_back(108);
      col_st.push_back("NIT Manipur");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(2745);
    nirf_st.push_back(108);
    
         }
    {  col_st.push_back("NIT Hamirpur");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(3949);
    nirf_st.push_back(128);
    col_st.push_back("NIT Hamirpur");
    br_st.push_back("Civil engineering");
    clos_st.push_back(2769);
    nirf_st.push_back(128);col_st.push_back("NIT Hamirpur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1681);
    nirf_st.push_back(128);
    col_st.push_back("NIT Hamirpur");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(2432);
    nirf_st.push_back(128);
    col_st.push_back("NIT Hamirpur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(2011);
    nirf_st.push_back(128);
    col_st.push_back("NIT Hamirpur");
    br_st.push_back("Engineering Physics");
    clos_st.push_back(2961);
    nirf_st.push_back(128);
    col_st.push_back("NIT Hamirpur");
    br_st.push_back("Materials Science and engineering");
    clos_st.push_back(4058);
    nirf_st.push_back(128);
    col_st.push_back("NIT Hamirpur");
    br_st.push_back("Mathematics and Computing");
    clos_st.push_back(3365);
    nirf_st.push_back(128);
    col_st.push_back("NIT Hamirpur");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(2803);
    nirf_st.push_back(128);
    }
    {  col_st.push_back("NIT Uttarakhand");
    br_st.push_back("Civil engineering");
    clos_st.push_back(3607);
    nirf_st.push_back(131);
    col_st.push_back("NIT Uttarakhand");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(769);
    nirf_st.push_back(131);
    col_st.push_back("NIT Uttarakhand");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1594);
    nirf_st.push_back(131);
    col_st.push_back("NIT Uttarakhand");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(2264);
    nirf_st.push_back(131);
    col_st.push_back("NIT Uttarakhand");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(1984);
    nirf_st.push_back(131);
    }
    { col_st.push_back("NIT Puducherry");
    br_st.push_back("Civil engineering");
    clos_st.push_back(1537);
    nirf_st.push_back(136);
     col_st.push_back("NIT Puducherry");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(654);
    nirf_st.push_back(136);
     col_st.push_back("NIT Puducherry");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(945);
    nirf_st.push_back(136);
     col_st.push_back("NIT Puducherry");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(3109);
    nirf_st.push_back(136);
     col_st.push_back("NIT Puducherry");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(2658);
    nirf_st.push_back(136);
    }
     {col_st.push_back("NIT Arunanchal");
    br_st.push_back("Civil engineering");
    clos_st.push_back(2202);
    nirf_st.push_back(171);
     col_st.push_back("NIT Arunanchal");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1136);
    nirf_st.push_back(171);
     col_st.push_back("NIT Arunanchal");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(2439);
    nirf_st.push_back(171);
     col_st.push_back("NIT Arunanchal");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1772);
    nirf_st.push_back(171);
     col_st.push_back("NIT Arunanchal");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(860);
    nirf_st.push_back(171);

     }
   {col_st.push_back("NIT Sikkim");
    br_st.push_back("Civil engineering");
    clos_st.push_back(2591);
    nirf_st.push_back(173);
    col_st.push_back("NIT Sikkim");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1035);
    nirf_st.push_back(173);
    col_st.push_back("NIT Sikkim");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(2046);
    nirf_st.push_back(173);
    col_st.push_back("NIT Sikkim");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(2002);
    nirf_st.push_back(173);
    col_st.push_back("NIT Sikkim");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(4181);
    nirf_st.push_back(173);

   }
    {col_st.push_back("NIT Delhi");
    br_st.push_back("Civil engineering");
    clos_st.push_back(1302);
    nirf_st.push_back(194); 
    col_st.push_back("NIT Delhi");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(606);
    nirf_st.push_back(194); 
    col_st.push_back("NIT Delhi");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(935);
    nirf_st.push_back(194); 
    col_st.push_back("NIT Delhi");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1391);
    nirf_st.push_back(194); 
    col_st.push_back("NIT Delhi");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(1681);
    nirf_st.push_back(194); 

    }
    {col_st.push_back("NIT Andra pradhesh");
    br_st.push_back("Bio Technology");
    clos_st.push_back(2397);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Andra pradhesh");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(1963);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Andra pradhesh");
    br_st.push_back("Civil engineering");
    clos_st.push_back(2231);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Andra pradhesh");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(793);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Andra pradhesh");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(1977);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Andra pradhesh");
    br_st.push_back("Electronics and Communication engineering");
    clos_st.push_back(1266);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Andra pradhesh");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(2134);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Andra pradhesh");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(2392);
    nirf_st.push_back(1000); 
     
    }
     { col_st.push_back("NIT Nagaland");
    br_st.push_back("Civil engineering");
    clos_st.push_back(3230);
    nirf_st.push_back(1000);
     col_st.push_back("NIT Nagaland");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(3255);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Nagaland");
    br_st.push_back("Electronics and Communication engineering");
    clos_st.push_back(4543);
    nirf_st.push_back(1000);  
     col_st.push_back("NIT Nagaland");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(9949);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Nagaland");
    br_st.push_back("Electronics and Instrumentation engineering");
    clos_st.push_back(13951);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Nagaland");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(6034);
    nirf_st.push_back(1000); 
     
     }
     { col_st.push_back("NIT Mizoram");
    br_st.push_back("Civil engineering");
    clos_st.push_back(2336);
    nirf_st.push_back(1000); 
    col_st.push_back("NIT Mizoram");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1428);
    nirf_st.push_back(1000); 
    col_st.push_back("NIT Mizoram");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(3637);
    nirf_st.push_back(1000); 
    col_st.push_back("NIT Mizoram");
    br_st.push_back("Electronics and Communication engineering");
    clos_st.push_back(1579);
    nirf_st.push_back(1000); 
    col_st.push_back("NIT Mizoram");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(2898);
    nirf_st.push_back(1000); 
     }
    {col_st.push_back("IIIT GWALIOR");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1036);
    nirf_st.push_back(78); 
     
    }
    {  col_st.push_back("IIIT Jabalpur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2253);
    nirf_st.push_back(82); 
    
       col_st.push_back("IIIT Jabalpur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(2360);
    nirf_st.push_back(82); 
    
       col_st.push_back("IIIT Jabalpur");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(2965);
    nirf_st.push_back(82); 
    
       col_st.push_back("IIIT Jabalpur");
    br_st.push_back("Smart Manufacturing");
    clos_st.push_back(4253);
    nirf_st.push_back(82); 
    
    }
    { col_st.push_back("IIIT Allahabad");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1581);
    nirf_st.push_back(93); 
     col_st.push_back("IIIT Allahabad");
    br_st.push_back("Electronic and Communication(FAP) engineering");
    clos_st.push_back(1581);
    nirf_st.push_back(93); 
     col_st.push_back("IIIT Allahabad");
    br_st.push_back("Information Technology");
    clos_st.push_back(1040);
    nirf_st.push_back(93); 
     col_st.push_back("IIIT Allahabad");
    br_st.push_back("Information Technology(FAP)");
    clos_st.push_back(572);
    nirf_st.push_back(93); 
     col_st.push_back("IIIT Allahabad");
    br_st.push_back("Information Technology(Business Informatics)");
    clos_st.push_back(1363);
    nirf_st.push_back(93); 
    }
   { col_st.push_back("IIIT Kancheepuram");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1811);
    nirf_st.push_back(184); 
    col_st.push_back("IIIT Kancheepuram");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(2459);
    nirf_st.push_back(184); 
    col_st.push_back("IIIT Kancheepuram");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(3480);
    nirf_st.push_back(184); 
    col_st.push_back("IIIT Kancheepuram");
    br_st.push_back("Computer Science(AI) and engineering");
    clos_st.push_back(1903);
    nirf_st.push_back(184); 
    col_st.push_back("IIIT Kancheepuram");
    br_st.push_back("Smart Manufacturing");
    clos_st.push_back(3660);
    nirf_st.push_back(184); 
   }
    {col_st.push_back("IIIT Guwahati");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1953);
    nirf_st.push_back(1000); 
    col_st.push_back("IIIT Guwahati");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(2738);
    nirf_st.push_back(1000); 
    }
    {col_st.push_back("IIIT Kurnool");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2064);
    nirf_st.push_back(1000); 
    col_st.push_back("IIIT Kurnool");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(2298);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Kurnool");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(3801);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Kurnool");
    br_st.push_back("Artificial Intelligence");
    clos_st.push_back(2299);
    nirf_st.push_back(1000);
    }
    {  col_st.push_back("IIIT Kottayam");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(3313);
    nirf_st.push_back(1000);
     col_st.push_back("IIIT Kottayam");
    br_st.push_back("Computer Science(AI) and engineering");
    clos_st.push_back(3357);
    nirf_st.push_back(1000);
     col_st.push_back("IIIT Kottayam");
    br_st.push_back("Computer Science(CYBER SECURITY) and engineering");
    clos_st.push_back(3557);
    nirf_st.push_back(1000);
     col_st.push_back("IIIT Kottayam");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(3891);
    nirf_st.push_back(1000);
    
    }
    { col_st.push_back("IIIT Lucknow");
    br_st.push_back("Computer Science and Business");
    clos_st.push_back(2228);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Lucknow");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1889);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Lucknow");
    br_st.push_back("Computer Science(AI) and engineering");
    clos_st.push_back(1698);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Lucknow");
    br_st.push_back("Information Technology");
    clos_st.push_back(1768);
    nirf_st.push_back(1000);
    }
     { col_st.push_back("IIIT Kota");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1938);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT kota");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(2544);
    nirf_st.push_back(1000);
     }
    { col_st.push_back("IIIT Kalyani");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(3642);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Kalyani");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(4193);
    nirf_st.push_back(1000);
    }
    { col_st.push_back("IIIT Sonepat");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2564);
    nirf_st.push_back(1000);
     col_st.push_back("IIIT Sonepat");
    br_st.push_back("Information Technology");
    clos_st.push_back(2861);
    nirf_st.push_back(1000);
    }
    {  col_st.push_back("IIIT Una");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2540);
    nirf_st.push_back(1000);
       col_st.push_back("IIIT Una");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(4164);
    nirf_st.push_back(1000);
       col_st.push_back("IIIT Una");
    br_st.push_back("Information Technology");
    clos_st.push_back(3901);
    nirf_st.push_back(1000);
    }
    { col_st.push_back("IIIT Sri city");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2775);
    nirf_st.push_back(1000);
       col_st.push_back("IIIT Sri city");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(3445);
    nirf_st.push_back(1000);
    }
     {   col_st.push_back("IIIT Vadodara");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2747);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Vadodara");
    br_st.push_back("Information Technology");
    clos_st.push_back(2910);
    nirf_st.push_back(1000);
     }
   { col_st.push_back("IIIT Manipur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(4194);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Manipur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(4672);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Manipur");
    br_st.push_back("Computer Science(AI) and engineering");
    clos_st.push_back(4049);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Manipur");
    br_st.push_back("Electronic and Communication(embedded systems)");
    clos_st.push_back(4525);
    nirf_st.push_back(1000);
   }
    { col_st.push_back("IIIT Tiruchirappalli");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2758);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Tiruchirappalli");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(2740);
    nirf_st.push_back(1000);
    } 
    { col_st.push_back("IIIT Dharwad");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(3097);
    nirf_st.push_back(1000);
     col_st.push_back("IIIT Dharwad");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(3768);
    nirf_st.push_back(1000);
     col_st.push_back("IIIT Dharwad");
    br_st.push_back("Data Science and Artificial Intelligence");
    clos_st.push_back(3443);
    nirf_st.push_back(1000);
    }
    {col_st.push_back("IIIT Ranchi");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(3267);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Ranchi");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(4155);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Ranchi");
    br_st.push_back("Computer Science(AI) and engineering");
    clos_st.push_back(3433);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Ranchi");
    br_st.push_back("Electronic and Communication(embedded systems)");
    clos_st.push_back(4169);
    nirf_st.push_back(1000);
    }
     { col_st.push_back("IIIT Nagpur");
    br_st.push_back("Computer Science(AI) and engineering");
    clos_st.push_back(3029);
    nirf_st.push_back(1000);
      col_st.push_back("IIIT Nagpur");
    br_st.push_back("Computer Science(Data Science) and engineering");
    clos_st.push_back(3288);
    nirf_st.push_back(1000);
      col_st.push_back("IIIT Nagpur");
    br_st.push_back("Computer Science(Gaming) and engineering");
    clos_st.push_back(3346);
    nirf_st.push_back(1000);
      col_st.push_back("IIIT Nagpur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(3006);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Nagpur");
    br_st.push_back("Electronic and Communication(IOT) engineering");
    clos_st.push_back(4133);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Nagpur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(3939);
    nirf_st.push_back(1000);
     }
     { col_st.push_back("IIIT Pune");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2498);
    nirf_st.push_back(1000);
     col_st.push_back("IIIT Pune");
    br_st.push_back("Electrical and Communication engineering");
    clos_st.push_back(2579);
    nirf_st.push_back(1000);
     }
    { col_st.push_back("IIIT Bhagalpur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(3100);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Bhagalpur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(4231);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Bhagalpur");
    br_st.push_back("Mechatronics engineering");
    clos_st.push_back(4795);
    nirf_st.push_back(1000);
   
    }
    { col_st.push_back("IIIT Bhopal");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2610);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Bhopal");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(3769);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Bhopal");
    br_st.push_back("Information Technology");
    clos_st.push_back(3176);
    nirf_st.push_back(1000);
    }
    {col_st.push_back("IIIT Surat");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2935);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Surat");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(3708);
    nirf_st.push_back(1000);
    }
     { col_st.push_back("IIIT Agartala");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(3416);
    nirf_st.push_back(1000);
     }
     {col_st.push_back("IIIT Raichur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2800);
    nirf_st.push_back(1000);
     }
 }

   
    cout<<"choose the desired branch"<<endl;
    cout<<"1.All branches"<<endl;
    cout<<"2.Computer science"<<endl;
    cout<<"3.Electronic and Communication engineering"<<endl;
    cout<<"4.Mechanical engineering"<<endl;
    cout<<"5.Bio Technology"<<endl;
    cout<<"6.Chemical engineering"<<endl;
    cout<<"7.Civil engineering"<<endl;
    cout<<"8.Electrical engineering"<<endl;
    cout<<"9.Metallurgical and Materials engineering"<<endl;
    cout<<"10.Mining engineering"<<endl;
    cout<<"11.Information Technology"<<endl;
    cout<<"12.Bio Medical engineering"<<endl;
    cout<<"13.Computational and Data Science engineering"<<endl;
    cout<<"14.Electrical and Electronics engineering"<<endl;
    cout<<"15.Artificial Intelligence"<<endl;
    cout<<"16.Engineering Physics"<<endl;
    cout<<"17.Materials Science and engineering"<<endl;
    cout<<"18.Production engineering"<<endl;
    cout<<"19.Instrumentation and Control engineering"<<endl;
    cout<<"20.Ceramic engineering"<<endl;
    cout<<"21.Electronics and Instrumentation engineering"<<endl;
    cout<<"22.Industrial Design engineering"<<endl;
    cout<<"23.Food Process engineering"<<endl;
    cout<<"24.Production and Industrial engineering"<<endl;
    cout<<"25.Textile engineering"<<endl;
    cout<<"26.Industrial and Production engineering"<<endl;
    cout<<"27.Biotechnology and Biochemical engineering"<<endl;
    cout<<"28.Engineering and Computational Mechanics"<<endl;
    cout<<"29.Mathematics and Computing"<<endl;
    cout<<"30.Smart Manufacturing"<<endl;
    cout<<"31.Electronic and communication(flexible academic program) engineering"<<endl;
    cout<<"32.Information Technology(FAP)"<<endl;
    cout<<"33.Information Technology(Business Informatics)"<<endl;
    cout<<"34.Computer Science(AI) and engineering"<<endl;
    cout<<"35.Electronic and Communication(embedded systems)"<<endl;
    cout<<"36.Data Science and Artificial Intelligence"<<endl;
    cout<<"37.Computer Science(Gaming) and engineering"<<endl;
    cout<<"38.Computer Science(Data Science) and engineering"<<endl;
    cout<<"39.Mechatronics engineering"<<endl;
    
    int br_;
    cin>>br_;
    multimap<int,int>m;
    multimap<int,int>h;
    switch(br_){

     case 1:
      
    func_stF2(h,m,col_st,br_st,clos_st,nirf_st,st_rank);
    func_stF(m,col_st,br_st,clos_st);

    break;
    case 2:
    
   
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Computer Science and engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Computer Science and engineering");
    break;
    case 3:
     
    
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Electronic and Communication engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Electronic and Communication engineering");
    break;
    
    
    break;
    case 4:
     
    // func_stF2(h,m,col_st,br_st,clos_st,nirf_st,st_rank);

    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Mechanical engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Mechanical engineering");
    break;
    case 5:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Bio Technology",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Bio Technology");
    break;
    case 6:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Chemical engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Chemical engineering");
    break;
    case 7:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Civil engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Civil engineering");
    break;
    case 8:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Electrical engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Electrical engineering");
    break;
    case 9:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Metallurgical and Materials engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Metallurgical and Materials engineering");
    break;
    case 10:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Mining engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Mining engineering");
    break;
    case 11:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Information Technology",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Information Technology");
    break;
    case 12:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Bio Medical engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Bio Medical engineering");
    break;
    
    case 13:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Computational and Data Science engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Computational and Data Science engineering");
    break;
    
    case 14:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Electrical and Electronics engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Electrical and Electronics engineering");
    break;
    
    case 15:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Artificial Intelligence",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Artificial Intelligence");
    break;
    
    case 16:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Engineering Physics",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Engineering Physics");
    break;
    
    case 17:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Materials Science and engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Materials Science and engineering");
    break;
    
    case 18:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Production engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Production engineering");
    break;
    
    case 19:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Instrumentation and Control engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Instrumentation and Control engineering");
    break;
    
    case 20:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Ceramic engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Ceramic engineering");
    break;
    
    case 21:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Electronics and Instrumentation engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Electronics and Instrumentation engineering");
    break;
    
    case 22:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Industrial Design engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Industrial Design engineering");
    break;
    
    case 23:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Food Process engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Food Process engineering");
    break;
    
    case 24:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Production and Industrial engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Production and Industrial engineering");
    break;
    
    case 25:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Textile engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Textile engineering");
    break;
    
    case 26:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Industrial and Production engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Industrial and Production engineering");
    break;
    
    case 27:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Biotechnology and Biochemical engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Biotechnology and Biochemical engineering");
    break;
    
    case 28:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Engineering and Computational Mechanics",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Engineering and Computational Mechanics");
    break;
    
    case 29:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Mathematics and Computing",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Mathematics and Computing");
    break;
    
    case 30:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Smart Manufacturing",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Smart Manufacturing");
    break;
    
    case 31:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Electronic and Communication(FAP) engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Electronic and Communication(FAP) engineering");
    break;
    
    case 32:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Information Technology(FAP)",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Information Technology(FAP)");
    break;
    
    case 33:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Information Technology(Business Informatics)",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Information Technology(Business Informatics)");
    break;
    
    case 34:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Computer Science(AI) and engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Computer Science(AI) and engineering");
    break;
    
    case 35:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Electronic and Communication(embedded systems)",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Electronic and Communication(embedded systems)");
    break;
    
    case 36:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Data Science and Artificial Intelligence",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Data Science and Artificial Intelligence");
    break;
    
    case 37:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Computer Science(Gaming) and engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Computer Science(Gaming) and engineering");
    break;
    
    case 38:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Computer Science(Data Science) and engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Computer Science(Data Science) and engineering");
    break;

    case 39:
    func_stF3(h,m,col_st,br_st,clos_st,nirf_st,"Mechatronics engineering",st_rank);
    func_stF1(m,col_st,br_st,clos_st,"Mechatronics engineering");
    break;
    }
}