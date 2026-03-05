#include <stdio.h>

int main() {
    int n;
    int nilai;
    long long total_nilai = 0; // Menggunakan long long untuk menampung total nilai yang mungkin besar
    double rata_rata;

    // Membaca bilangan positif n (jumlah nilai yang akan diinput)
    scanf("%d", &n);

    // Membaca n buah nilai dan menjumlahkannya
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai);
        total_nilai += nilai;
    }

    // Menghitung rata-rata
    // Menggunakan (double) untuk memastikan pembagian floating point
    if (n > 0) {
        rata_rata = (double)total_nilai / n;
    } else {
        rata_rata = 0.0; // Jika tidak ada nilai, rata-rata adalah 0
    }

    // Menampilkan jumlah seluruh nilai
    printf("%lld\n", total_nilai);

    // Menampilkan nilai rata-rata dengan 2 digit presisi di belakang koma
    printf("%.2lf\n", rata_rata);

    return 0;
}
