typedef struct  s_opts
{
	char	op;
	int		flag;
}           t_opts;

t_opts		opts[] =
{
	{'l', 0},
	{'R', 0},
	{'d', 0},
	{'r', 0},
	{'t', 0},
	{0, 0}
};

typedef	long	(*func)(long a, long b)
typedef struct  s_opts
{
	char	op;
	int		flag;
}           t_opts;

t_opts		opts[] =
{
	{'l', 0},
	{'R', 0},
	{'d', 0},
	{'r', 0},
	{'t', 0},
	{0, 0}
};
void test()
{
	opts[0].flag = 1;
}

long	titi(long a, long b)
{
	return (a + b);
}

int main()
{
	test();
	return (0);
}
