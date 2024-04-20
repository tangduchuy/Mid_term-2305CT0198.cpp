#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string danhsachMSSV[5] = { "", "2303CT7777", "2302CT3333", "2306CT9999", "2301CT1111" };

    std::cout << "Vui long nhap MSSV cua ban: ";
    std::cin >> danhsachMSSV[0];

    for (int i = 0; i < 5; i++) {
        std::cout << "MSSV[" << i << "]: " << danhsachMSSV[i] << std::endl;
    }

    std::string danhsachMSSVSapXep[5];
    std::copy(danhsachMSSV, danhsachMSSV + 5, danhsachMSSVSapXep);
    std::sort(danhsachMSSVSapXep, danhsachMSSVSapXep + 5);
    std::cout << "Mang sau khi sap xep: " << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "MSSV[" << i << "]: " << danhsachMSSVSapXep[i] << std::endl;
    }

    std::string* ptrArrayMSSV = std::max_element(danhsachMSSV, danhsachMSSV + 5);
    std::cout << "dia chi cua phan tu chua MSSV lon nhat: " << ptrArrayMSSV << std::endl;
    std::cout << "Phan tu chua MSSV lon nhat: " << *ptrArrayMSSV << std::endl;

    return 0;
}
