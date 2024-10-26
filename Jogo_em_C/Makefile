# Makefile para compilar o projeto "Adivinhar o Número"

CC = gcc
CFLAGS = -Iinclude
LDFLAGS = -Lcli-lib -lcli  # Ajuste se necessário para a cli-lib

SRC = src/adivinhar_numero.c
OBJ = $(SRC:.c=.o)
TARGET = jogo

all: $(TARGET)

$(TARGET): $(OBJ)
    $(CC) $(OBJ) -o $(TARGET) $(LDFLAGS)

%.o: %.c
    $(CC) -c $(CFLAGS) $< -o $@

clean:
    rm -f $(OBJ) $(TARGET)
