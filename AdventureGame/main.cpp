#include <iostream>
#include <chrono>
#include <thread>
#include <cstdio>
#include <cstdlib>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// Deklarasi variable
    int nyawa=3;
    int x=1;
    int iter=0;
    char next;

    string tebak,tebakan;
    string teks[9];

    chrono::seconds dura(1);
    chrono::seconds dura2(2);

    vector<string> pertanyaan;
    vector<string> jawaban;
    vector<vector<string>> clue{
        {"\n\tclue two : warna warni","\n\tclue three: hujan"},
        {"\n\tclue two : berkelopak ","\n\tclue three: cantik"},
        {"\n\tcue two  : keinginan","\n\tclue three: cita cita"},
        {"\n\tclue two : asal","\n\tclue three: tempat tinggal"},
        {"\n\tclue two : kerja keras ","\n\tclue three: kasih sayang"}
    };

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// Story
    teks[1]={
        "\tKresek.. kresekk.."
        "\n\t\"Siapa itu? keluarlah!\""
        "\n\tsambil menengok ke atas kearah sumber suara berasal."
        "\n\t\"mm.. baiklah..\" \n\tseorang pria muncul dari atas pohon, melompat dan turun tepat \n\tdidepan Athanasia."};
    teks[2]={
        "\n\tHal itu membuat Athanasia terkejut hingga ia jatuh tersungkur kebelakang."
        "\n\t\"Si..siapa kamu? Apa yang kamu lakukan disini?\", menatap tajam mata pria yang \n\tada didepannya. \n"
        "\tPria tersebut mengerutkan dahinya. \n"
        "\t\"Bukan bukan, lebih tepatnya apa yang kau mau dariku?!\" tambah Athanasia dengan nada sedikit membentak. \n"
    };
    teks[3]={
        "\n\t\"hehehe.. kau terkejut ya? mari kubantu kau berdiri terlebih dahulu\", \n\tujar pria itu sambil tersenyum dan mengulurkan tangan."
        "\n\tDengan rasa sedikit takut, Athanasia tetap menerima bantuan pria tersebut dan \n\tberdiri. Setelahnya Athanasia melepas tangannya dan buru-buru membersihkan gaun tanggungnya."
    };
    teks[4]={
        "\n\t\"Perkenalkan, namaku Lucas. Kamu sangat menarik disini, jadi siapa namamu? \n\tdan, apa yang sedang kamu lakukan di hutan ini?\""
        "\n\t\"Namaku Athanasia. Aku kabur dari rumah dan tersesat di hutan tak berujung ini\",\n\t dengan ekspresi yang sedih dan kesal."
        "\n\n\t\"ohh.. jadi kau tersesat? Kasihan sekali..\", sambil tertawa kecil."
        "\n\t\"aku bisa membantumu, tapi kamu hanya memiliki 3 kesempatan. Kau mau?\", tanya\n\tLucas."
    };
    teks[5]={
        "\n\t\"Apa yang terjadi jika aku menghabiskan seluruh kesempatan itu?\", tanya Athanasia serius."
        "\n\t\"Kau harus mengikuti semuaa keinginanku seumur hidupmu.\", tegas Lucas sambil tertawa kecil"
    };
    teks[6]={
        "\n\t\"KAU BERCANDA? KAU GILA? Aku tidak mau!\", bentak Athanasia sambil berjalan \n\tmelalui Lucas."
        "\n\t\"Kau yakin? Apa kau tidak tahu bagaimana keadaan hutan ini? orang-orang yang \n\tbisa melewati hutan ini hanyalah orang-orang tertentu yang terpilih..\""
        "\n\tAthanasia menghentikan langkahnya."
        "\n\n\t\"Orang biasa sepertimu tidak akan bisa keluar dari hutan ini, tanpa bantuanku.\" Lucas tersenyum licik."
        "\n\t\"Apa kau serius dengan yang kau ucapkan itu?\", tanya Athanasia pasrah."
    };
    teks[7]={
        "\n\t\"Tentu saja aku serius. Jadi, apa kau mau menerima bantuanku?\", tanya Lucas."
        "\n\t\"Apa aku boleh meminta keringanan? dan bantuan apa yang kau ingin berikan \n\tuntukku?\" Athanasia berkata sambil membalikkan badannya menghadap Lucas."
        "\n\n\t\"hmm.. biar kupikirkan dulu..\", Lucas mulai berpikir keringanan apa yang akan diberikan pada Lucas."
        "\n\tAthanasia menatap sedih Lucas penuh harap, berharap Lucas mau berbaik hati lagi padanya."
        "\n\tLucas yang ditatap seperti itu akhirnya merasa simpati pada Athanasia."
    };
    teks[8]={
        "\n\t\"Baiklah, aku akan memberimu keringanan. Aku akan menolongmu untuk keluar dari \n\thutan ini dengan syarat kau harus menjawab 5 pertanyaan dariku dengan benar.\" jawab Lucas santai"
        "\n\t\"Ingat, kau hanya memiliki 3 kesempatan. jika kamu salah menjawab, kesempatanmu\n\takan berkurang satu, dan keringanannya adalah untuk setiap pertanyaan yang kau\n\tjawab benar akan aku beri 1 kesempatan tambahan. bagaimana? kau setuju?\" tanya Lucas"
        "\n\n\t\"Aku setuju.\" Jawab Athanasia lantang dan yakin."
        "\n\t\" wah wah.. kau menjawab tanpa berpikir dua kali ya.. baiklah aku akan\n\tmemberimu 5 pertanyaan dan kau harus menjawabnya secara langsung.\" Lucas \n\tmengatakannya sambil tertawa kecil."
    };
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Pertanyaan
        pertanyaan.push_back("\n\tSesuatu yang  indah,hanya muncul setelah ada"
        "\n\tclue one : langit langit");
        pertanyaan.push_back("\n\tHanya tumbuh indah setelah menangis"
        "\n\tclue one : harum ");
        pertanyaan.push_back("\n\tDalam mendapatkannya memang dibutuhkan pengorbanan"
        "\n\tclue one : masa depan ");
        pertanyaan.push_back("\n\tTempat ternyaman"
        "\n\tclue one : keluarga ");
        pertanyaan.push_back("\n\tYang akan selalu ada untuk kita"
        "\n\tclue one : merawatmu" );
    /// Jawaban
    jawaban.push_back("Pelangi");
    jawaban.push_back("Bunga");
    jawaban.push_back("Impian");
    jawaban.push_back("Rumah");
    jawaban.push_back("Orang tua");


    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///Source
    cout << "\t\t\t ===================== " << endl << endl;
    cout << "\t\t\t >> >> ATHANASIA << << " << endl << endl;
    cout << "\t\t\t ===================== " << endl << endl;


    //
    this_thread::sleep_for(dura);
    cout<<"\n\n\n";
    cout << "\t\t      ==== WELCOME TO MY GAME ==== \n";
    this_thread::sleep_for(dura);
    system("CLS");
    cout << "\n\t\"hah.. hah.. hah.. sampai kapan aku harus terus berjalan?\"" << endl;
    cout << "\t\"seberapa luas hutan ini? seperti tidak berujung. haaah.. \" Athanasia \n \tmenghela nafas" << endl << endl;
     next=fgetc(stdin);
     system("CLS");
