template <typename T, typename F>
void	iter(T* addr, unsigned int len, F f)
{
	unsigned int i = -1;
	while (++i < len)
		f(addr[i]);
}