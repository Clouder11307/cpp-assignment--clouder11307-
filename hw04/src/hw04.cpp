#include <hw04.h>

void copyArr(const int* source, int* dest, std::size_t len) {
    for(int i = 0;i < len;i++) {
        dest[i] = source[i];
    }

}

std::size_t hw04(const int* input_array, std::size_t elem_count)
{
    std::size_t sum = 0;
    std::size_t size = 1;

    int* out_data = new int[size]; // указатель на новую ячейку память
    out_data[0] = 0;

    for(int i = 0;i < elem_count;i++) {
            if(input_array[i] < 0) {
            break;
        }

        int* new_data = new int[size + 1];
        copyArr(new_data,out_data,size);
        new_data[size] = input_array[size];
        delete[] out_data;
        out_data = new_data;
        size++;
        sum += input_array[i];
    }

    delete[] out_data;
    return sum;
}