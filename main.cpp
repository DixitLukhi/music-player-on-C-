#include<iostream>
#include<stdio.h>
using namespace std;
#include <windows.h>
#include<string.h>
#include<conio.h>
#include<dos.h>

string url;

void h_single();
void e_single();
void formalities();

class login{
public:
    char p;
    string username="CHARUSAT";
    string pass="170202";
public:
    login(){
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\tEnter username :";
        cin>>username;
        cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\tEnter password :";
        for(int i=0;;){
                p=getch();
                if(p>='0' &&p<='9'){
                    pass[i]=p;
                    i++;
                    cout<<"*";
                }
                if(p=='\b' && i>=1){
                        cout<<"\b \b";
                        i--;
                }
                if(p=='\r'){
                        pass[i]='\0';
                        break;
                }
        }
    }
};

int main(){
    cout<<"\n\n\n\tFor anywhere close the program press CTRL + C.";
    system("color f0");
    for(int i=0;i!='\n';i++){
        login obj;
        if(obj.username=="CHARUSAT" && obj.pass=="170202"){
            system("color 2E");
            system("color 6");
            break;
        }
        else{
            system("CLS");
            system("color 4E");
            cout<<endl<<endl<<endl<<endl<<endl<<"\t\tEnter correct USERNAME and PASSWORD."<<endl;
        }
    }
    system("CLS");
    formalities();
    return 0;
}

void formalities(){
    system("color 27");
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t---WELCOME TO C++ MUSIC---"<<endl;
    int i;
    cout<<endl<<endl<<endl<<"\tWould you play the song with your URL link or single song ?"<<endl<<endl<<"\tFor URL link tab 1 and for song tab 2 :";
    cout<<endl<<endl<<"\tSelect your choise :";
    cin>>i;
    system("color 90");
    if(i==2){
        cout<<endl<<"\tFor hindi  or gujarati song press 1 else for english song press 2 :";
        cout<<endl<<"\tYour choise :";
        int c;
        cin>>c;
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t---WELCOME TO C++ MUSIC---\n\n"<<endl;
            if(c==1){
            h_single();
            }
            else if(c==2){
            e_single();
            }
            else{
                system("CLS");
                cout<<endl<<"\n\n\n\t Enter correct number.";
                formalities();
            }
    }
    else if(i==1){
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t---WELCOME TO C++ MUSIC---\n\n"<<endl;
        cout<<"\tEnter URL :";
        cin>>url;
        cout<<endl;
        ShellExecute(NULL,"open",url.c_str(),NULL,NULL,SW_SHOWNORMAL);
    }
}

