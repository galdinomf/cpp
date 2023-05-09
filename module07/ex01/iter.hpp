template <typename T>
void	iter(T* addr, unsigned int len, void (*f)(T *))
{
	unsigned int i = -1;
	while (++i < len)
		(*f)(&addr[i]);
}