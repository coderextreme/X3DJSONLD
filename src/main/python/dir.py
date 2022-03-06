import os
from pathlib import Path

def scan_directory(dirname):
    if dirname:
        for item in os.scandir(dirname):
            file_path = Path(item)
            if item.is_dir(follow_symlinks=False):
                yield from scan_directory(file_path)
            else:
                if file_path.suffix.lower() == ".json":
                    yield file_path

current_directory = "C:/x3d-code/www.web3d.org/x3d/content/examples"
for x in scan_directory(current_directory):
    print(x)
