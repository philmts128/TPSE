# Makefile para compilar e executar programs do repositório.
# Autor: Philippe Matias

# Deve ser usado em sistemas Unix ou no Windows com Cygwin
# Modo de usar:
# compilar arquivo: make nome_do_fonte
# executar: make run name=nome_do_executavel
#limpar pasta do exe: run clean


# opções do compilador
CC = gcc
CFLAGS = -Wall -O2

#pasta dos arquivo-objeto e executável
SRC_DIR = .
EXE_DIR = ../../build

# regra padrão do make
all:
	@echo "Compilar: make nome_do_fonte"
	@echo "Executar: make run name=nome_do_executavel"
	@echo "Limpar: make clean"
	
# regra de compilação
%: $(SRC_DIR)/%.c
	@mkdir -p $(EXE_DIR)
	$(CC) $(CFLAGS) $< -o $(EXE_DIR)/$@
	
# atalho para executar progrma gerado
run:
	@$(EXE_DIR)/$(name)

# limpa executáveis gerados na pasta build
clean:
	rm -f $(EXE_DIR)/*