#include<bits/stdc++.h>
using namespace std;
// multimap<int,int>m;
int lenscM(int f){
  int i=0;
  for(;f>0;i++){
    f/=10;
  }
  return i;
}
void func_scM( multimap<int,int>m,vector<string>col_sc,vector<string>br_sc,vector<int>clos_sc){
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
        cout<<col_sc[i];int col_size=20-col_sc[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_sc[i];
            int br_size=55-br_sc[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_sc[i];
            int nirf_size=10-lenscM(clos_sc[i]);
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
void func_scM2( multimap<int,int>&h,multimap<int,int>&m,vector<string>col_sc,vector<string>br_sc,vector<int>clos_sc,vector<int>nirf_sc,int sc_rank){
    int serial=1;
for(int i=0;i<col_sc.size();i++){
    h.insert({clos_sc[i],i});
    }
    for(auto it:h){
        auto i=it.second;
        if(clos_sc[i]>sc_rank){
          m.insert({nirf_sc[i],i});
        //   m.first=nirf_sc;
        //   m.second=i;
        cout<<serial<<".";
            cout<<col_sc[i];int col_size=20-col_sc[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_sc[i];
            int br_size=55-br_sc[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_sc[i]<<endl;
            serial++;
        }
    }
}
void func_scM3(multimap<int,int>&h,multimap<int,int>&m,vector<string>col_sc,vector<string>br_sc,vector<int>clos_sc,vector<int>nirf_sc,string s,int sc_rank){
    int serial=1;
for(int i=0;i<col_sc.size();i++){
    h.insert({clos_sc[i],i});
}
for(auto it:h){
  auto i=it.second;
  if(br_sc[i]==s){
        if(clos_sc[i]>sc_rank){
          m.insert({nirf_sc[i],i});
        //   m.first=nirf_sc;
        //   m.second=i;
        cout<<serial<<".";
            cout<<col_sc[i];int col_size=20-col_sc[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_sc[i];
            int br_size=55-br_sc[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_sc[i]<<endl;
            serial++;
        }
    }
}
}
void func_scM1(multimap<int,int>m,vector<string>col_sc,vector<string>br_sc,vector<int>clos_sc,string s){
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
    if(br_sc[i]==s){
    cout<<serial<<".";
        
        cout<<col_sc[i];int col_size=20-col_sc[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_sc[i];
            int br_size=55-br_sc[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_sc[i];
            int nirf_size=10-lenscM(clos_sc[i]);
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
void scM(){
    cout<<"enter your sc_rank"<<endl;
    int sc_rank;cin>>sc_rank;
      vector<string>col_sc;vector<string>br_sc;vector<int>clos_sc;vector<int>nirf_sc;
    {
{ col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(141);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Electronic and Communication engineering");  
    clos_sc.push_back(1204);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(2416);
    nirf_sc.push_back(10);
     col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(2870);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(2894);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Computational and Data Science engineering");
    clos_sc.push_back(705);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(3812);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Mining engineering");
    clos_sc.push_back(4239);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(1204);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(310);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Artificial Intelligence");
    clos_sc.push_back(330);
    nirf_sc.push_back(10);
   }
   { col_sc.push_back("NIT WARANGAL");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(206);
    nirf_sc.push_back(21);
    col_sc.push_back("NIT WARANGAL");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(813);
    nirf_sc.push_back(21);
    col_sc.push_back("NIT WARANGAL");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(2615);
    nirf_sc.push_back(21);
    col_sc.push_back("NIT WARANGAL");
    br_sc.push_back("Bio Technology");
    clos_sc.push_back(4582);
    nirf_sc.push_back(21);
     col_sc.push_back("NIT WARANGAL");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(3127);
    nirf_sc.push_back(21);
     col_sc.push_back("NIT WARANGAL");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(3127);
    nirf_sc.push_back(21);
     col_sc.push_back("NIT WARANGAL");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(4311);
    nirf_sc.push_back(21);
     col_sc.push_back("NIT WARANGAL");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(1430);
    nirf_sc.push_back(21);
   }
   {col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(361);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(2454);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(3659);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Bio Technology");
    clos_sc.push_back(5688);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(4968);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(5118);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Engineering Physics");
    clos_sc.push_back(5170);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Materials Science and engineering");
    clos_sc.push_back(5341);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(2454);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Production engineering");
    clos_sc.push_back(6433);
    nirf_sc.push_back(31);
   }
   {col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(2808);
    nirf_sc.push_back(8);
    col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(2559);
    nirf_sc.push_back(8);
    col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(61);
    nirf_sc.push_back(8);
    col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(1060);
    nirf_sc.push_back(8);
    col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(1799);
    nirf_sc.push_back(8);
    col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(3644);
    nirf_sc.push_back(8);
    col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(1060);
    nirf_sc.push_back(8);
    col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Production engineering");
    clos_sc.push_back(3986);
    nirf_sc.push_back(8);
    col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Instrumentation and Control engineering");
    clos_sc.push_back(2450);
    nirf_sc.push_back(8);
    }
   { col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Bio Technology");
    clos_sc.push_back(4639);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Ceramic engineering");
    clos_sc.push_back(6400);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(3543);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(3634);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(258);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(2066);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(2738);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(4852);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Mining engineering");
    clos_sc.push_back(6109);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Electronics and Instrumentation engineering");
    clos_sc.push_back(2128);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Bio Medical engineering");
    clos_sc.push_back(6330);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Industrial Design engineering");
    clos_sc.push_back(5026);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Food Process engineering");
    clos_sc.push_back(6198);
    nirf_sc.push_back(15);
   }   
    {col_sc.push_back("NIT Nagpur");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(5677);
    nirf_sc.push_back(32);
    col_sc.push_back("NIT Nagpur");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(5147);
    nirf_sc.push_back(32);
    col_sc.push_back("NIT Nagpur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(526);
    nirf_sc.push_back(32);
    col_sc.push_back("NIT Nagpur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(1845);
    nirf_sc.push_back(32);
    col_sc.push_back("NIT Nagpur");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(3922);
    nirf_sc.push_back(32);
    col_sc.push_back("NIT Nagpur");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(6850);
    nirf_sc.push_back(32);
    col_sc.push_back("NIT Nagpur");
    br_sc.push_back("Mining engineering");
    clos_sc.push_back(6736);
    nirf_sc.push_back(32);
    col_sc.push_back("NIT Nagpur");
    br_sc.push_back("Electrical and Electronic engineering");
    clos_sc.push_back(2750);
    nirf_sc.push_back(32);
    }
    { col_sc.push_back("NIT Durgapur");
    br_sc.push_back("Bio Technology");
    clos_sc.push_back(7156);
    nirf_sc.push_back(34);
    col_sc.push_back("NIT Durgapur");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(6069);
    nirf_sc.push_back(34);
    col_sc.push_back("NIT Durgapur");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(5353);
    nirf_sc.push_back(34);
    col_sc.push_back("NIT Durgapur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(971);
    nirf_sc.push_back(34);
    col_sc.push_back("NIT Durgapur");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(3239);
    nirf_sc.push_back(34);
    col_sc.push_back("NIT Durgapur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(1881);
    nirf_sc.push_back(34);
    col_sc.push_back("NIT Durgapur");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(6918);
    nirf_sc.push_back(34);
    col_sc.push_back("NIT Durgapur");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(4740);
    nirf_sc.push_back(34);
    }
     { col_sc.push_back("NIT Silchar");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(6606);
    nirf_sc.push_back(38);
    col_sc.push_back("NIT Silchar");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1598);
    nirf_sc.push_back(38);
    col_sc.push_back("NIT Silchar");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(3973);
    nirf_sc.push_back(38);
    col_sc.push_back("NIT Silchar");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(2676);
    nirf_sc.push_back(38);
    col_sc.push_back("NIT Silchar");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(5545);
    nirf_sc.push_back(38);
    col_sc.push_back("NIT Silchar");
    br_sc.push_back("Electronics and Instrumentation engineering");
    clos_sc.push_back(3751);
    nirf_sc.push_back(38);
     }
    {  col_sc.push_back("NIT Jaipur");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(4866);
    nirf_sc.push_back(46);
     col_sc.push_back("NIT Jaipur");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(4019);
    nirf_sc.push_back(46);
     col_sc.push_back("NIT Jaipur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(757);
    nirf_sc.push_back(46);
     col_sc.push_back("NIT Jaipur");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(2704);
    nirf_sc.push_back(46);
     col_sc.push_back("NIT Jaipur");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(4240);
    nirf_sc.push_back(46);
     col_sc.push_back("NIT Jaipur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(1738);
    nirf_sc.push_back(46);
     col_sc.push_back("NIT Jaipur");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(6348);
    nirf_sc.push_back(46);

    }
      {col_sc.push_back("NIT Allahabad");
    br_sc.push_back("Bio Technology");
    clos_sc.push_back(5909);
    nirf_sc.push_back(47);
      col_sc.push_back("NIT Allahabad");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(4847);
    nirf_sc.push_back(47);
      col_sc.push_back("NIT Allahabad");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(5387);
    nirf_sc.push_back(47);
      col_sc.push_back("NIT Allahabad");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(634);
    nirf_sc.push_back(47);
      col_sc.push_back("NIT Allahabad");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(2673);
    nirf_sc.push_back(47);
      col_sc.push_back("NIT Allahabad");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(1689);
    nirf_sc.push_back(47);
      col_sc.push_back("NIT Allahabad");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(3936);
    nirf_sc.push_back(47);
      col_sc.push_back("NIT Allahabad");
    br_sc.push_back("Production and Industrial engineering");
    clos_sc.push_back(6253);
    nirf_sc.push_back(47);
      }
      {col_sc.push_back("NIT Kurukshetra");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(5456);
    nirf_sc.push_back(50);
     col_sc.push_back("NIT Kurukshetra");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(3086);
    nirf_sc.push_back(50);
     col_sc.push_back("NIT Kurukshetra");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(2345);
    nirf_sc.push_back(50);
     col_sc.push_back("NIT Kurukshetra");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(4642);
    nirf_sc.push_back(50);
     col_sc.push_back("NIT Kurukshetra");
    br_sc.push_back("Production and Industrial engineering");
    clos_sc.push_back(6613);
    nirf_sc.push_back(50);
     col_sc.push_back("NIT Kurukshetra");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(1510);
    nirf_sc.push_back(50);
     col_sc.push_back("NIT Kurukshetra");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1118);
    nirf_sc.push_back(50);
      }   
     { col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Bio Technology");
    clos_sc.push_back(7401);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(6472);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(5882);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1292);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(3680);
    nirf_sc.push_back(52); col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(2530);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(5203);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Textile engineering");
    clos_sc.push_back(8058);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(2035);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Instrumentation and Control engineering");
    clos_sc.push_back(5503);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Industrial and Production engineering");
    clos_sc.push_back(7271);
    nirf_sc.push_back(52);
     }
    { col_sc.push_back("NIT Surat");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(5982);
    nirf_sc.push_back(58);
    col_sc.push_back("NIT Surat");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(5671);
    nirf_sc.push_back(58);
    col_sc.push_back("NIT Surat");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(973);
    nirf_sc.push_back(58);
    col_sc.push_back("NIT Surat");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(3539);
    nirf_sc.push_back(58);
    col_sc.push_back("NIT Surat");
    br_sc.push_back("Electricons and Communication engineering");
    clos_sc.push_back(2393);
    nirf_sc.push_back(58);
    col_sc.push_back("NIT Surat");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(5115);
    nirf_sc.push_back(58);
    }
     { col_sc.push_back("NIT Meghalaya");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(7301);
    nirf_sc.push_back(60);
     col_sc.push_back("NIT Meghalaya");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1788);
    nirf_sc.push_back(60);
     col_sc.push_back("NIT Meghalaya");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(2742);
    nirf_sc.push_back(60);
     col_sc.push_back("NIT Meghalaya");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(6184);
    nirf_sc.push_back(60);
     col_sc.push_back("NIT Meghalaya");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(5314);
    nirf_sc.push_back(60);
     }
    { col_sc.push_back("NIT Patna");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(6359);
    nirf_sc.push_back(63); 
    col_sc.push_back("NIT Patna");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1937);
    nirf_sc.push_back(63);
    col_sc.push_back("NIT Patna");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(4235);
    nirf_sc.push_back(63);
    col_sc.push_back("NIT Patna");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(3351);
    nirf_sc.push_back(63);
    col_sc.push_back("NIT Patna");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(5679);
    nirf_sc.push_back(63); 
    }
    { col_sc.push_back("NIT Raipur");
    br_sc.push_back("Bio Technology");
    clos_sc.push_back(7817);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(6657);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(6307);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1601);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(4073);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(2780);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(5550);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(7411);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Mining engineering");
    clos_sc.push_back(7664);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(2089);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Bio Medical engineering");
    clos_sc.push_back(8166);
    nirf_sc.push_back(65);
    }
   {  col_sc.push_back("NIT Srinagar");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(8285);
    nirf_sc.push_back(66);
    col_sc.push_back("NIT Srinagar");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(7826);
   nirf_sc.push_back(66);
    col_sc.push_back("NIT Srinagar");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(2663);
    nirf_sc.push_back(66);
    col_sc.push_back("NIT Srinagar");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(6710);
    nirf_sc.push_back(66);
    col_sc.push_back("NIT Srinagar");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(4877);
    nirf_sc.push_back(66);
 col_sc.push_back("NIT Srinagar");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(7024);
    nirf_sc.push_back(66);
    col_sc.push_back("NIT Srinagar");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(8474);
    nirf_sc.push_back(66); 
    col_sc.push_back("NIT Srinagar");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(3468);
    nirf_sc.push_back(66);
      }
     { col_sc.push_back("NIT Bhopal");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(6223);
    nirf_sc.push_back(70);
     col_sc.push_back("NIT Bhopal");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(5980);
    nirf_sc.push_back(70);
     col_sc.push_back("NIT Bhopal");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1444);
    nirf_sc.push_back(70);
     col_sc.push_back("NIT Bhopal");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(3945);
    nirf_sc.push_back(70);
     col_sc.push_back("NIT Bhopal");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(2572);
    nirf_sc.push_back(70);
     col_sc.push_back("NIT Bhopal");
    br_sc.push_back("Mehcanical engineering");
    clos_sc.push_back(5263);
    nirf_sc.push_back(70);
     }
    { col_sc.push_back("NIT Agartala");
    br_sc.push_back("Biotechnology and Biochemical engineering");
    clos_sc.push_back(7663);
    nirf_sc.push_back(80);
     col_sc.push_back("NIT Agartala");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(6846);
    nirf_sc.push_back(80);
     col_sc.push_back("NIT Agartala");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(7536);
    nirf_sc.push_back(80);
     col_sc.push_back("NIT Agartala");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(2485);
    nirf_sc.push_back(80);
     col_sc.push_back("NIT Agartala");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(5621);
    nirf_sc.push_back(80);
     col_sc.push_back("NIT Agartala");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(4097);
    nirf_sc.push_back(80);
     col_sc.push_back("NIT Agartala");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(6706);
    nirf_sc.push_back(80);
     col_sc.push_back("NIT Agartala");
    br_sc.push_back("Production engineering");
    clos_sc.push_back(8440);
    nirf_sc.push_back(80);
     col_sc.push_back("NIT Agartala");
    br_sc.push_back("Electronics and Instrumentation engineering");
    clos_sc.push_back(6085);
    nirf_sc.push_back(80);

    }
     {  col_sc.push_back("NIT Goa");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(6094);
    nirf_sc.push_back(88);
    col_sc.push_back("NIT Goa");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1556);
    nirf_sc.push_back(88);
    col_sc.push_back("NIT Goa");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(2887);
    nirf_sc.push_back(88);
    col_sc.push_back("NIT Goa");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(5340);
    nirf_sc.push_back(88);
    col_sc.push_back("NIT Goa");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(4110);
    nirf_sc.push_back(88);
     }
    { col_sc.push_back("NIT Jamshedpur");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(6017);
    nirf_sc.push_back(90);
     col_sc.push_back("NIT Jamshedpur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1552);
    nirf_sc.push_back(90);
     col_sc.push_back("NIT Jamshedpur");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(3571);
    nirf_sc.push_back(90);
     col_sc.push_back("NIT Jamshedpur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(2475);
    nirf_sc.push_back(90);
     col_sc.push_back("NIT Jamshedpur");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(4956);
    nirf_sc.push_back(90);
     col_sc.push_back("NIT Jamshedpur");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(7005);
    nirf_sc.push_back(90);
     col_sc.push_back("NIT Jamshedpur");
    br_sc.push_back("Production and Industrial engineering");
    clos_sc.push_back(7103);
    nirf_sc.push_back(90);
     col_sc.push_back("NIT Jamshedpur");
    br_sc.push_back("Engineering and Computational Mechanics");
    clos_sc.push_back(4433);
    nirf_sc.push_back(90);

    }
     { col_sc.push_back("NIT Manipur");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(7580);
    nirf_sc.push_back(108);
      col_sc.push_back("NIT Manipur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(3389);
    nirf_sc.push_back(108);
      col_sc.push_back("NIT Manipur");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(6506);
    nirf_sc.push_back(108);
      col_sc.push_back("NIT Manipur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(4494);
    nirf_sc.push_back(108);
      col_sc.push_back("NIT Manipur");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(7089);
    nirf_sc.push_back(108);
    
         }
    {  col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(6337);
    nirf_sc.push_back(128);
    col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(6281);
    nirf_sc.push_back(128);col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1734);
    nirf_sc.push_back(128);
    col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(4375);
    nirf_sc.push_back(128);
    col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(2992);
    nirf_sc.push_back(128);
    col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Engineering Physics");
    clos_sc.push_back(5977);
    nirf_sc.push_back(128);
    col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Materials Science and engineering");
    clos_sc.push_back(7445);
    nirf_sc.push_back(128);
    col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Mathematics and Computing");
    clos_sc.push_back(3074);
    nirf_sc.push_back(128);
    col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(5415);
    nirf_sc.push_back(128);
    }
    {  col_sc.push_back("NIT Uttarakhand");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(6056);
    nirf_sc.push_back(131);
    col_sc.push_back("NIT Uttarakhand");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(2208);
    nirf_sc.push_back(131);
    col_sc.push_back("NIT Uttarakhand");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(3730);
    nirf_sc.push_back(131);
    col_sc.push_back("NIT Uttarakhand");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(5443);
    nirf_sc.push_back(131);
    col_sc.push_back("NIT Uttarakhand");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(4291);
    nirf_sc.push_back(131);
    }
    { col_sc.push_back("NIT Puducherry");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(6111);
    nirf_sc.push_back(136);
     col_sc.push_back("NIT Puducherry");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1661);
    nirf_sc.push_back(136);
     col_sc.push_back("NIT Puducherry");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(3359);
    nirf_sc.push_back(136);
     col_sc.push_back("NIT Puducherry");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(6054);
    nirf_sc.push_back(136);
     col_sc.push_back("NIT Puducherry");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(5422);
    nirf_sc.push_back(136);
    }
     {col_sc.push_back("NIT Arunanchal");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(8067);
    nirf_sc.push_back(171);
     col_sc.push_back("NIT Arunanchal");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(3161);
    nirf_sc.push_back(171);
     col_sc.push_back("NIT Arunanchal");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(6244);
    nirf_sc.push_back(171);
     col_sc.push_back("NIT Arunanchal");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(5171);
    nirf_sc.push_back(171);
     col_sc.push_back("NIT Arunanchal");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(7366);
    nirf_sc.push_back(171);

     }
   {col_sc.push_back("NIT Sikkim");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(7555);
    nirf_sc.push_back(173);
    col_sc.push_back("NIT Sikkim");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(2431);
    nirf_sc.push_back(173);
    col_sc.push_back("NIT Sikkim");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(5693);
    nirf_sc.push_back(173);
    col_sc.push_back("NIT Sikkim");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(4390);
    nirf_sc.push_back(173);
    col_sc.push_back("NIT Sikkim");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(7105);
    nirf_sc.push_back(173);

   }
    {col_sc.push_back("NIT Delhi");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(2862);
    nirf_sc.push_back(194); 
    col_sc.push_back("NIT Delhi");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(990);
    nirf_sc.push_back(194); 
    col_sc.push_back("NIT Delhi");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(3519);
    nirf_sc.push_back(194); 
    col_sc.push_back("NIT Delhi");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(2365);
    nirf_sc.push_back(194); 
    col_sc.push_back("NIT Delhi");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(4544);
    nirf_sc.push_back(194); 

    }
    {col_sc.push_back("NIT Andhra");
    br_sc.push_back("Bio Technology");
    clos_sc.push_back(8077);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Andhra");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(7067);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Andhra");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(7068);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Andhra");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(2789);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Andhra");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(5530);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Andhra");
    br_sc.push_back("Electronics and Communication engineering");
    clos_sc.push_back(4206);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Andhra");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(6795);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Andhra");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(7794);
    nirf_sc.push_back(1000); 
     
    }
     { col_sc.push_back("NIT Nagaland");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(8057);
    nirf_sc.push_back(1000);
     col_sc.push_back("NIT Nagaland");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(3101);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Nagaland");
    br_sc.push_back("Electronics and Communication engineering");
    clos_sc.push_back(4309);
   nirf_sc.push_back(1000);  
     col_sc.push_back("NIT Nagaland");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(7827);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Nagaland");
    br_sc.push_back("Electronics and Instrumentation engineering");
    clos_sc.push_back(7518);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Nagaland");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(6430);
    nirf_sc.push_back(1000); 
     
     }
     { col_sc.push_back("NIT Mizoram");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(8066);
    nirf_sc.push_back(1000); 
    col_sc.push_back("NIT Mizoram");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(3882);
    nirf_sc.push_back(1000); 
    col_sc.push_back("NIT Mizoram");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(6533);
    nirf_sc.push_back(1000); 
    col_sc.push_back("NIT Mizoram");
    br_sc.push_back("Electronics and Communication engineering");
    clos_sc.push_back(5835);
    nirf_sc.push_back(1000); 
    col_sc.push_back("NIT Mizoram");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(7625);
    nirf_sc.push_back(1000); 
     }
    {col_sc.push_back("IIIT GWALIOR");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1464);
    nirf_sc.push_back(78); 
     
    }
    {  col_sc.push_back("IIIT Jabalpur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(2977);
    nirf_sc.push_back(82); 
    
       col_sc.push_back("IIIT Jabalpur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(3961);
    nirf_sc.push_back(82); 
    
       col_sc.push_back("IIIT Jabalpur");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(6772);
    nirf_sc.push_back(82); 
    
       col_sc.push_back("IIIT Jabalpur");
    br_sc.push_back("Smart Manufacturing");
    clos_sc.push_back(8269);
    nirf_sc.push_back(82); 
    
    }
    { col_sc.push_back("IIIT Allahabad");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(1941);
    nirf_sc.push_back(93); 
     col_sc.push_back("IIIT Allahabad");
    br_sc.push_back("Electronic and Communication(FAP) engineering");
    clos_sc.push_back(2043);
    nirf_sc.push_back(93); 
     col_sc.push_back("IIIT Allahabad");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(1230);
    nirf_sc.push_back(93); 
     col_sc.push_back("IIIT Allahabad");
    br_sc.push_back("Information Technology(FAP)");
    clos_sc.push_back(1232);
    nirf_sc.push_back(93); 
     col_sc.push_back("IIIT Allahabad");
    br_sc.push_back("Information Technology(Business Informatics)");
    clos_sc.push_back(1314);
    nirf_sc.push_back(93); 
    }
   { col_sc.push_back("IIIT Kancheepuram");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(3119);
    nirf_sc.push_back(184); 
    col_sc.push_back("IIIT Kancheepuram");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(4985);
    nirf_sc.push_back(184); 
    col_sc.push_back("IIIT Kancheepuram");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(7236);
    nirf_sc.push_back(184); 
    col_sc.push_back("IIIT Kancheepuram");
    br_sc.push_back("Computer Science(AI) and engineering");
    clos_sc.push_back(3498);
    nirf_sc.push_back(184); 
    col_sc.push_back("IIIT Kancheepuram");
    br_sc.push_back("Smart Manufacturing");
    clos_sc.push_back(8174);
    nirf_sc.push_back(184); 
   }
    {col_sc.push_back("IIIT Guwahati");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(4473);
    nirf_sc.push_back(1000); 
    col_sc.push_back("IIIT Guwahati");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(6952);
    nirf_sc.push_back(1000); 
    }
    {col_sc.push_back("IIIT Kurnool");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(4479);
    nirf_sc.push_back(1000); 
    col_sc.push_back("IIIT Kurnool");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(6882);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Kurnool");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(8348);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Kurnool");
    br_sc.push_back("Artificial Intelligence");
    clos_sc.push_back(5521);
    nirf_sc.push_back(1000);
    }
    {  col_sc.push_back("IIIT Kottayam");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(7568);
    nirf_sc.push_back(1000);
     col_sc.push_back("IIIT Kottayam");
    br_sc.push_back("Computer Science(AI) and engineering");
    clos_sc.push_back(7611);
    nirf_sc.push_back(1000);
     col_sc.push_back("IIIT Kottayam");
    br_sc.push_back("Computer Science(CYBER SECURITY) and engineering");
    clos_sc.push_back(7842);
    nirf_sc.push_back(1000);
     col_sc.push_back("IIIT Kottayam");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(8176);
    nirf_sc.push_back(1000);
    
    }
    { col_sc.push_back("IIIT Lucknow");
    br_sc.push_back("Computer Science and Business");
    clos_sc.push_back(2782);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Lucknow");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(2142);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Lucknow");
    br_sc.push_back("Computer Science(AI) and engineering");
    clos_sc.push_back(1855);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Lucknow");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(3039);
    nirf_sc.push_back(1000);
    }
     { col_sc.push_back("IIIT Kota");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(4861);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT kota");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(6765);
    nirf_sc.push_back(1000);
     }
    { col_sc.push_back("IIIT Kalyani");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(6865);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Kalyani");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(8186);
    nirf_sc.push_back(1000);
    }
    { col_sc.push_back("IIIT Sonepat");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(5239);
    nirf_sc.push_back(1000);
     col_sc.push_back("IIIT Sonepat");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(5939);
    nirf_sc.push_back(1000);
    }
    {  col_sc.push_back("IIIT Una");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(5989);
    nirf_sc.push_back(1000);
       col_sc.push_back("IIIT Una");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(7890);
    nirf_sc.push_back(1000);
       col_sc.push_back("IIIT Una");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(7036);
    nirf_sc.push_back(1000);
    }
    { col_sc.push_back("IIIT Sri city");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(6926);
    nirf_sc.push_back(1000);
       col_sc.push_back("IIIT Sri city");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(7969);
    nirf_sc.push_back(1000);
    }
     {   col_sc.push_back("IIIT Vadodara");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(5106);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Vadodara");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(5805);
    nirf_sc.push_back(1000);
     }
   { col_sc.push_back("IIIT Manipur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(8441);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Manipur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(9386);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Manipur");
    br_sc.push_back("Computer Science(AI) and engineering");
    clos_sc.push_back(8379);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Manipur");
    br_sc.push_back("Electronic and Communication(embedded systems)");
    clos_sc.push_back(9561);
    nirf_sc.push_back(1000);
   }
    { col_sc.push_back("IIIT Tiruchirappalli");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(4052);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Tiruchirappalli");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(6803);
    nirf_sc.push_back(1000);
    }
    { col_sc.push_back("IIIT Dharwad");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(7350);
    nirf_sc.push_back(1000);
     col_sc.push_back("IIIT Dharwad");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(8227);
    nirf_sc.push_back(1000);
     col_sc.push_back("IIIT Dharwad");
    br_sc.push_back("Data Science and Artificial Intelligence");
    clos_sc.push_back(7875);
    nirf_sc.push_back(1000);
    }
    {col_sc.push_back("IIIT Ranchi");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(7212);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Ranchi");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(8431);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Ranchi");
    br_sc.push_back("Computer Science(AI) and engineering");
    clos_sc.push_back(7291);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Ranchi");
    br_sc.push_back("Electronic and Communication(embedded systems)");
    clos_sc.push_back(8480);
    nirf_sc.push_back(1000);
    }
     { col_sc.push_back("IIIT Nagpur");
    br_sc.push_back("Computer Science(AI) and engineering");
    clos_sc.push_back(6475);
    nirf_sc.push_back(1000);
      col_sc.push_back("IIIT Nagpur");
    br_sc.push_back("Computer Science(Data Science) and engineering");
    clos_sc.push_back(7171);
    nirf_sc.push_back(1000);
      col_sc.push_back("IIIT Nagpur");
    br_sc.push_back("Computer Science(Gaming) and engineering");
    clos_sc.push_back(6747);
    nirf_sc.push_back(1000);
      col_sc.push_back("IIIT Nagpur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(6239);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Nagpur");
    br_sc.push_back("Electronic and Communication(IOT) engineering");
    clos_sc.push_back(8019);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Nagpur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(7953);
    nirf_sc.push_back(1000);
     }
     { col_sc.push_back("IIIT Pune");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(3704);
    nirf_sc.push_back(1000);
     col_sc.push_back("IIIT Pune");
    br_sc.push_back("Electrical and Communication engineering");
    clos_sc.push_back(5367);
    nirf_sc.push_back(1000);
     }
    { col_sc.push_back("IIIT Bhagalpur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(8114);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Bhagalpur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(8944);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Bhagalpur");
    br_sc.push_back("Mechatronics engineering");
    clos_sc.push_back(9377);
    nirf_sc.push_back(1000);
   
    }
    { col_sc.push_back("IIIT Bhopal");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(5811);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Bhopal");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(7388);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Bhopal");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(6907);
    nirf_sc.push_back(1000);
    }
    {col_sc.push_back("IIIT Surat");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(4437);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Surat");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(6961);
    nirf_sc.push_back(1000);
    }
     { col_sc.push_back("IIIT Agartala");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(7147);
    nirf_sc.push_back(1000);
     }
     {col_sc.push_back("IIIT Raichur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(6574);
    nirf_sc.push_back(1000);
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
      
    func_scM2(h,m,col_sc,br_sc,clos_sc,nirf_sc,sc_rank);
    func_scM(m,col_sc,br_sc,clos_sc);

    break;
    case 2:
    
   
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Computer Science and engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Computer Science and engineering");
    break;
    case 3:
     
    
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Electronic and Communication engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Electronic and Communication engineering");
    break;
    
    
    break;
    case 4:
     
    // func_scM2(h,m,col_sc,br_sc,clos_sc,nirf_sc,sc_rank);

    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Mechanical engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Mechanical engineering");
    break;
    case 5:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Bio Technology",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Bio Technology");
    break;
    case 6:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Chemical engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Chemical engineering");
    break;
    case 7:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Civil engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Civil engineering");
    break;
    case 8:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Electrical engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Electrical engineering");
    break;
    case 9:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Metallurgical and Materials engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Metallurgical and Materials engineering");
    break;
    case 10:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Mining engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Mining engineering");
    break;
    case 11:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Information Technology",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Information Technology");
    break;
    case 12:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Bio Medical engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Bio Medical engineering");
    break;
    
    case 13:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Computational and Data Science engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Computational and Data Science engineering");
    break;
    
    case 14:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Electrical and Electronics engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Electrical and Electronics engineering");
    break;
    
    case 15:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Artificial Intelligence",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Artificial Intelligence");
    break;
    
    case 16:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Engineering Physics",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Engineering Physics");
    break;
    
    case 17:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Materials Science and engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Materials Science and engineering");
    break;
    
    case 18:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Production engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Production engineering");
    break;
    
    case 19:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Instrumentation and Control engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Instrumentation and Control engineering");
    break;
    
    case 20:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Ceramic engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Ceramic engineering");
    break;
    
    case 21:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Electronics and Instrumentation engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Electronics and Instrumentation engineering");
    break;
    
    case 22:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Industrial Design engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Industrial Design engineering");
    break;
    
    case 23:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Food Process engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Food Process engineering");
    break;
    
    case 24:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Production and Industrial engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Production and Industrial engineering");
    break;
    
    case 25:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Textile engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Textile engineering");
    break;
    
    case 26:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Industrial and Production engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Industrial and Production engineering");
    break;
    
    case 27:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Biotechnology and Biochemical engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Biotechnology and Biochemical engineering");
    break;
    
    case 28:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Engineering and Computational Mechanics",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Engineering and Computational Mechanics");
    break;
    
    case 29:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Mathematics and Computing",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Mathematics and Computing");
    break;
    
    case 30:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Smart Manufacturing",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Smart Manufacturing");
    break;
    
    case 31:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Electronic and Communication(FAP) engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Electronic and Communication(FAP) engineering");
    break;
    
    case 32:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Information Technology(FAP)",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Information Technology(FAP)");
    break;
    
    case 33:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Information Technology(Business Informatics)",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Information Technology(Business Informatics)");
    break;
    
    case 34:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Computer Science(AI) and engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Computer Science(AI) and engineering");
    break;
    
    case 35:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Electronic and Communication(embedded systems)",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Electronic and Communication(embedded systems)");
    break;
    
    case 36:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Data Science and Artificial Intelligence",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Data Science and Artificial Intelligence");
    break;
    
    case 37:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Computer Science(Gaming) and engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Computer Science(Gaming) and engineering");
    break;
    
    case 38:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Computer Science(Data Science) and engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Computer Science(Data Science) and engineering");
    break;

    case 39:
    func_scM3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Mechatronics engineering",sc_rank);
    func_scM1(m,col_sc,br_sc,clos_sc,"Mechatronics engineering");
    break;
    }
}