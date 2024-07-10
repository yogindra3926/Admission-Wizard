#include<bits/stdc++.h>
using namespace std;
// multimap<int,int>m;
int lenopenF(int f){
  int i=0;
  for(;f>0;i++){
    f/=10;
  }
  return i;
}
void func_openF( multimap<int,int>m,vector<string>col_open,vector<string>br_open,vector<int>clos_open){
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
        cout<<col_open[i];int col_size=20-col_open[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_open[i];
            int br_size=55-br_open[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_open[i];
            int nirf_size=10-lenopenF(clos_open[i]);
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
void func_openF2( multimap<int,int>&h,multimap<int,int>&m,vector<string>col_open,vector<string>br_open,vector<int>clos_open,vector<int>nirf_open,int open_rank){
    int serial=1;
for(int i=0;i<col_open.size();i++){
    h.insert({clos_open[i],i});
    }
    for(auto it:h){
        auto i=it.second;
        if(clos_open[i]>open_rank){
          m.insert({nirf_open[i],i});
        //   m.first=nirf_open;
        //   m.second=i;
        cout<<serial<<".";
            cout<<col_open[i];int col_size=20-col_open[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_open[i];
            int br_size=55-br_open[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_open[i]<<endl;
            serial++;
        }
    }
}
void func_openF3(multimap<int,int>&h,multimap<int,int>&m,vector<string>col_open,vector<string>br_open,vector<int>clos_open,vector<int>nirf_open,string s,int open_rank){
    int serial=1;
for(int i=0;i<col_open.size();i++){
    h.insert({clos_open[i],i});
}
for(auto it:h){
  auto i=it.second;
  if(br_open[i]==s){
        if(clos_open[i]>open_rank){
          m.insert({nirf_open[i],i});
        //   m.first=nirf_open;
        //   m.second=i;
        cout<<serial<<".";
            cout<<col_open[i];int col_size=20-col_open[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_open[i];
            int br_size=55-br_open[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_open[i]<<endl;
            serial++;
        }
    }
}
}
void func_openF1(multimap<int,int>m,vector<string>col_open,vector<string>br_open,vector<int>clos_open,string s){
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
    if(br_open[i]==s){
    cout<<serial<<".";
        
        cout<<col_open[i];int col_size=20-col_open[i].size();
            while(col_size--){
            cout<<" ";}
            if(serial<10){cout<<"  ";}
            else if(serial<100){cout<<" ";}
            cout<<br_open[i];
            int br_size=55-br_open[i].size();
            while(br_size--){
            cout<<" ";}
            cout<<clos_open[i];
            int nirf_size=10-lenopenF(clos_open[i]);
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
void openF(){
    cout<<"enter your open_rank"<<endl;
    int open_rank;cin>>open_rank;
      vector<string>col_open;vector<string>br_open;vector<int>clos_open;vector<int>nirf_open;
      {
 { col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(2641);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Electronic and Communication engineering");  
    clos_open.push_back(6966);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(23709);
    nirf_open.push_back(10);
     col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(26628);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Civil engineering");
    clos_open.push_back(35523);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Computational and Data Science engineering");
    clos_open.push_back(5011);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(37160);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Mining engineering");
    clos_open.push_back(42823);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(10445);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Information Technology");
    clos_open.push_back(4367);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Artificial Intelligence");
    clos_open.push_back(4993);
    nirf_open.push_back(10);
   }
   { col_open.push_back("NIT WARANGAL");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(3016);
    nirf_open.push_back(21);
    col_open.push_back("NIT WARANGAL");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(7931);
    nirf_open.push_back(21);
    col_open.push_back("NIT WARANGAL");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(25909);
    nirf_open.push_back(21);
    col_open.push_back("NIT WARANGAL");
    br_open.push_back("Bio Technology");
    clos_open.push_back(21138);
    nirf_open.push_back(21);
     col_open.push_back("NIT WARANGAL");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(25048);
    nirf_open.push_back(21);
     col_open.push_back("NIT WARANGAL");
    br_open.push_back("Civil engineering");
    clos_open.push_back(37045);
    nirf_open.push_back(21);
     col_open.push_back("NIT WARANGAL");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(35745);
    nirf_open.push_back(21);
     col_open.push_back("NIT WARANGAL");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(15139);
    nirf_open.push_back(21);
   }
   {col_open.push_back("NIT CALICUT");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(5568);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(11578);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(33078);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Bio Technology");
    clos_open.push_back(33641);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(40305);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Civil engineering");
    clos_open.push_back(44754);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Engineering Physics");
    clos_open.push_back(31347);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Materials Science and engineering");
    clos_open.push_back(39140);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(20796);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Production engineering");
    clos_open.push_back(45484);
    nirf_open.push_back(31);
   }
   {col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(22433);
    nirf_open.push_back(8);
    col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Civil engineering");
    clos_open.push_back(29693);
    nirf_open.push_back(8);
    col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(1852);
    nirf_open.push_back(8);
    col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(5151);
    nirf_open.push_back(8);
    col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(21310);
    nirf_open.push_back(8);
    col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(34969);
    nirf_open.push_back(8);
    col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(8324);
    nirf_open.push_back(8);
    col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Production engineering");
    clos_open.push_back(34211);
    nirf_open.push_back(8);
    col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Instrumentation and Control engineering");
    clos_open.push_back(18467);
    nirf_open.push_back(8);
    }
   { col_open.push_back("NIT Rourkela");
    br_open.push_back("Bio Technology");
    clos_open.push_back(43082);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Ceramic engineering");
    clos_open.push_back(50572);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(26674);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Civil engineering");
    clos_open.push_back(37470);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(4429);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(19312);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(24080);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(43517);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Mining engineering");
    clos_open.push_back(53916);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Electronics and Instrumentation engineering");
    clos_open.push_back(16886);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Bio Medical engineering");
    clos_open.push_back(42872);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Industrial Design engineering");
    clos_open.push_back(39778);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Food Process engineering");
    clos_open.push_back(58225);
    nirf_open.push_back(15);
   }   
    {col_open.push_back("NIT Nagpur");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(41873);
    nirf_open.push_back(32);
    col_open.push_back("NIT Nagpur");
    br_open.push_back("Civil engineering");
    clos_open.push_back(48559);
    nirf_open.push_back(32);
    col_open.push_back("NIT Nagpur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(7427);
    nirf_open.push_back(32);
    col_open.push_back("NIT Nagpur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(12214);
    nirf_open.push_back(32);
    col_open.push_back("NIT Nagpur");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(37372);
    nirf_open.push_back(32);
    col_open.push_back("NIT Nagpur");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(50100);
    nirf_open.push_back(32);
    col_open.push_back("NIT Nagpur");
    br_open.push_back("Mining engineering");
    clos_open.push_back(56173);
    nirf_open.push_back(32);
    col_open.push_back("NIT Nagpur");
    br_open.push_back("Electrical and Electronic engineering");
    clos_open.push_back(23077);
    nirf_open.push_back(32);
    }
    { col_open.push_back("NIT Durgapur");
    br_open.push_back("Bio Technology");
    clos_open.push_back(44404);
    nirf_open.push_back(34);
    col_open.push_back("NIT Durgapur");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(41068);
    nirf_open.push_back(34);
    col_open.push_back("NIT Durgapur");
    br_open.push_back("Civil engineering");
    clos_open.push_back(46680);
    nirf_open.push_back(34);
    col_open.push_back("NIT Durgapur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(11683);
    nirf_open.push_back(34);
    col_open.push_back("NIT Durgapur");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(28340);
    nirf_open.push_back(34);
    col_open.push_back("NIT Durgapur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(16975);
    nirf_open.push_back(34);
    col_open.push_back("NIT Durgapur");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(51650);
    nirf_open.push_back(34);
    col_open.push_back("NIT Durgapur");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(44080);
    nirf_open.push_back(34);
    }
     { col_open.push_back("NIT Silchar");
    br_open.push_back("Civil engineering");
    clos_open.push_back(55508);
    nirf_open.push_back(38);
    col_open.push_back("NIT Silchar");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(15217);
    nirf_open.push_back(38);
    col_open.push_back("NIT Silchar");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(39179);
    nirf_open.push_back(38);
    col_open.push_back("NIT Silchar");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(24172);
    nirf_open.push_back(38);
    col_open.push_back("NIT Silchar");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(45036);
    nirf_open.push_back(38);
    col_open.push_back("NIT Silchar");
    br_open.push_back("Electronics and Instrumentation engineering");
    clos_open.push_back(30898);
    nirf_open.push_back(38);
     }
    {  col_open.push_back("NIT Jaipur");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(31364);
    nirf_open.push_back(46);
     col_open.push_back("NIT Jaipur");
    br_open.push_back("Civil engineering");
    clos_open.push_back(47829);
    nirf_open.push_back(46);
     col_open.push_back("NIT Jaipur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(6099);
    nirf_open.push_back(46);
     col_open.push_back("NIT Jaipur");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(20183);
    nirf_open.push_back(46);
     col_open.push_back("NIT Jaipur");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(34957);
    nirf_open.push_back(46);
     col_open.push_back("NIT Jaipur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(13954);
    nirf_open.push_back(46);
     col_open.push_back("NIT Jaipur");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(46000);
    nirf_open.push_back(46);

    }
      {col_open.push_back("NIT Allahabad");
    br_open.push_back("Bio Technology");
    clos_open.push_back(37193);
    nirf_open.push_back(47);
      col_open.push_back("NIT Allahabad");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(31680);
    nirf_open.push_back(47);
      col_open.push_back("NIT Allahabad");
    br_open.push_back("Civil engineering");
    clos_open.push_back(39384);
    nirf_open.push_back(47);
      col_open.push_back("NIT Allahabad");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(6591);
    nirf_open.push_back(47);
      col_open.push_back("NIT Allahabad");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(20279);
    nirf_open.push_back(47);
      col_open.push_back("NIT Allahabad");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(14170);
    nirf_open.push_back(47);
      col_open.push_back("NIT Allahabad");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(29749);
    nirf_open.push_back(47);
      col_open.push_back("NIT Allahabad");
    br_open.push_back("Production and Industrial engineering");
    clos_open.push_back(44602);
    nirf_open.push_back(47);
      }
      {col_open.push_back("NIT Kurukshetra");
    br_open.push_back("Civil engineering");
    clos_open.push_back(46163);
    nirf_open.push_back(50);
     col_open.push_back("NIT Kurukshetra");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(25542);
    nirf_open.push_back(50);
     col_open.push_back("NIT Kurukshetra");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(20991);
    nirf_open.push_back(50);
     col_open.push_back("NIT Kurukshetra");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(43404);
    nirf_open.push_back(50);
     col_open.push_back("NIT Kurukshetra");
    br_open.push_back("Production and Industrial engineering");
    clos_open.push_back(47459);
    nirf_open.push_back(50);
     col_open.push_back("NIT Kurukshetra");
    br_open.push_back("Information Technology");
    clos_open.push_back(12839);
    nirf_open.push_back(50);
     col_open.push_back("NIT Kurukshetra");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(9521);
    nirf_open.push_back(50);
      }   
     { col_open.push_back("NIT Jalandar");
    br_open.push_back("Bio Technology");
    clos_open.push_back(54373);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(44299);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Civil engineering");
    clos_open.push_back(51966);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(15859);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(29305);
    nirf_open.push_back(52); col_open.push_back("NIT Jalandar");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(22034);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(45828);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Textile engineering");
    clos_open.push_back(63338);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Information Technology");
    clos_open.push_back(17610);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Instrumentation and Control engineering");
    clos_open.push_back(43125);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Industrial and Production engineering");
    clos_open.push_back(58505);
    nirf_open.push_back(52);
     }
    { col_open.push_back("NIT Surat");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(40130);
    nirf_open.push_back(58);
    col_open.push_back("NIT Surat");
    br_open.push_back("Civil engineering");
    clos_open.push_back(49328);
    nirf_open.push_back(58);
    col_open.push_back("NIT Surat");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(9290);
    nirf_open.push_back(58);
    col_open.push_back("NIT Surat");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(26850);
    nirf_open.push_back(58);
    col_open.push_back("NIT Surat");
    br_open.push_back("Electricons and Communication engineering");
    clos_open.push_back(18334);
    nirf_open.push_back(58);
    col_open.push_back("NIT Surat");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(44575);
    nirf_open.push_back(58);
    }
     { col_open.push_back("NIT Meghalaya");
    br_open.push_back("Civil engineering");
    clos_open.push_back(64076);
    nirf_open.push_back(60);
     col_open.push_back("NIT Meghalaya");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(23932);
    nirf_open.push_back(60);
     col_open.push_back("NIT Meghalaya");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(38391);
    nirf_open.push_back(60);
     col_open.push_back("NIT Meghalaya");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(346970);
    nirf_open.push_back(60);
     col_open.push_back("NIT Meghalaya");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(40374);
    nirf_open.push_back(60);
     }
    { col_open.push_back("NIT Patna");
    br_open.push_back("Civil engineering");
    clos_open.push_back(58792);
    nirf_open.push_back(63); 
    col_open.push_back("NIT Patna");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(20286);
    nirf_open.push_back(63);
    col_open.push_back("NIT Patna");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(37390);
    nirf_open.push_back(63);
    col_open.push_back("NIT Patna");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(26337);
    nirf_open.push_back(63);
    col_open.push_back("NIT Patna");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(48214);
    nirf_open.push_back(63); 
    }
    { col_open.push_back("NIT Raipur");
    br_open.push_back("Bio Technology");
    clos_open.push_back(58857);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(46728);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Civil engineering");
    clos_open.push_back(57996);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(15153);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(36151);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(24879);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(48000);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(57290);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Mining engineering");
    clos_open.push_back(61983);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Information Technology");
    clos_open.push_back(19573);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Bio Medical engineering");
    clos_open.push_back(60304);
    nirf_open.push_back(65);
    }
   {  col_open.push_back("NIT Srinagar");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(59665);
    nirf_open.push_back(66);
    col_open.push_back("NIT Srinagar");
    br_open.push_back("Civil engineering");
    clos_open.push_back(67801);
    nirf_open.push_back(66);
    col_open.push_back("NIT Srinagar");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(30960);
    nirf_open.push_back(66);
    col_open.push_back("NIT Srinagar");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(51536);
    nirf_open.push_back(66);
    col_open.push_back("NIT Srinagar");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(42286);
    nirf_open.push_back(66);
col_open.push_back("NIT Srinagar");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(63701);
    nirf_open.push_back(66);
    col_open.push_back("NIT Srinagar");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(68612);
    nirf_open.push_back(66); 
    col_open.push_back("NIT Srinagar");
    br_open.push_back("Information Technology");
    clos_open.push_back(36330);
    nirf_open.push_back(66);
      }
     { col_open.push_back("NIT Bhopal");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(39787);
    nirf_open.push_back(70);
     col_open.push_back("NIT Bhopal");
    br_open.push_back("Civil engineering");
    clos_open.push_back(52354);
    nirf_open.push_back(70);
     col_open.push_back("NIT Bhopal");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(12918);
    nirf_open.push_back(70);
     col_open.push_back("NIT Bhopal");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(29944);
    nirf_open.push_back(70);
     col_open.push_back("NIT Bhopal");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(22566);
    nirf_open.push_back(70);
     col_open.push_back("NIT Bhopal");
    br_open.push_back("Mehcanical engineering");
    clos_open.push_back(44596);
    nirf_open.push_back(70);
     }
    { col_open.push_back("NIT Agartala");
    br_open.push_back("Biotechnology and Biochemical engineering");
    clos_open.push_back(63652);
    nirf_open.push_back(80);
     col_open.push_back("NIT Agartala");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(54896);
    nirf_open.push_back(80);
     col_open.push_back("NIT Agartala");
    br_open.push_back("Civil engineering");
    clos_open.push_back(62836);
    nirf_open.push_back(80);
     col_open.push_back("NIT Agartala");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(29701);
    nirf_open.push_back(80);
     col_open.push_back("NIT Agartala");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(48612);
    nirf_open.push_back(80);
     col_open.push_back("NIT Agartala");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(39163);
    nirf_open.push_back(80);
     col_open.push_back("NIT Agartala");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(58582);
    nirf_open.push_back(80);
     col_open.push_back("NIT Agartala");
    br_open.push_back("Production engineering");
    clos_open.push_back(63738);
    nirf_open.push_back(80);
     col_open.push_back("NIT Agartala");
    br_open.push_back("Electronics and Instrumentation engineering");
    clos_open.push_back(47445);
    nirf_open.push_back(80);
    
    }
     {  col_open.push_back("NIT Goa");
    br_open.push_back("Civil engineering");
    clos_open.push_back(55546);
    nirf_open.push_back(88);
    col_open.push_back("NIT Goa");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(14026);
    nirf_open.push_back(88);
    col_open.push_back("NIT Goa");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(17698);
    nirf_open.push_back(88);
    col_open.push_back("NIT Goa");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(45813);
    nirf_open.push_back(88);
    col_open.push_back("NIT Goa");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(32379);
    nirf_open.push_back(88);
     }
    { col_open.push_back("NIT Jamshedpur");
    br_open.push_back("Civil engineering");
    clos_open.push_back(53057);
    nirf_open.push_back(90);
     col_open.push_back("NIT Jamshedpur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(13590);
    nirf_open.push_back(90);
     col_open.push_back("NIT Jamshedpur");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(28470);
    nirf_open.push_back(90);
     col_open.push_back("NIT Jamshedpur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(22177);
    nirf_open.push_back(90);
     col_open.push_back("NIT Jamshedpur");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(45863);
    nirf_open.push_back(90);
     col_open.push_back("NIT Jamshedpur");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(51878);
    nirf_open.push_back(90);
     col_open.push_back("NIT Jamshedpur");
    br_open.push_back("Production and Industrial engineering");
    clos_open.push_back(52503);
    nirf_open.push_back(90);
     col_open.push_back("NIT Jamshedpur");
    br_open.push_back("Engineering and Computational Mechanics");
    clos_open.push_back(35138);
    nirf_open.push_back(90);

    }
     { col_open.push_back("NIT Manipur");
    br_open.push_back("Civil engineering");
    clos_open.push_back(68012);
    nirf_open.push_back(108);
      col_open.push_back("NIT Manipur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(36795);
    nirf_open.push_back(108);
      col_open.push_back("NIT Manipur");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(58599);
    nirf_open.push_back(108);
      col_open.push_back("NIT Manipur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(46650);
    nirf_open.push_back(108);
      col_open.push_back("NIT Manipur");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(59174);
    nirf_open.push_back(108);
    
         }
    {  col_open.push_back("NIT Hamirpur");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(46790);
    nirf_open.push_back(128);
    col_open.push_back("NIT Hamirpur");
    br_open.push_back("Civil engineering");
    clos_open.push_back(56786);
    nirf_open.push_back(128);col_open.push_back("NIT Hamirpur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(18915);
    nirf_open.push_back(128);
    col_open.push_back("NIT Hamirpur");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(34537);
    nirf_open.push_back(128);
    col_open.push_back("NIT Hamirpur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(25858);
    nirf_open.push_back(128);
    col_open.push_back("NIT Hamirpur");
    br_open.push_back("Engineering Physics");
    clos_open.push_back(46970);
    nirf_open.push_back(128);
    col_open.push_back("NIT Hamirpur");
    br_open.push_back("Materials Science and engineering");
    clos_open.push_back(54614);
    nirf_open.push_back(128);
    col_open.push_back("NIT Hamirpur");
    br_open.push_back("Mathematics and Computing");
    clos_open.push_back(23976);
    nirf_open.push_back(128);
    col_open.push_back("NIT Hamirpur");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(47877);
    nirf_open.push_back(128);
    }
    {  col_open.push_back("NIT Uttarakhand");
    br_open.push_back("Civil engineering");
    clos_open.push_back(57751);
    nirf_open.push_back(131);
    col_open.push_back("NIT Uttarakhand");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(19563);
    nirf_open.push_back(131);
    col_open.push_back("NIT Uttarakhand");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(35079);
    nirf_open.push_back(131);
    col_open.push_back("NIT Uttarakhand");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(53691);
    nirf_open.push_back(131);
    col_open.push_back("NIT Uttarakhand");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(39270);
    nirf_open.push_back(131);
    }
    { col_open.push_back("NIT Puducherry");
    br_open.push_back("Civil engineering");
    clos_open.push_back(51485);
    nirf_open.push_back(136);
     col_open.push_back("NIT Puducherry");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(19950);
    nirf_open.push_back(136);
     col_open.push_back("NIT Puducherry");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(28271);
    nirf_open.push_back(136);
     col_open.push_back("NIT Puducherry");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(47158);
    nirf_open.push_back(136);
     col_open.push_back("NIT Puducherry");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(37638);
    nirf_open.push_back(136);
    }
     {col_open.push_back("NIT Arunanchal");
    br_open.push_back("Civil engineering");
    clos_open.push_back(57639);
    nirf_open.push_back(171);
     col_open.push_back("NIT Arunanchal");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(33831);
    nirf_open.push_back(171);
     col_open.push_back("NIT Arunanchal");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(50377);
    nirf_open.push_back(171);
     col_open.push_back("NIT Arunanchal");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(46730);
    nirf_open.push_back(171);
     col_open.push_back("NIT Arunanchal");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(60055);
    nirf_open.push_back(171);

     }
   {col_open.push_back("NIT Sikkim");
    br_open.push_back("Civil engineering");
    clos_open.push_back(60435);
    nirf_open.push_back(173);
    col_open.push_back("NIT Sikkim");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(33161);
    nirf_open.push_back(173);
    col_open.push_back("NIT Sikkim");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(43453);
    nirf_open.push_back(173);
    col_open.push_back("NIT Sikkim");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(40321);
    nirf_open.push_back(173);
    col_open.push_back("NIT Sikkim");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(58990);
    nirf_open.push_back(173);

   }
    {col_open.push_back("NIT Delhi");
    br_open.push_back("Civil engineering");
    clos_open.push_back(38930);
    nirf_open.push_back(194); 
    col_open.push_back("NIT Delhi");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(12263);
    nirf_open.push_back(194); 
    col_open.push_back("NIT Delhi");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(24923);
    nirf_open.push_back(194); 
    col_open.push_back("NIT Delhi");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(22242);
    nirf_open.push_back(194); 
    col_open.push_back("NIT Delhi");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(37103);
    nirf_open.push_back(194); 

    }
    {col_open.push_back("NIT Andhra");
    br_open.push_back("Bio Technology");
    clos_open.push_back(54098);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Andhra");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(49130);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Andhra");
    br_open.push_back("Civil engineering");
    clos_open.push_back(58093);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Andhra");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(19474);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Andhra");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(40442);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Andhra");
    br_open.push_back("Electronics and Communication engineering");
    clos_open.push_back(30393);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Andhra");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(55275);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Andhra");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(57568);
    nirf_open.push_back(1000); 
     
    }
     { col_open.push_back("NIT Nagaland");
    br_open.push_back("Civil engineering");
    clos_open.push_back(68533);
    nirf_open.push_back(1000);
     col_open.push_back("NIT Nagaland");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(36813);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Nagaland");
    br_open.push_back("Electronics and Communication engineering");
    clos_open.push_back(48192);
    nirf_open.push_back(1000);  
     col_open.push_back("NIT Nagaland");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(65046);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Nagaland");
    br_open.push_back("Electronics and Instrumentation engineering");
    clos_open.push_back(49560);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Nagaland");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(54671);
    nirf_open.push_back(1000); 
     
     }
     { col_open.push_back("NIT Mizoram");
    br_open.push_back("Civil engineering");
    clos_open.push_back(69057);
    nirf_open.push_back(1000); 
    col_open.push_back("NIT Mizoram");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(36757);
    nirf_open.push_back(1000); 
    col_open.push_back("NIT Mizoram");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(53655);
    nirf_open.push_back(1000); 
    col_open.push_back("NIT Mizoram");
    br_open.push_back("Electronics and Communication engineering");
    clos_open.push_back(43962);
    nirf_open.push_back(1000); 
    col_open.push_back("NIT Mizoram");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(64220);
    nirf_open.push_back(1000); 
     }
    {col_open.push_back("IIIT GWALIOR");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(11773);
    nirf_open.push_back(78); 
     
    }
    {  col_open.push_back("IIIT Jabalpur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(20015);
    nirf_open.push_back(82); 
    
       col_open.push_back("IIIT Jabalpur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(27954);
    nirf_open.push_back(82); 
    
       col_open.push_back("IIIT Jabalpur");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(50859);
    nirf_open.push_back(82); 
    
       col_open.push_back("IIIT Jabalpur");
    br_open.push_back("Smart Manufacturing");
    clos_open.push_back(57923);
    nirf_open.push_back(82); 
    
    }
    { col_open.push_back("IIIT Allahabad");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(16845);
    nirf_open.push_back(93); 
     col_open.push_back("IIIT Allahabad");
    br_open.push_back("Electronic and Communication(FAP) engineering");
    clos_open.push_back(15072);
    nirf_open.push_back(93); 
     col_open.push_back("IIIT Allahabad");
    br_open.push_back("Information Technology");
    clos_open.push_back(9436);
    nirf_open.push_back(93); 
     col_open.push_back("IIIT Allahabad");
    br_open.push_back("Information Technology(FAP)");
    clos_open.push_back(9657);
    nirf_open.push_back(93); 
     col_open.push_back("IIIT Allahabad");
    br_open.push_back("Information Technology(Business Informatics)");
    clos_open.push_back(9882);
    nirf_open.push_back(93); 
    }
   { col_open.push_back("IIIT Kancheepuram");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(20657);
    nirf_open.push_back(184); 
    col_open.push_back("IIIT Kancheepuram");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(28439);
    nirf_open.push_back(184); 
    col_open.push_back("IIIT Kancheepuram");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(54748);
    nirf_open.push_back(184); 
    col_open.push_back("IIIT Kancheepuram");
    br_open.push_back("Computer Science(AI) and engineering");
    clos_open.push_back(22958);
    nirf_open.push_back(184); 
    col_open.push_back("IIIT Kancheepuram");
    br_open.push_back("Smart Manufacturing");
    clos_open.push_back(54961);
    nirf_open.push_back(184); 
   }
    {col_open.push_back("IIIT Guwahati");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(25525);
    nirf_open.push_back(1000); 
    col_open.push_back("IIIT Guwahati");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(31595);
    nirf_open.push_back(1000); 
    }
    {col_open.push_back("IIIT Kurnool");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(33427);
    nirf_open.push_back(1000); 
    col_open.push_back("IIIT Kurnool");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(41714);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Kurnool");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(55980);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Kurnool");
    br_open.push_back("Artificial Intelligence");
    clos_open.push_back(34430);
    nirf_open.push_back(1000);
    }
    {  col_open.push_back("IIIT Kottayam");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(36332);
    nirf_open.push_back(1000);
     col_open.push_back("IIIT Kottayam");
    br_open.push_back("Computer Science(AI) and engineering");
    clos_open.push_back(37695);
    nirf_open.push_back(1000);
     col_open.push_back("IIIT Kottayam");
    br_open.push_back("Computer Science(CYBER SECURITY) and engineering");
    clos_open.push_back(38170);
    nirf_open.push_back(1000);
     col_open.push_back("IIIT Kottayam");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(39282);
    nirf_open.push_back(1000);
    
    }
    { col_open.push_back("IIIT Lucknow");
    br_open.push_back("Computer Science and Business");
    clos_open.push_back(15121);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Lucknow");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(13295);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Lucknow");
    br_open.push_back("Computer Science(AI) and engineering");
    clos_open.push_back(13725);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Lucknow");
    br_open.push_back("Information Technology");
    clos_open.push_back(14538);
    nirf_open.push_back(1000);
    }
     { col_open.push_back("IIIT Kota");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(20518);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT kota");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(26914);
    nirf_open.push_back(1000);
     }
    { col_open.push_back("IIIT Kalyani");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(33997);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Kalyani");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(41134);
    nirf_open.push_back(1000);
    }
    { col_open.push_back("IIIT Sonepat");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(20072);
    nirf_open.push_back(1000);
     col_open.push_back("IIIT Sonepat");
    br_open.push_back("Information Technology");
    clos_open.push_back(21670);
    nirf_open.push_back(1000);
    }
    {  col_open.push_back("IIIT Una");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(26667);
    nirf_open.push_back(1000);
       col_open.push_back("IIIT Una");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(36676);
    nirf_open.push_back(1000);
       col_open.push_back("IIIT Una");
    br_open.push_back("Information Technology");
    clos_open.push_back(30394);
    nirf_open.push_back(1000);
    }
    { col_open.push_back("IIIT Sri city");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(26257);
    nirf_open.push_back(1000);
       col_open.push_back("IIIT Sri city");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(36279);
    nirf_open.push_back(1000);
    }
     {   col_open.push_back("IIIT Vadodara");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(25584);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Vadodara");
    br_open.push_back("Information Technology");
    clos_open.push_back(27553);
    nirf_open.push_back(1000);
     }
   { col_open.push_back("IIIT Manipur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(46086);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Manipur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(55551);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Manipur");
    br_open.push_back("Computer Science(AI) and engineering");
    clos_open.push_back(42875);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Manipur");
    br_open.push_back("Electronic and Communication(embedded systems)");
    clos_open.push_back(52341);
    nirf_open.push_back(1000);
   }
    { col_open.push_back("IIIT Tiruchirappalli");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(27125);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Tiruchirappalli");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(40304);
    nirf_open.push_back(1000);
    }
    { col_open.push_back("IIIT Dharwad");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(30859);
    nirf_open.push_back(1000);
     col_open.push_back("IIIT Dharwad");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(38533);
    nirf_open.push_back(1000);
     col_open.push_back("IIIT Dharwad");
    br_open.push_back("Data Science and Artificial Intelligence");
    clos_open.push_back(33873);
    nirf_open.push_back(1000);
    }
    {col_open.push_back("IIIT Ranchi");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(31879);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Ranchi");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(40022);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Ranchi");
    br_open.push_back("Computer Science(AI) and engineering");
    clos_open.push_back(30643);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Ranchi");
    br_open.push_back("Electronic and Communication(embedded systems)");
    clos_open.push_back(38035);
    nirf_open.push_back(1000);
    }
     { col_open.push_back("IIIT Nagpur");
    br_open.push_back("Computer Science(AI) and engineering");
    clos_open.push_back(25717);
    nirf_open.push_back(1000);
      col_open.push_back("IIIT Nagpur");
    br_open.push_back("Computer Science(Data Science) and engineering");
    clos_open.push_back(26806);
    nirf_open.push_back(1000);
      col_open.push_back("IIIT Nagpur");
    br_open.push_back("Computer Science(Gaming) and engineering");
    clos_open.push_back(27747);
    nirf_open.push_back(1000);
      col_open.push_back("IIIT Nagpur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(24793);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Nagpur");
    br_open.push_back("Electronic and Communication(IOT) engineering");
    clos_open.push_back(35885);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Nagpur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(35878);
    nirf_open.push_back(1000);
     }
     { col_open.push_back("IIIT Pune");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(21392);
    nirf_open.push_back(1000);
     col_open.push_back("IIIT Pune");
    br_open.push_back("Electrical and Communication engineering");
    clos_open.push_back(27728);
    nirf_open.push_back(1000);
     }
    { col_open.push_back("IIIT Bhagalpur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(38576);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Bhagalpur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(40803);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Bhagalpur");
    br_open.push_back("Mechatronics engineering");
    clos_open.push_back(53866);
    nirf_open.push_back(1000);
   
    }
    { col_open.push_back("IIIT Bhopal");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(23777);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Bhopal");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(33408);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Bhopal");
    br_open.push_back("Information Technology");
    clos_open.push_back(26757);
    nirf_open.push_back(1000);
    }
    {col_open.push_back("IIIT Surat");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(26490);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Surat");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(30146);
    nirf_open.push_back(1000);
    }
     { col_open.push_back("IIIT Agartala");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(33713);
    nirf_open.push_back(1000);
     }
     {col_open.push_back("IIIT Raichur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(32684);
    nirf_open.push_back(1000);
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
      
    func_openF2(h,m,col_open,br_open,clos_open,nirf_open,open_rank);
    func_openF(m,col_open,br_open,clos_open);

    break;
    case 2:
    
   
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Computer Science and engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Computer Science and engineering");
    break;
    case 3:
     
    
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Electronic and Communication engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Electronic and Communication engineering");
    break;
    
    
    break;
    case 4:
     
    // func_openF2(h,m,col_open,br_open,clos_open,nirf_open,open_rank);

    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Mechanical engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Mechanical engineering");
    break;
    case 5:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Bio Technology",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Bio Technology");
    break;
    case 6:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Chemical engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Chemical engineering");
    break;
    case 7:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Civil engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Civil engineering");
    break;
    case 8:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Electrical engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Electrical engineering");
    break;
    case 9:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Metallurgical and Materials engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Metallurgical and Materials engineering");
    break;
    case 10:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Mining engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Mining engineering");
    break;
    case 11:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Information Technology",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Information Technology");
    break;
    case 12:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Bio Medical engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Bio Medical engineering");
    break;
    
    case 13:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Computational and Data Science engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Computational and Data Science engineering");
    break;
    
    case 14:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Electrical and Electronics engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Electrical and Electronics engineering");
    break;
    
    case 15:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Artificial Intelligence",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Artificial Intelligence");
    break;
    
    case 16:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Engineering Physics",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Engineering Physics");
    break;
    
    case 17:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Materials Science and engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Materials Science and engineering");
    break;
    
    case 18:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Production engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Production engineering");
    break;
    
    case 19:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Instrumentation and Control engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Instrumentation and Control engineering");
    break;
    
    case 20:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Ceramic engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Ceramic engineering");
    break;
    
    case 21:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Electronics and Instrumentation engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Electronics and Instrumentation engineering");
    break;
    
    case 22:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Industrial Design engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Industrial Design engineering");
    break;
    
    case 23:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Food Process engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Food Process engineering");
    break;
    
    case 24:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Production and Industrial engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Production and Industrial engineering");
    break;
    
    case 25:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Textile engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Textile engineering");
    break;
    
    case 26:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Industrial and Production engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Industrial and Production engineering");
    break;
    
    case 27:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Biotechnology and Biochemical engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Biotechnology and Biochemical engineering");
    break;
    
    case 28:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Engineering and Computational Mechanics",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Engineering and Computational Mechanics");
    break;
    
    case 29:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Mathematics and Computing",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Mathematics and Computing");
    break;
    
    case 30:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Smart Manufacturing",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Smart Manufacturing");
    break;
    
    case 31:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Electronic and Communication(FAP) engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Electronic and Communication(FAP) engineering");
    break;
    
    case 32:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Information Technology(FAP)",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Information Technology(FAP)");
    break;
    
    case 33:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Information Technology(Business Informatics)",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Information Technology(Business Informatics)");
    break;
    
    case 34:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Computer Science(AI) and engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Computer Science(AI) and engineering");
    break;
    
    case 35:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Electronic and Communication(embedded systems)",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Electronic and Communication(embedded systems)");
    break;
    
    case 36:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Data Science and Artificial Intelligence",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Data Science and Artificial Intelligence");
    break;
    
    case 37:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Computer Science(Gaming) and engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Computer Science(Gaming) and engineering");
    break;
    
    case 38:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Computer Science(Data Science) and engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Computer Science(Data Science) and engineering");
    break;

    case 39:
    func_openF3(h,m,col_open,br_open,clos_open,nirf_open,"Mechatronics engineering",open_rank);
    func_openF1(m,col_open,br_open,clos_open,"Mechatronics engineering");
    break;
    }
}