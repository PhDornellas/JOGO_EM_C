# Nome do executável
EXECUTAVEL = jogo

# Diretórios dos arquivos fonte
SRC_DIR = src
CLI_LIB_DIR = cli-lib/src

# Arquivos fonte
SRC = $(SRC_DIR)/main.c $(SRC_DIR)/adivinha_numero.c $(CLI_LIB_DIR)/screen.c $(CLI_LIB_DIR)/keyboard.c

# Diretórios para cabeçalhos
INCLUDE = -Iinclude -Icli-lib/include  # Inclui o diretório de cabeçalhos da cli-lib

# Diretórios para a biblioteca
LIBDIR = -L$(CLI_LIB_DIR)  # Diretório onde a biblioteca compilada está localizada
LIBS = -lcli  # Nome da biblioteca (supondo que você tenha libcli.a ou libcli.so)

# Compilador
CC = gcc

# Flags de compilação
CFLAGS = -Wall

# Alvo padrão
all: $(EXECUTAVEL)

# Regra para compilar o executável
$(EXECUTAVEL): $(SRC)
	$(CC) $(CFLAGS) $(INCLUDE) $(SRC) $(LIBDIR) $(LIBS) -o $(EXECUTAVEL)

# Limpeza dos arquivos gerados
clean:
	rm -f $(EXECUTAVEL)
