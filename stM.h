#include<bits/stdc++.h>
using namespace std;
// multimap<int,int>m;
int lenstM(int f){
  int i=0;
  for(;f>0;i++){
    f/=10;
  }
  return i;
}
void func_stM( multimap<int,int>m,vector<string>col_st,vector<string>br_st,vector<int>clos_st){
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
            int nirf_size=10-lenstM(clos_st[i]);
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
void func_stM2( multimap<int,int>&h,multimap<int,int>&m,vector<string>col_st,vector<string>br_st,vector<int>clos_st,vector<int>nirf_st,int st_rank){
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
void func_stM3(multimap<int,int>&h,multimap<int,int>&m,vector<string>col_st,vector<string>br_st,vector<int>clos_st,vector<int>nirf_st,string s,int st_rank){
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
void func_stM1(multimap<int,int>m,vector<string>col_st,vector<string>br_st,vector<int>clos_st,string s){
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
            int nirf_size=10-lenstM(clos_st[i]);
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
void stM(){
    cout<<"enter your st_rank"<<endl;
    int st_rank;cin>>st_rank;
      vector<string>col_st;vector<string>br_st;vector<int>clos_st;vector<int>nirf_st;
{
   { col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(444);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Electronic and Communication engineering");  
    clos_st.push_back(1566);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(4629);
    nirf_st.push_back(10);
     col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(5931);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Civil engineering");
    clos_st.push_back(7381);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Computational and Data Science engineering");
    clos_st.push_back(1376);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(8303);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Mining engineering");
    clos_st.push_back(9917);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(2889);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Information Technology");
    clos_st.push_back(816);
    nirf_st.push_back(10);
    col_st.push_back("NIT SURATHKAL");
    br_st.push_back("Artificial Intelligence");
    clos_st.push_back(963);
    nirf_st.push_back(10);
   }
   { col_st.push_back("NIT WARANGAL");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(662);
    nirf_st.push_back(21);
    col_st.push_back("NIT WARANGAL");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1943);
    nirf_st.push_back(21);
    col_st.push_back("NIT WARANGAL");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(10129);
    nirf_st.push_back(21);
    col_st.push_back("NIT WARANGAL");
    br_st.push_back("Bio Technology");
    clos_st.push_back(5648);
    nirf_st.push_back(21);
     col_st.push_back("NIT WARANGAL");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(6770);
    nirf_st.push_back(21);
     col_st.push_back("NIT WARANGAL");
    br_st.push_back("Civil engineering");
    clos_st.push_back(8063);
    nirf_st.push_back(21);
     col_st.push_back("NIT WARANGAL");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(9291);
    nirf_st.push_back(21);
     col_st.push_back("NIT WARANGAL");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(3454);
    nirf_st.push_back(21);
   }
   {col_st.push_back("NIT CALICUT");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1242);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(2926);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(7418);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Bio Technology");
    clos_st.push_back(12464);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(9683);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Civil engineering");
    clos_st.push_back(11538);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Engineering Physics");
    clos_st.push_back(7486);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Materials Science and engineering");
    clos_st.push_back(12233);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(4881);
    nirf_st.push_back(31);
    col_st.push_back("NIT CALICUT");
    br_st.push_back("Production engineering");
    clos_st.push_back(11823);
    nirf_st.push_back(31);
   }
   {col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(5733);
    nirf_st.push_back(8);
    col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Civil engineering");
    clos_st.push_back(6843);
    nirf_st.push_back(8);
    col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(367);
    nirf_st.push_back(8);
    col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(1409);
    nirf_st.push_back(8);
    col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(4098);
    nirf_st.push_back(8);
    col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(7805);
    nirf_st.push_back(8);
    col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(2520);
    nirf_st.push_back(8);
    col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Production engineering");
    clos_st.push_back(9345);
    nirf_st.push_back(8);
    col_st.push_back("NIT Tiruchirapally");
    br_st.push_back("Instrumentation and Control engineering");
    clos_st.push_back(5351);
    nirf_st.push_back(8);
    }
   { col_st.push_back("NIT Rourkela");
    br_st.push_back("Bio Technology");
    clos_st.push_back(11356);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Ceramic engineering");
    clos_st.push_back(13023);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(6930);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Civil engineering");
    clos_st.push_back(8989);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(930);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(4127);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(5988);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(10793);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Mining engineering");
    clos_st.push_back(12361);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Electronics and Instrumentation engineering");
    clos_st.push_back(4585);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Bio Medical engineering");
    clos_st.push_back(12960);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Industrial Design engineering");
    clos_st.push_back(11051);
    nirf_st.push_back(15);
    col_st.push_back("NIT Rourkela");
    br_st.push_back("Food Process engineering");
    clos_st.push_back(13629);
    nirf_st.push_back(15);
   }   
    {col_st.push_back("NIT Nagpur");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(10542);
    nirf_st.push_back(32);
    col_st.push_back("NIT Nagpur");
    br_st.push_back("Civil engineering");
    clos_st.push_back(11774);
    nirf_st.push_back(32);
    col_st.push_back("NIT Nagpur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1627);
    nirf_st.push_back(32);
    col_st.push_back("NIT Nagpur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(3474);
    nirf_st.push_back(32);
    col_st.push_back("NIT Nagpur");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(8047);
    nirf_st.push_back(32);
    col_st.push_back("NIT Nagpur");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(13909);
    nirf_st.push_back(32);
    col_st.push_back("NIT Nagpur");
    br_st.push_back("Mining engineering");
    clos_st.push_back(14716);
    nirf_st.push_back(32);
    col_st.push_back("NIT Nagpur");
    br_st.push_back("Electrical and Electronic engineering");
    clos_st.push_back(5660);
    nirf_st.push_back(32);
    }
    { col_st.push_back("NIT Durgapur");
    br_st.push_back("Bio Technology");
    clos_st.push_back(15519);
    nirf_st.push_back(34);
    col_st.push_back("NIT Durgapur");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(15449);
    nirf_st.push_back(34);
    col_st.push_back("NIT Durgapur");
    br_st.push_back("Civil engineering");
    clos_st.push_back(12572);
    nirf_st.push_back(34);
    col_st.push_back("NIT Durgapur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2599);
    nirf_st.push_back(34);
    col_st.push_back("NIT Durgapur");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(6650);
    nirf_st.push_back(34);
    col_st.push_back("NIT Durgapur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(4052);
    nirf_st.push_back(34);
    col_st.push_back("NIT Durgapur");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(14390);
    nirf_st.push_back(34);
    col_st.push_back("NIT Durgapur");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(9937);
    nirf_st.push_back(34);
    }
     { col_st.push_back("NIT Silchar");
    br_st.push_back("Civil engineering");
    clos_st.push_back(14208);
    nirf_st.push_back(38);
    col_st.push_back("NIT Silchar");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(3408);
    nirf_st.push_back(38);
    col_st.push_back("NIT Silchar");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(8662);
    nirf_st.push_back(38);
    col_st.push_back("NIT Silchar");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(5161);
    nirf_st.push_back(38);
    col_st.push_back("NIT Silchar");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(11450);
    nirf_st.push_back(38);
    col_st.push_back("NIT Silchar");
    br_st.push_back("Electronics and Instrumentation engineering");
    clos_st.push_back(7889);
    nirf_st.push_back(38);
     }
    {  col_st.push_back("NIT Jaipur");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(9656);
    nirf_st.push_back(46);
     col_st.push_back("NIT Jaipur");
    br_st.push_back("Civil engineering");
    clos_st.push_back(10922);
    nirf_st.push_back(46);
     col_st.push_back("NIT Jaipur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1514);
    nirf_st.push_back(46);
     col_st.push_back("NIT Jaipur");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(5275);
    nirf_st.push_back(46);
     col_st.push_back("NIT Jaipur");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(7877);
    nirf_st.push_back(46);
     col_st.push_back("NIT Jaipur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(3325);
    nirf_st.push_back(46);
     col_st.push_back("NIT Jaipur");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(13489);
    nirf_st.push_back(46);

    }
      {col_st.push_back("NIT Allahabad");
    br_st.push_back("Bio Technology");
    clos_st.push_back(12137);
    nirf_st.push_back(47);
      col_st.push_back("NIT Allahabad");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(7820);
    nirf_st.push_back(47);
      col_st.push_back("NIT Allahabad");
    br_st.push_back("Civil engineering");
    clos_st.push_back(9148);
    nirf_st.push_back(47);
      col_st.push_back("NIT Allahabad");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(1305);
    nirf_st.push_back(47);
      col_st.push_back("NIT Allahabad");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(4400);
    nirf_st.push_back(47);
      col_st.push_back("NIT Allahabad");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(3030);
    nirf_st.push_back(47);
      col_st.push_back("NIT Allahabad");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(7211);
    nirf_st.push_back(47);
      col_st.push_back("NIT Allahabad");
    br_st.push_back("Production and Industrial engineering");
    clos_st.push_back(11569);
    nirf_st.push_back(47);
      }
      {col_st.push_back("NIT Kurukshetra");
    br_st.push_back("Civil engineering");
    clos_st.push_back(12303);
    nirf_st.push_back(50);
     col_st.push_back("NIT Kurukshetra");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(6395);
    nirf_st.push_back(50);
     col_st.push_back("NIT Kurukshetra");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(4269);
    nirf_st.push_back(50);
     col_st.push_back("NIT Kurukshetra");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(8987);
    nirf_st.push_back(50);
     col_st.push_back("NIT Kurukshetra");
    br_st.push_back("Production and Industrial engineering");
    clos_st.push_back(14021);
    nirf_st.push_back(50);
     col_st.push_back("NIT Kurukshetra");
    br_st.push_back("Information Technology");
    clos_st.push_back(2611);
    nirf_st.push_back(50);
     col_st.push_back("NIT Kurukshetra");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2234);
    nirf_st.push_back(50);
      }   
     { col_st.push_back("NIT Jalandar");
    br_st.push_back("Bio Technology");
    clos_st.push_back(15242);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(13237);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Civil engineering");
    clos_st.push_back(13519);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(3095);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(7144);
    nirf_st.push_back(52); col_st.push_back("NIT Jalandar");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(5220);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(11590);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Textile engineering");
    clos_st.push_back(15950);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Information Technology");
    clos_st.push_back(3641);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Instrumentation and Control engineering");
    clos_st.push_back(11427);
    nirf_st.push_back(52);
     col_st.push_back("NIT Jalandar");
    br_st.push_back("Industrial and Production engineering");
    clos_st.push_back(14373);
    nirf_st.push_back(52);
     }
    { col_st.push_back("NIT Surat");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(12153);
    nirf_st.push_back(58);
    col_st.push_back("NIT Surat");
    br_st.push_back("Civil engineering");
    clos_st.push_back(12473);
    nirf_st.push_back(58);
    col_st.push_back("NIT Surat");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2101);
    nirf_st.push_back(58);
    col_st.push_back("NIT Surat");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(6728);
    nirf_st.push_back(58);
    col_st.push_back("NIT Surat");
    br_st.push_back("Electricons and Communication engineering");
    clos_st.push_back(4549);
    nirf_st.push_back(58);
    col_st.push_back("NIT Surat");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(10358);
    nirf_st.push_back(58);
    }
     { col_st.push_back("NIT Meghalaya");
    br_st.push_back("Civil engineering");
    clos_st.push_back(15729);
    nirf_st.push_back(60);
     col_st.push_back("NIT Meghalaya");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(5195);
    nirf_st.push_back(60);
     col_st.push_back("NIT Meghalaya");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(8596);
    nirf_st.push_back(60);
     col_st.push_back("NIT Meghalaya");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(13378);
    nirf_st.push_back(60);
     col_st.push_back("NIT Meghalaya");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(10578);
    nirf_st.push_back(60);
     }
    { col_st.push_back("NIT Patna");
    br_st.push_back("Civil engineering");
    clos_st.push_back(14723);
    nirf_st.push_back(63); 
    col_st.push_back("NIT Patna");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(3918);
    nirf_st.push_back(63);
    col_st.push_back("NIT Patna");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(9296);
    nirf_st.push_back(63);
    col_st.push_back("NIT Patna");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(6642);
    nirf_st.push_back(63);
    col_st.push_back("NIT Patna");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(18750);
    nirf_st.push_back(63); 
    }
    { col_st.push_back("NIT Raipur");
    br_st.push_back("Bio Technology");
    clos_st.push_back(15849);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(13090);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Civil engineering");
    clos_st.push_back(14273);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(3223);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(8189);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(5712);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(11790);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(15492);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Mining engineering");
    clos_st.push_back(16073);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Information Technology");
    clos_st.push_back(4075);
    nirf_st.push_back(65);
     col_st.push_back("NIT Raipur");
    br_st.push_back("Bio Medical engineering");
    clos_st.push_back(16415);
    nirf_st.push_back(65);
    }
   {  col_st.push_back("NIT Srinagar");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(16468);
    nirf_st.push_back(66);
    col_st.push_back("NIT Srinagar");
    br_st.push_back("Civil engineering");
    clos_st.push_back(16753);
    nirf_st.push_back(66);
    col_st.push_back("NIT Srinagar");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(6861);
    nirf_st.push_back(66);
    col_st.push_back("NIT Srinagar");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(13448);
    nirf_st.push_back(66);
    col_st.push_back("NIT Srinagar");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(10274);
    nirf_st.push_back(66);
col_st.push_back("NIT Srinagar");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(15187);
    nirf_st.push_back(66);
    col_st.push_back("NIT Srinagar");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(17354);
    nirf_st.push_back(66); 
    col_st.push_back("NIT Srinagar");
    br_st.push_back("Information Technology");
    clos_st.push_back(8420);
    nirf_st.push_back(66);
      }
     { col_st.push_back("NIT Bhopal");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(12410);
    nirf_st.push_back(70);
     col_st.push_back("NIT Bhopal");
    br_st.push_back("Civil engineering");
    clos_st.push_back(12558);
    nirf_st.push_back(70);
     col_st.push_back("NIT Bhopal");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2755);
    nirf_st.push_back(70);
     col_st.push_back("NIT Bhopal");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(7221);
    nirf_st.push_back(70);
     col_st.push_back("NIT Bhopal");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(5228);
    nirf_st.push_back(70);
     col_st.push_back("NIT Bhopal");
    br_st.push_back("Mehcanical engineering");
    clos_st.push_back(15221);
    nirf_st.push_back(70);
     }
    { col_st.push_back("NIT Agartala");
    br_st.push_back("Biotechnology and Biochemical engineering");
    clos_st.push_back(16842);
    nirf_st.push_back(80);
     col_st.push_back("NIT Agartala");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(16056);
    nirf_st.push_back(80);
     col_st.push_back("NIT Agartala");
    br_st.push_back("Civil engineering");
    clos_st.push_back(15898);
    nirf_st.push_back(80);
     col_st.push_back("NIT Agartala");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(6267);
    nirf_st.push_back(80);
     col_st.push_back("NIT Agartala");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(12100);
    nirf_st.push_back(80);
     col_st.push_back("NIT Agartala");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(9209);
    nirf_st.push_back(80);
     col_st.push_back("NIT Agartala");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(14616);
    nirf_st.push_back(80);
     col_st.push_back("NIT Agartala");
    br_st.push_back("Production engineering");
    clos_st.push_back(16828);
    nirf_st.push_back(80);
     col_st.push_back("NIT Agartala");
    br_st.push_back("Electronics and Instrumentation engineering");
    clos_st.push_back(14616);
    nirf_st.push_back(80);

    }
     {  col_st.push_back("NIT Goa");
    br_st.push_back("Civil engineering");
    clos_st.push_back(14172);
    nirf_st.push_back(88);
    col_st.push_back("NIT Goa");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(3894);
    nirf_st.push_back(88);
    col_st.push_back("NIT Goa");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(5911);
    nirf_st.push_back(88);
    col_st.push_back("NIT Goa");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(11506);
    nirf_st.push_back(88);
    col_st.push_back("NIT Goa");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(8513);
    nirf_st.push_back(88);
     }
    { col_st.push_back("NIT Jamshedpur");
    br_st.push_back("Civil engineering");
    clos_st.push_back(13340);
    nirf_st.push_back(90);
     col_st.push_back("NIT Jamshedpur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2647);
    nirf_st.push_back(90);
     col_st.push_back("NIT Jamshedpur");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(6903);
    nirf_st.push_back(90);
     col_st.push_back("NIT Jamshedpur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(5205);
    nirf_st.push_back(90);
     col_st.push_back("NIT Jamshedpur");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(10384);
    nirf_st.push_back(90);
     col_st.push_back("NIT Jamshedpur");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(14470);
    nirf_st.push_back(90);
     col_st.push_back("NIT Jamshedpur");
    br_st.push_back("Production and Industrial engineering");
    clos_st.push_back(14331);
    nirf_st.push_back(90);
     col_st.push_back("NIT Jamshedpur");
    br_st.push_back("Engineering and Computational Mechanics");
    clos_st.push_back(6076);
    nirf_st.push_back(90);

    }
     { col_st.push_back("NIT Manipur");
    br_st.push_back("Civil engineering");
    clos_st.push_back(16306);
    nirf_st.push_back(108);
      col_st.push_back("NIT Manipur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(8156);
    nirf_st.push_back(108);
      col_st.push_back("NIT Manipur");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(13982);
    nirf_st.push_back(108);
      col_st.push_back("NIT Manipur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(10525);
    nirf_st.push_back(108);
      col_st.push_back("NIT Manipur");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(15543);
    nirf_st.push_back(108);
    
         }
    {  col_st.push_back("NIT Hamirpur");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(13581);
    nirf_st.push_back(128);
    col_st.push_back("NIT Hamirpur");
    br_st.push_back("Civil engineering");
    clos_st.push_back(14242);
    nirf_st.push_back(128);col_st.push_back("NIT Hamirpur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(3435);
    nirf_st.push_back(128);
    col_st.push_back("NIT Hamirpur");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(8627);
    nirf_st.push_back(128);
    col_st.push_back("NIT Hamirpur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(5784);
    nirf_st.push_back(128);
    col_st.push_back("NIT Hamirpur");
    br_st.push_back("Engineering Physics");
    clos_st.push_back(12230);
    nirf_st.push_back(128);
    col_st.push_back("NIT Hamirpur");
    br_st.push_back("Materials Science and engineering");
    clos_st.push_back(15450);
    nirf_st.push_back(128);
    col_st.push_back("NIT Hamirpur");
    br_st.push_back("Mathematics and Computing");
    clos_st.push_back(5215);
    nirf_st.push_back(128);
    col_st.push_back("NIT Hamirpur");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(11740);
    nirf_st.push_back(128);
    }
    {  col_st.push_back("NIT Uttarakhand");
    br_st.push_back("Civil engineering");
    clos_st.push_back(31069);
    nirf_st.push_back(131);
    col_st.push_back("NIT Uttarakhand");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(5797);
    nirf_st.push_back(131);
    col_st.push_back("NIT Uttarakhand");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(7795);
    nirf_st.push_back(131);
    col_st.push_back("NIT Uttarakhand");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(13464);
    nirf_st.push_back(131);
    col_st.push_back("NIT Uttarakhand");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(4781);
    nirf_st.push_back(131);
    }
    { col_st.push_back("NIT Puducherry");
    br_st.push_back("Civil engineering");
    clos_st.push_back(15125);
    nirf_st.push_back(136);
     col_st.push_back("NIT Puducherry");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(5582);
    nirf_st.push_back(136);
     col_st.push_back("NIT Puducherry");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(7493);
    nirf_st.push_back(136);
     col_st.push_back("NIT Puducherry");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(13852);
    nirf_st.push_back(136);
     col_st.push_back("NIT Puducherry");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(11219);
    nirf_st.push_back(136);
    }
     {col_st.push_back("NIT Arunanchal");
    br_st.push_back("Civil engineering");
    clos_st.push_back(16308);
    nirf_st.push_back(171);
     col_st.push_back("NIT Arunanchal");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(8172);
    nirf_st.push_back(171);
     col_st.push_back("NIT Arunanchal");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(13168);
    nirf_st.push_back(171);
     col_st.push_back("NIT Arunanchal");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(10289);
    nirf_st.push_back(171);
     col_st.push_back("NIT Arunanchal");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(15200);
    nirf_st.push_back(171);

     }
   {col_st.push_back("NIT Sikkim");
    br_st.push_back("Civil engineering");
    clos_st.push_back(16193);
    nirf_st.push_back(173);
    col_st.push_back("NIT Sikkim");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(7791);
    nirf_st.push_back(173);
    col_st.push_back("NIT Sikkim");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(11454);
    nirf_st.push_back(173);
    col_st.push_back("NIT Sikkim");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(10154);
    nirf_st.push_back(173);
    col_st.push_back("NIT Sikkim");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(15307);
    nirf_st.push_back(173);

   }
    {col_st.push_back("NIT Delhi");
    br_st.push_back("Civil engineering");
    clos_st.push_back(11319);
    nirf_st.push_back(194); 
    col_st.push_back("NIT Delhi");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(3127);
    nirf_st.push_back(194); 
    col_st.push_back("NIT Delhi");
    br_st.push_back("Electrical engineering");
    clos_st.push_back(7222);
    nirf_st.push_back(194); 
    col_st.push_back("NIT Delhi");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(5128);
    nirf_st.push_back(194); 
    col_st.push_back("NIT Delhi");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(9797);
    nirf_st.push_back(194); 

    }
    {col_st.push_back("NIT Andhra");
    br_st.push_back("Bio Technology");
    clos_st.push_back(16252);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Andhra");
    br_st.push_back("Chemical engineering");
    clos_st.push_back(14813);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Andhra");
    br_st.push_back("Civil engineering");
    clos_st.push_back(15465);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Andhra");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(5828);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Andhra");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(11661);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Andhra");
    br_st.push_back("Electronics and Communication engineering");
    clos_st.push_back(8819);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Andhra");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(14464);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Andhra");
    br_st.push_back("Metallurgical and Materials engineering");
    clos_st.push_back(15758);
    nirf_st.push_back(1000); 
     
    }
     { col_st.push_back("NIT Nagaland");
    br_st.push_back("Civil engineering");
    clos_st.push_back(16719);
    nirf_st.push_back(1000);
     col_st.push_back("NIT Nagaland");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(8388);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Nagaland");
    br_st.push_back("Electronics and Communication engineering");
    clos_st.push_back(10923);
    nirf_st.push_back(1000);  
     col_st.push_back("NIT Nagaland");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(15626);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Nagaland");
    br_st.push_back("Electronics and Instrumentation engineering");
    clos_st.push_back(13910);
    nirf_st.push_back(1000); 
     col_st.push_back("NIT Nagaland");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(14116);
    nirf_st.push_back(1000); 
     
     }
     { col_st.push_back("NIT Mizoram");
    br_st.push_back("Civil engineering");
    clos_st.push_back(16780);
    nirf_st.push_back(1000); 
    col_st.push_back("NIT Mizoram");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(8447);
    nirf_st.push_back(1000); 
    col_st.push_back("NIT Mizoram");
    br_st.push_back("Electrical and Electronics engineering");
    clos_st.push_back(14122);
    nirf_st.push_back(1000); 
    col_st.push_back("NIT Mizoram");
    br_st.push_back("Electronics and Communication engineering");
    clos_st.push_back(12031);
    nirf_st.push_back(1000); 
    col_st.push_back("NIT Mizoram");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(15943);
    nirf_st.push_back(1000); 
     }
    {col_st.push_back("IIIT GWALIOR");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(2719);
    nirf_st.push_back(78); 
     
    }
    {  col_st.push_back("IIIT Jabalpur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(4937);
    nirf_st.push_back(82); 
    
       col_st.push_back("IIIT Jabalpur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(7429);
    nirf_st.push_back(82); 
    
       col_st.push_back("IIIT Jabalpur");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(14664);
    nirf_st.push_back(82); 
    
       col_st.push_back("IIIT Jabalpur");
    br_st.push_back("Smart Manufacturing");
    clos_st.push_back(15238);
    nirf_st.push_back(82); 
    
    }
    { col_st.push_back("IIIT Allahabad");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(3760);
    nirf_st.push_back(93); 
     col_st.push_back("IIIT Allahabad");
    br_st.push_back("Electronic and Communication(FAP) engineering");
    clos_st.push_back(3597);
    nirf_st.push_back(93); 
     col_st.push_back("IIIT Allahabad");
    br_st.push_back("Information Technology");
    clos_st.push_back(2024);
    nirf_st.push_back(93); 
     col_st.push_back("IIIT Allahabad");
    br_st.push_back("Information Technology(FAP)");
    clos_st.push_back(2272);
    nirf_st.push_back(93); 
     col_st.push_back("IIIT Allahabad");
    br_st.push_back("Information Technology(Business Informatics)");
    clos_st.push_back(2283);
    nirf_st.push_back(93); 
    }
   { col_st.push_back("IIIT Kancheepuram");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(5822);
    nirf_st.push_back(184); 
    col_st.push_back("IIIT Kancheepuram");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(9276);
    nirf_st.push_back(184); 
    col_st.push_back("IIIT Kancheepuram");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(15040);
    nirf_st.push_back(184); 
    col_st.push_back("IIIT Kancheepuram");
    br_st.push_back("Computer Science(AI) and engineering");
    clos_st.push_back(6032);
    nirf_st.push_back(184); 
    col_st.push_back("IIIT Kancheepuram");
    br_st.push_back("Smart Manufacturing");
    clos_st.push_back(14457);
    nirf_st.push_back(184); 
   }
    {col_st.push_back("IIIT Guwahati");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(7519);
    nirf_st.push_back(1000); 
    col_st.push_back("IIIT Guwahati");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(11022);
    nirf_st.push_back(1000); 
    }
    {col_st.push_back("IIIT Kurnool");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(11473);
    nirf_st.push_back(1000); 
    col_st.push_back("IIIT Kurnool");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(14234);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Kurnool");
    br_st.push_back("Mechanical engineering");
    clos_st.push_back(16194);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Kurnool");
    br_st.push_back("Artificial Intelligence");
    clos_st.push_back(12287);
    nirf_st.push_back(1000);
    }
    {  col_st.push_back("IIIT Kottayam");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(11452);
    nirf_st.push_back(1000);
     col_st.push_back("IIIT Kottayam");
    br_st.push_back("Computer Science(AI) and engineering");
    clos_st.push_back(11492);
    nirf_st.push_back(1000);
     col_st.push_back("IIIT Kottayam");
    br_st.push_back("Computer Science(CYBER SECURITY) and engineering");
    clos_st.push_back(12206);
    nirf_st.push_back(1000);
     col_st.push_back("IIIT Kottayam");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(13259);
    nirf_st.push_back(1000);
    
    }
    { col_st.push_back("IIIT Lucknow");
    br_st.push_back("Computer Science and Business");
    clos_st.push_back(3811);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Lucknow");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(3124);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Lucknow");
    br_st.push_back("Computer Science(AI) and engineering");
    clos_st.push_back(3040);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Lucknow");
    br_st.push_back("Information Technology");
    clos_st.push_back(3621);
    nirf_st.push_back(1000);
    }
     { col_st.push_back("IIIT Kota");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(7528);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT kota");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(10300);
    nirf_st.push_back(1000);
     }
    { col_st.push_back("IIIT Kalyani");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(12089);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Kalyani");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(14351);
    nirf_st.push_back(1000);
    }
    { col_st.push_back("IIIT Sonepat");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(7996);
    nirf_st.push_back(1000);
     col_st.push_back("IIIT Sonepat");
    br_st.push_back("Information Technology");
    clos_st.push_back(8919);
    nirf_st.push_back(1000);
    }
    {  col_st.push_back("IIIT Una");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(9587);
    nirf_st.push_back(1000);
       col_st.push_back("IIIT Una");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(13287);
    nirf_st.push_back(1000);
       col_st.push_back("IIIT Una");
    br_st.push_back("Information Technology");
    clos_st.push_back(11045);
    nirf_st.push_back(1000);
    }
    { col_st.push_back("IIIT Sri city");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(10178);
    nirf_st.push_back(1000);
       col_st.push_back("IIIT Sri city");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(13127);
    nirf_st.push_back(1000);
    }
     {   col_st.push_back("IIIT Vadodara");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(7719);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Vadodara");
    br_st.push_back("Information Technology");
    clos_st.push_back(8302);
    nirf_st.push_back(1000);
     }
   { col_st.push_back("IIIT Manipur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(14622);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Manipur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(16204);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Manipur");
    br_st.push_back("Computer Science(AI) and engineering");
    clos_st.push_back(14940);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Manipur");
    br_st.push_back("Electronic and Communication(embedded systems)");
    clos_st.push_back(16398);
    nirf_st.push_back(1000);
   }
    { col_st.push_back("IIIT Tiruchirappalli");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(9082);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Tiruchirappalli");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(12126);
    nirf_st.push_back(1000);
    }
    { col_st.push_back("IIIT Dharwad");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(12152);
    nirf_st.push_back(1000);
     col_st.push_back("IIIT Dharwad");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(13580);
    nirf_st.push_back(1000);
     col_st.push_back("IIIT Dharwad");
    br_st.push_back("Data Science and Artificial Intelligence");
    clos_st.push_back(12925);
    nirf_st.push_back(1000);
    }
    {col_st.push_back("IIIT Ranchi");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(11381);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Ranchi");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(13914);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Ranchi");
    br_st.push_back("Computer Science(AI) and engineering");
    clos_st.push_back(11260);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Ranchi");
    br_st.push_back("Electronic and Communication(embedded systems)");
    clos_st.push_back(13842);
    nirf_st.push_back(1000);
    }
     { col_st.push_back("IIIT Nagpur");
    br_st.push_back("Computer Science(AI) and engineering");
    clos_st.push_back(9918);
    nirf_st.push_back(1000);
      col_st.push_back("IIIT Nagpur");
    br_st.push_back("Computer Science(Data Science) and engineering");
    clos_st.push_back(10276);
    nirf_st.push_back(1000);
      col_st.push_back("IIIT Nagpur");
    br_st.push_back("Computer Science(Gaming) and engineering");
    clos_st.push_back(10821);
    nirf_st.push_back(1000);
      col_st.push_back("IIIT Nagpur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(9240);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Nagpur");
    br_st.push_back("Electronic and Communication(IOT) engineering");
    clos_st.push_back(13156);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Nagpur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(12771);
    nirf_st.push_back(1000);
     }
     { col_st.push_back("IIIT Pune");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(6001);
    nirf_st.push_back(1000);
     col_st.push_back("IIIT Pune");
    br_st.push_back("Electrical and Communication engineering");
    clos_st.push_back(8244);
    nirf_st.push_back(1000);
     }
    { col_st.push_back("IIIT Bhagalpur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(13080);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Bhagalpur");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(14524);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Bhagalpur");
    br_st.push_back("Mechatronics engineering");
    clos_st.push_back(15585);
    nirf_st.push_back(1000);
   
    }
    { col_st.push_back("IIIT Bhopal");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(8280);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Bhopal");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(12745);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Bhopal");
    br_st.push_back("Information Technology");
    clos_st.push_back(9770);
    nirf_st.push_back(1000);
    }
    {col_st.push_back("IIIT Surat");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(7926);
    nirf_st.push_back(1000);
    col_st.push_back("IIIT Surat");
    br_st.push_back("Electronic and Communication engineering");
    clos_st.push_back(10660);
    nirf_st.push_back(1000);
    }
     { col_st.push_back("IIIT Agartala");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(12288);
    nirf_st.push_back(1000);
     }
     {col_st.push_back("IIIT Raichur");
    br_st.push_back("Computer Science and engineering");
    clos_st.push_back(11369);
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
      
    func_stM2(h,m,col_st,br_st,clos_st,nirf_st,st_rank);
    func_stM(m,col_st,br_st,clos_st);

    break;
    case 2:
    
   
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Computer Science and engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Computer Science and engineering");
    break;
    case 3:
     
    
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Electronic and Communication engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Electronic and Communication engineering");
    break;
    
    
    break;
    case 4:
     
    // func_stM2(h,m,col_st,br_st,clos_st,nirf_st,st_rank);

    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Mechanical engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Mechanical engineering");
    break;
    case 5:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Bio Technology",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Bio Technology");
    break;
    case 6:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Chemical engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Chemical engineering");
    break;
    case 7:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Civil engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Civil engineering");
    break;
    case 8:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Electrical engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Electrical engineering");
    break;
    case 9:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Metallurgical and Materials engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Metallurgical and Materials engineering");
    break;
    case 10:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Mining engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Mining engineering");
    break;
    case 11:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Information Technology",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Information Technology");
    break;
    case 12:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Bio Medical engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Bio Medical engineering");
    break;
    
    case 13:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Computational and Data Science engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Computational and Data Science engineering");
    break;
    
    case 14:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Electrical and Electronics engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Electrical and Electronics engineering");
    break;
    
    case 15:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Artificial Intelligence",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Artificial Intelligence");
    break;
    
    case 16:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Engineering Physics",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Engineering Physics");
    break;
    
    case 17:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Materials Science and engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Materials Science and engineering");
    break;
    
    case 18:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Production engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Production engineering");
    break;
    
    case 19:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Instrumentation and Control engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Instrumentation and Control engineering");
    break;
    
    case 20:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Ceramic engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Ceramic engineering");
    break;
    
    case 21:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Electronics and Instrumentation engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Electronics and Instrumentation engineering");
    break;
    
    case 22:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Industrial Design engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Industrial Design engineering");
    break;
    
    case 23:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Food Process engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Food Process engineering");
    break;
    
    case 24:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Production and Industrial engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Production and Industrial engineering");
    break;
    
    case 25:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Textile engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Textile engineering");
    break;
    
    case 26:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Industrial and Production engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Industrial and Production engineering");
    break;
    
    case 27:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Biotechnology and Biochemical engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Biotechnology and Biochemical engineering");
    break;
    
    case 28:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Engineering and Computational Mechanics",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Engineering and Computational Mechanics");
    break;
    
    case 29:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Mathematics and Computing",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Mathematics and Computing");
    break;
    
    case 30:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Smart Manufacturing",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Smart Manufacturing");
    break;
    
    case 31:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Electronic and Communication(FAP) engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Electronic and Communication(FAP) engineering");
    break;
    
    case 32:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Information Technology(FAP)",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Information Technology(FAP)");
    break;
    
    case 33:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Information Technology(Business Informatics)",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Information Technology(Business Informatics)");
    break;
    
    case 34:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Computer Science(AI) and engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Computer Science(AI) and engineering");
    break;
    
    case 35:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Electronic and Communication(embedded systems)",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Electronic and Communication(embedded systems)");
    break;
    
    case 36:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Data Science and Artificial Intelligence",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Data Science and Artificial Intelligence");
    break;
    
    case 37:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Computer Science(Gaming) and engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Computer Science(Gaming) and engineering");
    break;
    
    case 38:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Computer Science(Data Science) and engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Computer Science(Data Science) and engineering");
    break;

    case 39:
    func_stM3(h,m,col_st,br_st,clos_st,nirf_st,"Mechatronics engineering",st_rank);
    func_stM1(m,col_st,br_st,clos_st,"Mechatronics engineering");
    break;
    }
}