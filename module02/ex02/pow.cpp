float	pow(int	base, int exp)
{
	int	i;
	float	res;
	int	exp2;

	res = 1;
	i = -1;
	if (exp < 0)
		exp2 = (-1) * exp;
	else
		exp2 = exp;
	while (++i < exp2)
		res *= base;
	if (exp < 0)
		return (1 / res);
	else
		return res;
}