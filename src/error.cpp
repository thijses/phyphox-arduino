#include "phyphoxBleExperiment.h"
#include "copyToMem.h"

void PhyphoxBleExperiment::Error::getBytes(char *buffArray) {
    strcat(buffArray,"\t\t<info  label=\"ERROR FOUND: ");
	strcat(buffArray, MESSAGE);
	strcat(buffArray,"\" color=\"ff0000\">\n");
	strcat(buffArray,"\t\t</info>\n");
}
