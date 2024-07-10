#include<bits/stdc++.h>
using namespace std;
// multimap<int,int>m;
int lenewsF(int f){
  int i=0;
  for(;f>0;i++){
    f/=10;
  }
  return i;
}
void func_ewsF( multimap<int,int>m,vector<string>col_ews,vector<string>br_ews,vector<int>clos_ews){
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
        cout<<col_ews[i];int col_size=20-col_ews[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_ews[i];
            int br_size=55-br_ews[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_ews[i];
            int nirf_size=10-lenewsF(clos_ews[i]);
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
void func_ewsF2( multimap<int,int>&h,multimap<int,int>&m,vector<string>col_ews,vector<string>br_ews,vector<int>clos_ews,vector<int>nirf_ews,int ews_rank){
    int serial=1;
for(int i=0;i<col_ews.size();i++){
    h.insert({clos_ews[i],i});
    }
    for(auto it:h){
        auto i=it.second;
        if(clos_ews[i]>ews_rank){
          m.insert({nirf_ews[i],i});
        //   m.first=nirf_ews;
        //   m.second=i;
        cout<<serial<<".";
            cout<<col_ews[i];int col_size=20-col_ews[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_ews[i];
            int br_size=55-br_ews[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_ews[i]<<endl;
            serial++;
        }
    }
}
void func_ewsF3(multimap<int,int>&h,multimap<int,int>&m,vector<string>col_ews,vector<string>br_ews,vector<int>clos_ews,vector<int>nirf_ews,string s,int ews_rank){
    int serial=1;
for(int i=0;i<col_ews.size();i++){
    h.insert({clos_ews[i],i});
}
for(auto it:h){
  auto i=it.second;
  if(br_ews[i]==s){
        if(clos_ews[i]>ews_rank){
          m.insert({nirf_ews[i],i});
        //   m.first=nirf_ews;
        //   m.second=i;
        cout<<serial<<".";
            cout<<col_ews[i];int col_size=20-col_ews[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_ews[i];
            int br_size=55-br_ews[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_ews[i]<<endl;
            serial++;
        }
    }
}
}
void func_ewsF1(multimap<int,int>m,vector<string>col_ews,vector<string>br_ews,vector<int>clos_ews,string s){
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
    if(br_ews[i]==s){
    cout<<serial<<".";
        
        cout<<col_ews[i];int col_size=20-col_ews[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_ews[i];
            int br_size=55-br_ews[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_ews[i];
            int nirf_size=10-lenewsF(clos_ews[i]);
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
void ewsF(){
    cout<<"enter your ews_rank"<<endl;
    int ews_rank;cin>>ews_rank;
      vector<string>col_ews;vector<string>br_ews;vector<int>clos_ews;vector<int>nirf_ews;
   {
 { col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(356);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Electronic and Communication engineering");  
    clos_ews.push_back(963);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(4137);
    nirf_ews.push_back(10);
     col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(2424);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(5221);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Computational and Data Science engineering");
    clos_ews.push_back(450);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(3878);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Mining engineering");
    clos_ews.push_back(5432);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(1794);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(605);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Artificial Intelligence");
    clos_ews.push_back(430);
    nirf_ews.push_back(10);
   }
   { col_ews.push_back("NIT WARANGAL");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(420);
    nirf_ews.push_back(21);
    col_ews.push_back("NIT WARANGAL");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(1035);
    nirf_ews.push_back(21);
    col_ews.push_back("NIT WARANGAL");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(4737);
    nirf_ews.push_back(21);
    col_ews.push_back("NIT WARANGAL");
    br_ews.push_back("Bio Technology");
    clos_ews.push_back(7115);
    nirf_ews.push_back(21);
     col_ews.push_back("NIT WARANGAL");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(5005);
    nirf_ews.push_back(21);
     col_ews.push_back("NIT WARANGAL");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(5594);
    nirf_ews.push_back(21);
     col_ews.push_back("NIT WARANGAL");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(5529);
    nirf_ews.push_back(21);
     col_ews.push_back("NIT WARANGAL");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(2073);
    nirf_ews.push_back(21);
   }
   {col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(776);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(1549);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(5680);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Bio Technology");
    clos_ews.push_back(8527);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(5993);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(6614);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Engineering Physics");
    clos_ews.push_back(3998);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Materials Science and engineering");
    clos_ews.push_back(5678);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(3100);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Production engineering");
    clos_ews.push_back(8251);
    nirf_ews.push_back(31);
   }
   {col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(3326);
    nirf_ews.push_back(8);
    col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(5379);
    nirf_ews.push_back(8);
    col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(250);
    nirf_ews.push_back(8);
    col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(930);
    nirf_ews.push_back(8);
    col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(3940);
    nirf_ews.push_back(8);
    col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(7110);
    nirf_ews.push_back(8);
    col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(1647);
    nirf_ews.push_back(8);
    col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Production engineering");
    clos_ews.push_back(5062);
    nirf_ews.push_back(8);
    col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Instrumentation and Control engineering");
    clos_ews.push_back(3561);
    nirf_ews.push_back(8);
    }
   { col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Bio Technology");
    clos_ews.push_back(8609);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Ceramic engineering");
    clos_ews.push_back(8609);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(4714);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(5924);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(539);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(2724);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(4784);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(7306);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Mining engineering");
    clos_ews.push_back(8338);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Electronics and Instrumentation engineering");
    clos_ews.push_back(3082);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Bio Medical engineering");
    clos_ews.push_back(6543);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Industrial Design engineering");
    clos_ews.push_back(5786);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Food Process engineering");
    clos_ews.push_back(7121);
    nirf_ews.push_back(15);
   }   
    {col_ews.push_back("NIT Nagpur");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(6611);
    nirf_ews.push_back(32);
    col_ews.push_back("NIT Nagpur");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(7322);
    nirf_ews.push_back(32);
    col_ews.push_back("NIT Nagpur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(1203);
    nirf_ews.push_back(32);
    col_ews.push_back("NIT Nagpur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(1661);
    nirf_ews.push_back(32);
    col_ews.push_back("NIT Nagpur");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(5671);
    nirf_ews.push_back(32);
    col_ews.push_back("NIT Nagpur");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(8180);
    nirf_ews.push_back(32);
    col_ews.push_back("NIT Nagpur");
    br_ews.push_back("Mining engineering");
    clos_ews.push_back(7023);
    nirf_ews.push_back(32);
    col_ews.push_back("NIT Nagpur");
    br_ews.push_back("Electrical and Electronic engineering");
    clos_ews.push_back(3338);
    nirf_ews.push_back(32);
    }
    { col_ews.push_back("NIT Durgapur");
    br_ews.push_back("Bio Technology");
    clos_ews.push_back(8984);
    nirf_ews.push_back(34);
    col_ews.push_back("NIT Durgapur");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(7069);
    nirf_ews.push_back(34);
    col_ews.push_back("NIT Durgapur");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(7605);
    nirf_ews.push_back(34);
    col_ews.push_back("NIT Durgapur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(1730);
    nirf_ews.push_back(34);
    col_ews.push_back("NIT Durgapur");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(4285);
    nirf_ews.push_back(34);
    col_ews.push_back("NIT Durgapur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(2603);
    nirf_ews.push_back(34);
    col_ews.push_back("NIT Durgapur");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(8769);
    nirf_ews.push_back(34);
    col_ews.push_back("NIT Durgapur");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(6910);
    nirf_ews.push_back(34);
    }
     { col_ews.push_back("NIT Silchar");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(8835);
    nirf_ews.push_back(38);
    col_ews.push_back("NIT Silchar");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(2254);
    nirf_ews.push_back(38);
    col_ews.push_back("NIT Silchar");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(5812);
    nirf_ews.push_back(38);
    col_ews.push_back("NIT Silchar");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(3928);
    nirf_ews.push_back(38);
    col_ews.push_back("NIT Silchar");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(7483);
    nirf_ews.push_back(38);
    col_ews.push_back("NIT Silchar");
    br_ews.push_back("Electronics and Instrumentation engineering");
    clos_ews.push_back(5504);
    nirf_ews.push_back(38);
     }
    {  col_ews.push_back("NIT Jaipur");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(5556);
    nirf_ews.push_back(46);
     col_ews.push_back("NIT Jaipur");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(7845);
    nirf_ews.push_back(46);
     col_ews.push_back("NIT Jaipur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(1371);
    nirf_ews.push_back(46);
     col_ews.push_back("NIT Jaipur");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(3208);
    nirf_ews.push_back(46);
     col_ews.push_back("NIT Jaipur");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(5391);
    nirf_ews.push_back(46);
     col_ews.push_back("NIT Jaipur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(2209);
    nirf_ews.push_back(46);
     col_ews.push_back("NIT Jaipur");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(8264);
    nirf_ews.push_back(46);

    }
      {col_ews.push_back("NIT Allahabad");
    br_ews.push_back("Bio Technology");
    clos_ews.push_back(9053);
    nirf_ews.push_back(47);
      col_ews.push_back("NIT Allahabad");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(5388);
    nirf_ews.push_back(47);
      col_ews.push_back("NIT Allahabad");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(6025);
    nirf_ews.push_back(47);
      col_ews.push_back("NIT Allahabad");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(1223);
    nirf_ews.push_back(47);
      col_ews.push_back("NIT Allahabad");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(4037);
    nirf_ews.push_back(47);
      col_ews.push_back("NIT Allahabad");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(2171);
    nirf_ews.push_back(47);
      col_ews.push_back("NIT Allahabad");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(5531);
    nirf_ews.push_back(47);
      col_ews.push_back("NIT Allahabad");
    br_ews.push_back("Production and Industrial engineering");
    clos_ews.push_back(7664);
    nirf_ews.push_back(47);
      }
      {col_ews.push_back("NIT Kurukshetra");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(7406);
    nirf_ews.push_back(50);
     col_ews.push_back("NIT Kurukshetra");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(3987);
    nirf_ews.push_back(50);
     col_ews.push_back("NIT Kurukshetra");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(3266);
    nirf_ews.push_back(50);
     col_ews.push_back("NIT Kurukshetra");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(7238);
    nirf_ews.push_back(50);
     col_ews.push_back("NIT Kurukshetra");
    br_ews.push_back("Production and Industrial engineering");
    clos_ews.push_back(7301);
    nirf_ews.push_back(50);
     col_ews.push_back("NIT Kurukshetra");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(2285);
    nirf_ews.push_back(50);
     col_ews.push_back("NIT Kurukshetra");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(1821);
    nirf_ews.push_back(50);
      }   
     { col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Bio Technology");
    clos_ews.push_back(9205);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(7556);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(8634);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(2411);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(4523);
    nirf_ews.push_back(52); col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(3495);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(7202);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Textile engineering");
    clos_ews.push_back(9634);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(2481);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Instrumentation and Control engineering");
    clos_ews.push_back(6843);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Industrial and Production engineering");
    clos_ews.push_back(8765);
    nirf_ews.push_back(52);
     }
    { col_ews.push_back("NIT Surat");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(6358);
    nirf_ews.push_back(58);
    col_ews.push_back("NIT Surat");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(7951);
    nirf_ews.push_back(58);
    col_ews.push_back("NIT Surat");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(1444);
    nirf_ews.push_back(58);
    col_ews.push_back("NIT Surat");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(3971);
    nirf_ews.push_back(58);
    col_ews.push_back("NIT Surat");
    br_ews.push_back("Electricons and Communication engineering");
    clos_ews.push_back(3147);
    nirf_ews.push_back(58);
    col_ews.push_back("NIT Surat");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(7357);
    nirf_ews.push_back(58);
    }
     { col_ews.push_back("NIT Meghalaya");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(9843);
    nirf_ews.push_back(60);
     col_ews.push_back("NIT Meghalaya");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3589);
    nirf_ews.push_back(60);
     col_ews.push_back("NIT Meghalaya");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(7011);
    nirf_ews.push_back(60);
     col_ews.push_back("NIT Meghalaya");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(6179);
    nirf_ews.push_back(60);
     col_ews.push_back("NIT Meghalaya");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(6752);
    nirf_ews.push_back(60);
     }
    { col_ews.push_back("NIT Patna");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(8892);
    nirf_ews.push_back(63); 
    col_ews.push_back("NIT Patna");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3170);
    nirf_ews.push_back(63);
    col_ews.push_back("NIT Patna");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(5697);
    nirf_ews.push_back(63);
    col_ews.push_back("NIT Patna");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(4336);
    nirf_ews.push_back(63);
    col_ews.push_back("NIT Patna");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(7396);
    nirf_ews.push_back(63); 
    }
    { col_ews.push_back("NIT Raipur");
    br_ews.push_back("Bio Technology");
    clos_ews.push_back(7995);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(7429);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(8655);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(2226);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(5543);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(3624);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(7564);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(8951);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Mining engineering");
    clos_ews.push_back(9111);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(3134);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Bio Medical engineering");
    clos_ews.push_back(9476);
    nirf_ews.push_back(65);
    }
   {  col_ews.push_back("NIT Srinagar");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(9902);
    nirf_ews.push_back(66);
    col_ews.push_back("NIT Srinagar");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(9975);
    nirf_ews.push_back(66);
    col_ews.push_back("NIT Srinagar");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(4924);
    nirf_ews.push_back(66);
    col_ews.push_back("NIT Srinagar");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(8553);
    nirf_ews.push_back(66);
    col_ews.push_back("NIT Srinagar");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(6460);
    nirf_ews.push_back(66);
col_ews.push_back("NIT Srinagar");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(9325);
    nirf_ews.push_back(66);
    col_ews.push_back("NIT Srinagar");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(10045);
    nirf_ews.push_back(66); 
    col_ews.push_back("NIT Srinagar");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(5802);
    nirf_ews.push_back(66);
      }
     { col_ews.push_back("NIT Bhopal");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(6154);
    nirf_ews.push_back(70);
     col_ews.push_back("NIT Bhopal");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(7987);
    nirf_ews.push_back(70);
     col_ews.push_back("NIT Bhopal");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(2184);
    nirf_ews.push_back(70);
     col_ews.push_back("NIT Bhopal");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(4388);
    nirf_ews.push_back(70);
     col_ews.push_back("NIT Bhopal");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(3528);
    nirf_ews.push_back(70);
     col_ews.push_back("NIT Bhopal");
    br_ews.push_back("Mehcanical engineering");
    clos_ews.push_back(7444);
    nirf_ews.push_back(70);
     }
    { col_ews.push_back("NIT Agartala");
    br_ews.push_back("Biotechnology and Biochemical engineering");
    clos_ews.push_back(9879);
    nirf_ews.push_back(80);
     col_ews.push_back("NIT Agartala");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(8246);
    nirf_ews.push_back(80);
     col_ews.push_back("NIT Agartala");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(9488);
    nirf_ews.push_back(80);
     col_ews.push_back("NIT Agartala");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(5009);
    nirf_ews.push_back(80);
     col_ews.push_back("NIT Agartala");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(7420);
    nirf_ews.push_back(80);
     col_ews.push_back("NIT Agartala");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(5700);
    nirf_ews.push_back(80);
     col_ews.push_back("NIT Agartala");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(8970);
    nirf_ews.push_back(80);
     col_ews.push_back("NIT Agartala");
    br_ews.push_back("Production engineering");
    clos_ews.push_back(9679);
    nirf_ews.push_back(80);
     col_ews.push_back("NIT Agartala");
    br_ews.push_back("Electronics and Instrumentation engineering");
    clos_ews.push_back(7264);
    nirf_ews.push_back(80);

    }
     {  col_ews.push_back("NIT Goa");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(8734);
    nirf_ews.push_back(88);
    col_ews.push_back("NIT Goa");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(2311);
    nirf_ews.push_back(88);
    col_ews.push_back("NIT Goa");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(3910);
    nirf_ews.push_back(88);
    col_ews.push_back("NIT Goa");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(5631);
    nirf_ews.push_back(88);
    col_ews.push_back("NIT Goa");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(5901);
    nirf_ews.push_back(88);
     }
    { col_ews.push_back("NIT Jamshedpur");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(8098);
    nirf_ews.push_back(90);
     col_ews.push_back("NIT Jamshedpur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(1842);
    nirf_ews.push_back(90);
     col_ews.push_back("NIT Jamshedpur");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(4614);
    nirf_ews.push_back(90);
     col_ews.push_back("NIT Jamshedpur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(3150);
    nirf_ews.push_back(90);
     col_ews.push_back("NIT Jamshedpur");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(6892);
    nirf_ews.push_back(90);
     col_ews.push_back("NIT Jamshedpur");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(8976);
    nirf_ews.push_back(90);
     col_ews.push_back("NIT Jamshedpur");
    br_ews.push_back("Production and Industrial engineering");
    clos_ews.push_back(8230);
    nirf_ews.push_back(90);
     col_ews.push_back("NIT Jamshedpur");
    br_ews.push_back("Engineering and Computational Mechanics");
    clos_ews.push_back(4356);
    nirf_ews.push_back(90);

    }
     { col_ews.push_back("NIT Manipur");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(10032);
    nirf_ews.push_back(108);
      col_ews.push_back("NIT Manipur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(6122);
    nirf_ews.push_back(108);
      col_ews.push_back("NIT Manipur");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(9657);
    nirf_ews.push_back(108);
      col_ews.push_back("NIT Manipur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(9843);
    nirf_ews.push_back(108);
      col_ews.push_back("NIT Manipur");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(12323);
    nirf_ews.push_back(108);
    
         }
    {  col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(7127);
    nirf_ews.push_back(128);
    col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(8623);
    nirf_ews.push_back(128);col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(2651);
    nirf_ews.push_back(128);
    col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(5045);
    nirf_ews.push_back(128);
    col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(3988);
    nirf_ews.push_back(128);
    col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Engineering Physics");
    clos_ews.push_back(8084);
    nirf_ews.push_back(128);
    col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Materials Science and engineering");
    clos_ews.push_back(8806);
    nirf_ews.push_back(128);
    col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Mathematics and Computing");
    clos_ews.push_back(5678);
    nirf_ews.push_back(128);
    col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(7355);
    nirf_ews.push_back(128);
    }
    {  col_ews.push_back("NIT Uttarakhand");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(8865);
    nirf_ews.push_back(131);
    col_ews.push_back("NIT Uttarakhand");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(4097);
    nirf_ews.push_back(131);
    col_ews.push_back("NIT Uttarakhand");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(7795);
    nirf_ews.push_back(131);
    col_ews.push_back("NIT Uttarakhand");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(13464);
    nirf_ews.push_back(131);
    col_ews.push_back("NIT Uttarakhand");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(5640);
    nirf_ews.push_back(131);
    }
    { col_ews.push_back("NIT Puducherry");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(9453);
    nirf_ews.push_back(136);
     col_ews.push_back("NIT Puducherry");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3811);
    nirf_ews.push_back(136);
     col_ews.push_back("NIT Puducherry");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(4858);
    nirf_ews.push_back(136);
     col_ews.push_back("NIT Puducherry");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(8978);
    nirf_ews.push_back(136);
     col_ews.push_back("NIT Puducherry");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(6545);
    nirf_ews.push_back(136);
    }
     {col_ews.push_back("NIT Arunanchal");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(9533);
    nirf_ews.push_back(171);
     col_ews.push_back("NIT Arunanchal");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(5583);
    nirf_ews.push_back(171);
     col_ews.push_back("NIT Arunanchal");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(7692);
    nirf_ews.push_back(171);
     col_ews.push_back("NIT Arunanchal");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(7492);
    nirf_ews.push_back(171);
     col_ews.push_back("NIT Arunanchal");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(10023);
    nirf_ews.push_back(171);

     }
   {col_ews.push_back("NIT Sikkim");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(8653);
    nirf_ews.push_back(173);
    col_ews.push_back("NIT Sikkim");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3451);
    nirf_ews.push_back(173);
    col_ews.push_back("NIT Sikkim");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(6789);
    nirf_ews.push_back(173);
    col_ews.push_back("NIT Sikkim");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(5644);
    nirf_ews.push_back(173);
    col_ews.push_back("NIT Sikkim");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(9807);
    nirf_ews.push_back(173);

   }
    {col_ews.push_back("NIT Delhi");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(11319);
    nirf_ews.push_back(194); 
    col_ews.push_back("NIT Delhi");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(1729);
    nirf_ews.push_back(194); 
    col_ews.push_back("NIT Delhi");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(4830);
    nirf_ews.push_back(194); 
    col_ews.push_back("NIT Delhi");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(2238);
    nirf_ews.push_back(194); 
    col_ews.push_back("NIT Delhi");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(6574);
    nirf_ews.push_back(194); 

    }
    {col_ews.push_back("NIT Andhra");
    br_ews.push_back("Bio Technology");
    clos_ews.push_back(10002);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Andhra");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(8769);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Andhra");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(9498);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Andhra");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3531);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Andhra");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(6540);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Andhra");
    br_ews.push_back("Electronics and Communication engineering");
    clos_ews.push_back(4350);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Andhra");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(8487);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Andhra");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(7660);
    nirf_ews.push_back(1000); 
     
    }
     { col_ews.push_back("NIT Nagaland");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(8539);
    nirf_ews.push_back(1000);
     col_ews.push_back("NIT Nagaland");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(4708);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Nagaland");
    br_ews.push_back("Electronics and Communication engineering");
    clos_ews.push_back(6250);
    nirf_ews.push_back(1000);  
     col_ews.push_back("NIT Nagaland");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(8216);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Nagaland");
    br_ews.push_back("Electronics and Instrumentation engineering");
    clos_ews.push_back(7547);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Nagaland");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(7724);
    nirf_ews.push_back(1000); 
     
     }
     { col_ews.push_back("NIT Mizoram");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(10271);
    nirf_ews.push_back(1000); 
    col_ews.push_back("NIT Mizoram");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(6194);
    nirf_ews.push_back(1000); 
    col_ews.push_back("NIT Mizoram");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(8759);
    nirf_ews.push_back(1000); 
    col_ews.push_back("NIT Mizoram");
    br_ews.push_back("Electronics and Communication engineering");
    clos_ews.push_back(7663);
    nirf_ews.push_back(1000); 
    col_ews.push_back("NIT Mizoram");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(9412);
    nirf_ews.push_back(1000); 
     }
    {col_ews.push_back("IIIT GWALIOR");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(2065);
    nirf_ews.push_back(78); 
     
    }
    {  col_ews.push_back("IIIT Jabalpur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3240);
    nirf_ews.push_back(82); 
    
       col_ews.push_back("IIIT Jabalpur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(4976);
    nirf_ews.push_back(82); 
    
       col_ews.push_back("IIIT Jabalpur");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(8007);
    nirf_ews.push_back(82); 
    
       col_ews.push_back("IIIT Jabalpur");
    br_ews.push_back("Smart Manufacturing");
    clos_ews.push_back(8548);
    nirf_ews.push_back(82); 
    
    }
    { col_ews.push_back("IIIT Allahabad");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(2872);
    nirf_ews.push_back(93); 
     col_ews.push_back("IIIT Allahabad");
    br_ews.push_back("Electronic and Communication(FAP) engineering");
    clos_ews.push_back(2416);
    nirf_ews.push_back(93); 
     col_ews.push_back("IIIT Allahabad");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(1813);
    nirf_ews.push_back(93); 
     col_ews.push_back("IIIT Allahabad");
    br_ews.push_back("Information Technology(FAP)");
    clos_ews.push_back(1813);
    nirf_ews.push_back(93); 
     col_ews.push_back("IIIT Allahabad");
    br_ews.push_back("Information Technology(Business Informatics)");
    clos_ews.push_back(1869);
    nirf_ews.push_back(93); 
    }
   { col_ews.push_back("IIIT Kancheepuram");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3725);
    nirf_ews.push_back(184); 
    col_ews.push_back("IIIT Kancheepuram");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(5711);
    nirf_ews.push_back(184); 
    col_ews.push_back("IIIT Kancheepuram");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(8579);
    nirf_ews.push_back(184); 
    col_ews.push_back("IIIT Kancheepuram");
    br_ews.push_back("Computer Science(AI) and engineering");
    clos_ews.push_back(3829);
    nirf_ews.push_back(184); 
    col_ews.push_back("IIIT Kancheepuram");
    br_ews.push_back("Smart Manufacturing");
    clos_ews.push_back(9461);
    nirf_ews.push_back(184); 
   }
    {col_ews.push_back("IIIT Guwahati");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(4652);
    nirf_ews.push_back(1000); 
    col_ews.push_back("IIIT Guwahati");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(4501);
    nirf_ews.push_back(1000); 
    }
    {col_ews.push_back("IIIT Kurnool");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(6621);
    nirf_ews.push_back(1000); 
    col_ews.push_back("IIIT Kurnool");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(6855);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Kurnool");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(9578);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Kurnool");
    br_ews.push_back("Artificial Intelligence");
    clos_ews.push_back(5804);
    nirf_ews.push_back(1000);
    }
    {  col_ews.push_back("IIIT Kottayam");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(5495);
    nirf_ews.push_back(1000);
     col_ews.push_back("IIIT Kottayam");
    br_ews.push_back("Computer Science(AI) and engineering");
    clos_ews.push_back(6593);
    nirf_ews.push_back(1000);
     col_ews.push_back("IIIT Kottayam");
    br_ews.push_back("Computer Science(CYBER SECURITY) and engineering");
    clos_ews.push_back(6792);
    nirf_ews.push_back(1000);
     col_ews.push_back("IIIT Kottayam");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(6736);
    nirf_ews.push_back(1000);
    
    }
    { col_ews.push_back("IIIT Lucknow");
    br_ews.push_back("Computer Science and Business");
    clos_ews.push_back(3211);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Lucknow");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(2124);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Lucknow");
    br_ews.push_back("Computer Science(AI) and engineering");
    clos_ews.push_back(1900);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Lucknow");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(2621);
    nirf_ews.push_back(1000);
    }
     { col_ews.push_back("IIIT Kota");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3299);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT kota");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(4362);
    nirf_ews.push_back(1000);
     }
    { col_ews.push_back("IIIT Kalyani");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(5565);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Kalyani");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(6418);
    nirf_ews.push_back(1000);
    }
    { col_ews.push_back("IIIT Sonepat");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3156);
    nirf_ews.push_back(1000);
     col_ews.push_back("IIIT Sonepat");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(3489);
    nirf_ews.push_back(1000);
    }
    {  col_ews.push_back("IIIT Una");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(4290);
    nirf_ews.push_back(1000);
       col_ews.push_back("IIIT Una");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(5667);
    nirf_ews.push_back(1000);
       col_ews.push_back("IIIT Una");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(4613);
    nirf_ews.push_back(1000);
    }
    { col_ews.push_back("IIIT Sri city");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(4360);
    nirf_ews.push_back(1000);
       col_ews.push_back("IIIT Sri city");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(5757);
    nirf_ews.push_back(1000);
    }
     {   col_ews.push_back("IIIT Vadodara");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(4192);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Vadodara");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(4527);
    nirf_ews.push_back(1000);
     }
   { col_ews.push_back("IIIT Manipur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(6752);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Manipur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(8927);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Manipur");
    br_ews.push_back("Computer Science(AI) and engineering");
    clos_ews.push_back(6564);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Manipur");
    br_ews.push_back("Electronic and Communication(embedded systems)");
    clos_ews.push_back(9237);
    nirf_ews.push_back(1000);
   }
    { col_ews.push_back("IIIT Tiruchirappalli");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(5370);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Tiruchirappalli");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(6691);
    nirf_ews.push_back(1000);
    }
    { col_ews.push_back("IIIT Dharwad");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(6542);
    nirf_ews.push_back(1000);
     col_ews.push_back("IIIT Dharwad");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(7123);
    nirf_ews.push_back(1000);
     col_ews.push_back("IIIT Dharwad");
    br_ews.push_back("Data Science and Artificial Intelligence");
    clos_ews.push_back(6754);
    nirf_ews.push_back(1000);
    }
    {col_ews.push_back("IIIT Ranchi");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(5084);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Ranchi");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(6114);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Ranchi");
    br_ews.push_back("Computer Science(AI) and engineering");
    clos_ews.push_back(5084);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Ranchi");
    br_ews.push_back("Electronic and Communication(embedded systems)");
    clos_ews.push_back(7234);
    nirf_ews.push_back(1000);
    }
     { col_ews.push_back("IIIT Nagpur");
    br_ews.push_back("Computer Science(AI) and engineering");
    clos_ews.push_back(5355);
    nirf_ews.push_back(1000);
      col_ews.push_back("IIIT Nagpur");
    br_ews.push_back("Computer Science(Data Science) and engineering");
    clos_ews.push_back(4563);
    nirf_ews.push_back(1000);
      col_ews.push_back("IIIT Nagpur");
    br_ews.push_back("Computer Science(Gaming) and engineering");
    clos_ews.push_back(6434);
    nirf_ews.push_back(1000);
      col_ews.push_back("IIIT Nagpur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(4078);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Nagpur");
    br_ews.push_back("Electronic and Communication(IOT) engineering");
    clos_ews.push_back(6543);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Nagpur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(6387);
    nirf_ews.push_back(1000);
     }
     { col_ews.push_back("IIIT Pune");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(4001);
    nirf_ews.push_back(1000);
     col_ews.push_back("IIIT Pune");
    br_ews.push_back("Electrical and Communication engineering");
    clos_ews.push_back(4607);
    nirf_ews.push_back(1000);
     }
    { col_ews.push_back("IIIT Bhagalpur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(6636);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Bhagalpur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(7060);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Bhagalpur");
    br_ews.push_back("Mechatronics engineering");
    clos_ews.push_back(8790);
    nirf_ews.push_back(1000);
   
    }
    { col_ews.push_back("IIIT Bhopal");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(4562);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Bhopal");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(5643);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Bhopal");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(5489);
    nirf_ews.push_back(1000);
    }
    {col_ews.push_back("IIIT Surat");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(4414);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Surat");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(5990);
    nirf_ews.push_back(1000);
    }
     { col_ews.push_back("IIIT Agartala");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(6213);
    nirf_ews.push_back(1000);
     }
     {col_ews.push_back("IIIT Raichur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(5749);
    nirf_ews.push_back(1000);
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
      
    func_ewsF2(h,m,col_ews,br_ews,clos_ews,nirf_ews,ews_rank);
    func_ewsF(m,col_ews,br_ews,clos_ews);

    break;
    case 2:
    
   
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Computer Science and engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Computer Science and engineering");
    break;
    case 3:
     
    
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Electronic and Communication engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Electronic and Communication engineering");
    break;
    
    
    break;
    case 4:
     
    // func_ewsF2(h,m,col_ews,br_ews,clos_ews,nirf_ews,ews_rank);

    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Mechanical engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Mechanical engineering");
    break;
    case 5:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Bio Technology",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Bio Technology");
    break;
    case 6:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Chemical engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Chemical engineering");
    break;
    case 7:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Civil engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Civil engineering");
    break;
    case 8:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Electrical engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Electrical engineering");
    break;
    case 9:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Metallurgical and Materials engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Metallurgical and Materials engineering");
    break;
    case 10:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Mining engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Mining engineering");
    break;
    case 11:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Information Technology",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Information Technology");
    break;
    case 12:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Bio Medical engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Bio Medical engineering");
    break;
    
    case 13:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Computational and Data Science engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Computational and Data Science engineering");
    break;
    
    case 14:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Electrical and Electronics engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Electrical and Electronics engineering");
    break;
    
    case 15:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Artificial Intelligence",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Artificial Intelligence");
    break;
    
    case 16:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Engineering Physics",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Engineering Physics");
    break;
    
    case 17:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Materials Science and engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Materials Science and engineering");
    break;
    
    case 18:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Production engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Production engineering");
    break;
    
    case 19:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Instrumentation and Control engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Instrumentation and Control engineering");
    break;
    
    case 20:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Ceramic engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Ceramic engineering");
    break;
    
    case 21:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Electronics and Instrumentation engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Electronics and Instrumentation engineering");
    break;
    
    case 22:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Industrial Design engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Industrial Design engineering");
    break;
    
    case 23:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Food Process engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Food Process engineering");
    break;
    
    case 24:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Production and Industrial engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Production and Industrial engineering");
    break;
    
    case 25:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Textile engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Textile engineering");
    break;
    
    case 26:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Industrial and Production engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Industrial and Production engineering");
    break;
    
    case 27:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Biotechnology and Biochemical engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Biotechnology and Biochemical engineering");
    break;
    
    case 28:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Engineering and Computational Mechanics",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Engineering and Computational Mechanics");
    break;
    
    case 29:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Mathematics and Computing",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Mathematics and Computing");
    break;
    
    case 30:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Smart Manufacturing",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Smart Manufacturing");
    break;
    
    case 31:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Electronic and Communication(FAP) engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Electronic and Communication(FAP) engineering");
    break;
    
    case 32:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Information Technology(FAP)",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Information Technology(FAP)");
    break;
    
    case 33:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Information Technology(Business Informatics)",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Information Technology(Business Informatics)");
    break;
    
    case 34:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Computer Science(AI) and engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Computer Science(AI) and engineering");
    break;
    
    case 35:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Electronic and Communication(embedded systems)",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Electronic and Communication(embedded systems)");
    break;
    
    case 36:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Data Science and Artificial Intelligence",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Data Science and Artificial Intelligence");
    break;
    
    case 37:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Computer Science(Gaming) and engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Computer Science(Gaming) and engineering");
    break;
    
    case 38:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Computer Science(Data Science) and engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Computer Science(Data Science) and engineering");
    break;

    case 39:
    func_ewsF3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Mechatronics engineering",ews_rank);
    func_ewsF1(m,col_ews,br_ews,clos_ews,"Mechatronics engineering");
    break;
    }
}