void	adaptive_sort(double disorder, t_data data)
{
	if (disorder < 0.2)
		simple_sort(data);
	if (0.2 <= disorder < 0.5)
		medium_sort(data);
	if (disorder >= 0.5)
		complex_sort(data);
}