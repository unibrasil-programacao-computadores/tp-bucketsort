#include "sort.h"
#include "input.h"

int main()
{
    sort_base_array(ordena_baldes, "Bucketsort");
    sort_ordered_arrays(ordena_baldes, "Bucketsort");
    sort_reverse_ordered_arrays(ordena_baldes, "Bucketsort");
    sort_uniform_arrays(ordena_baldes, "Bucketsort");

    return 0;
}
