void    measure_disorder(t_data *data)
{
    int         total_pairs;
    int         mistakes;
    t_stack     *node;

    total_pairs = 0;
    mistakes = 0;
    if (!data->a || !data->a->next)
    {
        data->disorder = 0.0;
        return ;
    }
    node = data->a;
    while (node->next)
    {
        if (node->value > node->next->value)
            mistakes++;
        total_pairs++;
        node = node->next;
    }
    if (total_pairs == 0)
        data->disorder = 0.0;
    else
        data->disorder = (double)mistakes / (double)total_pairs;
}