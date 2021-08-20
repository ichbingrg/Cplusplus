.PHONY: clean All

All:
	@echo "----------Building project:[ data_types - Debug ]----------"
	@cd "practise" && "$(MAKE)" -f  "data_types.mk"
clean:
	@echo "----------Cleaning project:[ data_types - Debug ]----------"
	@cd "practise" && "$(MAKE)" -f  "data_types.mk" clean
