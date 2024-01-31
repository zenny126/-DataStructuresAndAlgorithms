#include <iostream>
#include <vector>
#include <algorithm>

void min_swaps_to_sort(std::vector<int>& arr, int n) {
    std::vector<std::pair<int, int>> a(n);
    
    for (int i = 0; i < n; ++i) {
        a[i] = {arr[i], i};
    }

    std::sort(a.begin(), a.end());

    int swaps = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i].second == i) {
            continue;
        } else {
            std::swap(a[i], a[a[i].second]);
            --i;
            ++swaps;
        }
    }

    std::cout << swaps << std::endl;
}

int main() {
    int T;
    std::cout << "Nhap so luong bo test T: ";
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int n, X;
        std::cout << "Nhap so phan tu cua mang n va X: ";
        std::cin >> n >> X;

        std::vector<int> A(n);
        std::cout << "Nhap cac phan tu cua mang A: ";
        for (int i = 0; i < n; ++i) {
            std::cin >> A[i];
        }

        min_swaps_to_sort(A, n);
    }

    return 0;
}
