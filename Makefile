.PHONY: all
all: ex00 ex01 ex02

.PHONY: ex00
ex00:
	make -C ex00
	./ex00/megaphone "shhhhh... I think the students are asleep..."
	./ex00/megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./ex00/megaphone

.PHONY: ex01
ex01:
	make -C ex01

.PHONY: ex02
ex02:
	make -C ex02
