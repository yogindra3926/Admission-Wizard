#include<bits/stdc++.h>
using namespace std;
// multimap<int,int>m;
int lenobcM(int f){
  int i=0;
  for(;f>0;i++){
    f/=10;
  }
  return i;
}
void func_obcM( multimap<int,int>m,vector<string>col_obc,vector<string>br_obc,vector<int>clos_obc){
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
            int nirf_size=10-lenobcM(clos_obc[i]);
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
void func_obcM2( multimap<int,int>&h,multimap<int,int>&m,vector<string>col_obc,vector<string>br_obc,vector<int>clos_obc,vector<int>nirf_obc,int obc_rank){
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
void func_obcM3(multimap<int,int>&h,multimap<int,int>&m,vector<string>col_obc,vector<string>br_obc,vector<int>clos_obc,vector<int>nirf_obc,string s,int obc_rank){
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
void func_obcM1(multimap<int,int>m,vector<string>col_obc,vector<string>br_obc,vector<int>clos_obc,string s){
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
            int nirf_size=10-lenobcM(clos_obc[i]);
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
void obcM(){
    cout<<"enter your obc_rank"<<endl;
    int obc_rank;cin>>obc_rank;
      vector<string>col_obc;vector<string>br_obc;vector<int>clos_obc;vector<int>nirf_obc;
      {
   { col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(444);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Electronic and Communication engineering");  
    clos_obc.push_back(1566);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(4629);
    nirf_obc.push_back(10);
     col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(5931);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(7381);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Computational and Data Science engineering");
    clos_obc.push_back(1376);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(8303);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Mining engineering");
    clos_obc.push_back(9917);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(2889);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(816);
    nirf_obc.push_back(10);
    col_obc.push_back("NIT SURATHKAL");
    br_obc.push_back("Artificial Intelligence");
    clos_obc.push_back(963);
    nirf_obc.push_back(10);
   }
   { col_obc.push_back("NIT WARANGAL");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(662);
    nirf_obc.push_back(21);
    col_obc.push_back("NIT WARANGAL");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(1943);
    nirf_obc.push_back(21);
    col_obc.push_back("NIT WARANGAL");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(10129);
    nirf_obc.push_back(21);
    col_obc.push_back("NIT WARANGAL");
    br_obc.push_back("Bio Technology");
    clos_obc.push_back(5648);
    nirf_obc.push_back(21);
     col_obc.push_back("NIT WARANGAL");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(6770);
    nirf_obc.push_back(21);
     col_obc.push_back("NIT WARANGAL");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(8063);
    nirf_obc.push_back(21);
     col_obc.push_back("NIT WARANGAL");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(9291);
    nirf_obc.push_back(21);
     col_obc.push_back("NIT WARANGAL");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(3454);
    nirf_obc.push_back(21);
   }
   {col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(1242);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(2926);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(7418);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Bio Technology");
    clos_obc.push_back(12464);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(9683);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(11538);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Engineering Physics");
    clos_obc.push_back(7486);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Materials Science and engineering");
    clos_obc.push_back(12233);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(4881);
    nirf_obc.push_back(31);
    col_obc.push_back("NIT CALICUT");
    br_obc.push_back("Production engineering");
    clos_obc.push_back(11823);
    nirf_obc.push_back(31);
   }
   {col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(5733);
    nirf_obc.push_back(8);
    col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(6843);
    nirf_obc.push_back(8);
    col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(367);
    nirf_obc.push_back(8);
    col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(1409);
    nirf_obc.push_back(8);
    col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(4098);
    nirf_obc.push_back(8);
    col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(7805);
    nirf_obc.push_back(8);
    col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(2520);
    nirf_obc.push_back(8);
    col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Production engineering");
    clos_obc.push_back(9345);
    nirf_obc.push_back(8);
    col_obc.push_back("NIT Tiruchirapally");
    br_obc.push_back("Instrumentation and Control engineering");
    clos_obc.push_back(5351);
    nirf_obc.push_back(8);
    }
   { col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Bio Technology");
    clos_obc.push_back(11356);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Ceramic engineering");
    clos_obc.push_back(13023);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(6930);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(8989);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(930);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(4127);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(5988);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(10793);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Mining engineering");
    clos_obc.push_back(12361);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Electronics and Instrumentation engineering");
    clos_obc.push_back(4585);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Bio Medical engineering");
    clos_obc.push_back(12960);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Industrial Design engineering");
    clos_obc.push_back(11051);
    nirf_obc.push_back(15);
    col_obc.push_back("NIT Rourkela");
    br_obc.push_back("Food Process engineering");
    clos_obc.push_back(13629);
    nirf_obc.push_back(15);
   }   
    {col_obc.push_back("NIT Nagpur");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(10542);
    nirf_obc.push_back(32);
    col_obc.push_back("NIT Nagpur");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(11774);
    nirf_obc.push_back(32);
    col_obc.push_back("NIT Nagpur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(1627);
    nirf_obc.push_back(32);
    col_obc.push_back("NIT Nagpur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(3474);
    nirf_obc.push_back(32);
    col_obc.push_back("NIT Nagpur");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(8047);
    nirf_obc.push_back(32);
    col_obc.push_back("NIT Nagpur");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(13909);
    nirf_obc.push_back(32);
    col_obc.push_back("NIT Nagpur");
    br_obc.push_back("Mining engineering");
    clos_obc.push_back(14716);
    nirf_obc.push_back(32);
    col_obc.push_back("NIT Nagpur");
    br_obc.push_back("Electrical and Electronic engineering");
    clos_obc.push_back(5660);
    nirf_obc.push_back(32);
    }
    { col_obc.push_back("NIT Durgapur");
    br_obc.push_back("Bio Technology");
    clos_obc.push_back(15519);
    nirf_obc.push_back(34);
    col_obc.push_back("NIT Durgapur");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(15449);
    nirf_obc.push_back(34);
    col_obc.push_back("NIT Durgapur");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(12572);
    nirf_obc.push_back(34);
    col_obc.push_back("NIT Durgapur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(2599);
    nirf_obc.push_back(34);
    col_obc.push_back("NIT Durgapur");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(6650);
    nirf_obc.push_back(34);
    col_obc.push_back("NIT Durgapur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(4052);
    nirf_obc.push_back(34);
    col_obc.push_back("NIT Durgapur");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(14390);
    nirf_obc.push_back(34);
    col_obc.push_back("NIT Durgapur");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(9937);
    nirf_obc.push_back(34);
    }
     { col_obc.push_back("NIT Silchar");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(14208);
    nirf_obc.push_back(38);
    col_obc.push_back("NIT Silchar");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(3408);
    nirf_obc.push_back(38);
    col_obc.push_back("NIT Silchar");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(8662);
    nirf_obc.push_back(38);
    col_obc.push_back("NIT Silchar");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(5161);
    nirf_obc.push_back(38);
    col_obc.push_back("NIT Silchar");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(11450);
    nirf_obc.push_back(38);
    col_obc.push_back("NIT Silchar");
    br_obc.push_back("Electronics and Instrumentation engineering");
    clos_obc.push_back(7889);
    nirf_obc.push_back(38);
     }
    {  col_obc.push_back("NIT Jaipur");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(9656);
    nirf_obc.push_back(46);
     col_obc.push_back("NIT Jaipur");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(10922);
    nirf_obc.push_back(46);
     col_obc.push_back("NIT Jaipur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(1514);
    nirf_obc.push_back(46);
     col_obc.push_back("NIT Jaipur");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(5275);
    nirf_obc.push_back(46);
     col_obc.push_back("NIT Jaipur");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(7877);
    nirf_obc.push_back(46);
     col_obc.push_back("NIT Jaipur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(3325);
    nirf_obc.push_back(46);
     col_obc.push_back("NIT Jaipur");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(13489);
    nirf_obc.push_back(46);

    }
      {col_obc.push_back("NIT Allahabad");
    br_obc.push_back("Bio Technology");
    clos_obc.push_back(12137);
    nirf_obc.push_back(47);
      col_obc.push_back("NIT Allahabad");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(7820);
    nirf_obc.push_back(47);
      col_obc.push_back("NIT Allahabad");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(9148);
    nirf_obc.push_back(47);
      col_obc.push_back("NIT Allahabad");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(1305);
    nirf_obc.push_back(47);
      col_obc.push_back("NIT Allahabad");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(4400);
    nirf_obc.push_back(47);
      col_obc.push_back("NIT Allahabad");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(3030);
    nirf_obc.push_back(47);
      col_obc.push_back("NIT Allahabad");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(7211);
    nirf_obc.push_back(47);
      col_obc.push_back("NIT Allahabad");
    br_obc.push_back("Production and Industrial engineering");
    clos_obc.push_back(11569);
    nirf_obc.push_back(47);
      }
      {col_obc.push_back("NIT Kurukshetra");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(12303);
    nirf_obc.push_back(50);
     col_obc.push_back("NIT Kurukshetra");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(6395);
    nirf_obc.push_back(50);
     col_obc.push_back("NIT Kurukshetra");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(4269);
    nirf_obc.push_back(50);
     col_obc.push_back("NIT Kurukshetra");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(8987);
    nirf_obc.push_back(50);
     col_obc.push_back("NIT Kurukshetra");
    br_obc.push_back("Production and Industrial engineering");
    clos_obc.push_back(14021);
    nirf_obc.push_back(50);
     col_obc.push_back("NIT Kurukshetra");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(2611);
    nirf_obc.push_back(50);
     col_obc.push_back("NIT Kurukshetra");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(2234);
    nirf_obc.push_back(50);
      }   
     { col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Bio Technology");
    clos_obc.push_back(15242);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(13237);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(13519);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(3095);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(7144);
    nirf_obc.push_back(52); col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(5220);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(11590);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Textile engineering");
    clos_obc.push_back(15950);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(3641);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Instrumentation and Control engineering");
    clos_obc.push_back(11427);
    nirf_obc.push_back(52);
     col_obc.push_back("NIT Jalandar");
    br_obc.push_back("Industrial and Production engineering");
    clos_obc.push_back(14373);
    nirf_obc.push_back(52);
     }
    { col_obc.push_back("NIT Surat");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(12153);
    nirf_obc.push_back(58);
    col_obc.push_back("NIT Surat");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(12473);
    nirf_obc.push_back(58);
    col_obc.push_back("NIT Surat");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(2101);
    nirf_obc.push_back(58);
    col_obc.push_back("NIT Surat");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(6728);
    nirf_obc.push_back(58);
    col_obc.push_back("NIT Surat");
    br_obc.push_back("Electricons and Communication engineering");
    clos_obc.push_back(4549);
    nirf_obc.push_back(58);
    col_obc.push_back("NIT Surat");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(10358);
    nirf_obc.push_back(58);
    }
     { col_obc.push_back("NIT Meghalaya");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(15729);
    nirf_obc.push_back(60);
     col_obc.push_back("NIT Meghalaya");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(5195);
    nirf_obc.push_back(60);
     col_obc.push_back("NIT Meghalaya");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(8596);
    nirf_obc.push_back(60);
     col_obc.push_back("NIT Meghalaya");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(13378);
    nirf_obc.push_back(60);
     col_obc.push_back("NIT Meghalaya");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(10578);
    nirf_obc.push_back(60);
     }
    { col_obc.push_back("NIT Patna");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(14723);
    nirf_obc.push_back(63); 
    col_obc.push_back("NIT Patna");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(3918);
    nirf_obc.push_back(63);
    col_obc.push_back("NIT Patna");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(9296);
    nirf_obc.push_back(63);
    col_obc.push_back("NIT Patna");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(6642);
    nirf_obc.push_back(63);
    col_obc.push_back("NIT Patna");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(18750);
    nirf_obc.push_back(63); 
    }
    { col_obc.push_back("NIT Raipur");
    br_obc.push_back("Bio Technology");
    clos_obc.push_back(15849);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(13090);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(14273);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(3223);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(8189);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(5712);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(11790);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(15492);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Mining engineering");
    clos_obc.push_back(16073);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(4075);
    nirf_obc.push_back(65);
     col_obc.push_back("NIT Raipur");
    br_obc.push_back("Bio Medical engineering");
    clos_obc.push_back(16415);
    nirf_obc.push_back(65);
    }
   {  col_obc.push_back("NIT Srinagar");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(16468);
    nirf_obc.push_back(66);
    col_obc.push_back("NIT Srinagar");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(16753);
    nirf_obc.push_back(66);
    col_obc.push_back("NIT Srinagar");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(6861);
    nirf_obc.push_back(66);
    col_obc.push_back("NIT Srinagar");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(13448);
    nirf_obc.push_back(66);
    col_obc.push_back("NIT Srinagar");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(10274);
    nirf_obc.push_back(66);
col_obc.push_back("NIT Srinagar");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(15187);
    nirf_obc.push_back(66);
    col_obc.push_back("NIT Srinagar");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(17354);
    nirf_obc.push_back(66); 
    col_obc.push_back("NIT Srinagar");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(8420);
    nirf_obc.push_back(66);
      }
     { col_obc.push_back("NIT Bhopal");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(12410);
    nirf_obc.push_back(70);
     col_obc.push_back("NIT Bhopal");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(12558);
    nirf_obc.push_back(70);
     col_obc.push_back("NIT Bhopal");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(2755);
    nirf_obc.push_back(70);
     col_obc.push_back("NIT Bhopal");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(7221);
    nirf_obc.push_back(70);
     col_obc.push_back("NIT Bhopal");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(5228);
    nirf_obc.push_back(70);
     col_obc.push_back("NIT Bhopal");
    br_obc.push_back("Mehcanical engineering");
    clos_obc.push_back(15221);
    nirf_obc.push_back(70);
     }
    { col_obc.push_back("NIT Agartala");
    br_obc.push_back("Biotechnology and Biochemical engineering");
    clos_obc.push_back(16842);
    nirf_obc.push_back(80);
     col_obc.push_back("NIT Agartala");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(16056);
    nirf_obc.push_back(80);
     col_obc.push_back("NIT Agartala");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(15898);
    nirf_obc.push_back(80);
     col_obc.push_back("NIT Agartala");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(6267);
    nirf_obc.push_back(80);
     col_obc.push_back("NIT Agartala");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(12100);
    nirf_obc.push_back(80);
     col_obc.push_back("NIT Agartala");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(9209);
    nirf_obc.push_back(80);
     col_obc.push_back("NIT Agartala");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(14616);
    nirf_obc.push_back(80);
     col_obc.push_back("NIT Agartala");
    br_obc.push_back("Production engineering");
    clos_obc.push_back(16828);
    nirf_obc.push_back(80);
     col_obc.push_back("NIT Agartala");
    br_obc.push_back("Electronics and Instrumentation engineering");
    clos_obc.push_back(14616);
    nirf_obc.push_back(80);

    }
     {  col_obc.push_back("NIT Goa");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(14172);
    nirf_obc.push_back(88);
    col_obc.push_back("NIT Goa");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(3894);
    nirf_obc.push_back(88);
    col_obc.push_back("NIT Goa");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(5911);
    nirf_obc.push_back(88);
    col_obc.push_back("NIT Goa");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(11506);
    nirf_obc.push_back(88);
    col_obc.push_back("NIT Goa");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(8513);
    nirf_obc.push_back(88);
     }
    { col_obc.push_back("NIT Jamshedpur");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(13340);
    nirf_obc.push_back(90);
     col_obc.push_back("NIT Jamshedpur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(2647);
    nirf_obc.push_back(90);
     col_obc.push_back("NIT Jamshedpur");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(6903);
    nirf_obc.push_back(90);
     col_obc.push_back("NIT Jamshedpur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(5205);
    nirf_obc.push_back(90);
     col_obc.push_back("NIT Jamshedpur");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(10384);
    nirf_obc.push_back(90);
     col_obc.push_back("NIT Jamshedpur");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(14470);
    nirf_obc.push_back(90);
     col_obc.push_back("NIT Jamshedpur");
    br_obc.push_back("Production and Industrial engineering");
    clos_obc.push_back(14331);
    nirf_obc.push_back(90);
     col_obc.push_back("NIT Jamshedpur");
    br_obc.push_back("Engineering and Computational Mechanics");
    clos_obc.push_back(6076);
    nirf_obc.push_back(90);

    }
     { col_obc.push_back("NIT Manipur");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(16306);
    nirf_obc.push_back(108);
      col_obc.push_back("NIT Manipur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(8156);
    nirf_obc.push_back(108);
      col_obc.push_back("NIT Manipur");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(13982);
    nirf_obc.push_back(108);
      col_obc.push_back("NIT Manipur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(10525);
    nirf_obc.push_back(108);
      col_obc.push_back("NIT Manipur");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(15543);
    nirf_obc.push_back(108);
    
         }
    {  col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(13581);
    nirf_obc.push_back(128);
    col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(14242);
    nirf_obc.push_back(128);col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(3435);
    nirf_obc.push_back(128);
    col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(8627);
    nirf_obc.push_back(128);
    col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(5784);
    nirf_obc.push_back(128);
    col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Engineering Physics");
    clos_obc.push_back(12230);
    nirf_obc.push_back(128);
    col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Materials Science and engineering");
    clos_obc.push_back(15450);
    nirf_obc.push_back(128);
    col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Mathematics and Computing");
    clos_obc.push_back(5215);
    nirf_obc.push_back(128);
    col_obc.push_back("NIT Hamirpur");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(11740);
    nirf_obc.push_back(128);
    }
    {  col_obc.push_back("NIT Uttarakhand");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(31069);
    nirf_obc.push_back(131);
    col_obc.push_back("NIT Uttarakhand");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(5797);
    nirf_obc.push_back(131);
    col_obc.push_back("NIT Uttarakhand");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(7795);
    nirf_obc.push_back(131);
    col_obc.push_back("NIT Uttarakhand");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(13464);
    nirf_obc.push_back(131);
    col_obc.push_back("NIT Uttarakhand");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(4781);
    nirf_obc.push_back(131);
    }
    { col_obc.push_back("NIT Puducherry");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(15125);
    nirf_obc.push_back(136);
     col_obc.push_back("NIT Puducherry");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(5582);
    nirf_obc.push_back(136);
     col_obc.push_back("NIT Puducherry");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(7493);
    nirf_obc.push_back(136);
     col_obc.push_back("NIT Puducherry");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(13852);
    nirf_obc.push_back(136);
     col_obc.push_back("NIT Puducherry");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(11219);
    nirf_obc.push_back(136);
    }
     {col_obc.push_back("NIT Arunanchal");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(16308);
    nirf_obc.push_back(171);
     col_obc.push_back("NIT Arunanchal");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(8172);
    nirf_obc.push_back(171);
     col_obc.push_back("NIT Arunanchal");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(13168);
    nirf_obc.push_back(171);
     col_obc.push_back("NIT Arunanchal");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(10289);
    nirf_obc.push_back(171);
     col_obc.push_back("NIT Arunanchal");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(15200);
    nirf_obc.push_back(171);

     }
   {col_obc.push_back("NIT Sikkim");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(16193);
    nirf_obc.push_back(173);
    col_obc.push_back("NIT Sikkim");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(7791);
    nirf_obc.push_back(173);
    col_obc.push_back("NIT Sikkim");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(11454);
    nirf_obc.push_back(173);
    col_obc.push_back("NIT Sikkim");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(10154);
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
    clos_obc.push_back(3127);
    nirf_obc.push_back(194); 
    col_obc.push_back("NIT Delhi");
    br_obc.push_back("Electrical engineering");
    clos_obc.push_back(7222);
    nirf_obc.push_back(194); 
    col_obc.push_back("NIT Delhi");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(5128);
    nirf_obc.push_back(194); 
    col_obc.push_back("NIT Delhi");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(9797);
    nirf_obc.push_back(194); 

    }
    {col_obc.push_back("NIT Andhra");
    br_obc.push_back("Bio Technology");
    clos_obc.push_back(16252);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Andhra");
    br_obc.push_back("Chemical engineering");
    clos_obc.push_back(14813);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Andhra");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(15465);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Andhra");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(5828);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Andhra");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(11661);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Andhra");
    br_obc.push_back("Electronics and Communication engineering");
    clos_obc.push_back(8819);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Andhra");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(14464);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Andhra");
    br_obc.push_back("Metallurgical and Materials engineering");
    clos_obc.push_back(15758);
    nirf_obc.push_back(1000); 
     
    }
     { col_obc.push_back("NIT Nagaland");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(16719);
    nirf_obc.push_back(1000);
     col_obc.push_back("NIT Nagaland");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(8388);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Nagaland");
    br_obc.push_back("Electronics and Communication engineering");
    clos_obc.push_back(10923);
    nirf_obc.push_back(1000);  
     col_obc.push_back("NIT Nagaland");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(15626);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Nagaland");
    br_obc.push_back("Electronics and Instrumentation engineering");
    clos_obc.push_back(13910);
    nirf_obc.push_back(1000); 
     col_obc.push_back("NIT Nagaland");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(14116);
    nirf_obc.push_back(1000); 
     
     }
     { col_obc.push_back("NIT Mizoram");
    br_obc.push_back("Civil engineering");
    clos_obc.push_back(16780);
    nirf_obc.push_back(1000); 
    col_obc.push_back("NIT Mizoram");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(8447);
    nirf_obc.push_back(1000); 
    col_obc.push_back("NIT Mizoram");
    br_obc.push_back("Electrical and Electronics engineering");
    clos_obc.push_back(14122);
    nirf_obc.push_back(1000); 
    col_obc.push_back("NIT Mizoram");
    br_obc.push_back("Electronics and Communication engineering");
    clos_obc.push_back(12031);
    nirf_obc.push_back(1000); 
    col_obc.push_back("NIT Mizoram");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(15943);
    nirf_obc.push_back(1000); 
     }
    {col_obc.push_back("IIIT GWALIOR");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(2719);
    nirf_obc.push_back(78); 
     
    }
    {  col_obc.push_back("IIIT Jabalpur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(4937);
    nirf_obc.push_back(82); 
    
       col_obc.push_back("IIIT Jabalpur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(7429);
    nirf_obc.push_back(82); 
    
       col_obc.push_back("IIIT Jabalpur");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(14664);
    nirf_obc.push_back(82); 
    
       col_obc.push_back("IIIT Jabalpur");
    br_obc.push_back("Smart Manufacturing");
    clos_obc.push_back(15238);
    nirf_obc.push_back(82); 
    
    }
    { col_obc.push_back("IIIT Allahabad");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(3760);
    nirf_obc.push_back(93); 
     col_obc.push_back("IIIT Allahabad");
    br_obc.push_back("Electronic and Communication(FAP) engineering");
    clos_obc.push_back(3597);
    nirf_obc.push_back(93); 
     col_obc.push_back("IIIT Allahabad");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(2024);
    nirf_obc.push_back(93); 
     col_obc.push_back("IIIT Allahabad");
    br_obc.push_back("Information Technology(FAP)");
    clos_obc.push_back(2272);
    nirf_obc.push_back(93); 
     col_obc.push_back("IIIT Allahabad");
    br_obc.push_back("Information Technology(Business Informatics)");
    clos_obc.push_back(2283);
    nirf_obc.push_back(93); 
    }
   { col_obc.push_back("IIIT Kancheepuram");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(5822);
    nirf_obc.push_back(184); 
    col_obc.push_back("IIIT Kancheepuram");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(9276);
    nirf_obc.push_back(184); 
    col_obc.push_back("IIIT Kancheepuram");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(15040);
    nirf_obc.push_back(184); 
    col_obc.push_back("IIIT Kancheepuram");
    br_obc.push_back("Computer Science(AI) and engineering");
    clos_obc.push_back(6032);
    nirf_obc.push_back(184); 
    col_obc.push_back("IIIT Kancheepuram");
    br_obc.push_back("Smart Manufacturing");
    clos_obc.push_back(14457);
    nirf_obc.push_back(184); 
   }
    {col_obc.push_back("IIIT Guwahati");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(7519);
    nirf_obc.push_back(1000); 
    col_obc.push_back("IIIT Guwahati");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(11022);
    nirf_obc.push_back(1000); 
    }
    {col_obc.push_back("IIIT Kurnool");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(11473);
    nirf_obc.push_back(1000); 
    col_obc.push_back("IIIT Kurnool");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(14234);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Kurnool");
    br_obc.push_back("Mechanical engineering");
    clos_obc.push_back(16194);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Kurnool");
    br_obc.push_back("Artificial Intelligence");
    clos_obc.push_back(12287);
    nirf_obc.push_back(1000);
    }
    {  col_obc.push_back("IIIT Kottayam");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(11452);
    nirf_obc.push_back(1000);
     col_obc.push_back("IIIT Kottayam");
    br_obc.push_back("Computer Science(AI) and engineering");
    clos_obc.push_back(11492);
    nirf_obc.push_back(1000);
     col_obc.push_back("IIIT Kottayam");
    br_obc.push_back("Computer Science(CYBER SECURITY) and engineering");
    clos_obc.push_back(12206);
    nirf_obc.push_back(1000);
     col_obc.push_back("IIIT Kottayam");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(13259);
    nirf_obc.push_back(1000);
    
    }
    { col_obc.push_back("IIIT Lucknow");
    br_obc.push_back("Computer Science and Business");
    clos_obc.push_back(3811);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Lucknow");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(3124);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Lucknow");
    br_obc.push_back("Computer Science(AI) and engineering");
    clos_obc.push_back(3040);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Lucknow");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(3621);
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
    clos_obc.push_back(12089);
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
    clos_obc.push_back(7719);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Vadodara");
    br_obc.push_back("Information Technology");
    clos_obc.push_back(8302);
    nirf_obc.push_back(1000);
     }
   { col_obc.push_back("IIIT Manipur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(14622);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Manipur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(16204);
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
    clos_obc.push_back(9082);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Tiruchirappalli");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(12126);
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
    clos_obc.push_back(6001);
    nirf_obc.push_back(1000);
     col_obc.push_back("IIIT Pune");
    br_obc.push_back("Electrical and Communication engineering");
    clos_obc.push_back(8244);
    nirf_obc.push_back(1000);
     }
    { col_obc.push_back("IIIT Bhagalpur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(13080);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Bhagalpur");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(14524);
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
    clos_obc.push_back(7926);
    nirf_obc.push_back(1000);
    col_obc.push_back("IIIT Surat");
    br_obc.push_back("Electronic and Communication engineering");
    clos_obc.push_back(10660);
    nirf_obc.push_back(1000);
    }
     { col_obc.push_back("IIIT Agartala");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(12288);
    nirf_obc.push_back(1000);
     }
     {col_obc.push_back("IIIT Raichur");
    br_obc.push_back("Computer Science and engineering");
    clos_obc.push_back(11369);
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
      
    func_obcM2(h,m,col_obc,br_obc,clos_obc,nirf_obc,obc_rank);
    func_obcM(m,col_obc,br_obc,clos_obc);

    break;
    case 2:
    
   
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Computer Science and engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Computer Science and engineering");
    break;
    case 3:
     
    
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Electronic and Communication engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Electronic and Communication engineering");
    break;
    
    
    break;
    case 4:
     
    // func_obcM2(h,m,col_obc,br_obc,clos_obc,nirf_obc,obc_rank);

    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Mechanical engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Mechanical engineering");
    break;
    case 5:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Bio Technology",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Bio Technology");
    break;
    case 6:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Chemical engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Chemical engineering");
    break;
    case 7:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Civil engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Civil engineering");
    break;
    case 8:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Electrical engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Electrical engineering");
    break;
    case 9:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Metallurgical and Materials engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Metallurgical and Materials engineering");
    break;
    case 10:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Mining engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Mining engineering");
    break;
    case 11:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Information Technology",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Information Technology");
    break;
    case 12:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Bio Medical engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Bio Medical engineering");
    break;
    
    case 13:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Computational and Data Science engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Computational and Data Science engineering");
    break;
    
    case 14:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Electrical and Electronics engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Electrical and Electronics engineering");
    break;
    
    case 15:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Artificial Intelligence",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Artificial Intelligence");
    break;
    
    case 16:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Engineering Physics",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Engineering Physics");
    break;
    
    case 17:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Materials Science and engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Materials Science and engineering");
    break;
    
    case 18:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Production engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Production engineering");
    break;
    
    case 19:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Instrumentation and Control engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Instrumentation and Control engineering");
    break;
    
    case 20:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Ceramic engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Ceramic engineering");
    break;
    
    case 21:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Electronics and Instrumentation engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Electronics and Instrumentation engineering");
    break;
    
    case 22:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Industrial Design engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Industrial Design engineering");
    break;
    
    case 23:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Food Process engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Food Process engineering");
    break;
    
    case 24:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Production and Industrial engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Production and Industrial engineering");
    break;
    
    case 25:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Textile engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Textile engineering");
    break;
    
    case 26:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Industrial and Production engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Industrial and Production engineering");
    break;
    
    case 27:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Biotechnology and Biochemical engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Biotechnology and Biochemical engineering");
    break;
    
    case 28:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Engineering and Computational Mechanics",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Engineering and Computational Mechanics");
    break;
    
    case 29:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Mathematics and Computing",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Mathematics and Computing");
    break;
    
    case 30:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Smart Manufacturing",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Smart Manufacturing");
    break;
    
    case 31:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Electronic and Communication(FAP) engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Electronic and Communication(FAP) engineering");
    break;
    
    case 32:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Information Technology(FAP)",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Information Technology(FAP)");
    break;
    
    case 33:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Information Technology(Business Informatics)",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Information Technology(Business Informatics)");
    break;
    
    case 34:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Computer Science(AI) and engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Computer Science(AI) and engineering");
    break;
    
    case 35:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Electronic and Communication(embedded systems)",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Electronic and Communication(embedded systems)");
    break;
    
    case 36:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Data Science and Artificial Intelligence",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Data Science and Artificial Intelligence");
    break;
    
    case 37:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Computer Science(Gaming) and engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Computer Science(Gaming) and engineering");
    break;
    
    case 38:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Computer Science(Data Science) and engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Computer Science(Data Science) and engineering");
    break;

    case 39:
    func_obcM3(h,m,col_obc,br_obc,clos_obc,nirf_obc,"Mechatronics engineering",obc_rank);
    func_obcM1(m,col_obc,br_obc,clos_obc,"Mechatronics engineering");
    break;
    }
}