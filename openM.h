#include<bits/stdc++.h>
using namespace std;
// multimap<int,int>m;
int lenopenM (int f){
  int i=0;
  for(;f>0;i++){
    f/=10;
  }
  return i;
}
void func_openM( multimap<int,int>m,vector<string>col_open,vector<string>br_open,vector<int>clos_open){ 
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
            int nirf_size=10-lenopenM(clos_open[i]);
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
void func_openM2( multimap<int,int>&h,multimap<int,int>&m,vector<string>col_open,vector<string>br_open,vector<int>clos_open,vector<int>nirf_open,int open_rank){
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
void func_openM3(multimap<int,int>&h,multimap<int,int>&m,vector<string>col_open,vector<string>br_open,vector<int>clos_open,vector<int>nirf_open,string s,int open_rank){
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
void func_openM1(multimap<int,int>m,vector<string>col_open,vector<string>br_open,vector<int>clos_open,string s){ 
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
            int nirf_size=10-lenopenM(clos_open[i]);
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
void openM(){
    cout<<"enter your open_rank"<<endl;
    int open_rank;cin>>open_rank;
      vector<string>col_open;vector<string>br_open;vector<int>clos_open;vector<int>nirf_open;

   {  { col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(1689);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Electronic and Communication engineering");  
    clos_open.push_back(5179);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(12255);
    nirf_open.push_back(10);
     col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(15511);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Civil engineering");
    clos_open.push_back(22886);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Computational and Data Science engineering");
    clos_open.push_back(3763);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(22615);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Mining engineering");
    clos_open.push_back(27100);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(7316);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Information Technology");
    clos_open.push_back(2882);
    nirf_open.push_back(10);
    col_open.push_back("NIT SURATHKAL");
    br_open.push_back("Artificial Intelligence");
    clos_open.push_back(2677);
    nirf_open.push_back(10);
   }
   { col_open.push_back("NIT WARANGAL");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(2112);
    nirf_open.push_back(21);
    col_open.push_back("NIT WARANGAL");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(6119);
    nirf_open.push_back(21);
    col_open.push_back("NIT WARANGAL");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(14937);
    nirf_open.push_back(21);
    col_open.push_back("NIT WARANGAL");
    br_open.push_back("Bio Technology");
    clos_open.push_back(29829);
    nirf_open.push_back(21);
     col_open.push_back("NIT WARANGAL");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(20089);
    nirf_open.push_back(21);
     col_open.push_back("NIT WARANGAL");
    br_open.push_back("Civil engineering");
    clos_open.push_back(25762);
    nirf_open.push_back(21);
     col_open.push_back("NIT WARANGAL");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(26725);
    nirf_open.push_back(21);
     col_open.push_back("NIT WARANGAL");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(9370);
    nirf_open.push_back(21);
   }
   {col_open.push_back("NIT CALICUT");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(4521);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(9044);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(23029);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Bio Technology");
    clos_open.push_back(40636);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(29246);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Civil engineering");
    clos_open.push_back(36937);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Engineering Physics");
    clos_open.push_back(21125);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Materials Science and engineering");
    clos_open.push_back(40391);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(14988);
    nirf_open.push_back(31);
    col_open.push_back("NIT CALICUT");
    br_open.push_back("Production engineering");
    clos_open.push_back(35771);
    nirf_open.push_back(31);
   }
   {col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(15269);
    nirf_open.push_back(8);
    col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Civil engineering");
    clos_open.push_back(19611);
    nirf_open.push_back(8);
    col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(996);
    nirf_open.push_back(8);
    col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(3691);
    nirf_open.push_back(8);
    col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(10181);
    nirf_open.push_back(8);
    col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(22850);
    nirf_open.push_back(8);
    col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(6636);
    nirf_open.push_back(8);
    col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Production engineering");
    clos_open.push_back(25823);
    nirf_open.push_back(8);
    col_open.push_back("NIT Tiruchirapally");
    br_open.push_back("Instrumentation and Control engineering");
    clos_open.push_back(13820);
    nirf_open.push_back(8);
    }
   { col_open.push_back("NIT Rourkela");
    br_open.push_back("Bio Technology");
    clos_open.push_back(30887);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Ceramic engineering");
    clos_open.push_back(39652);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(20120);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Civil engineering");
    clos_open.push_back(26812);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(2883);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(12655);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(16717);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(30012);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Mining engineering");
    clos_open.push_back(36630);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Electronics and Instrumentation engineering");
    clos_open.push_back(12995);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Bio Medical engineering");
    clos_open.push_back(37093);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Industrial Design engineering");
    clos_open.push_back(34116);
    nirf_open.push_back(15);
    col_open.push_back("NIT Rourkela");
    br_open.push_back("Food Process engineering");
    clos_open.push_back(44270);
    nirf_open.push_back(15);
   }   
    {col_open.push_back("NIT Nagpur");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(31771);
    nirf_open.push_back(32);
    col_open.push_back("NIT Nagpur");
    br_open.push_back("Civil engineering");
    clos_open.push_back(38128);
    nirf_open.push_back(32);
    col_open.push_back("NIT Nagpur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(5642);
    nirf_open.push_back(32);
    col_open.push_back("NIT Nagpur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(11131);
    nirf_open.push_back(32);
    col_open.push_back("NIT Nagpur");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(23541);
    nirf_open.push_back(32);
    col_open.push_back("NIT Nagpur");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(43344);
    nirf_open.push_back(32);
    col_open.push_back("NIT Nagpur");
    br_open.push_back("Mining engineering");
    clos_open.push_back(45763);
    nirf_open.push_back(32);
    col_open.push_back("NIT Nagpur");
    br_open.push_back("Electrical and Electronic engineering");
    clos_open.push_back(17067);
    nirf_open.push_back(32);
    }
    { col_open.push_back("NIT Durgapur");
    br_open.push_back("Bio Technology");
    clos_open.push_back(48341);
    nirf_open.push_back(34);
    col_open.push_back("NIT Durgapur");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(36501);
    nirf_open.push_back(34);
    col_open.push_back("NIT Durgapur");
    br_open.push_back("Civil engineering");
    clos_open.push_back(41543);
    nirf_open.push_back(34);
    col_open.push_back("NIT Durgapur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(8689);
    nirf_open.push_back(34);
    col_open.push_back("NIT Durgapur");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(21597);
    nirf_open.push_back(34);
    col_open.push_back("NIT Durgapur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(14177);
    nirf_open.push_back(34);
    col_open.push_back("NIT Durgapur");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(45818);
    nirf_open.push_back(34);
    col_open.push_back("NIT Durgapur");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(31045);
    nirf_open.push_back(34);
    }
     { col_open.push_back("NIT Silchar");
    br_open.push_back("Civil engineering");
    clos_open.push_back(46199);
    nirf_open.push_back(38);
    col_open.push_back("NIT Silchar");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(10898);
    nirf_open.push_back(38);
    col_open.push_back("NIT Silchar");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(26952);
    nirf_open.push_back(38);
    col_open.push_back("NIT Silchar");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(17923);
    nirf_open.push_back(38);
    col_open.push_back("NIT Silchar");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(34989);
    nirf_open.push_back(38);
    col_open.push_back("NIT Silchar");
    br_open.push_back("Electronics and Instrumentation engineering");
    clos_open.push_back(23094);
    nirf_open.push_back(38);
     }
    {  col_open.push_back("NIT Jaipur");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(25860);
    nirf_open.push_back(46);
     col_open.push_back("NIT Jaipur");
    br_open.push_back("Civil engineering");
    clos_open.push_back(32584);
    nirf_open.push_back(46);
     col_open.push_back("NIT Jaipur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(4631);
    nirf_open.push_back(46);
     col_open.push_back("NIT Jaipur");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(16172);
    nirf_open.push_back(46);
     col_open.push_back("NIT Jaipur");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(21909);
    nirf_open.push_back(46);
     col_open.push_back("NIT Jaipur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(9470);
    nirf_open.push_back(46);
     col_open.push_back("NIT Jaipur");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(38962);
    nirf_open.push_back(46);

    }
      {col_open.push_back("NIT Allahabad");
    br_open.push_back("Bio Technology");
    clos_open.push_back(33152);
    nirf_open.push_back(47);
      col_open.push_back("NIT Allahabad");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(23792);
    nirf_open.push_back(47);
      col_open.push_back("NIT Allahabad");
    br_open.push_back("Civil engineering");
    clos_open.push_back(28349);
    nirf_open.push_back(47);
      col_open.push_back("NIT Allahabad");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(4254);
    nirf_open.push_back(47);
      col_open.push_back("NIT Allahabad");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(12832);
    nirf_open.push_back(47);
      col_open.push_back("NIT Allahabad");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(9165);
    nirf_open.push_back(47);
      col_open.push_back("NIT Allahabad");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(20976);
    nirf_open.push_back(47);
      col_open.push_back("NIT Allahabad");
    br_open.push_back("Production and Industrial engineering");
    clos_open.push_back(31416);
    nirf_open.push_back(47);
      }
      {col_open.push_back("NIT Kurukshetra");
    br_open.push_back("Civil engineering");
    clos_open.push_back(39833);
    nirf_open.push_back(50);
     col_open.push_back("NIT Kurukshetra");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(19812);
    nirf_open.push_back(50);
     col_open.push_back("NIT Kurukshetra");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(12864);
    nirf_open.push_back(50);
     col_open.push_back("NIT Kurukshetra");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(27951);
    nirf_open.push_back(50);
     col_open.push_back("NIT Kurukshetra");
    br_open.push_back("Production and Industrial engineering");
    clos_open.push_back(40895);
    nirf_open.push_back(50);
     col_open.push_back("NIT Kurukshetra");
    br_open.push_back("Information Technology");
    clos_open.push_back(8722);
    nirf_open.push_back(50);
     col_open.push_back("NIT Kurukshetra");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(7216);
    nirf_open.push_back(50);
      }   
     { col_open.push_back("NIT Jalandar");
    br_open.push_back("Bio Technology");
    clos_open.push_back(48939);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(41703);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Civil engineering");
    clos_open.push_back(43842);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(10239);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(22643);
    nirf_open.push_back(52); col_open.push_back("NIT Jalandar");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(15861);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(34280);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Textile engineering");
    clos_open.push_back(52827);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Information Technology");
    clos_open.push_back(11870);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Instrumentation and Control engineering");
    clos_open.push_back(33012);
    nirf_open.push_back(52);
     col_open.push_back("NIT Jalandar");
    br_open.push_back("Industrial and Production engineering");
    clos_open.push_back(47051);
    nirf_open.push_back(52);
     }
    { col_open.push_back("NIT Surat");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(34976);
    nirf_open.push_back(58);
    col_open.push_back("NIT Surat");
    br_open.push_back("Civil engineering");
    clos_open.push_back(41528);
    nirf_open.push_back(58);
    col_open.push_back("NIT Surat");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(6677);
    nirf_open.push_back(58);
    col_open.push_back("NIT Surat");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(20718);
    nirf_open.push_back(58);
    col_open.push_back("NIT Surat");
    br_open.push_back("Electricons and Communication engineering");
    clos_open.push_back(13606);
    nirf_open.push_back(58);
    col_open.push_back("NIT Surat");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(30373);
    nirf_open.push_back(58);
    }
     { col_open.push_back("NIT Meghalaya");
    br_open.push_back("Civil engineering");
    clos_open.push_back(51029);
    nirf_open.push_back(60);
     col_open.push_back("NIT Meghalaya");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(18501);
    nirf_open.push_back(60);
     col_open.push_back("NIT Meghalaya");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(26298);
    nirf_open.push_back(60);
     col_open.push_back("NIT Meghalaya");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(42222);
    nirf_open.push_back(60);
     col_open.push_back("NIT Meghalaya");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(35677);
    nirf_open.push_back(60);
     }
    { col_open.push_back("NIT Patna");
    br_open.push_back("Civil engineering");
    clos_open.push_back(47354);
    nirf_open.push_back(63); 
    col_open.push_back("NIT Patna");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(13876);
    nirf_open.push_back(63);
    col_open.push_back("NIT Patna");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(29831);
    nirf_open.push_back(63);
    col_open.push_back("NIT Patna");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(20111);
    nirf_open.push_back(63);
    col_open.push_back("NIT Patna");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(38480);
    nirf_open.push_back(63); 
    }
    { col_open.push_back("NIT Raipur");
    br_open.push_back("Bio Technology");
    clos_open.push_back(15849);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(41794);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Civil engineering");
    clos_open.push_back(46257);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(10919);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(28263);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(17787);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(36992);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(49194);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Mining engineering");
    clos_open.push_back(52201);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Information Technology");
    clos_open.push_back(13561);
    nirf_open.push_back(65);
     col_open.push_back("NIT Raipur");
    br_open.push_back("Bio Medical engineering");
    clos_open.push_back(55403);
    nirf_open.push_back(65);
    }
   {  col_open.push_back("NIT Srinagar");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(56532);
    nirf_open.push_back(66);
    col_open.push_back("NIT Srinagar");
    br_open.push_back("Civil engineering");
    clos_open.push_back(56294);
    nirf_open.push_back(66);
    col_open.push_back("NIT Srinagar");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(22282);
    nirf_open.push_back(66);
    col_open.push_back("NIT Srinagar");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(42188);
    nirf_open.push_back(66);
    col_open.push_back("NIT Srinagar");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(34383);
    nirf_open.push_back(66);
col_open.push_back("NIT Srinagar");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(48387);
    nirf_open.push_back(66);
    col_open.push_back("NIT Srinagar");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(58636);
    nirf_open.push_back(66); 
    col_open.push_back("NIT Srinagar");
    br_open.push_back("Information Technology");
    clos_open.push_back(27989);
    nirf_open.push_back(66);
      }
     { col_open.push_back("NIT Bhopal");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(35282);
    nirf_open.push_back(70);
     col_open.push_back("NIT Bhopal");
    br_open.push_back("Civil engineering");
    clos_open.push_back(42069);
    nirf_open.push_back(70);
     col_open.push_back("NIT Bhopal");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(7877);
    nirf_open.push_back(70);
     col_open.push_back("NIT Bhopal");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(22508);
    nirf_open.push_back(70);
     col_open.push_back("NIT Bhopal");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(15151);
    nirf_open.push_back(70);
     col_open.push_back("NIT Bhopal");
    br_open.push_back("Mehcanical engineering");
    clos_open.push_back(32509);
    nirf_open.push_back(70);
     }
    { col_open.push_back("NIT Agartala");
    br_open.push_back("Biotechnology and Biochemical engineering");
    clos_open.push_back(57305);
    nirf_open.push_back(80);
     col_open.push_back("NIT Agartala");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(52619);
    nirf_open.push_back(80);
     col_open.push_back("NIT Agartala");
    br_open.push_back("Civil engineering");
    clos_open.push_back(53270);
    nirf_open.push_back(80);
     col_open.push_back("NIT Agartala");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(19344);
    nirf_open.push_back(80);
     col_open.push_back("NIT Agartala");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(38384);
    nirf_open.push_back(80);
     col_open.push_back("NIT Agartala");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(28723);
    nirf_open.push_back(80);
     col_open.push_back("NIT Agartala");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(46244);
    nirf_open.push_back(80);
     col_open.push_back("NIT Agartala");
    br_open.push_back("Production engineering");
    clos_open.push_back(57696);
    nirf_open.push_back(80);
     col_open.push_back("NIT Agartala");
    br_open.push_back("Electronics and Instrumentation engineering");
    clos_open.push_back(37885);
    nirf_open.push_back(80);
    
    }
     {  col_open.push_back("NIT Goa");
    br_open.push_back("Civil engineering");
    clos_open.push_back(44720);
    nirf_open.push_back(88);
    col_open.push_back("NIT Goa");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(11113);
    nirf_open.push_back(88);
    col_open.push_back("NIT Goa");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(19172);
    nirf_open.push_back(88);
    col_open.push_back("NIT Goa");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(33729);
    nirf_open.push_back(88);
    col_open.push_back("NIT Goa");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(24397);
    nirf_open.push_back(88);
     }
    { col_open.push_back("NIT Jamshedpur");
    br_open.push_back("Civil engineering");
    clos_open.push_back(42450);
    nirf_open.push_back(90);
     col_open.push_back("NIT Jamshedpur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(8988);
    nirf_open.push_back(90);
     col_open.push_back("NIT Jamshedpur");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(22026);
    nirf_open.push_back(90);
     col_open.push_back("NIT Jamshedpur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(14940);
    nirf_open.push_back(90);
     col_open.push_back("NIT Jamshedpur");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(28752);
    nirf_open.push_back(90);
     col_open.push_back("NIT Jamshedpur");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(43897);
    nirf_open.push_back(90);
     col_open.push_back("NIT Jamshedpur");
    br_open.push_back("Production and Industrial engineering");
    clos_open.push_back(43739);
    nirf_open.push_back(90);
     col_open.push_back("NIT Jamshedpur");
    br_open.push_back("Engineering and Computational Mechanics");
    clos_open.push_back(19770);
    nirf_open.push_back(90);

    }
     { col_open.push_back("NIT Manipur");
    br_open.push_back("Civil engineering");
    clos_open.push_back(53637);
    nirf_open.push_back(108);
      col_open.push_back("NIT Manipur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(24168);
    nirf_open.push_back(108);
      col_open.push_back("NIT Manipur");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(44759);
    nirf_open.push_back(108);
      col_open.push_back("NIT Manipur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(34632);
    nirf_open.push_back(108);
      col_open.push_back("NIT Manipur");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(50614);
    nirf_open.push_back(108);
    
         }
    {  col_open.push_back("NIT Hamirpur");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(42376);
    nirf_open.push_back(128);
    col_open.push_back("NIT Hamirpur");
    br_open.push_back("Civil engineering");
    clos_open.push_back(45035);
    nirf_open.push_back(128);col_open.push_back("NIT Hamirpur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(12399);
    nirf_open.push_back(128);
    col_open.push_back("NIT Hamirpur");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(27297);
    nirf_open.push_back(128);
    col_open.push_back("NIT Hamirpur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(17473);
    nirf_open.push_back(128);
    col_open.push_back("NIT Hamirpur");
    br_open.push_back("Engineering Physics");
    clos_open.push_back(33101);
    nirf_open.push_back(128);
    col_open.push_back("NIT Hamirpur");
    br_open.push_back("Materials Science and engineering");
    clos_open.push_back(48591);
    nirf_open.push_back(128);
    col_open.push_back("NIT Hamirpur");
    br_open.push_back("Mathematics and Computing");
    clos_open.push_back(23976);
    nirf_open.push_back(128);
    col_open.push_back("NIT Hamirpur");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(35285);
    nirf_open.push_back(128);
    }
    {  col_open.push_back("NIT Uttarakhand");
    br_open.push_back("Civil engineering");
    clos_open.push_back(48474);
    nirf_open.push_back(131);
    col_open.push_back("NIT Uttarakhand");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(17109);
    nirf_open.push_back(131);
    col_open.push_back("NIT Uttarakhand");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(25362);
    nirf_open.push_back(131);
    col_open.push_back("NIT Uttarakhand");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(40381);
    nirf_open.push_back(131);
    col_open.push_back("NIT Uttarakhand");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(32920);
    nirf_open.push_back(131);
    }
    { col_open.push_back("NIT Puducherry");
    br_open.push_back("Civil engineering");
    clos_open.push_back(48027);
    nirf_open.push_back(136);
     col_open.push_back("NIT Puducherry");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(16549);
    nirf_open.push_back(136);
     col_open.push_back("NIT Puducherry");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(25219);
    nirf_open.push_back(136);
     col_open.push_back("NIT Puducherry");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(40903);
    nirf_open.push_back(136);
     col_open.push_back("NIT Puducherry");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(35794);
    nirf_open.push_back(136);
    }
     {col_open.push_back("NIT Arunanchal");
    br_open.push_back("Civil engineering");
    clos_open.push_back(55417);
    nirf_open.push_back(171);
     col_open.push_back("NIT Arunanchal");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(25609);
    nirf_open.push_back(171);
     col_open.push_back("NIT Arunanchal");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(44246);
    nirf_open.push_back(171);
     col_open.push_back("NIT Arunanchal");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(34837);
    nirf_open.push_back(171);
     col_open.push_back("NIT Arunanchal");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(50451);
    nirf_open.push_back(171);

     }
   {col_open.push_back("NIT Sikkim");
    br_open.push_back("Civil engineering");
    clos_open.push_back(54058);
    nirf_open.push_back(173);
    col_open.push_back("NIT Sikkim");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(22196);
    nirf_open.push_back(173);
    col_open.push_back("NIT Sikkim");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(40990);
    nirf_open.push_back(173);
    col_open.push_back("NIT Sikkim");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(35394);
    nirf_open.push_back(173);
    col_open.push_back("NIT Sikkim");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(47258);
    nirf_open.push_back(173);

   }
    {col_open.push_back("NIT Delhi");
    br_open.push_back("Civil engineering");
    clos_open.push_back(36473);
    nirf_open.push_back(194); 
    col_open.push_back("NIT Delhi");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(8954);
    nirf_open.push_back(194); 
    col_open.push_back("NIT Delhi");
    br_open.push_back("Electrical engineering");
    clos_open.push_back(21413);
    nirf_open.push_back(194); 
    col_open.push_back("NIT Delhi");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(16068);
    nirf_open.push_back(194); 
    col_open.push_back("NIT Delhi");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(26275);
    nirf_open.push_back(194); 

    }
    {col_open.push_back("NIT Andhra");
    br_open.push_back("Bio Technology");
    clos_open.push_back(55101);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Andhra");
    br_open.push_back("Chemical engineering");
    clos_open.push_back(46908);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Andhra");
    br_open.push_back("Civil engineering");
    clos_open.push_back(50813);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Andhra");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(18205);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Andhra");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(35819);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Andhra");
    br_open.push_back("Electronics and Communication engineering");
    clos_open.push_back(26163);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Andhra");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(43673);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Andhra");
    br_open.push_back("Metallurgical and Materials engineering");
    clos_open.push_back(51926);
    nirf_open.push_back(1000); 
     
    }
     { col_open.push_back("NIT Nagaland");
    br_open.push_back("Civil engineering");
    clos_open.push_back(57268);
    nirf_open.push_back(1000);
     col_open.push_back("NIT Nagaland");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(30126);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Nagaland");
    br_open.push_back("Electronics and Communication engineering");
    clos_open.push_back(38720);
    nirf_open.push_back(1000);  
     col_open.push_back("NIT Nagaland");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(53423);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Nagaland");
    br_open.push_back("Electronics and Instrumentation engineering");
    clos_open.push_back(49298);
    nirf_open.push_back(1000); 
     col_open.push_back("NIT Nagaland");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(45980);
    nirf_open.push_back(1000); 
     
     }
     { col_open.push_back("NIT Mizoram");
    br_open.push_back("Civil engineering");
    clos_open.push_back(58024);
    nirf_open.push_back(1000); 
    col_open.push_back("NIT Mizoram");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(28829);
    nirf_open.push_back(1000); 
    col_open.push_back("NIT Mizoram");
    br_open.push_back("Electrical and Electronics engineering");
    clos_open.push_back(46307);
    nirf_open.push_back(1000); 
    col_open.push_back("NIT Mizoram");
    br_open.push_back("Electronics and Communication engineering");
    clos_open.push_back(40554);
    nirf_open.push_back(1000); 
    col_open.push_back("NIT Mizoram");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(51976);
    nirf_open.push_back(1000); 
     }
    {col_open.push_back("IIIT GWALIOR");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(6763);
    nirf_open.push_back(78); 
     
    }
    {  col_open.push_back("IIIT Jabalpur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(13707);
    nirf_open.push_back(82); 
    
       col_open.push_back("IIIT Jabalpur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(20861);
    nirf_open.push_back(82); 
    
       col_open.push_back("IIIT Jabalpur");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(42704);
    nirf_open.push_back(82); 
    
       col_open.push_back("IIIT Jabalpur");
    br_open.push_back("Smart Manufacturing");
    clos_open.push_back(46924);
    nirf_open.push_back(82); 
    
    }
    { col_open.push_back("IIIT Allahabad");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(9700);
    nirf_open.push_back(93); 
     col_open.push_back("IIIT Allahabad");
    br_open.push_back("Electronic and Communication(FAP) engineering");
    clos_open.push_back(10233);
    nirf_open.push_back(93); 
     col_open.push_back("IIIT Allahabad");
    br_open.push_back("Information Technology");
    clos_open.push_back(5282);
    nirf_open.push_back(93); 
     col_open.push_back("IIIT Allahabad");
    br_open.push_back("Information Technology(FAP)");
    clos_open.push_back(5704);
    nirf_open.push_back(93); 
     col_open.push_back("IIIT Allahabad");
    br_open.push_back("Information Technology(Business Informatics)");
    clos_open.push_back(5598);
    nirf_open.push_back(93); 
    }
   { col_open.push_back("IIIT Kancheepuram");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(15944);
    nirf_open.push_back(184); 
    col_open.push_back("IIIT Kancheepuram");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(26102);
    nirf_open.push_back(184); 
    col_open.push_back("IIIT Kancheepuram");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(46322);
    nirf_open.push_back(184); 
    col_open.push_back("IIIT Kancheepuram");
    br_open.push_back("Computer Science(AI) and engineering");
    clos_open.push_back(16536);
    nirf_open.push_back(184); 
    col_open.push_back("IIIT Kancheepuram");
    br_open.push_back("Smart Manufacturing");
    clos_open.push_back(47308);
    nirf_open.push_back(184); 
   }
    {col_open.push_back("IIIT Guwahati");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(20388);
    nirf_open.push_back(1000); 
    col_open.push_back("IIIT Guwahati");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(30922);
    nirf_open.push_back(1000); 
    }
    {col_open.push_back("IIIT Kurnool");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(33317);
    nirf_open.push_back(1000); 
    col_open.push_back("IIIT Kurnool");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(40168);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Kurnool");
    br_open.push_back("Mechanical engineering");
    clos_open.push_back(50245);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Kurnool");
    br_open.push_back("Artificial Intelligence");
    clos_open.push_back(34994);
    nirf_open.push_back(1000);
    }
    {  col_open.push_back("IIIT Kottayam");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(32181);
    nirf_open.push_back(1000);
     col_open.push_back("IIIT Kottayam");
    br_open.push_back("Computer Science(AI) and engineering");
    clos_open.push_back(31741);
    nirf_open.push_back(1000);
     col_open.push_back("IIIT Kottayam");
    br_open.push_back("Computer Science(CYBER SECURITY) and engineering");
    clos_open.push_back(33928);
    nirf_open.push_back(1000);
     col_open.push_back("IIIT Kottayam");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(38255);
    nirf_open.push_back(1000);
    
    }
    { col_open.push_back("IIIT Lucknow");
    br_open.push_back("Computer Science and Business");
    clos_open.push_back(9604);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Lucknow");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(8532);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Lucknow");
    br_open.push_back("Computer Science(AI) and engineering");
    clos_open.push_back(8382);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Lucknow");
    br_open.push_back("Information Technology");
    clos_open.push_back(10472);
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
    clos_open.push_back(19963);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Vadodara");
    br_open.push_back("Information Technology");
    clos_open.push_back(21613);
    nirf_open.push_back(1000);
     }
   { col_open.push_back("IIIT Manipur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(43500);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Manipur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(50493);
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
    clos_open.push_back(24320);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Tiruchirappalli");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(35839);
    nirf_open.push_back(1000);
    }
    { col_open.push_back("IIIT Dharwad");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(30859);
    nirf_open.push_back(1000);
     col_open.push_back("IIIT Dharwad");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(40870);
    nirf_open.push_back(1000);
     col_open.push_back("IIIT Dharwad");
    br_open.push_back("Data Science and Artificial Intelligence");
    clos_open.push_back(38533);
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
    clos_open.push_back(11260);
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
    clos_open.push_back(15894);
    nirf_open.push_back(1000);
     col_open.push_back("IIIT Pune");
    br_open.push_back("Electrical and Communication engineering");
    clos_open.push_back(21546);
    nirf_open.push_back(1000);
     }
    { col_open.push_back("IIIT Bhagalpur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(36325);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Bhagalpur");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(41774);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Bhagalpur");
    br_open.push_back("Mechatronics engineering");
    clos_open.push_back(48815);
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
    clos_open.push_back(20029);
    nirf_open.push_back(1000);
    col_open.push_back("IIIT Surat");
    br_open.push_back("Electronic and Communication engineering");
    clos_open.push_back(27874);
    nirf_open.push_back(1000);
    }
     { col_open.push_back("IIIT Agartala");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(33713);
    nirf_open.push_back(1000);
     }
     {col_open.push_back("IIIT Raichur");
    br_open.push_back("Computer Science and engineering");
    clos_open.push_back(29888);
    nirf_open.push_back(1000);
     }}

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
      
    func_openM2(h,m,col_open,br_open,clos_open,nirf_open,open_rank);
    func_openM(m,col_open,br_open,clos_open);

    break;
    case 2:
    
   
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Computer Science and engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Computer Science and engineering");
    break;
    case 3:
     
    
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Electronic and Communication engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Electronic and Communication engineering");
    break;
    
    
    break;
    case 4:
     
    // func_openM2(h,m,col_open,br_open,clos_open,nirf_open,open_rank);

    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Mechanical engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Mechanical engineering");
    break;
    case 5:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Bio Technology",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Bio Technology");
    break;
    case 6:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Chemical engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Chemical engineering");
    break;
    case 7:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Civil engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Civil engineering");
    break;
    case 8:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Electrical engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Electrical engineering");
    break;
    case 9:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Metallurgical and Materials engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Metallurgical and Materials engineering");
    break;
    case 10:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Mining engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Mining engineering");
    break;
    case 11:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Information Technology",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Information Technology");
    break;
    case 12:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Bio Medical engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Bio Medical engineering");
    break;
    
    case 13:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Computational and Data Science engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Computational and Data Science engineering");
    break;
    
    case 14:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Electrical and Electronics engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Electrical and Electronics engineering");
    break;
    
    case 15:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Artificial Intelligence",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Artificial Intelligence");
    break;
    
    case 16:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Engineering Physics",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Engineering Physics");
    break;
    
    case 17:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Materials Science and engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Materials Science and engineering");
    break;
    
    case 18:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Production engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Production engineering");
    break;
    
    case 19:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Instrumentation and Control engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Instrumentation and Control engineering");
    break;
    
    case 20:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Ceramic engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Ceramic engineering");
    break;
    
    case 21:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Electronics and Instrumentation engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Electronics and Instrumentation engineering");
    break;
    
    case 22:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Industrial Design engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Industrial Design engineering");
    break;
    
    case 23:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Food Process engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Food Process engineering");
    break;
    
    case 24:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Production and Industrial engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Production and Industrial engineering");
    break;
    
    case 25:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Textile engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Textile engineering");
    break;
    
    case 26:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Industrial and Production engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Industrial and Production engineering");
    break;
    
    case 27:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Biotechnology and Biochemical engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Biotechnology and Biochemical engineering");
    break;
    
    case 28:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Engineering and Computational Mechanics",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Engineering and Computational Mechanics");
    break;
    
    case 29:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Mathematics and Computing",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Mathematics and Computing");
    break;
    
    case 30:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Smart Manufacturing",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Smart Manufacturing");
    break;
    
    case 31:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Electronic and Communication(FAP) engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Electronic and Communication(FAP) engineering");
    break;
    
    case 32:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Information Technology(FAP)",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Information Technology(FAP)");
    break;
    
    case 33:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Information Technology(Business Informatics)",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Information Technology(Business Informatics)");
    break;
    
    case 34:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Computer Science(AI) and engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Computer Science(AI) and engineering");
    break;
    
    case 35:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Electronic and Communication(embedded systems)",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Electronic and Communication(embedded systems)");
    break;
    
    case 36:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Data Science and Artificial Intelligence",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Data Science and Artificial Intelligence");
    break;
    
    case 37:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Computer Science(Gaming) and engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Computer Science(Gaming) and engineering");
    break;
    
    case 38:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Computer Science(Data Science) and engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Computer Science(Data Science) and engineering");
    break;

    case 39:
    func_openM3(h,m,col_open,br_open,clos_open,nirf_open,"Mechatronics engineering",open_rank);
    func_openM1(m,col_open,br_open,clos_open,"Mechatronics engineering");
    break;
    }
}