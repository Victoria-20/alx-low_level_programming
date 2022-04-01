## C Static Libraries
Static libraries are a collection of various object files that are essentially merged into another object file to form an exectutable.
On linux, static libraries end with ```.a``` file extension and end with ```.lib``` on windows machines.

### Process of creating Static Libraries
Static Libraries are usually created during the ```Linking Phase``` of processing a C program.
Just a recap, the 4-phases include;

	1. Preprocessing
	2. Compilation
	3. Assembly
	4. Linking

### 1. Create Object files
