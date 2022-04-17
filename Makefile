all: build run cleanup

build:
	@echo "Building..."
	g++-11 identity/*.cpp graph/*.cpp genetic/*.cpp *.cpp -o main

run:
	@echo "Running..."
	@echo "\n\n"
	@./main
	@echo "\n\n"

cleanup:
	@echo "Cleaning up..."
	@rm ./main
	@rm -r main.dSYM