#include "main.h"

#include <stdlib.h>

/**
<<<<<<< HEAD
 *
 *  * free_grid  - frees up a grid
 *
 *   * @grid: grid to check
 *
 *    * @height: height of grid
 *
 *     */

=======
 * free_grid  - frees up a grid
 * @grid: grid to check
 * @height: height of grid
 */
>>>>>>> e970e6abe56ab0f4f5b77f584deb5064f7e3fe85
void free_grid(int **grid, int height)

{
<<<<<<< HEAD

	        int i;



		        if (height <= 0)

				                return;



			        if (grid == NULL)

					                return;



				        for (i = 0; i < height; i++)

						        {

								                free(grid[i]);

										        }
=======
        int i;

        if (height <= 0)
                return;

        if (grid == NULL)
                return;

        for (i = 0; i < height; i++)
        {
                free(grid[i]);
        }
>>>>>>> e970e6abe56ab0f4f5b77f584deb5064f7e3fe85
