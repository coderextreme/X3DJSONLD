var java = require('java');
var autoclass = require('./X3Dautoclass');
var X3DJSONLD = java.import("net.coderextreme.X3DJSONLD");
var loader = new X3DJSONLD();
var File = java.import("java.io.File")
var jsobj = loader.readJsonFile(new File("./examples/Nashorn.json"));
var document = loader.loadJsonIntoDocument(jsobj);
print(loader.serializeDOM(loader.getX3DVersion(jsobj), document));
