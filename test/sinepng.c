#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "gnuplot_i.h"

int main(int argc, char * argv[])
{
	gnuplot_ctrl * g = gnuplot_init();

	gnuplot_set_terminal(g, "png");
	gnuplot_set_output(g, "sine.png");
	gnuplot_plot_equation(g, "sin(x)", "Sine wave");
	gnuplot_close(g);

	return 0 ;
}

