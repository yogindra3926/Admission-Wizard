#include<bits/stdc++.h>
using namespace std;
// multimap<int,int>m;
int lenobcF(int f){
  int i=0;
  for(;f>0;i++){
    f/=10;
  }
  return i;
}
void func_obcF( multimap<int,int>m,vector<string>col_obc,vector<string>br_obc,vector<int>clos_obc){
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
        cout<<col_obc[i];int col_size=20-col_obc[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_obc[i];
            int br_size=55-br_obc[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_obc[i];
            int nirf_size=10-lenobcF(clos_obc[i]);
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
void func_obcF2( multimap<int,int>&h,multimap<int,int>&m,vector<string>col_obc,vector<string>br_obc,vector<int>clos_obc,vector<int>nirf_obc,int obc_rank){
    int serial=1;
for(int i=0;i<col_obc.size();i++){
    h.insert({clos_obc[i],i});
    }
    for(auto it:h){
        auto i=it.second;
        if(clos_obc[i]>obc_rank){
          m.insert({nirf_obc[i],i});
        //   m.first=nirf_obc;
        //   m.second=i;
        cout<<serial<<".";
            cout<<col_obc[i];int col_size=20-col_obc[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_obc[i];
            int br_size=55-br_obc[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_obc[i]<<endl;
            serial++;
        }
    }
}
void func_obcF3(multimap<int,int>&h,multimap<int,int>&m,vector<string>col_obc,vector<string>br_obc,vector<int>clos_obc,vector<int>nirf_obc,string s,int obc_rank){
    int serial=1;
for(int i=0;i<col_obc.size();i++){
    h.insert({clos_obc[i],i});
}
for(auto it:h){
  auto i=it.second;
  if(br_obc[i]==s){
        if(clos_obc[i]>obc_rank){
          m.insert({nirf_obc[i],i});
        //   m.first=nirf_obc;
        //   m.second=i;
        cout<<serial<<".";
            cout<<col_obc[i];int col_size=20-col_obc[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_obc[i];
            int br_size=55-br_obc[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_obc[i]<<endl;
            serial++;
        }
    }
}
}
void func_obcF1(multimap<int,int>m,vector<string>col_obc,vector<string>br_obc,vector<int>clos_obc,string s){
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
    if(br_obc[i]==s){
    cout<<serial<<".";
        
        cout<<col_obc[i];int col_size=20-col_obc[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_obc[i];
            int br_size=55-br_obc[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_obc[i];
            int nirf_size=10-lenobcF(clos_obc[i]);
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
void obcF(){
    cout<<"enter your obc_rank"<<endl;
    int obc_rank;cin>>obc_rank;
      vector<string>col_obc;vector<string>br_obc;vector<int>clos_obc;vector<int>nirf_obc;
   
    {
    { col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(769);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Electronic and Communication engineering");  
    clos_obc.push_back(2720);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(9710);
    nirf_obc.push_back(10);
     col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(8362);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(12646);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Computational and Data Science engineering");
    clos_obc.push_back(2589);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(14591);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Mining engineering");
    clos_obc.push_back(15310);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(5176);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(2314);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Artificial Intelligence");
    clos_obc.push_back(1699);
    nirf_obc.push_back(10);
    }
     { col_obc.push_back("NIT WARANGAL");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(1128);
    nirf_obc.push_back(21);
    col_obc.push_back("NIT WARANGAL");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(3145);
    nirf_obc.push_back(21);
    col_obc.push_back("NIT WARANGAL");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(10129);
    nirf_obc.push_back(21);
    col_obc.push_back("NIT WARANGAL");
    br_obc.push_back("Bio Technology");
    clos_obc.push_back(11011);
    nirf_obc.push_back(21);
     col_obc.push_back("NIT WARANGAL");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(10887);
    nirf_obc.push_back(21);
     col_obc.push_back("NIT WARANGAL");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(13642);
    nirf_obc.push_back(21);
     col_obc.push_back("NIT WARANGAL");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(15386);
    nirf_obc.push_back(21);
     col_obc.push_back("NIT WARANGAL");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(4491);
    nirf_obc.push_back(21);
   }
   {col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(1683);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(3761);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(12124);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Bio Technology");
    clos_obc.push_back(16350);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(13366);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(14787);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Engineering Physics");
    clos_obc.push_back(15877);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Materials Science and engineering");
    clos_obc.push_back(14790);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(6048);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Production engineering");
    clos_obc.push_back(14741);
    nirf_obc.push_back(31);
   }
   {col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(6189);
    nirf_obc.push_back(8);
    col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(11428);
    nirf_obc.push_back(8);
    col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(539);
    nirf_obc.push_back(8);
    col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(2490);
    nirf_obc.push_back(8);
    col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(8730);
    nirf_obc.push_back(8);
    col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(14143);
    nirf_obc.push_back(8);
    col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(3822);
    nirf_obc.push_back(8);
    col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Production engineering");
    clos_obc.push_back(14727);
    nirf_obc.push_back(8);
    col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Instrumentation and Control engineering");
    clos_obc.push_back(8759);
    nirf_obc.push_back(8);
    }
   { col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Bio Technology");
    clos_obc.push_back(15886);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Ceramic engineering");
    clos_obc.push_back(17881);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(10935);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(13774);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(1380);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(6401);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(10233);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(15463);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Mining engineering");
    clos_obc.push_back(18729);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Electronics and Instrumentation engineering");
    clos_obc.push_back(8034);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Bio Medical engineering");
    clos_obc.push_back(15886);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Industrial Design engineering");
    clos_obc.push_back(14926);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Food Process engineering");
    clos_obc.push_back(18418);
    nirf_obc.push_back(15);
   }   
    {col_obc.push_back("NIT Nagpur");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(14800);
    nirf_obc.push_back(32);
    col_obc.push_back("NIT Nagpur");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(17091);
    nirf_obc.push_back(32);
    col_obc.push_back("NIT Nagpur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(3001);
    nirf_obc.push_back(32);
    col_obc.push_back("NIT Nagpur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(4700);
    nirf_obc.push_back(32);
    col_obc.push_back("NIT Nagpur");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(14398);
    nirf_obc.push_back(32);
    col_obc.push_back("NIT Nagpur");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(17236);
    nirf_obc.push_back(32);
    col_obc.push_back("NIT Nagpur");
    br_obc.push_back("Mining engineering");
    clos_obc.push_back(21224);
    nirf_obc.push_back(32);
    col_obc.push_back("NIT Nagpur");
    br_obc.push_back("Electrical and Electronic engineering");
    clos_obc.push_back(9028);
    nirf_obc.push_back(32);
    }
    { col_obc.push_back("NIT Durgapur");
    br_obc.push_back("Bio Technology");
    clos_obc.push_back(18221);
    nirf_obc.push_back(34);
    col_obc.push_back("NIT Durgapur");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(15549);
    nirf_obc.push_back(34);
    col_obc.push_back("NIT Durgapur");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(17465);
    nirf_obc.push_back(34);
    col_obc.push_back("NIT Durgapur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(4925);
    nirf_obc.push_back(34);
    col_obc.push_back("NIT Durgapur");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(9760);
    nirf_obc.push_back(34);
    col_obc.push_back("NIT Durgapur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(6005);
    nirf_obc.push_back(34);
    col_obc.push_back("NIT Durgapur");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(18349);
    nirf_obc.push_back(34);
    col_obc.push_back("NIT Durgapur");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(16424);
    nirf_obc.push_back(34);
    }
     { col_obc.push_back("NIT Silchar");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(20546);
    nirf_obc.push_back(38);
    col_obc.push_back("NIT Silchar");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(6556);
    nirf_obc.push_back(38);
    col_obc.push_back("NIT Silchar");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(12592);
    nirf_obc.push_back(38);
    col_obc.push_back("NIT Silchar");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(10265);
    nirf_obc.push_back(38);
    col_obc.push_back("NIT Silchar");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(17393);
    nirf_obc.push_back(38);
    col_obc.push_back("NIT Silchar");
    br_obc.push_back("Electronics and Instrumentation engineering");
    clos_obc.push_back(13077);
    nirf_obc.push_back(38);
     }
    {  col_obc.push_back("NIT Jaipur");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(14212);
    nirf_obc.push_back(46);
     col_obc.push_back("NIT Jaipur");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(16950);
    nirf_obc.push_back(46);
     col_obc.push_back("NIT Jaipur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(4081);
    nirf_obc.push_back(46);
     col_obc.push_back("NIT Jaipur");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(10729);
    nirf_obc.push_back(46);
     col_obc.push_back("NIT Jaipur");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(14693);
    nirf_obc.push_back(46);
     col_obc.push_back("NIT Jaipur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(6053);
    nirf_obc.push_back(46);
     col_obc.push_back("NIT Jaipur");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(19947);
    nirf_obc.push_back(46);

    }
      {col_obc.push_back("NIT Allahabad");
    br_obc.push_back("Bio Technology");
    clos_obc.push_back(15846);
    nirf_obc.push_back(47);
      col_obc.push_back("NIT Allahabad");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(11654);
    nirf_obc.push_back(47);
      col_obc.push_back("NIT Allahabad");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(14081);
    nirf_obc.push_back(47);
      col_obc.push_back("NIT Allahabad");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(3014);
    nirf_obc.push_back(47);
      col_obc.push_back("NIT Allahabad");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(8054);
    nirf_obc.push_back(47);
      col_obc.push_back("NIT Allahabad");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(5261);
    nirf_obc.push_back(47);
      col_obc.push_back("NIT Allahabad");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(12581);
    nirf_obc.push_back(47);
      col_obc.push_back("NIT Allahabad");
    br_obc.push_back("Production and Industrial engineering");
    clos_obc.push_back(15844);
    nirf_obc.push_back(47);
      }
      {col_obc.push_back("NIT Kurukshetra");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(18532);
    nirf_obc.push_back(50);
     col_obc.push_back("NIT Kurukshetra");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(11490);
    nirf_obc.push_back(50);
     col_obc.push_back("NIT Kurukshetra");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(7325);
    nirf_obc.push_back(50);
     col_obc.push_back("NIT Kurukshetra");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(15587);
    nirf_obc.push_back(50);
     col_obc.push_back("NIT Kurukshetra");
    br_obc.push_back("Production and Industrial engineering");
    clos_obc.push_back(19160);
    nirf_obc.push_back(50);
     col_obc.push_back("NIT Kurukshetra");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(5393);
    nirf_obc.push_back(50);
     col_obc.push_back("NIT Kurukshetra");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(4642);
    nirf_obc.push_back(50);
      }   
     { col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Bio Technology");
    clos_obc.push_back(19949);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(18695);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(19527);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(6434);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(11847);
    nirf_obc.push_back(52); 
    col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(8659);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(17053);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Textile engineering");
    clos_obc.push_back(22346);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(7507);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Instrumentation and Control engineering");
    clos_obc.push_back(18016);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Industrial and Production engineering");
    clos_obc.push_back(21292);
    nirf_obc.push_back(52);
     }
    { col_obc.push_back("NIT Surat");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(17749);
    nirf_obc.push_back(58);
    col_obc.push_back("NIT Surat");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(18301);
    nirf_obc.push_back(58);
    col_obc.push_back("NIT Surat");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(4564);
    nirf_obc.push_back(58);
    col_obc.push_back("NIT Surat");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(11582);
    nirf_obc.push_back(58);
    col_obc.push_back("NIT Surat");
    br_obc.push_back("Electricons and Communication engineering");
    clos_obc.push_back(7776);
    nirf_obc.push_back(58);
    col_obc.push_back("NIT Surat");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(16282);
    nirf_obc.push_back(58);
    }
     { col_obc.push_back("NIT Meghalaya");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(22726);
    nirf_obc.push_back(60);
     col_obc.push_back("NIT Meghalaya");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(8297);
    nirf_obc.push_back(60);
     col_obc.push_back("NIT Meghalaya");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(13870);
    nirf_obc.push_back(60);
     col_obc.push_back("NIT Meghalaya");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(20529);
    nirf_obc.push_back(60);
     col_obc.push_back("NIT Meghalaya");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(19017);
    nirf_obc.push_back(60);
     }
    { col_obc.push_back("NIT Patna");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(20766);
    nirf_obc.push_back(63); 
    col_obc.push_back("NIT Patna");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(7796);
    nirf_obc.push_back(63);
    col_obc.push_back("NIT Patna");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(13992);
    nirf_obc.push_back(63);
    col_obc.push_back("NIT Patna");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(10585);
    nirf_obc.push_back(63);
    col_obc.push_back("NIT Patna");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(18570);
    nirf_obc.push_back(63); 
    }
    { col_obc.push_back("NIT Raipur");
    br_obc.push_back("Bio Technology");
    clos_obc.push_back(21339);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(17459);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(19119);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(5997);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(13528);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(9084);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(17655);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(22138);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Mining engineering");
    clos_obc.push_back(22728);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(7458);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Bio Medical engineering");
    clos_obc.push_back(21620);
    nirf_obc.push_back(65);
    }
   {  col_obc.push_back("NIT Srinagar");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(23369);
    nirf_obc.push_back(66);
    col_obc.push_back("NIT Srinagar");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(24159);
    nirf_obc.push_back(66);
    col_obc.push_back("NIT Srinagar");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(10790);
    nirf_obc.push_back(66);
    col_obc.push_back("NIT Srinagar");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(20520);
    nirf_obc.push_back(66);
    col_obc.push_back("NIT Srinagar");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(14698);
    nirf_obc.push_back(66);
col_obc.push_back("NIT Srinagar");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(23466);
    nirf_obc.push_back(66);
    col_obc.push_back("NIT Srinagar");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(24409);
    nirf_obc.push_back(66); 
    col_obc.push_back("NIT Srinagar");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(13359);
    nirf_obc.push_back(66);
      }
     { col_obc.push_back("NIT Bhopal");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(18990);
    nirf_obc.push_back(70);
     col_obc.push_back("NIT Bhopal");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(17698);
    nirf_obc.push_back(70);
     col_obc.push_back("NIT Bhopal");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(5062);
    nirf_obc.push_back(70);
     col_obc.push_back("NIT Bhopal");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(12068);
    nirf_obc.push_back(70);
     col_obc.push_back("NIT Bhopal");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(8117);
    nirf_obc.push_back(70);
     col_obc.push_back("NIT Bhopal");
    br_obc.push_back("Mehcanical engineering");
    clos_obc.push_back(21356);
    nirf_obc.push_back(70);
     }
    { col_obc.push_back("NIT Agartala");
    br_obc.push_back("Biotechnology and Biochemical engineering");
    clos_obc.push_back(22719);
    nirf_obc.push_back(80);
     col_obc.push_back("NIT Agartala");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(22473);
    nirf_obc.push_back(80);
     col_obc.push_back("NIT Agartala");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(21313);
    nirf_obc.push_back(80);
     col_obc.push_back("NIT Agartala");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(11527);
    nirf_obc.push_back(80);
     col_obc.push_back("NIT Agartala");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(19280);
    nirf_obc.push_back(80);
     col_obc.push_back("NIT Agartala");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(11485);
    nirf_obc.push_back(80);
     col_obc.push_back("NIT Agartala");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(21755);
    nirf_obc.push_back(80);
     col_obc.push_back("NIT Agartala");
    br_obc.push_back("Production engineering");
    clos_obc.push_back(24497);
    nirf_obc.push_back(80);
     col_obc.push_back("NIT Agartala");
    br_obc.push_back("Electronics and Instrumentation engineering");
    clos_obc.push_back(22740);
    nirf_obc.push_back(80);

    }
     {  col_obc.push_back("NIT Goa");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(19041);
    nirf_obc.push_back(88);
    col_obc.push_back("NIT Goa");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(6658);
    nirf_obc.push_back(88);
    col_obc.push_back("NIT Goa");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(10593);
    nirf_obc.push_back(88);
    col_obc.push_back("NIT Goa");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(16381);
    nirf_obc.push_back(88);
    col_obc.push_back("NIT Goa");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(12355);
    nirf_obc.push_back(88);
     }
    { col_obc.push_back("NIT Jamshedpur");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(18714);
    nirf_obc.push_back(90);
     col_obc.push_back("NIT Jamshedpur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(5839);
    nirf_obc.push_back(90);
     col_obc.push_back("NIT Jamshedpur");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(12784);
    nirf_obc.push_back(90);
     col_obc.push_back("NIT Jamshedpur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(8261);
    nirf_obc.push_back(90);
     col_obc.push_back("NIT Jamshedpur");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(16483);
    nirf_obc.push_back(90);
     col_obc.push_back("NIT Jamshedpur");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(21819);
    nirf_obc.push_back(90);
     col_obc.push_back("NIT Jamshedpur");
    br_obc.push_back("Production and Industrial engineering");
    clos_obc.push_back(18481);
    nirf_obc.push_back(90);
     col_obc.push_back("NIT Jamshedpur");
    br_obc.push_back("Engineering and Computational Mechanics");
    clos_obc.push_back(10983);
    nirf_obc.push_back(90);

    }
     { col_obc.push_back("NIT Manipur");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(23065);
    nirf_obc.push_back(108);
      col_obc.push_back("NIT Manipur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(14469);
    nirf_obc.push_back(108);
      col_obc.push_back("NIT Manipur");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(17714);
    nirf_obc.push_back(108);
      col_obc.push_back("NIT Manipur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(15435);
    nirf_obc.push_back(108);
      col_obc.push_back("NIT Manipur");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(22201);
    nirf_obc.push_back(108);
    
         }
    {  col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(20490);
    nirf_obc.push_back(128);
    col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(21171);
    nirf_obc.push_back(128);col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(7588);
    nirf_obc.push_back(128);
    col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(14002);
    nirf_obc.push_back(128);
    col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(10371);
    nirf_obc.push_back(128);
    col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Engineering Physics");
    clos_obc.push_back(15538);
    nirf_obc.push_back(128);
    col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Materials Science and engineering");
    clos_obc.push_back(15450);
    nirf_obc.push_back(128);
    col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Mathematics and Computing");
    clos_obc.push_back(10973);
    nirf_obc.push_back(128);
    col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(19178);
    nirf_obc.push_back(128);
    }
    {  col_obc.push_back("NIT Uttarakhand");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(14996);
    nirf_obc.push_back(131);
    col_obc.push_back("NIT Uttarakhand");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(9194);
    nirf_obc.push_back(131);
    col_obc.push_back("NIT Uttarakhand");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(12214);
    nirf_obc.push_back(131);
    col_obc.push_back("NIT Uttarakhand");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(18452);
    nirf_obc.push_back(131);
    col_obc.push_back("NIT Uttarakhand");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(4781);
    nirf_obc.push_back(131);
    }
    { col_obc.push_back("NIT Puducherry");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(20129);
    nirf_obc.push_back(136);
     col_obc.push_back("NIT Puducherry");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(5881);
    nirf_obc.push_back(136);
     col_obc.push_back("NIT Puducherry");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(9991);
    nirf_obc.push_back(136);
     col_obc.push_back("NIT Puducherry");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(19257);
    nirf_obc.push_back(136);
     col_obc.push_back("NIT Puducherry");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(12393);
    nirf_obc.push_back(136);
    }
     {col_obc.push_back("NIT Arunanchal");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(21379);
    nirf_obc.push_back(171);
     col_obc.push_back("NIT Arunanchal");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(15090);
    nirf_obc.push_back(171);
     col_obc.push_back("NIT Arunanchal");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(17680);
    nirf_obc.push_back(171);
     col_obc.push_back("NIT Arunanchal");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(16253);
    nirf_obc.push_back(171);
     col_obc.push_back("NIT Arunanchal");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(23313);
    nirf_obc.push_back(171);

     }
   {col_obc.push_back("NIT Sikkim");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(23548);
    nirf_obc.push_back(173);
    col_obc.push_back("NIT Sikkim");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(13591);
    nirf_obc.push_back(173);
    col_obc.push_back("NIT Sikkim");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(19537);
    nirf_obc.push_back(173);
    col_obc.push_back("NIT Sikkim");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(17203);
    nirf_obc.push_back(173);
    col_obc.push_back("NIT Sikkim");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(15307);
    nirf_obc.push_back(173);

   }
    {col_obc.push_back("NIT Delhi");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(11319);
    nirf_obc.push_back(194); 
    col_obc.push_back("NIT Delhi");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(5837);
    nirf_obc.push_back(194); 
    col_obc.push_back("NIT Delhi");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(11161);
    nirf_obc.push_back(194); 
    col_obc.push_back("NIT Delhi");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(9371);
    nirf_obc.push_back(194); 
    col_obc.push_back("NIT Delhi");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(16568);
    nirf_obc.push_back(194); 

    }
    {col_obc.push_back("NIT Andhra");
    br_obc.push_back("Bio Technology");
    clos_obc.push_back(19572);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Andhra");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(17155);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Andhra");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(18343);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Andhra");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(7940);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Andhra");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(20395);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Andhra");
    br_obc.push_back("Electronics and Communication engineering");
    clos_obc.push_back(14286);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Andhra");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(11852);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Andhra");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(20033);
    nirf_obc.push_back(1000); 
     
    }
     { col_obc.push_back("NIT Nagaland");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(23252);
    nirf_obc.push_back(1000);
     col_obc.push_back("NIT Nagaland");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(15820);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Nagaland");
    br_obc.push_back("Electronics and Communication engineering");
    clos_obc.push_back(16864);
    nirf_obc.push_back(1000);  
     col_obc.push_back("NIT Nagaland");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(22382);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Nagaland");
    br_obc.push_back("Electronics and Instrumentation engineering");
    clos_obc.push_back(21538);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Nagaland");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(20641);
    nirf_obc.push_back(1000); 
     
     }
     { col_obc.push_back("NIT Mizoram");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(24326);
    nirf_obc.push_back(1000); 
    col_obc.push_back("NIT Mizoram");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(13987);
    nirf_obc.push_back(1000); 
    col_obc.push_back("NIT Mizoram");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(16922);
    nirf_obc.push_back(1000); 
    col_obc.push_back("NIT Mizoram");
    br_obc.push_back("Electronics and Communication engineering");
    clos_obc.push_back(17324);
    nirf_obc.push_back(1000); 
    col_obc.push_back("NIT Mizoram");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(21886);
    nirf_obc.push_back(1000); 
     }
    {col_obc.push_back("IIIT GWALIOR");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(5482);
    nirf_obc.push_back(78); 
     
    }
    {  col_obc.push_back("IIIT Jabalpur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(8173);
    nirf_obc.push_back(82); 
    
       col_obc.push_back("IIIT Jabalpur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(12202);
    nirf_obc.push_back(82); 
    
       col_obc.push_back("IIIT Jabalpur");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(19961);
    nirf_obc.push_back(82); 
    
       col_obc.push_back("IIIT Jabalpur");
    br_obc.push_back("Smart Manufacturing");
    clos_obc.push_back(22951);
    nirf_obc.push_back(82); 
    
    }
    { col_obc.push_back("IIIT Allahabad");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(6997);
    nirf_obc.push_back(93); 
     col_obc.push_back("IIIT Allahabad");
    br_obc.push_back("Electronic and Communication(FAP) engineering");
    clos_obc.push_back(7167);
    nirf_obc.push_back(93); 
     col_obc.push_back("IIIT Allahabad");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(4532);
    nirf_obc.push_back(93); 
     col_obc.push_back("IIIT Allahabad");
    br_obc.push_back("Information Technology(FAP)");
    clos_obc.push_back(4553);
    nirf_obc.push_back(93); 
     col_obc.push_back("IIIT Allahabad");
    br_obc.push_back("Information Technology(Business Informatics)");
    clos_obc.push_back(4900);
    nirf_obc.push_back(93); 
    }
   { col_obc.push_back("IIIT Kancheepuram");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(8374);
    nirf_obc.push_back(184); 
    col_obc.push_back("IIIT Kancheepuram");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(13142);
    nirf_obc.push_back(184); 
    col_obc.push_back("IIIT Kancheepuram");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(19363);
    nirf_obc.push_back(184); 
    col_obc.push_back("IIIT Kancheepuram");
    br_obc.push_back("Computer Science(AI) and engineering");
    clos_obc.push_back(8900);
    nirf_obc.push_back(184); 
    col_obc.push_back("IIIT Kancheepuram");
    br_obc.push_back("Smart Manufacturing");
    clos_obc.push_back(19577);
    nirf_obc.push_back(184); 
   }
    {col_obc.push_back("IIIT Guwahati");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(12056);
    nirf_obc.push_back(1000); 
    col_obc.push_back("IIIT Guwahati");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(14493);
    nirf_obc.push_back(1000); 
    }
    {col_obc.push_back("IIIT Kurnool");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(13683);
    nirf_obc.push_back(1000); 
    col_obc.push_back("IIIT Kurnool");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(17095);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Kurnool");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(20576);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Kurnool");
    br_obc.push_back("Artificial Intelligence");
    clos_obc.push_back(14796);
    nirf_obc.push_back(1000);
    }
    {  col_obc.push_back("IIIT Kottayam");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(13844);
    nirf_obc.push_back(1000);
     col_obc.push_back("IIIT Kottayam");
    br_obc.push_back("Computer Science(AI) and engineering");
    clos_obc.push_back(13799);
    nirf_obc.push_back(1000);
     col_obc.push_back("IIIT Kottayam");
    br_obc.push_back("Computer Science(CYBER SECURITY) and engineering");
    clos_obc.push_back(14284);
    nirf_obc.push_back(1000);
     col_obc.push_back("IIIT Kottayam");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(14849);
    nirf_obc.push_back(1000);
    
    }
    { col_obc.push_back("IIIT Lucknow");
    br_obc.push_back("Computer Science and Business");
    clos_obc.push_back(7264);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Lucknow");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(6637);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Lucknow");
    br_obc.push_back("Computer Science(AI) and engineering");
    clos_obc.push_back(6506);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Lucknow");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(7467);
    nirf_obc.push_back(1000);
    }
     { col_obc.push_back("IIIT Kota");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(7528);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT kota");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(10300);
    nirf_obc.push_back(1000);
     }
    { col_obc.push_back("IIIT Kalyani");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(12809);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Kalyani");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(14351);
    nirf_obc.push_back(1000);
    }
    { col_obc.push_back("IIIT Sonepat");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(7996);
    nirf_obc.push_back(1000);
     col_obc.push_back("IIIT Sonepat");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(8919);
    nirf_obc.push_back(1000);
    }
    {  col_obc.push_back("IIIT Una");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(9587);
    nirf_obc.push_back(1000);
       col_obc.push_back("IIIT Una");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(13287);
    nirf_obc.push_back(1000);
       col_obc.push_back("IIIT Una");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(11045);
    nirf_obc.push_back(1000);
    }
    { col_obc.push_back("IIIT Sri city");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(10178);
    nirf_obc.push_back(1000);
       col_obc.push_back("IIIT Sri city");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(13127);
    nirf_obc.push_back(1000);
    }
     {   col_obc.push_back("IIIT Vadodara");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(10517);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Vadodara");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(11618);
    nirf_obc.push_back(1000);
     }
   { col_obc.push_back("IIIT Manipur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(19554);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Manipur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(21667);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Manipur");
    br_obc.push_back("Computer Science(AI) and engineering");
    clos_obc.push_back(14940);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Manipur");
    br_obc.push_back("Electronic and Communication(embedded systems)");
    clos_obc.push_back(16398);
    nirf_obc.push_back(1000);
   }
    { col_obc.push_back("IIIT Tiruchirappalli");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(13644);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Tiruchirappalli");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(16302);
    nirf_obc.push_back(1000);
    }
    { col_obc.push_back("IIIT Dharwad");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(12152);
    nirf_obc.push_back(1000);
     col_obc.push_back("IIIT Dharwad");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(13580);
    nirf_obc.push_back(1000);
     col_obc.push_back("IIIT Dharwad");
    br_obc.push_back("Data Science and Artificial Intelligence");
    clos_obc.push_back(12925);
    nirf_obc.push_back(1000);
    }
    {col_obc.push_back("IIIT Ranchi");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(11381);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Ranchi");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(13914);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Ranchi");
    br_obc.push_back("Computer Science(AI) and engineering");
    clos_obc.push_back(11260);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Ranchi");
    br_obc.push_back("Electronic and Communication(embedded systems)");
    clos_obc.push_back(13842);
    nirf_obc.push_back(1000);
    }
     { col_obc.push_back("IIIT Nagpur");
    br_obc.push_back("Computer Science(AI) and engineering");
    clos_obc.push_back(9918);
    nirf_obc.push_back(1000);
      col_obc.push_back("IIIT Nagpur");
    br_obc.push_back("Computer Science(Data Science) and engineering");
    clos_obc.push_back(10276);
    nirf_obc.push_back(1000);
      col_obc.push_back("IIIT Nagpur");
    br_obc.push_back("Computer Science(Gaming) and engineering");
    clos_obc.push_back(10821);
    nirf_obc.push_back(1000);
      col_obc.push_back("IIIT Nagpur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(9240);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Nagpur");
    br_obc.push_back("Electronic and Communication(IOT) engineering");
    clos_obc.push_back(13156);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Nagpur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(12771);
    nirf_obc.push_back(1000);
     }
     { col_obc.push_back("IIIT Pune");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(10230);
    nirf_obc.push_back(1000);
     col_obc.push_back("IIIT Pune");
    br_obc.push_back("Electrical and Communication engineering");
    clos_obc.push_back(13166);
    nirf_obc.push_back(1000);
     }
    { col_obc.push_back("IIIT Bhagalpur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(14973);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Bhagalpur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(16558);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Bhagalpur");
    br_obc.push_back("Mechatronics engineering");
    clos_obc.push_back(15585);
    nirf_obc.push_back(1000);
   
    }
    { col_obc.push_back("IIIT Bhopal");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(8280);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Bhopal");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(12745);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Bhopal");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(9770);
    nirf_obc.push_back(1000);
    }
    {col_obc.push_back("IIIT Surat");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(12527);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Surat");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(14201);
    nirf_obc.push_back(1000);
    }
     { col_obc.push_back("IIIT Agartala");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(12288);
    nirf_obc.push_back(1000);
     }
     {col_obc.push_back("IIIT Raichur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(14073);
    nirf_obc.push_back(1000);
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
      
    func_obcF2(h,m,col_obc,br_obc,clos_obc,nirf_obc,obc_rank);
    func_obcF(m,col_obc,br_obc,clos_obc);

    break;
    case 2:
    
   
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Computer Science and engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Computer Science and engineering");
    break;
    case 3:
     
    
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Electronic and Communication engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Electronic and Communication engineering");
    break;
    
    
    break;
    case 4:
     
    // func_obcF2(h,m,col_obc,br_obc,clos_obc,nirf_obc,obc_rank);

    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Mechanical engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Mechanical engineering");
    break;
    case 5:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Bio Technology",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Bio Technology");
    break;
    case 6:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Chemical engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Chemical engineering");
    break;
    case 7:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Civil engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Civil engineering");
    break;
    case 8:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Electrical engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Electrical engineering");
    break;
    case 9:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Metallurgical and Materials engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Metallurgical and Materials engineering");
    break;
    case 10:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Mining engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Mining engineering");
    break;
    case 11:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Information Technology",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Information Technology");
    break;
    case 12:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Bio Medical engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Bio Medical engineering");
    break;
    
    case 13:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Computational and Data Science engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Computational and Data Science engineering");
    break;
    
    case 14:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Electrical and Electronics engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Electrical and Electronics engineering");
    break;
    
    case 15:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Artificial Intelligence",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Artificial Intelligence");
    break;
    
    case 16:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Engineering Physics",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Engineering Physics");
    break;
    
    case 17:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Materials Science and engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Materials Science and engineering");
    break;
    
    case 18:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Production engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Production engineering");
    break;
    
    case 19:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Instrumentation and Control engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Instrumentation and Control engineering");
    break;
    
    case 20:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Ceramic engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Ceramic engineering");
    break;
    
    case 21:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Electronics and Instrumentation engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Electronics and Instrumentation engineering");
    break;
    
    case 22:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Industrial Design engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Industrial Design engineering");
    break;
    
    case 23:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Food Process engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Food Process engineering");
    break;
    
    case 24:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Production and Industrial engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Production and Industrial engineering");
    break;
    
    case 25:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Textile engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Textile engineering");
    break;
    
    case 26:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Industrial and Production engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Industrial and Production engineering");
    break;
    
    case 27:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Biotechnology and Biochemical engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Biotechnology and Biochemical engineering");
    break;
    
    case 28:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Engineering and Computational Mechanics",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Engineering and Computational Mechanics");
    break;
    
    case 29:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Mathematics and Computing",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Mathematics and Computing");
    break;
    
    case 30:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Smart Manufacturing",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Smart Manufacturing");
    break;
    
    case 31:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Electronic and Communication(FAP) engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Electronic and Communication(FAP) engineering");
    break;
    
    case 32:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Information Technology(FAP)",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Information Technology(FAP)");
    break;
    
    case 33:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Information Technology(Business Informatics)",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Information Technology(Business Informatics)");
    break;
    
    case 34:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Computer Science(AI) and engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Computer Science(AI) and engineering");
    break;
    
    case 35:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Electronic and Communication(embedded systems)",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Electronic and Communication(embedded systems)");
    break;
    
    case 36:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Data Science and Artificial Intelligence",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Data Science and Artificial Intelligence");
    break;
    
    case 37:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Computer Science(Gaming) and engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Computer Science(Gaming) and engineering");
    break;
    
    case 38:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Computer Science(Data Science) and engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Computer Science(Data Science) and engineering");
    break;

    case 39:
    func_obcF3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Mechatronics engineering",obc_rank);
    func_obcF1(m,col_obc,br_obc,clos_obc,"Mechatronics engineering");
    break;
    }
}