for archivo in test3/*.txt; do
	if (grep -q "ERROR" "$archivo"); then
		echo "El log $archivo tiene errores"
	else
		echo "El log $fichero no tiene errores"
	fi
done
