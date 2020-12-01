int main()
{
int i, j;
int A = 0;
int m1[A][A];
int tp[A];
	for (i=0; i<A; i++){
		for (j=0; j <A; j++){
		m1[i][j]=i+j;
			}		
		}
	for(j=0; j<A; ++j)
	tp[j] = m1[j][0];
		for(i = 0; i<A -1; ++i)
		{
			for(j=0;j<A; j++)
			{
				m1[j][i]=m1[j][i+1]; 
			}
		}
		for(j=0; j<A; ++j)
 		m1[j][A-1]=tp[j];
}
