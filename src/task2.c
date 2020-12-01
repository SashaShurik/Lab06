int main()
{
	const int length = 4;
	int mas[length];
	int a = 0;
	int b = 0;
	int c = 0;
	while (a < length)
	{
		for(int i = c;i < 100;i++)
		{
			b = 1;
			for (int j = 2; j < i; j++)
			{
				if (i % j ==0)
				{
					b = 0;
					break;
				}
			}
			if (b!=0)
			{
				mas[a] = i;
				c = i;
				break;
			}
		}
		a++;
	}
}
