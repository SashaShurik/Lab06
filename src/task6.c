int main()
{
int A = 0;
int m2[A][A];
int mres[A][A];
int i,j,n;
for (i=0; i<A; i++){
		for (j=0; j <A; j++){
		m2[i][j]=i+j;
			}		
		}
for (i=0; i<A; i++){
	for (j=0; j<A; j++){
		for (n=0; n<A; ++n){
	mres[i][j] += m2[i][n] * m2[n][j];
			}
		}
	}
}
