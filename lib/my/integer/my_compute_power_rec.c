/*
** EPITECH PROJECT, 2021
** my_compute_power_rec
** File description:
** Recursive returns first arg raised to power
*/

int my_compute_power_rec(int nb, int p)
{
    int result = 0;

    if (p < 0)
        return 84;
    else if (result <= (p - 1))
        result = result * my_compute_power_rec(nb, p - 1);
    if (p == 0 || nb == 0)
        return -1;
    return result;
}
