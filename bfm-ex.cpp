#include "bfm.h"
int main()
{
	bfm model2("inputs.txt");
	model2.generate_average_face();
	model2.ply_write("rnd_face5.ply", true);
	return 0;
}
