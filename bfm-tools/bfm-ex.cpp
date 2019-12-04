#include "bfm.h"

int main()
{
	bfm model2("inputs-inner.txt");
	model2.generate_average_face();
	model2.ply_write("rnd_face2.ply", true);
	bfm model3("inputs-outer.txt");
	model3.generate_average_face();
	model3.ply_write("rnd_face3.ply", true);
	system("pause");
    return 0;
}
