import importlib

module = importlib.import_module("net.x3djsonld.data.abox")

if hasattr(module, 'newModel'):
    print(module.newModel.XML())

