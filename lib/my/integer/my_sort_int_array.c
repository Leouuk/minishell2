/*
** EPITECH PROJECT, 2021
** my_sort_int_array
** File description:
** Sort int array in ascending order
*/

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int stock;

    while (i < size - 1) {
        if (array[i + 1] < array[i]) {
            stock = array[i];
            array[i] = array[i + 1];
            array[i + 1] = stock;
            i = 0;
        } else
            i += 1;
    }
}
