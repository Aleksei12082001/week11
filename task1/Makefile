
BUILD_DIR := build


MAIN_EXEC := main

# Путь к CMake
CMAKE := cmake
MAKE := make


$(BUILD_DIR):
	@echo "Создание директории $(BUILD_DIR)"
	mkdir -p $(BUILD_DIR)


$(BUILD_DIR)/Makefile: $(BUILD_DIR)
	@echo "Запуск CMake..."
	cd $(BUILD_DIR) && $(CMAKE) ..


all: $(BUILD_DIR)/Makefile
	@echo "Сборка проекта..."
	cd $(BUILD_DIR) && $(MAKE)


run: all
	@echo "Запуск main..."
	./$(BUILD_DIR)/$(MAIN_EXEC) $(ARGS)


build_and_run: all run


clean:
	@echo "Очистка..."
	rm -rf $(BUILD_DIR)


clear: clean

.PHONY: all run clean build_and_run clear


