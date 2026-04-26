compile:
	verilator -Wall --binary --trace --timing comparator.v tb.v
run:
	./obj_dir/Vcomparator
all: compile run
