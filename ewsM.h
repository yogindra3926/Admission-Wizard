#include<bits/stdc++.h>
using namespace std;
// multimap<int,int>m;
int lenewsM(int f){
  int i=0;
  for(;f>0;i++){
    f/=10;
  }
  return i;
}
void func_ewsM( multimap<int,int>m,vector<string>col_ews,vector<string>br_ews,vector<int>clos_ews){
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
            int nirf_size=10;lenewsM(clos_ews[i]);
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
void func_ewsM2( multimap<int,int>&h,multimap<int,int>&m,vector<string>col_ews,vector<string>br_ews,vector<int>clos_ews,vector<int>nirf_ews,int ews_rank){
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
void func_ewsM3(multimap<int,int>&h,multimap<int,int>&m,vector<string>col_ews,vector<string>br_ews,vector<int>clos_ews,vector<int>nirf_ews,string s,int ews_rank){
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
void func_ewsM1(multimap<int,int>m,vector<string>col_ews,vector<string>br_ews,vector<int>clos_ews,string s){
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
            int nirf_size=10;lenewsM(clos_ews[i]);
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
void ewsM(){
    cout<<"enter your ews_rank"<<endl;
    int ews_rank;cin>>ews_rank;
      vector<string>col_ews;vector<string>br_ews;vector<int>clos_ews;vector<int>nirf_ews;
      {
   { col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(444);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Electronic and Communication engineering");  
    clos_ews.push_back(1566);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(4629);
    nirf_ews.push_back(10);
     col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(5931);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(7381);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Computational and Data Science engineering");
    clos_ews.push_back(1376);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(8303);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Mining engineering");
    clos_ews.push_back(9917);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(2889);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(816);
    nirf_ews.push_back(10);
    col_ews.push_back("NIT SURATHKAL");
    br_ews.push_back("Artificial Intelligence");
    clos_ews.push_back(963);
    nirf_ews.push_back(10);
   }
   { col_ews.push_back("NIT WARANGAL");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(662);
    nirf_ews.push_back(21);
    col_ews.push_back("NIT WARANGAL");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(1943);
    nirf_ews.push_back(21);
    col_ews.push_back("NIT WARANGAL");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(10129);
    nirf_ews.push_back(21);
    col_ews.push_back("NIT WARANGAL");
    br_ews.push_back("Bio Technology");
    clos_ews.push_back(5648);
    nirf_ews.push_back(21);
     col_ews.push_back("NIT WARANGAL");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(6770);
    nirf_ews.push_back(21);
     col_ews.push_back("NIT WARANGAL");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(8063);
    nirf_ews.push_back(21);
     col_ews.push_back("NIT WARANGAL");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(9291);
    nirf_ews.push_back(21);
     col_ews.push_back("NIT WARANGAL");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(3454);
    nirf_ews.push_back(21);
   }
   {col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(1242);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(2926);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(7418);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Bio Technology");
    clos_ews.push_back(12464);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(9683);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(11538);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Engineering Physics");
    clos_ews.push_back(7486);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Materials Science and engineering");
    clos_ews.push_back(12233);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(4881);
    nirf_ews.push_back(31);
    col_ews.push_back("NIT CALICUT");
    br_ews.push_back("Production engineering");
    clos_ews.push_back(11823);
    nirf_ews.push_back(31);
   }
   {col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(5733);
    nirf_ews.push_back(8);
    col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(6843);
    nirf_ews.push_back(8);
    col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(367);
    nirf_ews.push_back(8);
    col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(1409);
    nirf_ews.push_back(8);
    col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(4098);
    nirf_ews.push_back(8);
    col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(7805);
    nirf_ews.push_back(8);
    col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(2520);
    nirf_ews.push_back(8);
    col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Production engineering");
    clos_ews.push_back(9345);
    nirf_ews.push_back(8);
    col_ews.push_back("NIT Tiruchirapally");
    br_ews.push_back("Instrumentation and Control engineering");
    clos_ews.push_back(5351);
    nirf_ews.push_back(8);
    }
   { col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Bio Technology");
    clos_ews.push_back(11356);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Ceramic engineering");
    clos_ews.push_back(13023);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(6930);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(8989);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(930);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(4127);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(5988);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(10793);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Mining engineering");
    clos_ews.push_back(12361);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Electronics and Instrumentation engineering");
    clos_ews.push_back(4585);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Bio Medical engineering");
    clos_ews.push_back(12960);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Industrial Design engineering");
    clos_ews.push_back(11051);
    nirf_ews.push_back(15);
    col_ews.push_back("NIT Rourkela");
    br_ews.push_back("Food Process engineering");
    clos_ews.push_back(13629);
    nirf_ews.push_back(15);
   }   
    {col_ews.push_back("NIT Nagpur");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(10542);
    nirf_ews.push_back(32);
    col_ews.push_back("NIT Nagpur");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(11774);
    nirf_ews.push_back(32);
    col_ews.push_back("NIT Nagpur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(1627);
    nirf_ews.push_back(32);
    col_ews.push_back("NIT Nagpur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(3474);
    nirf_ews.push_back(32);
    col_ews.push_back("NIT Nagpur");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(8047);
    nirf_ews.push_back(32);
    col_ews.push_back("NIT Nagpur");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(13909);
    nirf_ews.push_back(32);
    col_ews.push_back("NIT Nagpur");
    br_ews.push_back("Mining engineering");
    clos_ews.push_back(14716);
    nirf_ews.push_back(32);
    col_ews.push_back("NIT Nagpur");
    br_ews.push_back("Electrical and Electronic engineering");
    clos_ews.push_back(5660);
    nirf_ews.push_back(32);
    }
    { col_ews.push_back("NIT Durgapur");
    br_ews.push_back("Bio Technology");
    clos_ews.push_back(15519);
    nirf_ews.push_back(34);
    col_ews.push_back("NIT Durgapur");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(15449);
    nirf_ews.push_back(34);
    col_ews.push_back("NIT Durgapur");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(12572);
    nirf_ews.push_back(34);
    col_ews.push_back("NIT Durgapur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(2599);
    nirf_ews.push_back(34);
    col_ews.push_back("NIT Durgapur");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(6650);
    nirf_ews.push_back(34);
    col_ews.push_back("NIT Durgapur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(4052);
    nirf_ews.push_back(34);
    col_ews.push_back("NIT Durgapur");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(14390);
    nirf_ews.push_back(34);
    col_ews.push_back("NIT Durgapur");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(9937);
    nirf_ews.push_back(34);
    }
     { col_ews.push_back("NIT Silchar");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(14208);
    nirf_ews.push_back(38);
    col_ews.push_back("NIT Silchar");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3408);
    nirf_ews.push_back(38);
    col_ews.push_back("NIT Silchar");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(8662);
    nirf_ews.push_back(38);
    col_ews.push_back("NIT Silchar");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(5161);
    nirf_ews.push_back(38);
    col_ews.push_back("NIT Silchar");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(11450);
    nirf_ews.push_back(38);
    col_ews.push_back("NIT Silchar");
    br_ews.push_back("Electronics and Instrumentation engineering");
    clos_ews.push_back(7889);
    nirf_ews.push_back(38);
     }
    {  col_ews.push_back("NIT Jaipur");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(9656);
    nirf_ews.push_back(46);
     col_ews.push_back("NIT Jaipur");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(10922);
    nirf_ews.push_back(46);
     col_ews.push_back("NIT Jaipur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(1514);
    nirf_ews.push_back(46);
     col_ews.push_back("NIT Jaipur");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(5275);
    nirf_ews.push_back(46);
     col_ews.push_back("NIT Jaipur");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(7877);
    nirf_ews.push_back(46);
     col_ews.push_back("NIT Jaipur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(3325);
    nirf_ews.push_back(46);
     col_ews.push_back("NIT Jaipur");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(13489);
    nirf_ews.push_back(46);

    }
      {col_ews.push_back("NIT Allahabad");
    br_ews.push_back("Bio Technology");
    clos_ews.push_back(12137);
    nirf_ews.push_back(47);
      col_ews.push_back("NIT Allahabad");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(7820);
    nirf_ews.push_back(47);
      col_ews.push_back("NIT Allahabad");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(9148);
    nirf_ews.push_back(47);
      col_ews.push_back("NIT Allahabad");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(1305);
    nirf_ews.push_back(47);
      col_ews.push_back("NIT Allahabad");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(4400);
    nirf_ews.push_back(47);
      col_ews.push_back("NIT Allahabad");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(3030);
    nirf_ews.push_back(47);
      col_ews.push_back("NIT Allahabad");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(7211);
    nirf_ews.push_back(47);
      col_ews.push_back("NIT Allahabad");
    br_ews.push_back("Production and Industrial engineering");
    clos_ews.push_back(11569);
    nirf_ews.push_back(47);
      }
      {col_ews.push_back("NIT Kurukshetra");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(12303);
    nirf_ews.push_back(50);
     col_ews.push_back("NIT Kurukshetra");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(6395);
    nirf_ews.push_back(50);
     col_ews.push_back("NIT Kurukshetra");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(4269);
    nirf_ews.push_back(50);
     col_ews.push_back("NIT Kurukshetra");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(8987);
    nirf_ews.push_back(50);
     col_ews.push_back("NIT Kurukshetra");
    br_ews.push_back("Production and Industrial engineering");
    clos_ews.push_back(14021);
    nirf_ews.push_back(50);
     col_ews.push_back("NIT Kurukshetra");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(2611);
    nirf_ews.push_back(50);
     col_ews.push_back("NIT Kurukshetra");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(2234);
    nirf_ews.push_back(50);
      }   
     { col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Bio Technology");
    clos_ews.push_back(15242);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(13237);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(13519);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3095);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(7144);
    nirf_ews.push_back(52); col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(5220);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(11590);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Textile engineering");
    clos_ews.push_back(15950);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(3641);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Instrumentation and Control engineering");
    clos_ews.push_back(11427);
    nirf_ews.push_back(52);
     col_ews.push_back("NIT Jalandar");
    br_ews.push_back("Industrial and Production engineering");
    clos_ews.push_back(14373);
    nirf_ews.push_back(52);
     }
    { col_ews.push_back("NIT Surat");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(12153);
    nirf_ews.push_back(58);
    col_ews.push_back("NIT Surat");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(12473);
    nirf_ews.push_back(58);
    col_ews.push_back("NIT Surat");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(2101);
    nirf_ews.push_back(58);
    col_ews.push_back("NIT Surat");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(6728);
    nirf_ews.push_back(58);
    col_ews.push_back("NIT Surat");
    br_ews.push_back("Electricons and Communication engineering");
    clos_ews.push_back(4549);
    nirf_ews.push_back(58);
    col_ews.push_back("NIT Surat");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(10358);
    nirf_ews.push_back(58);
    }
     { col_ews.push_back("NIT Meghalaya");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(15729);
    nirf_ews.push_back(60);
     col_ews.push_back("NIT Meghalaya");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(5195);
    nirf_ews.push_back(60);
     col_ews.push_back("NIT Meghalaya");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(8596);
    nirf_ews.push_back(60);
     col_ews.push_back("NIT Meghalaya");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(13378);
    nirf_ews.push_back(60);
     col_ews.push_back("NIT Meghalaya");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(10578);
    nirf_ews.push_back(60);
     }
    { col_ews.push_back("NIT Patna");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(14723);
    nirf_ews.push_back(63); 
    col_ews.push_back("NIT Patna");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3918);
    nirf_ews.push_back(63);
    col_ews.push_back("NIT Patna");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(9296);
    nirf_ews.push_back(63);
    col_ews.push_back("NIT Patna");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(6642);
    nirf_ews.push_back(63);
    col_ews.push_back("NIT Patna");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(18750);
    nirf_ews.push_back(63); 
    }
    { col_ews.push_back("NIT Raipur");
    br_ews.push_back("Bio Technology");
    clos_ews.push_back(15849);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(13090);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(14273);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3223);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(8189);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(5712);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(11790);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(15492);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Mining engineering");
    clos_ews.push_back(16073);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(4075);
    nirf_ews.push_back(65);
     col_ews.push_back("NIT Raipur");
    br_ews.push_back("Bio Medical engineering");
    clos_ews.push_back(16415);
    nirf_ews.push_back(65);
    }
   {  col_ews.push_back("NIT Srinagar");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(16468);
    nirf_ews.push_back(66);
    col_ews.push_back("NIT Srinagar");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(16753);
    nirf_ews.push_back(66);
    col_ews.push_back("NIT Srinagar");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(6861);
    nirf_ews.push_back(66);
    col_ews.push_back("NIT Srinagar");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(13448);
    nirf_ews.push_back(66);
    col_ews.push_back("NIT Srinagar");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(10274);
    nirf_ews.push_back(66);
col_ews.push_back("NIT Srinagar");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(15187);
    nirf_ews.push_back(66);
    col_ews.push_back("NIT Srinagar");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(17354);
    nirf_ews.push_back(66); 
    col_ews.push_back("NIT Srinagar");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(8420);
    nirf_ews.push_back(66);
      }
     { col_ews.push_back("NIT Bhopal");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(12410);
    nirf_ews.push_back(70);
     col_ews.push_back("NIT Bhopal");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(12558);
    nirf_ews.push_back(70);
     col_ews.push_back("NIT Bhopal");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(2755);
    nirf_ews.push_back(70);
     col_ews.push_back("NIT Bhopal");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(7221);
    nirf_ews.push_back(70);
     col_ews.push_back("NIT Bhopal");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(5228);
    nirf_ews.push_back(70);
     col_ews.push_back("NIT Bhopal");
    br_ews.push_back("Mehcanical engineering");
    clos_ews.push_back(15221);
    nirf_ews.push_back(70);
     }
    { col_ews.push_back("NIT Agartala");
    br_ews.push_back("Biotechnology and Biochemical engineering");
    clos_ews.push_back(16842);
    nirf_ews.push_back(80);
     col_ews.push_back("NIT Agartala");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(16056);
    nirf_ews.push_back(80);
     col_ews.push_back("NIT Agartala");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(15898);
    nirf_ews.push_back(80);
     col_ews.push_back("NIT Agartala");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(6267);
    nirf_ews.push_back(80);
     col_ews.push_back("NIT Agartala");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(12100);
    nirf_ews.push_back(80);
     col_ews.push_back("NIT Agartala");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(9209);
    nirf_ews.push_back(80);
     col_ews.push_back("NIT Agartala");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(14616);
    nirf_ews.push_back(80);
     col_ews.push_back("NIT Agartala");
    br_ews.push_back("Production engineering");
    clos_ews.push_back(16828);
    nirf_ews.push_back(80);
     col_ews.push_back("NIT Agartala");
    br_ews.push_back("Electronics and Instrumentation engineering");
    clos_ews.push_back(14616);
    nirf_ews.push_back(80);

    }
     {  col_ews.push_back("NIT Goa");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(14172);
    nirf_ews.push_back(88);
    col_ews.push_back("NIT Goa");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3894);
    nirf_ews.push_back(88);
    col_ews.push_back("NIT Goa");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(5911);
    nirf_ews.push_back(88);
    col_ews.push_back("NIT Goa");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(11506);
    nirf_ews.push_back(88);
    col_ews.push_back("NIT Goa");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(8513);
    nirf_ews.push_back(88);
     }
    { col_ews.push_back("NIT Jamshedpur");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(13340);
    nirf_ews.push_back(90);
     col_ews.push_back("NIT Jamshedpur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(2647);
    nirf_ews.push_back(90);
     col_ews.push_back("NIT Jamshedpur");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(6903);
    nirf_ews.push_back(90);
     col_ews.push_back("NIT Jamshedpur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(5205);
    nirf_ews.push_back(90);
     col_ews.push_back("NIT Jamshedpur");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(10384);
    nirf_ews.push_back(90);
     col_ews.push_back("NIT Jamshedpur");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(14470);
    nirf_ews.push_back(90);
     col_ews.push_back("NIT Jamshedpur");
    br_ews.push_back("Production and Industrial engineering");
    clos_ews.push_back(14331);
    nirf_ews.push_back(90);
     col_ews.push_back("NIT Jamshedpur");
    br_ews.push_back("Engineering and Computational Mechanics");
    clos_ews.push_back(6076);
    nirf_ews.push_back(90);

    }
     { col_ews.push_back("NIT Manipur");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(16306);
    nirf_ews.push_back(108);
      col_ews.push_back("NIT Manipur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(8156);
    nirf_ews.push_back(108);
      col_ews.push_back("NIT Manipur");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(13982);
    nirf_ews.push_back(108);
      col_ews.push_back("NIT Manipur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(10525);
    nirf_ews.push_back(108);
      col_ews.push_back("NIT Manipur");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(15543);
    nirf_ews.push_back(108);
    
         }
    {  col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(13581);
    nirf_ews.push_back(128);
    col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(14242);
    nirf_ews.push_back(128);col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3435);
    nirf_ews.push_back(128);
    col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(8627);
    nirf_ews.push_back(128);
    col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(5784);
    nirf_ews.push_back(128);
    col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Engineering Physics");
    clos_ews.push_back(12230);
    nirf_ews.push_back(128);
    col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Materials Science and engineering");
    clos_ews.push_back(15450);
    nirf_ews.push_back(128);
    col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Mathematics and Computing");
    clos_ews.push_back(5215);
    nirf_ews.push_back(128);
    col_ews.push_back("NIT Hamirpur");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(11740);
    nirf_ews.push_back(128);
    }
    {  col_ews.push_back("NIT Uttarakhand");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(31069);
    nirf_ews.push_back(131);
    col_ews.push_back("NIT Uttarakhand");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(5797);
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
    clos_ews.push_back(4781);
    nirf_ews.push_back(131);
    }
    { col_ews.push_back("NIT Puducherry");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(15125);
    nirf_ews.push_back(136);
     col_ews.push_back("NIT Puducherry");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(5582);
    nirf_ews.push_back(136);
     col_ews.push_back("NIT Puducherry");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(7493);
    nirf_ews.push_back(136);
     col_ews.push_back("NIT Puducherry");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(13852);
    nirf_ews.push_back(136);
     col_ews.push_back("NIT Puducherry");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(11219);
    nirf_ews.push_back(136);
    }
     {col_ews.push_back("NIT Arunanchal");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(16308);
    nirf_ews.push_back(171);
     col_ews.push_back("NIT Arunanchal");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(8172);
    nirf_ews.push_back(171);
     col_ews.push_back("NIT Arunanchal");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(13168);
    nirf_ews.push_back(171);
     col_ews.push_back("NIT Arunanchal");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(10289);
    nirf_ews.push_back(171);
     col_ews.push_back("NIT Arunanchal");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(15200);
    nirf_ews.push_back(171);

     }
   {col_ews.push_back("NIT Sikkim");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(16193);
    nirf_ews.push_back(173);
    col_ews.push_back("NIT Sikkim");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(7791);
    nirf_ews.push_back(173);
    col_ews.push_back("NIT Sikkim");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(11454);
    nirf_ews.push_back(173);
    col_ews.push_back("NIT Sikkim");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(10154);
    nirf_ews.push_back(173);
    col_ews.push_back("NIT Sikkim");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(15307);
    nirf_ews.push_back(173);

   }
    {col_ews.push_back("NIT Delhi");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(11319);
    nirf_ews.push_back(194); 
    col_ews.push_back("NIT Delhi");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3127);
    nirf_ews.push_back(194); 
    col_ews.push_back("NIT Delhi");
    br_ews.push_back("Electrical engineering");
    clos_ews.push_back(7222);
    nirf_ews.push_back(194); 
    col_ews.push_back("NIT Delhi");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(5128);
    nirf_ews.push_back(194); 
    col_ews.push_back("NIT Delhi");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(9797);
    nirf_ews.push_back(194); 

    }
    {col_ews.push_back("NIT Andhra");
    br_ews.push_back("Bio Technology");
    clos_ews.push_back(16252);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Andhra");
    br_ews.push_back("Chemical engineering");
    clos_ews.push_back(14813);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Andhra");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(15465);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Andhra");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(5828);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Andhra");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(11661);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Andhra");
    br_ews.push_back("Electronics and Communication engineering");
    clos_ews.push_back(8819);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Andhra");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(14464);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Andhra");
    br_ews.push_back("Metallurgical and Materials engineering");
    clos_ews.push_back(15758);
    nirf_ews.push_back(1000); 
     
    }
     { col_ews.push_back("NIT Nagaland");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(16719);
    nirf_ews.push_back(1000);
     col_ews.push_back("NIT Nagaland");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(8388);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Nagaland");
    br_ews.push_back("Electronics and Communication engineering");
    clos_ews.push_back(10923);
    nirf_ews.push_back(1000);  
     col_ews.push_back("NIT Nagaland");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(15626);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Nagaland");
    br_ews.push_back("Electronics and Instrumentation engineering");
    clos_ews.push_back(13910);
    nirf_ews.push_back(1000); 
     col_ews.push_back("NIT Nagaland");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(14116);
    nirf_ews.push_back(1000); 
     
     }
     { col_ews.push_back("NIT Mizoram");
    br_ews.push_back("Civil engineering");
    clos_ews.push_back(16780);
    nirf_ews.push_back(1000); 
    col_ews.push_back("NIT Mizoram");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(8447);
    nirf_ews.push_back(1000); 
    col_ews.push_back("NIT Mizoram");
    br_ews.push_back("Electrical and Electronics engineering");
    clos_ews.push_back(14122);
    nirf_ews.push_back(1000); 
    col_ews.push_back("NIT Mizoram");
    br_ews.push_back("Electronics and Communication engineering");
    clos_ews.push_back(12031);
    nirf_ews.push_back(1000); 
    col_ews.push_back("NIT Mizoram");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(15943);
    nirf_ews.push_back(1000); 
     }
    {col_ews.push_back("IIIT GWALIOR");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(2719);
    nirf_ews.push_back(78); 
     
    }
    {  col_ews.push_back("IIIT Jabalpur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(4937);
    nirf_ews.push_back(82); 
    
       col_ews.push_back("IIIT Jabalpur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(7429);
    nirf_ews.push_back(82); 
    
       col_ews.push_back("IIIT Jabalpur");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(14664);
    nirf_ews.push_back(82); 
    
       col_ews.push_back("IIIT Jabalpur");
    br_ews.push_back("Smart Manufacturing");
    clos_ews.push_back(15238);
    nirf_ews.push_back(82); 
    
    }
    { col_ews.push_back("IIIT Allahabad");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(3760);
    nirf_ews.push_back(93); 
     col_ews.push_back("IIIT Allahabad");
    br_ews.push_back("Electronic and Communication(FAP) engineering");
    clos_ews.push_back(3597);
    nirf_ews.push_back(93); 
     col_ews.push_back("IIIT Allahabad");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(2024);
    nirf_ews.push_back(93); 
     col_ews.push_back("IIIT Allahabad");
    br_ews.push_back("Information Technology(FAP)");
    clos_ews.push_back(2272);
    nirf_ews.push_back(93); 
     col_ews.push_back("IIIT Allahabad");
    br_ews.push_back("Information Technology(Business Informatics)");
    clos_ews.push_back(2283);
    nirf_ews.push_back(93); 
    }
   { col_ews.push_back("IIIT Kancheepuram");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(5822);
    nirf_ews.push_back(184); 
    col_ews.push_back("IIIT Kancheepuram");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(9276);
    nirf_ews.push_back(184); 
    col_ews.push_back("IIIT Kancheepuram");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(15040);
    nirf_ews.push_back(184); 
    col_ews.push_back("IIIT Kancheepuram");
    br_ews.push_back("Computer Science(AI) and engineering");
    clos_ews.push_back(6032);
    nirf_ews.push_back(184); 
    col_ews.push_back("IIIT Kancheepuram");
    br_ews.push_back("Smart Manufacturing");
    clos_ews.push_back(14457);
    nirf_ews.push_back(184); 
   }
    {col_ews.push_back("IIIT Guwahati");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(7519);
    nirf_ews.push_back(1000); 
    col_ews.push_back("IIIT Guwahati");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(11022);
    nirf_ews.push_back(1000); 
    }
    {col_ews.push_back("IIIT Kurnool");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(11473);
    nirf_ews.push_back(1000); 
    col_ews.push_back("IIIT Kurnool");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(14234);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Kurnool");
    br_ews.push_back("Mechanical engineering");
    clos_ews.push_back(16194);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Kurnool");
    br_ews.push_back("Artificial Intelligence");
    clos_ews.push_back(12287);
    nirf_ews.push_back(1000);
    }
    {  col_ews.push_back("IIIT Kottayam");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(11452);
    nirf_ews.push_back(1000);
     col_ews.push_back("IIIT Kottayam");
    br_ews.push_back("Computer Science(AI) and engineering");
    clos_ews.push_back(11492);
    nirf_ews.push_back(1000);
     col_ews.push_back("IIIT Kottayam");
    br_ews.push_back("Computer Science(CYBER SECURITY) and engineering");
    clos_ews.push_back(12206);
    nirf_ews.push_back(1000);
     col_ews.push_back("IIIT Kottayam");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(13259);
    nirf_ews.push_back(1000);
    
    }
    { col_ews.push_back("IIIT Lucknow");
    br_ews.push_back("Computer Science and Business");
    clos_ews.push_back(3811);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Lucknow");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(3124);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Lucknow");
    br_ews.push_back("Computer Science(AI) and engineering");
    clos_ews.push_back(3040);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Lucknow");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(3621);
    nirf_ews.push_back(1000);
    }
     { col_ews.push_back("IIIT Kota");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(7528);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT kota");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(10300);
    nirf_ews.push_back(1000);
     }
    { col_ews.push_back("IIIT Kalyani");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(12089);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Kalyani");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(14351);
    nirf_ews.push_back(1000);
    }
    { col_ews.push_back("IIIT Sonepat");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(7996);
    nirf_ews.push_back(1000);
     col_ews.push_back("IIIT Sonepat");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(8919);
    nirf_ews.push_back(1000);
    }
    {  col_ews.push_back("IIIT Una");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(9587);
    nirf_ews.push_back(1000);
       col_ews.push_back("IIIT Una");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(13287);
    nirf_ews.push_back(1000);
       col_ews.push_back("IIIT Una");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(11045);
    nirf_ews.push_back(1000);
    }
    { col_ews.push_back("IIIT Sri city");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(10178);
    nirf_ews.push_back(1000);
       col_ews.push_back("IIIT Sri city");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(13127);
    nirf_ews.push_back(1000);
    }
     {   col_ews.push_back("IIIT Vadodara");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(7719);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Vadodara");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(8302);
    nirf_ews.push_back(1000);
     }
   { col_ews.push_back("IIIT Manipur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(14622);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Manipur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(16204);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Manipur");
    br_ews.push_back("Computer Science(AI) and engineering");
    clos_ews.push_back(14940);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Manipur");
    br_ews.push_back("Electronic and Communication(embedded systems)");
    clos_ews.push_back(16398);
    nirf_ews.push_back(1000);
   }
    { col_ews.push_back("IIIT Tiruchirappalli");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(9082);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Tiruchirappalli");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(12126);
    nirf_ews.push_back(1000);
    }
    { col_ews.push_back("IIIT Dharwad");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(12152);
    nirf_ews.push_back(1000);
     col_ews.push_back("IIIT Dharwad");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(13580);
    nirf_ews.push_back(1000);
     col_ews.push_back("IIIT Dharwad");
    br_ews.push_back("Data Science and Artificial Intelligence");
    clos_ews.push_back(12925);
    nirf_ews.push_back(1000);
    }
    {col_ews.push_back("IIIT Ranchi");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(11381);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Ranchi");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(13914);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Ranchi");
    br_ews.push_back("Computer Science(AI) and engineering");
    clos_ews.push_back(11260);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Ranchi");
    br_ews.push_back("Electronic and Communication(embedded systems)");
    clos_ews.push_back(13842);
    nirf_ews.push_back(1000);
    }
     { col_ews.push_back("IIIT Nagpur");
    br_ews.push_back("Computer Science(AI) and engineering");
    clos_ews.push_back(9918);
    nirf_ews.push_back(1000);
      col_ews.push_back("IIIT Nagpur");
    br_ews.push_back("Computer Science(Data Science) and engineering");
    clos_ews.push_back(10276);
    nirf_ews.push_back(1000);
      col_ews.push_back("IIIT Nagpur");
    br_ews.push_back("Computer Science(Gaming) and engineering");
    clos_ews.push_back(10821);
    nirf_ews.push_back(1000);
      col_ews.push_back("IIIT Nagpur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(9240);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Nagpur");
    br_ews.push_back("Electronic and Communication(IOT) engineering");
    clos_ews.push_back(13156);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Nagpur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(12771);
    nirf_ews.push_back(1000);
     }
     { col_ews.push_back("IIIT Pune");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(6001);
    nirf_ews.push_back(1000);
     col_ews.push_back("IIIT Pune");
    br_ews.push_back("Electrical and Communication engineering");
    clos_ews.push_back(8244);
    nirf_ews.push_back(1000);
     }
    { col_ews.push_back("IIIT Bhagalpur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(13080);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Bhagalpur");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(14524);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Bhagalpur");
    br_ews.push_back("Mechatronics engineering");
    clos_ews.push_back(15585);
    nirf_ews.push_back(1000);
   
    }
    { col_ews.push_back("IIIT Bhopal");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(8280);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Bhopal");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(12745);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Bhopal");
    br_ews.push_back("Information Technology");
    clos_ews.push_back(9770);
    nirf_ews.push_back(1000);
    }
    {col_ews.push_back("IIIT Surat");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(7926);
    nirf_ews.push_back(1000);
    col_ews.push_back("IIIT Surat");
    br_ews.push_back("Electronic and Communication engineering");
    clos_ews.push_back(10660);
    nirf_ews.push_back(1000);
    }
     { col_ews.push_back("IIIT Agartala");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(12288);
    nirf_ews.push_back(1000);
     }
     {col_ews.push_back("IIIT Raichur");
    br_ews.push_back("Computer Science and engineering");
    clos_ews.push_back(11369);
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
      
    func_ewsM2(h,m,col_ews,br_ews,clos_ews,nirf_ews,ews_rank);
    func_ewsM(m,col_ews,br_ews,clos_ews);

    break;
    case 2:
    
   
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Computer Science and engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Computer Science and engineering");
    break;
    case 3:
     
    
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Electronic and Communication engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Electronic and Communication engineering");
    break;
    
    
    break;
    case 4:
     
    // func_ewsM2(h,m,col_ews,br_ews,clos_ews,nirf_ews,ews_rank);

    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Mechanical engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Mechanical engineering");
    break;
    case 5:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Bio Technology",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Bio Technology");
    break;
    case 6:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Chemical engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Chemical engineering");
    break;
    case 7:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Civil engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Civil engineering");
    break;
    case 8:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Electrical engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Electrical engineering");
    break;
    case 9:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Metallurgical and Materials engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Metallurgical and Materials engineering");
    break;
    case 10:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Mining engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Mining engineering");
    break;
    case 11:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Information Technology",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Information Technology");
    break;
    case 12:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Bio Medical engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Bio Medical engineering");
    break;
    
    case 13:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Computational and Data Science engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Computational and Data Science engineering");
    break;
    
    case 14:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Electrical and Electronics engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Electrical and Electronics engineering");
    break;
    
    case 15:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Artificial Intelligence",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Artificial Intelligence");
    break;
    
    case 16:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Engineering Physics",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Engineering Physics");
    break;
    
    case 17:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Materials Science and engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Materials Science and engineering");
    break;
    
    case 18:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Production engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Production engineering");
    break;
    
    case 19:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Instrumentation and Control engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Instrumentation and Control engineering");
    break;
    
    case 20:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Ceramic engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Ceramic engineering");
    break;
    
    case 21:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Electronics and Instrumentation engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Electronics and Instrumentation engineering");
    break;
    
    case 22:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Industrial Design engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Industrial Design engineering");
    break;
    
    case 23:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Food Process engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Food Process engineering");
    break;
    
    case 24:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Production and Industrial engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Production and Industrial engineering");
    break;
    
    case 25:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Textile engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Textile engineering");
    break;
    
    case 26:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Industrial and Production engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Industrial and Production engineering");
    break;
    
    case 27:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Biotechnology and Biochemical engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Biotechnology and Biochemical engineering");
    break;
    
    case 28:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Engineering and Computational Mechanics",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Engineering and Computational Mechanics");
    break;
    
    case 29:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Mathematics and Computing",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Mathematics and Computing");
    break;
    
    case 30:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Smart Manufacturing",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Smart Manufacturing");
    break;
    
    case 31:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Electronic and Communication(FAP) engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Electronic and Communication(FAP) engineering");
    break;
    
    case 32:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Information Technology(FAP)",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Information Technology(FAP)");
    break;
    
    case 33:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Information Technology(Business Informatics)",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Information Technology(Business Informatics)");
    break;
    
    case 34:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Computer Science(AI) and engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Computer Science(AI) and engineering");
    break;
    
    case 35:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Electronic and Communication(embedded systems)",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Electronic and Communication(embedded systems)");
    break;
    
    case 36:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Data Science and Artificial Intelligence",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Data Science and Artificial Intelligence");
    break;
    
    case 37:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Computer Science(Gaming) and engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Computer Science(Gaming) and engineering");
    break;
    
    case 38:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Computer Science(Data Science) and engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Computer Science(Data Science) and engineering");
    break;

    case 39:
    func_ewsM3(h,m,col_ews,br_ews,clos_ews,nirf_ews,"Mechatronics engineering",ews_rank);
    func_ewsM1(m,col_ews,br_ews,clos_ews,"Mechatronics engineering");
    break;
    }
}