void e_single(){
    system("CLS");
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t---WELCOME TO C++ MUSIC---\n\n\n"<<endl;
    int e;
    cout<<"\t1.On_My_Way\t\t11.This_One's_For_You\t\t21.Justin_Bieber-Baby\t\t31.Shawn_Mendes\t\t\t41.Serena-Safari"<<endl<<"\t2.Darkside\t\t12.Let_Me_Love_You\t\t22.Yummy\t\t\t32.Coldplay\t\t\t42.Otilia-Bilionera";
    cout<<endl<<"\t3.Different_World\t13.Taki_Taki\t\t\t23.Kodaline_-_The_One\t\t33.Closer\t\t\t43.Marshmello-Happier"<<endl<<"\t4.Ciao_Adios\t\t14.Don't_Let_Me_Down\t\t24.Kygo_-_Sunrise\t\t34.Hope\t\t\t\t44.Marshmello-Alone"<<endl<<"\t5.7 Ring\t\t15.Khalid–Beautiful_People\t25.Despacito\t\t\t35.New_York_City\t\t45.Girls_Like_You";
    cout<<endl<<"\t6.God_is_a_woman\t16.Shape_of_You\t\t\t26.Neon_Dreams-High\t\t36.Paris\t\t\t46.On_The_Floor"<<endl<<"\t7.Side_To_Side\t\t17.Love_Me_Like_You_Do\t\t27.Oo_Na_Na_Na\t\t\t37.This_Feeling\t\t\t47.Turn_Down_for_What"<<endl<<"\t8.Thank_u,_next\t\t18.Work_From_Home\t\t28.ROCKSTAR_SKAM_BOYS_\t\t38.Faded\t\t\t48.Justin_Bieber-Intentions";
    cout<<endl<<"\t9.California\t\t19.Without_Me\t\t\t29.Back_to_You\t\t\t39.Ya_Lili Arabic Song\t\t49.Arabic-Khalouni_N3ich"<<endl<<"\t10.Havana\t\t20.Thunder\t\t\t30.Shakira-Waka_Waka\t\t40.Tungevaag-Bad Boy\t\t50.Armaan Malik-Control";
    cout<<endl<<endl<<"\tYour choise :";
    int c;
    cin>>c;
    system("color B");
    if(c==1){PlaySound(TEXT("On_My_Way.wav"),NULL,SND_SYNC);}
    else if(c==2){PlaySound(TEXT("Darkside.wav"),NULL,SND_SYNC);}
    else if(c==3){PlaySound(TEXT("Different_World.wav"),NULL,SND_SYNC);}
    else if(c==4){PlaySound(TEXT("Ciao_Adios.wav"),NULL,SND_SYNC);}
    else if(c==5){PlaySound(TEXT("7 Ring.wav"),NULL,SND_SYNC);}
    else if(c==6){PlaySound(TEXT("God_is_a_woman.wav"),NULL,SND_SYNC);}
    else if(c==7){PlaySound(TEXT("Side_To_Side.wav"),NULL,SND_SYNC);}
    else if(c==8){PlaySound(TEXT("Thank_u,_next.wav"),NULL,SND_SYNC);}
    else if(c==9){PlaySound(TEXT("California.wav"),NULL,SND_SYNC);}
    else if(c==10){PlaySound(TEXT("Havana.wav"),NULL,SND_SYNC);}
    else if(c==11){PlaySound(TEXT("This_One's_For_You.wav"),NULL,SND_SYNC);}
    else if(c==12){PlaySound(TEXT("Let_Me_Love_You.wav"),NULL,SND_SYNC);}
    else if(c==13){PlaySound(TEXT("Taki_Taki.wav"),NULL,SND_SYNC);}
    else if(c==14){PlaySound(TEXT("Don't_Let_Me_Down.wav"),NULL,SND_SYNC);}
    else if(c==15){PlaySound(TEXT("Khalid–Beautiful_People.wav"),NULL,SND_SYNC);}
    else if(c==16){PlaySound(TEXT("Shape_of_You.wav"),NULL,SND_SYNC);}
    else if(c==17){PlaySound(TEXT("Love_Me_Like_You_Do.wav"),NULL,SND_SYNC);}
    else if(c==18){PlaySound(TEXT("Work_From_Home.wav"),NULL,SND_SYNC);}
    else if(c==19){PlaySound(TEXT("Without_Me.wav"),NULL,SND_SYNC);}
    else if(c==20){PlaySound(TEXT("Thunder.wav"),NULL,SND_SYNC);}
    else if(c==21){PlaySound(TEXT("Justin_Bieber-Baby.wav"),NULL,SND_SYNC);}
    else if(c==22){PlaySound(TEXT("Yummy.wav"),NULL,SND_SYNC);}
    else if(c==23){PlaySound(TEXT("Kodaline_-_The_One.wav"),NULL,SND_SYNC);}
    else if(c==24){PlaySound(TEXT("Kygo_-_Sunrise.wav"),NULL,SND_SYNC);}
    else if(c==25){PlaySound(TEXT("Despacito.wav"),NULL,SND_SYNC);}
    else if(c==26){PlaySound(TEXT("Neon_Dreams-High.wav"),NULL,SND_SYNC);}
    else if(c==27){PlaySound(TEXT("Oo_Na_Na_Na.wav"),NULL,SND_SYNC);}
    else if(c==28){PlaySound(TEXT("ROCKSTAR_SKAM_BOYS_.wav"),NULL,SND_SYNC);}
    else if(c==29){PlaySound(TEXT("Back_to_You.wav"),NULL,SND_SYNC);}
    else if(c==30){PlaySound(TEXT("Shakira-Waka_Waka.wav"),NULL,SND_SYNC);}
    else if(c==31){PlaySound(TEXT("Shawn_Mendes.wav"),NULL,SND_SYNC);}
    else if(c==32) {PlaySound(TEXT("Coldplay.wav"),NULL,SND_SYNC);}
    else if(c==33){PlaySound(TEXT("Closer.wav"),NULL,SND_SYNC);}
    else if(c==34){PlaySound(TEXT("Hope.wav"),NULL,SND_SYNC);}
    else if(c==35){PlaySound(TEXT("New_York_City.wav"),NULL,SND_SYNC);}
    else if(c==36){PlaySound(TEXT("Paris.wav"),NULL,SND_SYNC);}
    else if(c==37){PlaySound(TEXT("This_Feeling.wav"),NULL,SND_SYNC);}
    else if(c==38){PlaySound(TEXT("Faded.wav"),NULL,SND_SYNC);}
    else if(c==39){PlaySound(TEXT("Ya_Lili Arabic Song.wav"),NULL,SND_SYNC);}
    else if(c==40){PlaySound(TEXT("Tungevaag-Bad Boy.wav"),NULL,SND_SYNC);}
    else if(c==41){PlaySound(TEXT("Serena-Safari.wav"),NULL,SND_SYNC);}
    else if(c==42){PlaySound(TEXT("Otilia-Bilionera.wav"),NULL,SND_SYNC);}
    else if(c==43){PlaySound(TEXT("Marshmello-Happier.wav"),NULL,SND_SYNC);}
    else if(c==44){PlaySound(TEXT("Marshmello-Alone.wav"),NULL,SND_SYNC);}
    else if(c==45){PlaySound(TEXT("Girls_Like_You.wav"),NULL,SND_SYNC);}
    else if(c==46){PlaySound(TEXT("On_The_Floor.wav"),NULL,SND_SYNC);}
    else if(c==47){PlaySound(TEXT("Turn_Down_for_What.wav"),NULL,SND_SYNC);}
    else if(c==48){PlaySound(TEXT("Justin_Bieber-Intentions.wav"),NULL,SND_SYNC);}
    else if(c==49){PlaySound(TEXT("Arabic-Khalouni_N3ich.wav"),NULL,SND_SYNC);}
    else if(c==50){PlaySound(TEXT("Armaan Malik-Control.wav"),NULL,SND_SYNC);}
    else{
        system("CLS");
        cout<<endl<<"\tEnter correct number"<<endl<<endl<<endl;
        e_single();
    }
    cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t---THANK YOU FOR  USING THIS AUDIO PLAYER---";
    char a;
    cout<<"\n\n\tIf you wish to play again then press 'y' or 'Y' else press any of  the key :";
    cin>>a;
    if(a=='y' || a=='Y'){
        cout<<endl<<"\n\n\n\tFor hindi  or gujarati song press 1 else for english song press 2 :";
        cout<<endl<<"\n\n\tYour choise :";
        int c;
        cin>>c;
        if(c==1)
            h_single();
        else
            e_single();
    }
}

