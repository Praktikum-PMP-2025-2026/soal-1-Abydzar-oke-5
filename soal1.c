/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 2
 *   Hari dan Tanggal    : Senin, 20 April 2026
 *   Nama (NIM)          : Abydzar Dzakyan Akbar
 *   Nama File           : soal1.c
 *   Deskripsi           : Program yang dapat mengisi data sensor yang kosong sesuai dengan kondisi yang diberikan
 *                          lalu melakukan perkalian untuk nilai-nilai yang telah dibenarkan
 * 
 */


 #include <stdio.h>
 #include <string.h>


 int main() {

    int arr_size;
    //printf("");
    scanf("%d ", &arr_size);
    int arrdat[arr_size];
    int *parrdat[arr_size];
    int i;

    for (i = 0; i<arr_size; i++){
        scanf("%d", &arrdat[i]);
        parrdat[i] = &arrdat[i];
    }


    if (arrdat[i]==arr_size){
        for (i = 0; i<arr_size; i++){
            int temp = arrdat[i];
            temp = arrdat[i+1];
            arrdat[i+1] = temp;
        }
    }

    if (arrdat[i] == -1){
        if (arrdat[i-1] != -1 && arrdat[i+1] != -1){
            int ada = (arrdat[i-1] + arrdat[i+1])/2;
            parrdat[i] = &ada;
        } else if (arrdat[i-1] != -1 && arrdat[i+1]==-1){
            parrdat[i] = &arrdat[i-1];
        } else if (arrdat[i+1 != -1 && arrdat[i-1]==-1]){
            parrdat[i] = &arrdat[i+1];
        } else if (arrdat[i-1] == -1 && arrdat[i+1] == -1){
            parrdat[i] = 0;
        }

    }
    int hasil = 1;
    for (int i = 0; i < arr_size; i++) {
        hasil += *parrdat[i];
    }
    printf("RECOVERED %d\n", arrdat);
    printf("MAX_SUM ", hasil);

    return 0;
 
}
