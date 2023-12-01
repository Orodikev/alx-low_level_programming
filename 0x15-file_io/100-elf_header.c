#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/******Function Prototypes*****/
void elf_check(unsigned char *efile);
void mag_p(unsigned char *efile);
void class_p(unsigned char *efile);
void data_p(unsigned char *efile);
void ver_p(unsigned char *efile);
void type_P(unsigned int tp, unsigned char *efile);
void abi_p(unsigned char *efile);
void ent_p(unsigned long int ent, unsigned char *efile);
void osa_p(unsigned int char *efile);
void elf_c(int e);

/**
 * elf_check - Function for an ELF file
 * @efile: Pointer to the array with the ELF magic numbers
 *
 * Return: Details of the ELF file, otherwise exit code 98
 */
void elf_check(unsigned char *efile)
{
	int i = 0;

	while (i < 4)
	{
		if (efile[i] != 127 &&
	efile[i] != 'E' &&
	efile[i] != 'L' &&
	efile[i] != 'F')
		{
		dprintf(STDERR_FILENO, "Error: Not an ELF FILE\n");
	exit(98);
		}
		i++;
	}
}

/**
 * mag_p - function to dsiplay the magic numbers of ELF header
 * @efile: A pointer to the array with the ELF magic numbers
 *
 * Description: Magic numbers separated by spaces
 */
void mag_p(unsigned char *efile)
{
	int i = 0;

	printf(" Magic:  ");
	while (i < EI_NIDENT)
	{
		printf("%02x", efile[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class_p - Function that prints the EFL header class.
 * @efile : pointer to the arrey where the EFL file is stored
 */
void class_p(unsigned char *efile)
{
	printf(" class:          ");
	switch (efile[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
		default:
			printf("not known: %x>\n", efile[EI_CLASS]);
	}
}