//
//     int Gameplay = 0;
//     int isFinish =0;
//
//    if(Gameplay == 0){
    if(next==0x0A){
    while(x<=8){
    next=fgetc(stdin);
    if(next==0x0A){
        cout<<teks[x];
        x++;
    }
        next=getchar();
        system("CLS");
        }
    }
//    Gameplay = 1;
//    }
    /// Peraturan game
    cout << "\t\t\t\t  :: Game START! ::" << endl << endl;
    cout << "\tBantulah Athanasia menjawab pertanyaan-pertanyaan yang diberikan oleh Lucas\n\tsupaya Athanasia dapat keluar dari hutan." << endl << endl;
    cout << "\tPERATURAN GAME:" << endl;
    cout << "\t\t1. Hanya diberi 3 kesempatan menjawab salah." << endl;
    cout << "\t\t2. Setiap menjawab benar mendapatkan 1 kesempatan." << endl;
    cout << "\t\t3. Jika ketiga kesempatan habis, maka Athanasia dinyatakan kalah dan harus mengikuti \n\t\t   segala keinginan Lucas." << endl;
    cout << "\tJadi, mari kita bantu Athanasia sekuat tenaga!!" << endl;
    cout << "\n\n\t\t>>> CLICK ENTER UNTUK MEMULAI <<<"<<endl;
     next=fgetc(stdin);
     system("CLS");
    if(next==0x0A){
    cout << "==================================ATHANASIA========================================="<<endl;
    cout << "\n\n\tQuestion"<<endl;
    ///random
        srand((unsigned)time(0));
        iter=(rand()%pertanyaan.size());

            cout<<pertanyaan.size()<<endl;
            cout<<iter<<endl;



    int clues = 0;
    while(nyawa>0 && (!(pertanyaan.empty())))
        {
                cout<<pertanyaan[iter]<<endl;
                cout<<"\n\tJawab Pertanyaan :"<<endl;
                getline(cin,tebakan);
                if(tebakan==jawaban[iter]){
                    cout<<"Yeeey jawaban anda benar"<<endl;
                    nyawa++;
                    cout << "\n\t Nyawa :"<<nyawa<<endl;
                    pertanyaan.erase(pertanyaan.begin()+iter);
                    clue.erase(clue.begin()+iter);
                }

                else {

                        cout<<clue[iter][clues]<<endl;
                        nyawa--;
                        clues++;
                        cout << "\n\t Nyawa :"<<nyawa<<endl;

                }

        }

    }
    return 0;
}
