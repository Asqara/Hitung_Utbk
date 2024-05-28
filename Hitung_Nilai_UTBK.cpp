#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;
int main(){
    //Data structure
    float jumlah_benar_PU,jumlah_benar_PPU,jumlah_benar_PBM,jumlah_benar_PK,jumlah_benar_LBI,jumlah_benar_LBE,jumlah_benar_PM;
    float total_1,total_2,total_3,total_4,total_5,total_6,total_7 = 0;
    char ulang;
    srand(static_cast<unsigned int>(time(0)));
    //Input User Data
do
{
    cout << "================================================================"<< endl; 
    cout << "Masukkan jumlah soal benar PU kamu (1-30)     : ";
    cin >> jumlah_benar_PU;
    cout << "Masukkan jumlah soal benar PPU kamu (1-20)    : ";
    cin >> jumlah_benar_PPU;
    cout << "Masukkan jumlah soal benar PBM kamu (1-20)    : ";
    cin >> jumlah_benar_PBM;
    cout << "Masukkan jumlah soal benar PK kamu (1-20)     : ";
    cin >> jumlah_benar_PK;
    cout << "Masukkan jumlah soal benar LBI kamu (1-25)    : ";
    cin >> jumlah_benar_LBI;
    cout << "Masukkan jumlah soal benar LBE kamu (1-20)    : ";
    cin >> jumlah_benar_LBE;
    cout << "Masukkan jumlah soal benar PM kamu (1-20)     : ";
    cin >> jumlah_benar_PM;
    cout << "================================================================"<< endl;
    //Program Utama
    float Nilai_PU,Nilai_PPU,Nilai_PBM,Nilai_PK,Nilai_LBI,Nilai_LBE,Nilai_PM;
    //Nilai PU 30 Soal
        if (jumlah_benar_PU == 1) {
            Nilai_PU = 70 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        } 
        else if (jumlah_benar_PU == 2 ) {
            Nilai_PU = 120 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/35.5));
        }else if (jumlah_benar_PU == 3) {
            Nilai_PU = 145 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }else if (jumlah_benar_PU == 4) {
            Nilai_PU = 170 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }
        else if (jumlah_benar_PU == 5) {
            Nilai_PU = 210 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }
        else if (jumlah_benar_PU == 6) {
            Nilai_PU = 240 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }
        else if (jumlah_benar_PU == 7) {
            Nilai_PU = 275 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }
        else if (jumlah_benar_PU == 8) {
            Nilai_PU = 310 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }
        else if (jumlah_benar_PU == 9) {
            Nilai_PU = 340 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }
        else if (jumlah_benar_PU == 10) {
            Nilai_PU = 370 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }
        else if (jumlah_benar_PU == 11) {
            Nilai_PU = 395 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }
        else if (jumlah_benar_PU == 12) {
            Nilai_PU = 425 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/35.5));
        }
        else if (jumlah_benar_PU == 13) {
            Nilai_PU = 455 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/35.5));
        }
        else if (jumlah_benar_PU == 14) {
            Nilai_PU = 480 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/35.5));
        }
        else if (jumlah_benar_PU == 15) {
            Nilai_PU = 510 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/35.5));
        }
        else if (jumlah_benar_PU == 16) {
            Nilai_PU = 550 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/35.5));
        }
        else if (jumlah_benar_PU == 17) {
            Nilai_PU = 590 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/35.5));
        }
        else if (jumlah_benar_PU == 18) {
            Nilai_PU = 630 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/35.5));
        }
        else if (jumlah_benar_PU == 19) {
            Nilai_PU = 660 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/35.5));
        }
        else if (jumlah_benar_PU == 20) {
            Nilai_PU = 690 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/35.5));
        }else if (jumlah_benar_PU == 21) {
            Nilai_PU = 720 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/35.5));
        }else if (jumlah_benar_PU == 22) {
            Nilai_PU = 750 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/35.5));
        }
        else if (jumlah_benar_PU == 23) {
            Nilai_PU = 780 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/35.5));
        }else if (jumlah_benar_PU == 24) {
            Nilai_PU = 790 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }else if (jumlah_benar_PU == 25) {
            Nilai_PU = 820 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }else if (jumlah_benar_PU == 26) {
            Nilai_PU = 830 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }else if (jumlah_benar_PU == 27) {
            Nilai_PU = 860 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }else if (jumlah_benar_PU == 28) {
            Nilai_PU = 900 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }else if (jumlah_benar_PU == 29) {
            Nilai_PU = 930 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50));
        }
        else if (jumlah_benar_PU == 30) {
            Nilai_PU = 950 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50));
        }
        cout << "Perkiraan Hasil Nilai Subtest PU Kamu adalah "<< Nilai_PU << endl;
        total_1 += Nilai_PU; // Menambahkan bilangan acak ke total
        //Akhir Program PU

        //Nilai PPU 20 Soal
        if (jumlah_benar_PPU == 1) {
            Nilai_PPU = 70 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        } 
        else if (jumlah_benar_PPU == 2 ) {
            Nilai_PPU = 120 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }else if (jumlah_benar_PPU == 3) {
            Nilai_PPU = 140 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }else if (jumlah_benar_PPU == 4) {
            Nilai_PPU = 190 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PPU == 5) {
            Nilai_PPU = 230 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PPU == 6) {
            Nilai_PPU = 270 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PPU == 7) {
            Nilai_PPU = 310 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PPU == 8) {
            Nilai_PPU = 370 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PPU == 9) {
            Nilai_PPU = 420 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PPU == 10) {
            Nilai_PPU = 470 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PPU == 11) {
            Nilai_PPU = 520 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PPU == 12) {
            Nilai_PPU = 570 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PPU == 13) {
            Nilai_PPU = 610 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PPU == 14) {
            Nilai_PPU = 650 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PPU == 15) {
            Nilai_PPU = 700 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PPU == 16) {
            Nilai_PPU = 740 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PPU == 17) {
            Nilai_PPU = 790 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PPU == 18) {
            Nilai_PPU = 840 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PPU == 19) {
            Nilai_PPU = 900 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PPU == 20) {
            Nilai_PPU = 950 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50));
        }
            cout << "Perkiraan Hasil Nilai Subtest PPU Kamu adalah "<< Nilai_PPU << endl;
            total_2 += Nilai_PPU;
        //Akhir Nilai PPU 20 Soal

        //Progam Nilai PBM
        if (jumlah_benar_PBM == 1) {
            Nilai_PBM = 70 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        } 
        else if (jumlah_benar_PBM == 2 ) {
            Nilai_PBM = 120 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }else if (jumlah_benar_PBM == 3) {
            Nilai_PBM = 140 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }else if (jumlah_benar_PBM == 4) {
            Nilai_PBM = 190 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PBM == 5) {
            Nilai_PBM = 230 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PBM == 6) {
            Nilai_PBM = 270 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PBM == 7) {
            Nilai_PBM = 310 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PBM == 8) {
            Nilai_PBM = 370 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PBM == 9) {
            Nilai_PBM = 420 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PBM == 10) {
            Nilai_PBM = 470 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PBM == 11) {
            Nilai_PBM = 520 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PBM == 12) {
            Nilai_PBM = 560 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PBM == 13) {
            Nilai_PBM = 610 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PBM == 14) {
            Nilai_PBM = 650 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PBM == 15) {
            Nilai_PBM = 700 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PBM == 16) {
            Nilai_PBM = 740 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PBM == 17) {
            Nilai_PBM = 790 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PBM == 18) {
            Nilai_PBM = 840 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PBM == 19) {
            Nilai_PBM = 900 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PBM == 20) {
            Nilai_PBM = 950 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50));
        }
            cout << "Perkiraan Hasil Nilai Subtest PBM Kamu adalah "<< Nilai_PBM << endl;
            total_3 += Nilai_PBM;
        //akhir program PBM

        //program PK
        if (jumlah_benar_PK == 1) {
            Nilai_PK = 100 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        } 
        else if (jumlah_benar_PK == 2 ) {
            Nilai_PK = 180 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }else if (jumlah_benar_PK == 3) {
            Nilai_PK = 230 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }else if (jumlah_benar_PK == 4) {
            Nilai_PK = 270 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PK == 5) {
            Nilai_PK = 320 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PK == 6) {
            Nilai_PK = 400 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PK == 7) {
            Nilai_PK = 430 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PK == 8) {
            Nilai_PK = 470 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PK == 9) {
            Nilai_PK = 510 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PK == 10) {
            Nilai_PK = 560 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PK == 11) {
            Nilai_PK = 600 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PK == 12) {
            Nilai_PK = 630 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PK == 13) {
            Nilai_PK = 660 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PK == 14) {
            Nilai_PK = 700 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PK == 15) {
            Nilai_PK = 740 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PK == 16) {
            Nilai_PK = 780 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PK == 17) {
            Nilai_PK = 810 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PK == 18) {
            Nilai_PK = 890 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PK == 19) {
            Nilai_PK = 930 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PK == 20) {
            Nilai_PK = 965 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/35));
        }
            cout << "Perkiraan Hasil Nilai Subtest PK Kamu adalah "<< Nilai_PK << endl;
            total_4 += Nilai_PK;
        //Akhir Program PK
        //Program LBI
        if (jumlah_benar_LBI == 1) {
            Nilai_LBI = 80 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        } 
        else if (jumlah_benar_LBI == 2 ) {
            Nilai_LBI = 140 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }else if (jumlah_benar_LBI == 3) {
            Nilai_LBI = 175 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }else if (jumlah_benar_LBI == 4) {
            Nilai_LBI = 200 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_LBI == 5) {
            Nilai_LBI = 240 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_LBI == 6) {
            Nilai_LBI = 280 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_LBI == 7) {
            Nilai_LBI = 320 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_LBI == 8) {
            Nilai_LBI = 360 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_LBI == 9) {
            Nilai_LBI = 400 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_LBI == 10) {
            Nilai_LBI = 450 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_LBI == 11) {
            Nilai_LBI = 495 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_LBI == 12) {
            Nilai_LBI = 545 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_LBI == 13) {
            Nilai_LBI = 595 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_LBI == 14) {
            Nilai_LBI = 645 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }
        else if (jumlah_benar_LBI == 15) {
            Nilai_LBI = 680 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }
        else if (jumlah_benar_LBI == 16) {
            Nilai_LBI = 710 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }
        else if (jumlah_benar_LBI == 17) {
            Nilai_LBI = 740 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }
        else if (jumlah_benar_LBI == 18) {
            Nilai_LBI = 770 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }
        else if (jumlah_benar_LBI == 19) {
            Nilai_LBI = 800 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_LBI == 20) {
            Nilai_LBI = 830 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }else if (jumlah_benar_LBI == 21) {
            Nilai_LBI = 860 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }else if (jumlah_benar_LBI == 22) {
            Nilai_LBI = 890 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }
        else if (jumlah_benar_LBI == 23) {
            Nilai_LBI = 920 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }else if (jumlah_benar_LBI == 24) {
            Nilai_LBI = 950 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30.5));
        }else if (jumlah_benar_LBI == 25) {
            Nilai_LBI = 970 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/30));
        }
        cout << "Perkiraan Hasil Nilai Subtest LBI Kamu adalah "<< Nilai_LBI << endl;
        total_5 += Nilai_LBI; // Menambahkan bilangan acak ke total
        //Akhir program LBI

        //Program LBE
        if (jumlah_benar_LBE == 1) {
            Nilai_LBE = 70 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        } 
        else if (jumlah_benar_LBE == 2 ) {
            Nilai_LBE = 120 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }else if (jumlah_benar_LBE == 3) {
            Nilai_LBE = 140 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }else if (jumlah_benar_LBE == 4) {
            Nilai_LBE = 190 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_LBE == 5) {
            Nilai_LBE = 230 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_LBE == 6) {
            Nilai_LBE = 270 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_LBE == 7) {
            Nilai_LBE = 310 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_LBE == 8) {
            Nilai_LBE = 370 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_LBE == 9) {
            Nilai_LBE = 420 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_LBE == 10) {
            Nilai_LBE = 470 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_LBE == 11) {
            Nilai_LBE = 520 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_LBE == 12) {
            Nilai_LBE = 560 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_LBE == 13) {
            Nilai_LBE = 610 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_LBE == 14) {
            Nilai_LBE = 650 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_LBE == 15) {
            Nilai_LBE = 700 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_LBE == 16) {
            Nilai_LBE = 740 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_LBE == 17) {
            Nilai_LBE = 790 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_LBE == 18) {
            Nilai_LBE = 840 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_LBE == 19) {
            Nilai_LBE = 900 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_LBE == 20) {
            Nilai_LBE = 950 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50));
        }
            cout << "Perkiraan Hasil Nilai Subtest LBE Kamu adalah "<< Nilai_LBE << endl;
            total_6 += Nilai_LBE;
        // Akhir program LBE
        
        //Program PM
        if (jumlah_benar_PM == 1) {
            Nilai_PM = 100 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        } 
        else if (jumlah_benar_PM == 2 ) {
            Nilai_PM = 180 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }else if (jumlah_benar_PM == 3) {
            Nilai_PM = 230 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }else if (jumlah_benar_PM == 4) {
            Nilai_PM = 270 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PM == 5) {
            Nilai_PM = 320 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PM == 6) {
            Nilai_PM = 400 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PM == 7) {
            Nilai_PM = 430 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PM == 8) {
            Nilai_PM = 470 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PM == 9) {
            Nilai_PM = 510 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PM == 10) {
            Nilai_PM = 570 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/40.5));
        }
        else if (jumlah_benar_PM == 11) {
            Nilai_PM = 620 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PM == 12) {
            Nilai_PM = 650 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PM == 13) {
            Nilai_PM = 675 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PM == 14) {
            Nilai_PM = 700 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PM == 15) {
            Nilai_PM = 740 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PM == 16) {
            Nilai_PM = 780 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PM == 17) {
            Nilai_PM = 810 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PM == 18) {
            Nilai_PM = 890 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PM == 19) {
            Nilai_PM = 930 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/50.5));
        }
        else if (jumlah_benar_PM == 20) {
            Nilai_PM = 965 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX/35));
        }
            cout << "Perkiraan Hasil Nilai Subtest PK Kamu adalah "<< Nilai_PM << endl;
            total_7 += Nilai_PM;
        //Akhir Program PM
        //Rata-Rata dan Presentase
        cout << "================================================================"<< endl;
        float rata_rata_skor;
        rata_rata_skor = (total_1 + total_2 + total_3 + total_4 + total_5 + total_6 + total_7) / 7;
        cout << "Nilai Rata-Rata Skor Kamu adalah " << rata_rata_skor << endl;
        float jumlah_benar_total;
        jumlah_benar_total = (jumlah_benar_LBE+jumlah_benar_LBI+jumlah_benar_PBM+jumlah_benar_PK+jumlah_benar_PM+jumlah_benar_PPU+jumlah_benar_PU);
        cout << "Jumlah benar dari semua test kamu adalah " << jumlah_benar_total << endl;
        cout << "================================================================"<< endl;
        cout << "               Presentase Jumlah Benar SNBT Kamu\n";
        cout << "================================================================"<< endl;
        float Presentase_benar_total,Presentase_benar_PU,Presentase_benar_PPU,Presentase_benar_PBM,Presentase_benar_PK,Presentase_benar_LBI,Presentase_benar_LBE,Presentase_benar_PM;
        Presentase_benar_PU = (jumlah_benar_PU/30)*100;
        cout << "Presentase Jumlah Benar Subtest PU " << Presentase_benar_PU << " %"<< endl;
        Presentase_benar_PPU = (jumlah_benar_PPU/20)*100;
        cout << "Presentase Jumlah Benar Subtest PPU " << Presentase_benar_PPU << " %"<< endl;
        Presentase_benar_PBM = (jumlah_benar_PBM/20)*100;
        cout << "Presentase Jumlah Benar Subtest PBM " << Presentase_benar_PBM << " %"<< endl;
        Presentase_benar_PK = (jumlah_benar_PK/20)*100;
        cout << "Presentase Jumlah Benar Subtest PK " << Presentase_benar_PK << " %"<< endl;
        Presentase_benar_LBI = (jumlah_benar_LBI/25)*100;
        cout << "Presentase Jumlah Benar Subtest LBI " << Presentase_benar_LBI << " %"<< endl;
        Presentase_benar_LBE = (jumlah_benar_LBE/20)*100;
        cout << "Presentase Jumlah Benar Subtest LBE " << Presentase_benar_LBE << " %"<< endl;
        Presentase_benar_PM = (jumlah_benar_PM/20)*100;
        cout << "Presentase Jumlah Benar Subtest PM " << Presentase_benar_PM << " %"<< endl;
        Presentase_benar_total = (jumlah_benar_total/155)*100;
        cout << "Presentase Jumlah Benar Semua Test " << Presentase_benar_total << " %"<< endl;
        cout << "================================================================"<< endl;
        cout << "Ingin Mengulang Program (Y/N): ";
        cin >> ulang;
}while(ulang == 'Y' || ulang == 'y');
    cin.get();
    return 0;
    //Program Nilai selesai
}