.PHONY: clean All

All:
	@echo "----------Building project:[ Section12PassingPointers - Debug ]----------"
	@cd "Section12PassingPointers" && "$(MAKE)" -f  "Section12PassingPointers.mk"
clean:
	@echo "----------Cleaning project:[ Section12PassingPointers - Debug ]----------"
	@cd "Section12PassingPointers" && "$(MAKE)" -f  "Section12PassingPointers.mk" clean