void h_single(){
    system("CLS");
    int c;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t---WELCOME TO C++ MUSIC---\n\n\n"<<endl;
    cout<<"\t1.Swag Se Swagat\t\t11.Ghungaroo\t\t\t21.Mohabbat_Ho_Na_Jaaye\t\t\t31.India Waale\t\t\t41.Tumhe Apna Banane Ka"<<endl<<"\t2.Dilabar\t\t\t12.Va vaya n vadal umatya\t22.Tera hone laga hoon\t\t\t32.Teri_Meri_Kahaani\t\t42.Lungi Dance";
    cout<<endl<<"\t3.Pachtaoge\t\t\t13.Shaitan ka sala\t\t23.AllahMaaf Kare\t\t\t33.Jeene Laga Hoon\t\t43.Ram Chahe Leela"<<endl<<"\t4.Paagal hai\t\t\t14.ABCD2 - Happy Birthday\t24.Maa Tujhe Salam\t\t\t34.Lonely\t\t\t44.Offo"<<endl<<"\t5.O saki saki\t\t\t15.Give Me Some Sunshine\t25.Aaj Dil Shayarana\t\t\t35.Sanam Teri Kasam\t\t45.Dj non stop garaba";
    cout<<endl<<"\t6.Do din\t\t\t16.Ishare tere\t\t\t26.Bezubaan Phir Se\t\t\t36.Tu Mere Agal Bagal Hai\t46.Hangover (Kick)"<<endl<<"\t7.Ek ladaki ko dekha to\t\t17.Jai jai shivshankar\t\t27.Bilal Saeed - Adhi Adhi Raat\t\t37.Vande matram\t\t\t47.Palat_-_Tera_Hero_Idhar_Hai"<<endl<<"\t8.Ek pal ka jeena\t\t18.Koka\t\t\t\t28.Muskurane\t\t\t\t38.Aaj Phir - Hate Story 2\t48.Angreji Beat";
    cout<<endl<<"\t9.Mere sohneya\t\t\t19.Enni soni\t\t\t29.Gandi Baat\t\t\t\t39.Gajanana (Bajirao Mastani)\t49.Sunny_Sunny"<<endl<<"\t10.Tera ban jaunga\t\t20.Shehar ki ladaki\t\t30.Hero - Main Hoon Hero Tera\t\t40.Prem Leela\t\t\t50.Blame the Night";
    cout<<endl<<endl<<"\tYour choise :";
    cin>>c;
    system("color B");
    if(c==1){PlaySound(TEXT("Swag_Se_Swagat.wav"),NULL,SND_SYNC);}
    else if(c==2){PlaySound(TEXT("dilabar.wav"),NULL,SND_SYNC);}
    else if(c==3){PlaySound(TEXT("Pachtaoge.wav"),NULL,SND_SYNC);}
    else if(c==4){PlaySound(TEXT("Paagal hai.wav"),NULL,SND_SYNC);}
    else if(c==5){PlaySound(TEXT("O SAKI SAKI.wav"),NULL,SND_SYNC);}
    else if(c==6){PlaySound(TEXT("DO DIN.wav"),NULL,SND_SYNC);}
    else if(c==7){PlaySound(TEXT("EK LADAKI KO DEKHA TO AISA LAGA.wav"),NULL,SND_SYNC);}
    else if(c==8){PlaySound(TEXT("EK PAL KA JEENA.wav"),NULL,SND_SYNC);}
    else if(c==9){PlaySound(TEXT("MERE SOHNEYA.wav"),NULL,SND_SYNC);}
    else if(c==10){PlaySound(TEXT("TERA BAN JAUNGA.wav"),NULL,SND_SYNC);}
    else if(c==11){PlaySound(TEXT("GHUNGAROO.wav"),NULL,SND_SYNC);}
    else if(c==12){PlaySound(TEXT("VA VAYA NE VADAL UMATAYA.wav"),NULL,SND_SYNC);}
    else if(c==13){PlaySound(TEXT("shaitan ka sala.wav"),NULL,SND_SYNC);}
    else if(c==14){PlaySound(TEXT("ABCD2 - Happy Birthday.wav"),NULL,SND_SYNC);}
    else if(c==15){PlaySound(TEXT("Give Me Some Sunshine.wav"),NULL,SND_SYNC);}
    else if(c==16){PlaySound(TEXT("ISHARE_TERE.wav"),NULL,SND_SYNC);}
    else if(c==17){PlaySound(TEXT("JAI JAI SHIVSHANKAR.wav"),NULL,SND_SYNC);}
    else if(c==18){PlaySound(TEXT("KOKA.wav"),NULL,SND_SYNC);}
    else if(c==19){PlaySound(TEXT("ENNI SONI.wav"),NULL,SND_SYNC);}
    else if(c==20){PlaySound(TEXT("SHEHAR KI LADAKI.wav"),NULL,SND_SYNC);}
    else if(c==21){PlaySound(TEXT("Mohabbat_Ho_Na_Jaaye.wav"),NULL,SND_SYNC);}
    else if(c==22){PlaySound(TEXT("TERA HONR LAGA HOON.wav"),NULL,SND_SYNC);}
    else if(c==23){PlaySound(TEXT("AllahMaaf Kare.wav"),NULL,SND_SYNC);}
    else if(c==24){PlaySound(TEXT("Maa Tujhe Salam.wav"),NULL,SND_SYNC);}
    else if(c==25){PlaySound(TEXT("Aaj Dil Shayarana.wav"),NULL,SND_SYNC);}
    else if(c==26){PlaySound(TEXT("Bezubaan Phir Se.wav"),NULL,SND_SYNC);}
    else if(c==27){PlaySound(TEXT("Bilal Saeed - Adhi Adhi Raat.wav"),NULL,SND_SYNC);}
    else if(c==28){PlaySound(TEXT("Muskurane.wav"),NULL,SND_SYNC);}
    else if(c==29){PlaySound(TEXT("Gandi Baat.wav"),NULL,SND_SYNC);}
    else if(c==30){PlaySound(TEXT("Hero - Main Hoon Hero Tera.wav"),NULL,SND_SYNC);}
    else if(c==31){PlaySound(TEXT("India Waale.wav"),NULL,SND_SYNC);}
    else if(c==32){PlaySound(TEXT("Teri_Meri_Kahaani.wav"),NULL,SND_SYNC);}
    else if(c==33){PlaySound(TEXT("Jeene Laga Hoon.wav"),NULL,SND_SYNC);}
    else if(c==34){PlaySound(TEXT("Lonely.wav"),NULL,SND_SYNC);}
    else if(c==35){PlaySound(TEXT("Sanam Teri Kasam.wav"),NULL,SND_SYNC);}
    else if(c==36){PlaySound(TEXT("Tu Mere Agal Bagal Hai.wav"),NULL,SND_SYNC);}
    else if(c==37){PlaySound(TEXT("VANDE MATRAM.wav"),NULL,SND_SYNC);}
    else if(c==38){PlaySound(TEXT("Aaj Phir - Hate Story 2.wav"),NULL,SND_SYNC);}
    else if(c==39){PlaySound(TEXT("Gajanana (Bajirao Mastani) Sukhwinder.wav"),NULL,SND_SYNC);}
    else if(c==40){PlaySound(TEXT("Prem Leela.wav"),NULL,SND_SYNC);}
    else if(c==41){PlaySound(TEXT("Tumhe Apna Banane Ka.wav"),NULL,SND_SYNC);}
    else if(c==42){PlaySound(TEXT("Lungi Dance.wav"),NULL,SND_SYNC);}
    else if(c==43){PlaySound(TEXT("Ram Chahe Leela.wav"),NULL,SND_SYNC);}
    else if(c==44){PlaySound(TEXT("Offo.wav"),NULL,SND_SYNC);}
    else if(c==45){PlaySound(TEXT("Dj non stop garaba.wav"),NULL,SND_SYNC);}
    else if(c==46){PlaySound(TEXT("Hangover (Kick).wav"),NULL,SND_SYNC);}
    else if(c==47){PlaySound(TEXT("Palat_-_Tera_Hero_Idhar_Hai.wav"),NULL,SND_SYNC);}
    else if(c==48){PlaySound(TEXT("Angreji Beat.wav"),NULL,SND_SYNC);}
    else if(c==49){PlaySound(TEXT("Sunny_Sunny.wav"),NULL,SND_SYNC);}
    else if(c==50){PlaySound(TEXT("Blame the Night.wav"),NULL,SND_SYNC);}
    else{
        system("CLS");
        cout<<endl<<"\tEnter correct number"<<endl<<endl<<endl;
        h_single();
    }
    cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t---THANK YOU FOR  USING THIS AUDIO PLAYER---";
    char b;
    cout<<"\n\n\tIf you wish to play again then press 'y' or 'Y' else press any of  the key :";
    cin>>b;
    if(b=='y' || b=='Y'){
        cout<<endl<<"\tFor hindi  or gujarati song press 1 else for english song press 2 :";
        cout<<endl<<"\tYour choise :";
        int c;
        cin>>c;
        if(c==1)
            h_single();
        else
            e_single();
    }
}

