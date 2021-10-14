COMPILER = g++
GFLAGS = -std=c++20
SOURCES = main.cpp constexpr_tasks.h constexpr_with_rec_templates.h recursive_templates_tasks.h recursive_templates_tasks.cpp
EXEC_FILENAME = prog.exe

all: compile
run: compile
	@./${EXEC_FILENAME}
compile: ${SOURCES}
	${COMPILER} ${SOURCES} -o ${EXEC_FILENAME} -w ${GFLAGS}
clear:
	rm -f *.o ${EXEC_FILENAME}
