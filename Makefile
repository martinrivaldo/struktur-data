compile :
	$(compiler) $(shell pwd)/$(folder)/main.$(type) -o $(shell pwd)/bin/$(file) 
.PHONY : compile

run : 
	$(shell pwd)/bin/$(file)
.PHONY : run

clean :
	rm -rf $(shell pwd)/bin
.PHONY : clean

create : 
	mkdir bin
.PHONY : create

