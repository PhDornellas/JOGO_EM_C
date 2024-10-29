# Variáveis
CC = gcc                          # Compilador
CFLAGS = -I./include -I./cli-lib/include   # Diretórios de cabeçalhos
SOURCES = ./src/main.c ./cli-lib/src/screen.c  # Arquivos fonte
TARGET = jogo                     # Nome do executável

# Regra para compilar o programa
all: $(TARGET)

$(TARGET): $(SOURCES)
    $(CC) $(SOURCES) $(CFLAGS) -o $(TARGET)

# Limpar arquivos compilados
clean:
    rm -f $(TARGET)
