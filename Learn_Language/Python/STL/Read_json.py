import json
from pathlib import Path

filePath = "S:\CODE\Learn_Language\Python\STL\movies data.json"
data = Path(filePath).read_text()
movies = json.loads(data)
print(movies)