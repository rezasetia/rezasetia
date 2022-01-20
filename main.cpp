/*
* nama kelompok : Muhammad Reza Setiawan
*               : joko setyanto
*               : fakhriyanur adha
*               : raka kusuma wardana
*               : sri utami 
* 
*                        aplikasi kasir
*               Kasir Toko Bunga
*/

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

void clear_screen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}


string namabarang[50];
int hargabarang[50], jumlahbarang[50], totalhargabarang[50], fixtotal = 0;
string pilihan;
int flagarray = 0;
long int bayar;


int main()
{
    int choice, jml_barang, harga, total;

    string item;
menu:
    clear_screen();
    cout << "                   APLIKASI KASIR BERSAMA                    " << endl;
    cout << "                     AMIKOM JAYA JAYA                        " << endl;
    cout << "=============================================================" << endl;
    cout << "=============================================================" << endl;
    cout << "                      LIST HARGA BUNGA                       " << endl;
    cout << "=============================================================" << endl;
    cout << "         [1]. BUNGA MAWAR                     RP 10.000      " << endl;
    cout << "         [2]. BUNGA MELATI                    RP 15.000      " << endl;
    cout << "         [3]. BUNGA SERUNI                    RP 17.500      " << endl;
    cout << "         [4]. BUNGA LILI                      RP 39.000      " << endl;
    cout << "         [5]. BUNGA TULIP                     RP 42.000      " << endl;
    cout << "         [6]. BUNGA MATAHARI                  RP 2.000.000   " << endl;
    cout << "         [7]. BUNGA RAFLESIA                  RP 78.000      " << endl;
    cout << "=============================================================" << endl;
    cout << "=============================================================" << endl << endl;

    do {
        cout << "MASUKKAN NOMOR BUNGA : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            item = "BUNGA MAWAR";
            harga = 10000;
            cout << "MASUKKAN JUMLAH BUNGA : ";
            cin >> jml_barang;
            total = harga * jml_barang;
            cout << jml_barang << " " << item << " = RP. " << harga * jml_barang << endl << endl;
        prosessing:
            namabarang[flagarray] = item;
            jumlahbarang[flagarray] = jml_barang;
            hargabarang[flagarray] = harga;
            totalhargabarang[flagarray] = total;
            fixtotal = fixtotal + totalhargabarang[flagarray];
            flagarray++;
            cout << "Apakah Anda Ingin Tambah Pembelian Barang (Ya/Tidak) :"; cin >> pilihan;
            if (pilihan == "YA" || pilihan == "yA" || pilihan == "Ya" || pilihan == "ya")
            {
                goto menu;
            }
            else {
                goto pembayaran;
            }
            break;
        case 2:
            item = "BUNGA MELATI";
            harga = 15000;
            cout << "MASUKKAN JUMLAH BUNGA : ";
            cin >> jml_barang;
            total = harga * jml_barang;
            cout << jml_barang << " " << item << " = RP " << harga * jml_barang << endl << endl;
            goto prosessing;
            break;
        case 3:
            item = "BUNGA SERUNI";
            harga = 17500;
            cout << "MASUKKAN JUMLAH BUNGA : ";
            cin >> jml_barang;
            total = harga * jml_barang;
            cout << jml_barang << " " << item << " = RP " << harga * jml_barang << endl << endl;
            goto prosessing;
            break;
        case 4:
            item = "BUNGA LILI";
            harga = 39000;
            cout << "MASUKKAN JUMLAH BUNGA : ";
            cin >> jml_barang;
            total = harga * jml_barang;
            cout << jml_barang << " " << item << " = RP " << harga * jml_barang << endl << endl;
            goto prosessing;
            break;
        case 5:
            item = "BUNGA TULIP";
            harga = 42000;
            cout << "MASUKKAN JUMLAH BUNGA : ";
            cin >> jml_barang;
            total = harga * jml_barang;
            cout << jml_barang << " " << item << " = RP " << harga * jml_barang << endl << endl;
            goto prosessing;
            break;
        case 6:
            item = "BUNGA MATAHARI";
            harga = 2000000;
            cout << "MASUKKAN JUMLAH BUNGA : ";
            cin >> jml_barang;
            total = harga * jml_barang;
            cout << jml_barang << " " << item << " = RP " << harga * jml_barang << endl << endl;
            goto prosessing;
            break;
        case 7:
            item = "BUNGA RAFLESIA";
            harga = 78000;
            cout << "MASUKKAN JUMLAH BUNGA : ";
            cin >> jml_barang;
            total = harga * jml_barang;
            cout << jml_barang << " " << item << " = RP " << harga * jml_barang << endl << endl;
            goto prosessing;
            break;
        default:
            cout << "PILIHAN ANDA SALAH BOS !!!" << endl << endl;
            break;
        }

    } while (choice > 7);

pembayaran:
    clear_screen();
    cout << "DETAIL PEMBAYARAN BUNGA" << endl;
    for (int y = 0; y < 78; ++y)
    {
        cout << "-";
        if (y == 77)
        {
            cout << endl;
        }
    }

    cout << "|" << setw(2) << "NO" << "|" << setw(15) << "NAMA BUNGA" << "|" << setw(15) << "JUMLAH BUNGA" << "|" << setw(15) << "HARGA BUNGA" << "|" << setw(25) << "TOTAL" << "|" << endl;

    for (int y = 0; y < 78; ++y)
    {
        cout << "-";
        if (y == 77)
        {
            cout << endl;
        }
    }

    int z = 1;
    for (int x = 0; x < 50; ++x)
    {

        if (namabarang[x] != "")
        {
            cout << "|" << setw(2) << z << "|" << setw(15) << namabarang[x] << "|" << setw(15) << jumlahbarang[x] << "|" << setw(15) << hargabarang[x] << "|" << setw(25) << totalhargabarang[x] << "|" << endl;
            z++;
        }
        else {
            break;
        }
    }


    for (int y = 0; y < 78; ++y)
    {
        cout << "-";
        if (y == 77)
        {
            cout << endl;
        }
    }

    cout << "|TOTAl HARGA TRANSAKSI :" << setw(53) << fixtotal << "|" << endl;

    for (int y = 0; y < 78; ++y)
    {
        cout << "-";
        if (y == 77)
        {
            cout << endl;
        }
    }

    cout << "Masukkan Nominal Uang Yang Ingin Di Bayarkan : Rp."; cin >> bayar;
    if (bayar >= fixtotal)
    {
        string pilih;
        clear_screen();
        cout << "UANG Kembalian : Rp." << bayar - fixtotal << endl;
        cout << "Ingin Menggunakan Program Lagi (Ya/Tidak) :"; cin >> pilih;
        if (pilih == "YA" || pilih == "yA" || pilih == "Ya" || pilih == "ya")
        {
            goto menu;
        }
        else {
        end:
            clear_screen();
            cout << "TERIMA KASIH TELAH MEMBELI" << endl;
        }
    }
    else {
        string kurang;
        cout << "Nominal uang yang DI Masukkan Kurang!" << endl;
        cout << "Apakah Ingin Bayar Ulang (Ya/Tidak) :"; cin >> kurang;
        if (kurang == "YA" || kurang == "yA" || kurang == "Ya" || kurang == "ya")
        {
            clear_screen();
            goto pembayaran;
        }
        else {
            clear_screen();
            goto menu;
        }
    }

    return 0;
}