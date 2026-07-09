void	adaptive_sort(double disorder, )
{
	if (disorder < 0.2)
		simple_sort();
	if (0.2 <= disorder < 0.5)
		medium_sort();
	if (disorder >= 0.5)
		complex_sort();
}