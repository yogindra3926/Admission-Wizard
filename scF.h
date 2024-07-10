#include<bits/stdc++.h>
using namespace std;
// multimap<int,int>m;
int lenscF(int f){
  int i=0;
  for(;f>0;i++){
    f/=10;
  }
  return i;
}
void func_scF( multimap<int,int>m,vector<string>col_sc,vector<string>br_sc,vector<int>clos_sc){
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
            int nirf_size=10-lenscF(clos_sc[i]);
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
void func_scF2( multimap<int,int>&h,multimap<int,int>&m,vector<string>col_sc,vector<string>br_sc,vector<int>clos_sc,vector<int>nirf_sc,int sc_rank){
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
void func_scF3(multimap<int,int>&h,multimap<int,int>&m,vector<string>col_sc,vector<string>br_sc,vector<int>clos_sc,vector<int>nirf_sc,string s,int sc_rank){
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
void func_scF1(multimap<int,int>m,vector<string>col_sc,vector<string>br_sc,vector<int>clos_sc,string s){
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
            int nirf_size=10-lenscF(clos_sc[i]);
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
void scF(){
    cout<<"enter your sc_rank"<<endl;
    int sc_rank;cin>>sc_rank;
      vector<string>col_sc;vector<string>br_sc;vector<int>clos_sc;vector<int>nirf_sc;
            {
 { col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(171);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Electronic and Communication engineering");  
    clos_sc.push_back(2169);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(4116);
    nirf_sc.push_back(10);
     col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(4617);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(4182);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Computational and Data Science engineering");
    clos_sc.push_back(1560);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(5111);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Mining engineering");
    clos_sc.push_back(5229);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(2169);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(284);
    nirf_sc.push_back(10);
    col_sc.push_back("NIT SURATHKAL");
    br_sc.push_back("Artificial Intelligence");
    clos_sc.push_back(330);
    nirf_sc.push_back(10);
   }
   { col_sc.push_back("NIT WARANGAL");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(184);
    nirf_sc.push_back(21);
    col_sc.push_back("NIT WARANGAL");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(2576);
    nirf_sc.push_back(21);
    col_sc.push_back("NIT WARANGAL");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(4844);
    nirf_sc.push_back(21);
    col_sc.push_back("NIT WARANGAL");
    br_sc.push_back("Bio Technology");
    clos_sc.push_back(4582);
    nirf_sc.push_back(21);
     col_sc.push_back("NIT WARANGAL");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(4633);
    nirf_sc.push_back(21);
     col_sc.push_back("NIT WARANGAL");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(4590);
    nirf_sc.push_back(21);
     col_sc.push_back("NIT WARANGAL");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(5877);
    nirf_sc.push_back(21);
     col_sc.push_back("NIT WARANGAL");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(2576);
    nirf_sc.push_back(21);
   }
   {col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(577);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(3199);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(5293);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Bio Technology");
    clos_sc.push_back(5688);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(5070);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(5736);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Engineering Physics");
    clos_sc.push_back(8175);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Materials Science and engineering");
    clos_sc.push_back(5567);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(3199);
    nirf_sc.push_back(31);
    col_sc.push_back("NIT CALICUT");
    br_sc.push_back("Production engineering");
    clos_sc.push_back(6877);
    nirf_sc.push_back(31);
   }
   {col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(3110);
    nirf_sc.push_back(8);
    col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(3011);
    nirf_sc.push_back(8);
    col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(118);
    nirf_sc.push_back(8);
    col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(1174);
    nirf_sc.push_back(8);
    col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(3994);
    nirf_sc.push_back(8);
    col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(5038);
    nirf_sc.push_back(8);
    col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(1989);
    nirf_sc.push_back(8);
    col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Production engineering");
    clos_sc.push_back(6678);
    nirf_sc.push_back(8);
    col_sc.push_back("NIT Tiruchirapally");
    br_sc.push_back("Instrumentation and Control engineering");
    clos_sc.push_back(4522);
    nirf_sc.push_back(8);
    }
   { col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Bio Technology");
    clos_sc.push_back(7064);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Ceramic engineering");
    clos_sc.push_back(8425);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(5675);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(5080);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(395);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(2764);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(5121);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(5580);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Mining engineering");
    clos_sc.push_back(6730);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Electronics and Instrumentation engineering");
    clos_sc.push_back(2128);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Bio Medical engineering");
    clos_sc.push_back(7435);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Industrial Design engineering");
    clos_sc.push_back(7406);
    nirf_sc.push_back(15);
    col_sc.push_back("NIT Rourkela");
    br_sc.push_back("Food Process engineering");
    clos_sc.push_back(7469);
    nirf_sc.push_back(15);
   }   
    {col_sc.push_back("NIT Nagpur");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(7087);
    nirf_sc.push_back(32);
    col_sc.push_back("NIT Nagpur");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(6684);
    nirf_sc.push_back(32);
    col_sc.push_back("NIT Nagpur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(681);
    nirf_sc.push_back(32);
    col_sc.push_back("NIT Nagpur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(2538);
    nirf_sc.push_back(32);
    col_sc.push_back("NIT Nagpur");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(6384);
    nirf_sc.push_back(32);
    col_sc.push_back("NIT Nagpur");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(8483);
    nirf_sc.push_back(32);
    col_sc.push_back("NIT Nagpur");
    br_sc.push_back("Mining engineering");
    clos_sc.push_back(7646);
    nirf_sc.push_back(32);
    col_sc.push_back("NIT Nagpur");
    br_sc.push_back("Electrical and Electronic engineering");
    clos_sc.push_back(3903);
    nirf_sc.push_back(32);
    }
    { col_sc.push_back("NIT Durgapur");
    br_sc.push_back("Bio Technology");
    clos_sc.push_back(9498);
    nirf_sc.push_back(34);
    col_sc.push_back("NIT Durgapur");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(7174);
    nirf_sc.push_back(34);
    col_sc.push_back("NIT Durgapur");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(7101);
    nirf_sc.push_back(34);
    col_sc.push_back("NIT Durgapur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1260);
    nirf_sc.push_back(34);
    col_sc.push_back("NIT Durgapur");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(4937);
    nirf_sc.push_back(34);
    col_sc.push_back("NIT Durgapur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(2827);
    nirf_sc.push_back(34);
    col_sc.push_back("NIT Durgapur");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(4938);
    nirf_sc.push_back(34);
    col_sc.push_back("NIT Durgapur");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(6927);
    nirf_sc.push_back(34);
    }
     { col_sc.push_back("NIT Silchar");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(8432);
    nirf_sc.push_back(38);
    col_sc.push_back("NIT Silchar");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1876);
    nirf_sc.push_back(38);
    col_sc.push_back("NIT Silchar");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(5596);
    nirf_sc.push_back(38);
    col_sc.push_back("NIT Silchar");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(4755);
    nirf_sc.push_back(38);
    col_sc.push_back("NIT Silchar");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(9210);
    nirf_sc.push_back(38);
    col_sc.push_back("NIT Silchar");
    br_sc.push_back("Electronics and Instrumentation engineering");
    clos_sc.push_back(4787);
    nirf_sc.push_back(38);
     }
    {  col_sc.push_back("NIT Jaipur");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(7232);
    nirf_sc.push_back(46);
     col_sc.push_back("NIT Jaipur");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(5983);
    nirf_sc.push_back(46);
     col_sc.push_back("NIT Jaipur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(738);
    nirf_sc.push_back(46);
     col_sc.push_back("NIT Jaipur");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(5148);
    nirf_sc.push_back(46);
     col_sc.push_back("NIT Jaipur");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(7419);
    nirf_sc.push_back(46);
     col_sc.push_back("NIT Jaipur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(2396);
    nirf_sc.push_back(46);
     col_sc.push_back("NIT Jaipur");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(9120);
    nirf_sc.push_back(46);

    }
      {col_sc.push_back("NIT Allahabad");
    br_sc.push_back("Bio Technology");
    clos_sc.push_back(7873);
    nirf_sc.push_back(47);
      col_sc.push_back("NIT Allahabad");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(5837);
    nirf_sc.push_back(47);
      col_sc.push_back("NIT Allahabad");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(6216);
    nirf_sc.push_back(47);
      col_sc.push_back("NIT Allahabad");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1269);
    nirf_sc.push_back(47);
      col_sc.push_back("NIT Allahabad");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(3971);
    nirf_sc.push_back(47);
      col_sc.push_back("NIT Allahabad");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(2774);
    nirf_sc.push_back(47);
      col_sc.push_back("NIT Allahabad");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(7970);
    nirf_sc.push_back(47);
      col_sc.push_back("NIT Allahabad");
    br_sc.push_back("Production and Industrial engineering");
    clos_sc.push_back(8682);
    nirf_sc.push_back(47);
      }
      {col_sc.push_back("NIT Kurukshetra");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(7057);
    nirf_sc.push_back(50);
     col_sc.push_back("NIT Kurukshetra");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(4708);
    nirf_sc.push_back(50);
     col_sc.push_back("NIT Kurukshetra");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(3946);
    nirf_sc.push_back(50);
     col_sc.push_back("NIT Kurukshetra");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(7733);
    nirf_sc.push_back(50);
     col_sc.push_back("NIT Kurukshetra");
    br_sc.push_back("Production and Industrial engineering");
    clos_sc.push_back(8455);
    nirf_sc.push_back(50);
     col_sc.push_back("NIT Kurukshetra");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(2630);
    nirf_sc.push_back(50);
     col_sc.push_back("NIT Kurukshetra");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1657);
    nirf_sc.push_back(50);
      }   
     { col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Bio Technology");
    clos_sc.push_back(9337);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(8596);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(6759);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1463);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(5718);
    nirf_sc.push_back(52); col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(3874);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(8330);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Textile engineering");
    clos_sc.push_back(10168);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(3358);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Instrumentation and Control engineering");
    clos_sc.push_back(8611);
    nirf_sc.push_back(52);
     col_sc.push_back("NIT Jalandar");
    br_sc.push_back("Industrial and Production engineering");
    clos_sc.push_back(9998);
    nirf_sc.push_back(52);
     }
    { col_sc.push_back("NIT Surat");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(7084);
    nirf_sc.push_back(58);
    col_sc.push_back("NIT Surat");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(7777);
    nirf_sc.push_back(58);
    col_sc.push_back("NIT Surat");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(984);
    nirf_sc.push_back(58);
    col_sc.push_back("NIT Surat");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(5712);
    nirf_sc.push_back(58);
    col_sc.push_back("NIT Surat");
    br_sc.push_back("Electricons and Communication engineering");
    clos_sc.push_back(3755);
    nirf_sc.push_back(58);
    col_sc.push_back("NIT Surat");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(7341);
    nirf_sc.push_back(58);
    }
     { col_sc.push_back("NIT Meghalaya");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(7301);
    nirf_sc.push_back(60);
     col_sc.push_back("NIT Meghalaya");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(5012);
    nirf_sc.push_back(60);
     col_sc.push_back("NIT Meghalaya");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(5176);
    nirf_sc.push_back(60);
     col_sc.push_back("NIT Meghalaya");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(9830);
    nirf_sc.push_back(60);
     col_sc.push_back("NIT Meghalaya");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(5314);
    nirf_sc.push_back(60);
     }
    { col_sc.push_back("NIT Patna");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(9548);
    nirf_sc.push_back(63); 
    col_sc.push_back("NIT Patna");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(2708);
    nirf_sc.push_back(63);
    col_sc.push_back("NIT Patna");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(7083);
    nirf_sc.push_back(63);
    col_sc.push_back("NIT Patna");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(5788);
    nirf_sc.push_back(63);
    col_sc.push_back("NIT Patna");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(9084);
    nirf_sc.push_back(63); 
    }
    { col_sc.push_back("NIT Raipur");
    br_sc.push_back("Bio Technology");
    clos_sc.push_back(9668);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(9159);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(8622);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(684);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(6045);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(4277);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(7762);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(10330);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Mining engineering");
    clos_sc.push_back(9587);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(3196);
    nirf_sc.push_back(65);
     col_sc.push_back("NIT Raipur");
    br_sc.push_back("Bio Medical engineering");
    clos_sc.push_back(10117);
    nirf_sc.push_back(65);
    }
   {  col_sc.push_back("NIT Srinagar");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(10575);
    nirf_sc.push_back(66);
    col_sc.push_back("NIT Srinagar");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(10585);
    nirf_sc.push_back(66);
    col_sc.push_back("NIT Srinagar");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(5199);
    nirf_sc.push_back(66);
    col_sc.push_back("NIT Srinagar");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(9115);
    nirf_sc.push_back(66);
    col_sc.push_back("NIT Srinagar");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(7586);
    nirf_sc.push_back(66);
col_sc.push_back("NIT Srinagar");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(10856);
    nirf_sc.push_back(66);
    col_sc.push_back("NIT Srinagar");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(11441);
    nirf_sc.push_back(66); 
    col_sc.push_back("NIT Srinagar");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(5660);
    nirf_sc.push_back(66);
      }
     { col_sc.push_back("NIT Bhopal");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(7752);
    nirf_sc.push_back(70);
     col_sc.push_back("NIT Bhopal");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(8745);
    nirf_sc.push_back(70);
     col_sc.push_back("NIT Bhopal");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1529);
    nirf_sc.push_back(70);
     col_sc.push_back("NIT Bhopal");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(5547);
    nirf_sc.push_back(70);
     col_sc.push_back("NIT Bhopal");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(3923);
    nirf_sc.push_back(70);
     col_sc.push_back("NIT Bhopal");
    br_sc.push_back("Mehcanical engineering");
    clos_sc.push_back(8252);
    nirf_sc.push_back(70);
     }
    { col_sc.push_back("NIT Agartala");
    br_sc.push_back("Biotechnology and Biochemical engineering");
    clos_sc.push_back(10857);
    nirf_sc.push_back(80);
     col_sc.push_back("NIT Agartala");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(9475);
    nirf_sc.push_back(80);
     col_sc.push_back("NIT Agartala");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(10073);
    nirf_sc.push_back(80);
     col_sc.push_back("NIT Agartala");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(4282);
    nirf_sc.push_back(80);
     col_sc.push_back("NIT Agartala");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(8934);
    nirf_sc.push_back(80);
     col_sc.push_back("NIT Agartala");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(6964);
    nirf_sc.push_back(80);
     col_sc.push_back("NIT Agartala");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(10264);
    nirf_sc.push_back(80);
     col_sc.push_back("NIT Agartala");
    br_sc.push_back("Production engineering");
    clos_sc.push_back(10540);
    nirf_sc.push_back(80);
     col_sc.push_back("NIT Agartala");
    br_sc.push_back("Electronics and Instrumentation engineering");
    clos_sc.push_back(9667);
    nirf_sc.push_back(80);

    }
     {  col_sc.push_back("NIT Goa");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(7135);
    nirf_sc.push_back(88);
    col_sc.push_back("NIT Goa");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1151);
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
    clos_sc.push_back(6321);
    nirf_sc.push_back(88);
     }
    { col_sc.push_back("NIT Jamshedpur");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(8940);
    nirf_sc.push_back(90);
     col_sc.push_back("NIT Jamshedpur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1498);
    nirf_sc.push_back(90);
     col_sc.push_back("NIT Jamshedpur");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(4902);
    nirf_sc.push_back(90);
     col_sc.push_back("NIT Jamshedpur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(4202);
    nirf_sc.push_back(90);
     col_sc.push_back("NIT Jamshedpur");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(7640);
    nirf_sc.push_back(90);
     col_sc.push_back("NIT Jamshedpur");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(9534);
    nirf_sc.push_back(90);
     col_sc.push_back("NIT Jamshedpur");
    br_sc.push_back("Production and Industrial engineering");
    clos_sc.push_back(9861);
    nirf_sc.push_back(90);
     col_sc.push_back("NIT Jamshedpur");
    br_sc.push_back("Engineering and Computational Mechanics");
    clos_sc.push_back(4754);
    nirf_sc.push_back(90);

    }
     { col_sc.push_back("NIT Manipur");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(7580);
    nirf_sc.push_back(108);
      col_sc.push_back("NIT Manipur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(4883);
    nirf_sc.push_back(108);
      col_sc.push_back("NIT Manipur");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(8217);
    nirf_sc.push_back(108);
      col_sc.push_back("NIT Manipur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(7665);
    nirf_sc.push_back(108);
      col_sc.push_back("NIT Manipur");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(9874);
    nirf_sc.push_back(108);
    
         }
    {  col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(8772);
    nirf_sc.push_back(128);
    col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(9167);
    nirf_sc.push_back(128);col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(2387);
    nirf_sc.push_back(128);
    col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(6010);
    nirf_sc.push_back(128);
    col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(4634);
    nirf_sc.push_back(128);
    col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Engineering Physics");
    clos_sc.push_back(5099);
    nirf_sc.push_back(128);
    col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Materials Science and engineering");
    clos_sc.push_back(7445);
    nirf_sc.push_back(128);
    col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Mathematics and Computing");
    clos_sc.push_back(6007);
    nirf_sc.push_back(128);
    col_sc.push_back("NIT Hamirpur");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(9739);
    nirf_sc.push_back(128);
    }
    {  col_sc.push_back("NIT Uttarakhand");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(6985);
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
    clos_sc.push_back(9432);
    nirf_sc.push_back(131);
    col_sc.push_back("NIT Uttarakhand");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(7010);
    nirf_sc.push_back(131);
    }
    { col_sc.push_back("NIT Puducherry");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(4979);
    nirf_sc.push_back(136);
     col_sc.push_back("NIT Puducherry");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(743);
    nirf_sc.push_back(136);
     col_sc.push_back("NIT Puducherry");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(3788);
    nirf_sc.push_back(136);
     col_sc.push_back("NIT Puducherry");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(6054);
    nirf_sc.push_back(136);
     col_sc.push_back("NIT Puducherry");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(5903);
    nirf_sc.push_back(136);
    }
     {col_sc.push_back("NIT Arunanchal");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(10166);
    nirf_sc.push_back(171);
     col_sc.push_back("NIT Arunanchal");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(5886);
    nirf_sc.push_back(171);
     col_sc.push_back("NIT Arunanchal");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(8206);
    nirf_sc.push_back(171);
     col_sc.push_back("NIT Arunanchal");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(6605);
    nirf_sc.push_back(171);
     col_sc.push_back("NIT Arunanchal");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(10747);
    nirf_sc.push_back(171);

     }
   {col_sc.push_back("NIT Sikkim");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(10449);
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
    clos_sc.push_back(5266);
    nirf_sc.push_back(194); 
    col_sc.push_back("NIT Delhi");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(1062);
    nirf_sc.push_back(194); 
    col_sc.push_back("NIT Delhi");
    br_sc.push_back("Electrical engineering");
    clos_sc.push_back(3797);
    nirf_sc.push_back(194); 
    col_sc.push_back("NIT Delhi");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(1910);
    nirf_sc.push_back(194); 
    col_sc.push_back("NIT Delhi");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(5033);
    nirf_sc.push_back(194); 

    }
    {col_sc.push_back("NIT Andhra");
    br_sc.push_back("Bio Technology");
    clos_sc.push_back(8077);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Andhra");
    br_sc.push_back("Chemical engineering");
    clos_sc.push_back(9599);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Andhra");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(9800);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Andhra");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(3967);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Andhra");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(6514);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Andhra");
    br_sc.push_back("Electronics and Communication engineering");
    clos_sc.push_back(5398);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Andhra");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(9290);
    nirf_sc.push_back(1000); 
     col_sc.push_back("NIT Andhra");
    br_sc.push_back("Metallurgical and Materials engineering");
    clos_sc.push_back(9053);
    nirf_sc.push_back(1000); 
     
    }
     { col_sc.push_back("NIT Nagaland");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(9792);
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
    clos_sc.push_back(9190);
    nirf_sc.push_back(1000); 
     
     }
     { col_sc.push_back("NIT Mizoram");
    br_sc.push_back("Civil engineering");
    clos_sc.push_back(10697);
    nirf_sc.push_back(1000); 
    col_sc.push_back("NIT Mizoram");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(5304);
    nirf_sc.push_back(1000); 
    col_sc.push_back("NIT Mizoram");
    br_sc.push_back("Electrical and Electronics engineering");
    clos_sc.push_back(8717);
    nirf_sc.push_back(1000); 
    col_sc.push_back("NIT Mizoram");
    br_sc.push_back("Electronics and Communication engineering");
    clos_sc.push_back(5835);
    nirf_sc.push_back(1000); 
    col_sc.push_back("NIT Mizoram");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(5835);
    nirf_sc.push_back(1000); 
     }
    {col_sc.push_back("IIIT GWALIOR");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(2448);
    nirf_sc.push_back(78); 
     
    }
    {  col_sc.push_back("IIIT Jabalpur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(5172);
    nirf_sc.push_back(82); 
    
       col_sc.push_back("IIIT Jabalpur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(6733);
    nirf_sc.push_back(82); 
    
       col_sc.push_back("IIIT Jabalpur");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(10149);
    nirf_sc.push_back(82); 
    
       col_sc.push_back("IIIT Jabalpur");
    br_sc.push_back("Smart Manufacturing");
    clos_sc.push_back(11419);
    nirf_sc.push_back(82); 
    
    }
    { col_sc.push_back("IIIT Allahabad");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(4624);
    nirf_sc.push_back(93); 
     col_sc.push_back("IIIT Allahabad");
    br_sc.push_back("Electronic and Communication(FAP) engineering");
    clos_sc.push_back(4502);
    nirf_sc.push_back(93); 
     col_sc.push_back("IIIT Allahabad");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(2381);
    nirf_sc.push_back(93); 
     col_sc.push_back("IIIT Allahabad");
    br_sc.push_back("Information Technology(FAP)");
    clos_sc.push_back(3362);
    nirf_sc.push_back(93); 
     col_sc.push_back("IIIT Allahabad");
    br_sc.push_back("Information Technology(Business Informatics)");
    clos_sc.push_back(2446);
    nirf_sc.push_back(93); 
    }
   { col_sc.push_back("IIIT Kancheepuram");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(4458);
    nirf_sc.push_back(184); 
    col_sc.push_back("IIIT Kancheepuram");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(6463);
    nirf_sc.push_back(184); 
    col_sc.push_back("IIIT Kancheepuram");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(9775);
    nirf_sc.push_back(184); 
    col_sc.push_back("IIIT Kancheepuram");
    br_sc.push_back("Computer Science(AI) and engineering");
    clos_sc.push_back(4696);
    nirf_sc.push_back(184); 
    col_sc.push_back("IIIT Kancheepuram");
    br_sc.push_back("Smart Manufacturing");
    clos_sc.push_back(9868);
    nirf_sc.push_back(184); 
   }
    {col_sc.push_back("IIIT Guwahati");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(4800);
    nirf_sc.push_back(1000); 
    col_sc.push_back("IIIT Guwahati");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(8231);
    nirf_sc.push_back(1000); 
    }
    {col_sc.push_back("IIIT Kurnool");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(5602);
    nirf_sc.push_back(1000); 
    col_sc.push_back("IIIT Kurnool");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(8237);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Kurnool");
    br_sc.push_back("Mechanical engineering");
    clos_sc.push_back(8238);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Kurnool");
    br_sc.push_back("Artificial Intelligence");
    clos_sc.push_back(7544);
    nirf_sc.push_back(1000);
    }
    {  col_sc.push_back("IIIT Kottayam");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(7489);
    nirf_sc.push_back(1000);
     col_sc.push_back("IIIT Kottayam");
    br_sc.push_back("Computer Science(AI) and engineering");
    clos_sc.push_back(7634);
    nirf_sc.push_back(1000);
     col_sc.push_back("IIIT Kottayam");
    br_sc.push_back("Computer Science(CYBER SECURITY) and engineering");
    clos_sc.push_back(7039);
    nirf_sc.push_back(1000);
     col_sc.push_back("IIIT Kottayam");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(8223);
    nirf_sc.push_back(1000);
    
    }
    { col_sc.push_back("IIIT Lucknow");
    br_sc.push_back("Computer Science and Business");
    clos_sc.push_back(4608);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Lucknow");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(3544);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Lucknow");
    br_sc.push_back("Computer Science(AI) and engineering");
    clos_sc.push_back(3083);
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
    clos_sc.push_back(7197);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Vadodara");
    br_sc.push_back("Information Technology");
    clos_sc.push_back(7601);
    nirf_sc.push_back(1000);
     }
   { col_sc.push_back("IIIT Manipur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(9107);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Manipur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(10473);
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
    clos_sc.push_back(6748);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Tiruchirappalli");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(8537);
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
    clos_sc.push_back(5505);
    nirf_sc.push_back(1000);
     col_sc.push_back("IIIT Pune");
    br_sc.push_back("Electrical and Communication engineering");
    clos_sc.push_back(6451);
    nirf_sc.push_back(1000);
     }
    { col_sc.push_back("IIIT Bhagalpur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(8787);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Bhagalpur");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(9139);
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
    clos_sc.push_back(6229);
    nirf_sc.push_back(1000);
    col_sc.push_back("IIIT Surat");
    br_sc.push_back("Electronic and Communication engineering");
    clos_sc.push_back(7398);
    nirf_sc.push_back(1000);
    }
     { col_sc.push_back("IIIT Agartala");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(7147);
    nirf_sc.push_back(1000);
     }
     {col_sc.push_back("IIIT Raichur");
    br_sc.push_back("Computer Science and engineering");
    clos_sc.push_back(6685);
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
      
    func_scF2(h,m,col_sc,br_sc,clos_sc,nirf_sc,sc_rank);
    func_scF(m,col_sc,br_sc,clos_sc);

    break;
    case 2:
    
   
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Computer Science and engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Computer Science and engineering");
    break;
    case 3:
     
    
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Electronic and Communication engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Electronic and Communication engineering");
    break;
    
    
    break;
    case 4:
     
    // func_scF2(h,m,col_sc,br_sc,clos_sc,nirf_sc,sc_rank);

    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Mechanical engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Mechanical engineering");
    break;
    case 5:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Bio Technology",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Bio Technology");
    break;
    case 6:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Chemical engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Chemical engineering");
    break;
    case 7:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Civil engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Civil engineering");
    break;
    case 8:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Electrical engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Electrical engineering");
    break;
    case 9:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Metallurgical and Materials engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Metallurgical and Materials engineering");
    break;
    case 10:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Mining engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Mining engineering");
    break;
    case 11:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Information Technology",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Information Technology");
    break;
    case 12:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Bio Medical engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Bio Medical engineering");
    break;
    
    case 13:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Computational and Data Science engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Computational and Data Science engineering");
    break;
    
    case 14:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Electrical and Electronics engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Electrical and Electronics engineering");
    break;
    
    case 15:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Artificial Intelligence",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Artificial Intelligence");
    break;
    
    case 16:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Engineering Physics",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Engineering Physics");
    break;
    
    case 17:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Materials Science and engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Materials Science and engineering");
    break;
    
    case 18:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Production engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Production engineering");
    break;
    
    case 19:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Instrumentation and Control engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Instrumentation and Control engineering");
    break;
    
    case 20:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Ceramic engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Ceramic engineering");
    break;
    
    case 21:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Electronics and Instrumentation engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Electronics and Instrumentation engineering");
    break;
    
    case 22:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Industrial Design engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Industrial Design engineering");
    break;
    
    case 23:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Food Process engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Food Process engineering");
    break;
    
    case 24:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Production and Industrial engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Production and Industrial engineering");
    break;
    
    case 25:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Textile engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Textile engineering");
    break;
    
    case 26:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Industrial and Production engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Industrial and Production engineering");
    break;
    
    case 27:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Biotechnology and Biochemical engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Biotechnology and Biochemical engineering");
    break;
    
    case 28:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Engineering and Computational Mechanics",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Engineering and Computational Mechanics");
    break;
    
    case 29:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Mathematics and Computing",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Mathematics and Computing");
    break;
    
    case 30:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Smart Manufacturing",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Smart Manufacturing");
    break;
    
    case 31:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Electronic and Communication(FAP) engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Electronic and Communication(FAP) engineering");
    break;
    
    case 32:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Information Technology(FAP)",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Information Technology(FAP)");
    break;
    
    case 33:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Information Technology(Business Informatics)",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Information Technology(Business Informatics)");
    break;
    
    case 34:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Computer Science(AI) and engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Computer Science(AI) and engineering");
    break;
    
    case 35:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Electronic and Communication(embedded systems)",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Electronic and Communication(embedded systems)");
    break;
    
    case 36:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Data Science and Artificial Intelligence",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Data Science and Artificial Intelligence");
    break;
    
    case 37:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Computer Science(Gaming) and engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Computer Science(Gaming) and engineering");
    break;
    
    case 38:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Computer Science(Data Science) and engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Computer Science(Data Science) and engineering");
    break;

    case 39:
    func_scF3(h,m,col_sc,br_sc,clos_sc,nirf_sc,"Mechatronics engineering",sc_rank);
    func_scF1(m,col_sc,br_sc,clos_sc,"Mechatronics engineering");
    break;
    }
}