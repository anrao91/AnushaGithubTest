
struct cricket
{
	char name[20];
	int runs;
	int balls;
	double rate;
};
void read(struct cricket *,int);
void display(struct cricket *,int);
void sort(int,struct cricket *,int(*decide)(struct cricket,struct cricket));
int ratesort();
int namesort();

