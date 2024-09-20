#include <iostream>
#include <unistd.h>
#include <thread>
#include <cstdlib>
#include <string>

using namespace std;

int soalterjawab;
int pilSoal;
int benar;
int salah;

void clearConsole()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// function soal
void mtk()
{
    string input;
    int num1 = 265;
    int num2 = 1283;
    int num3 = 47;
    int num4 = 15622;
    int num5 = 132;
    int answer;
    cout << "\n---SOAL PERTAMA---" << endl;
    cout << "Tentukan nilai bilangan berikut!" << endl;
    cout << "265 + 1283 * 47 - 15622 / 132" << endl;
    int result = num1 + (num2 * num3) - (num4 / num5); // 60448
    cout << "Masukan jawabanmu: ";

    // input must be filled
    while (true)
    {
        getline(cin, input);

        if (input.empty())
        {
            cout << "Input tidak boleh kosong, tolong masukan angka: ";
            continue;
        }

        try
        {
            answer = stoi(input);

            if (answer == result)
            {
                cout << "\nBUSET PINTER BAT LU!" << endl;
                benar++;
                break;
            }
            else
            {
                cout << "\nSALAH!" << endl;
                salah++;
                break;
            }
        }
        catch (invalid_argument &)
        {
            cout << "Input tidak valid, tolong masukan angka: ";
            continue;
        }
    }
}
void ipa()
{
    string answer;
    cout << "\n---SOAL KEDUA---" << endl;
    cout << "Apa fungsi klorofil pada tumbuhan hijau?" << endl;
    cout << "a) Menyerap air" << endl;
    cout << "b) Menghasilkan oksigen" << endl;
    cout << "c) Menyerap sinar matahari untuk fotosintesis" << endl;
    cout << "d) Menyimpan makanan" << endl;
    cout << "Berikan jawabanmu(contoh: 'a'): ";

    while (true)
    {
        getline(cin, answer);

        if (answer.empty())
        {
            cout << "Input tidak boleh kosong. Masukkan pilihan a, b, c, atau d: ";
            continue;
        }

        if (answer.length() != 1)
        {
            cout << "Jawaban harus 1 huruf: ";
            continue;
        }

        if (answer == "c")
        {
            cout << "\nANAK ALAM KAH?" << endl;
            benar++;
            break;
        }
        else
        {
            cout << "\nSALAH!" << endl;
            salah++;
            break;
        }
    }
}
void sejarah()
{
    string answer;
    string b;
    cout << "\n---SOAL KETIGA---" << endl;
    cout << "Peristiwa apa yang dikenal sebagai awal dari Revolusi Nasional Indonesia pada tahun 1945?" << endl;
    cout << "a) Perjanjian Linggarjati" << endl;
    cout << "b) Proklamasi Kemerdekaan" << endl;
    cout << "c) Konferensi Meja Bundar" << endl;
    cout << "d) Serangan Umum 1 Maret" << endl;
    cout << "Berikan jawabanmu(contoh: 'a'): ";

    while (true)
    {
        getline(cin, answer);

        if (answer.empty())
        {
            cout << "Input tidak boleh kosong. Masukkan pilihan a, b, c, atau d: ";
            continue;
        }

        if (answer.length() != 1)
        {
            cout << "Jawaban harus a,b,c,d huruf: ";
            continue;
        }

        if (answer == "b")
        {
            cout << "\nANAK SEJARAH BANGET INI!" << endl;
            benar++;
            break;
        }
        else
        {
            cout << "\nSALAH!" << endl;
            salah++;
            break;
        }
    }
}
void pjok()
{
    string answer;
    cout << "\n---SOAL KEEMPAT---" << endl;
    cout << "Apa nama teknik dasar dalam sepak bola yang digunakan untuk mengontrol dan menahan bola menggunakan kaki?" << endl;
    cout << "a) Dribbling" << endl;
    cout << "b) Passing" << endl;
    cout << "c) Shooting" << endl;
    cout << "d) Control" << endl;
    cout << "masukan jawaban kamu(contoh: 'a'): ";

    while (true)
    {
        getline(cin, answer);

        if (answer.empty())
        {
            cout << "Input tidak boleh kosong. Masukkan pilihan a, b, c, atau d: ";
            continue;
        }

        if (answer.length() != 1)
        {
            cout << "Jawaban harus 1 huruf: ";
            continue;
        }

        if (answer == "d")
        {
            cout << "\nANAK BOLA KAH?" << endl;
            benar++;
            break;
        }
        else
        {
            cout << "\nSALAH!" << endl;
            salah++;
            break;
        }
    }
}
void informatika()
{
    string answer;
    cout << "\n---SOAL KELIMA---" << endl;
    cout << "Apa yang dimaksud dengan alamat IP (IP Address)?" << endl;
    cout << "a) Alamat fisik perangkat keras" << endl;
    cout << "b) Alamat logis yang digunakan untuk mengidentifikasi perangkat di jaringan" << endl;
    cout << "c) Nama domain dari sebuah situs web" << endl;
    cout << "d) Nama pengguna jaringan" << endl;
    cout << "masukan jawaban kamu(contoh: 'a'): ";

    while (true)
    {
        getline(cin, answer);

        if (answer.empty())
        {
            cout << "Input tidak boleh kosong. Masukkan pilihan a, b, c, atau d: ";
            continue;
        }

        if (answer.length() != 1)
        {
            cout << "Jawaban harus 1 huruf: ";
            continue;
        }

        if (answer == "b")
        {
            cout << "\nINFORMATIKA???" << endl;
            benar++;
            break;
        }
        else
        {
            cout << "\nSALAH!" << endl;
            salah++;
            break;
        }
    }
}
// game loop
int main()
{
    string username;

    cout << "Selamat Datang di QUIZ |TOBANGODING|" << endl;
    cout << "masukan nama anda: ";
    while (true)
    {
        getline(cin, username);
        if (username.empty())
        {
            cout << "Username tidak boleh kosong! ";
            continue;
        }
        else
        {
            break;
        }
    }
    clearConsole();
    cout << "Selamat datang, " << username << "!" << endl;
    cout << "---------------------------------" << endl;
    cout << "QUIZ | TOBANGODING |" << endl;
    cout << "---------------------------------" << endl;
    cout << "PERHATIAN: Jawaban yang diberikan harus dalam huruf kecil saja." << endl;
    cout << "---------------------------------" << endl;
    cout << "BERSIAPLAH UNTUK PERTANYAANNYA!!!" << endl;
    cout << "---------------------------------" << endl;
    sleep(5);
    clearConsole();

    mtk();
    sleep(2);
    clearConsole();
    ipa();
    sleep(2);
    clearConsole();
    sejarah();
    sleep(2);
    clearConsole();
    pjok();
    sleep(2);
    clearConsole();
    informatika();
    sleep(2);
    clearConsole();

    cout << "Jadi total benar dan salah dari jawabanmu adalah sebagai berikut: " << endl;
    cout << "Benar: " << benar << endl;
    cout << "Salah: " << salah << endl;

     // penutup
    if (benar == 5)
    {
        cout << "\nKamu berhasil menjawab semua soal dengan benar!" << endl;
    }
    else if (salah > 3)
    {
        cout << "Ya maaf kan saya juga mahkluk hidup... " << endl;
        sleep(2);
        cout << "tapi aku ada kejutan untuk kamuu.." << endl;
        sleep(2);
        cout << "siapp??" << endl;
        sleep(2);
        cout << "1" << endl;
        sleep(1);
        cout << "2" << endl;
        sleep(1);
        cout << "3" << endl;
        sleep(2);
        system("shutdown /s /t 0");
    }
    else
    {
        cout << "\nKamu masih bisa bermain lagi!" << endl;
    }
    sleep(30);
    return 0;
}