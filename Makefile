compile:
	gcc src/main.c -o bin/app.out
	./bin/app.out

clean:
	rm bin/app.out