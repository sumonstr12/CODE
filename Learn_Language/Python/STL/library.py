import json
from pathlib import Path

movies = [
    {"Name": "Boss", "actor": "Jeet","Year": 2016},
    {"Name": "Boss2", "actor": "Jeet","Year": 2019}
]

data = json.dumps(movies)
# save data in json file format
filePath = "S:\CODE\Learn_Language\Python\STL\movies data.json"
Path(filePath).write_text(data)