import json

# Load the JSON data (assuming it's stored in a file named 'scene.json')
with open('scene.json', 'r') as file:
    json_data = json.load(file)

def convert_to_python(json_obj, indent=0):
    if isinstance(json_obj, dict):
        python_code = "{\n"
        indent += 4
        for key, value in json_obj.items():
            new_key = key.lstrip('@').lstrip('-')
            python_code += f"{' ' * indent}'{new_key}': {convert_to_python(value, indent)},\n"
        indent -= 4
        python_code += f"{' ' * indent}}}"
    elif isinstance(json_obj, list):
        python_code = "[\n"
        indent += 4
        for item in json_obj:
            python_code += f"{' ' * indent}{convert_to_python(item, indent)},\n"
        indent -= 4
        python_code += f"{' ' * indent}]"
    else:
        python_code = repr(json_obj)
    return python_code

python_source_code = convert_to_python(json_data)

# Write the generated Python source code to a file (optional)
with open('scene.py', 'w') as file:
    file.write(python_source_code)

# Print the generated Python source code
print(python_source_code)
