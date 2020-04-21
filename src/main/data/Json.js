    var java = require("java")
    var autoclass = require('./X3Dautoclass');
    var X3DJSONLD = java.import("net.coderextreme.X3DJSONLD")
    var loader = new X3DJSONLD();
    var File = java.import("java.io.File")
    var jsobj = loader.readJsonFile(new File("./examples/HelloWorldProgramOutput.json"));
    var document = loader.loadJsonIntoDocument(jsobj);
    print(loader.serializeDOM(loader.getX3DVersion(jsobj), document));
    var X3DLoaderDOM = java.import("org.web3d.x3d.jsail.X3DLoaderDOM")
    var xmlLoader = new X3DLoaderDOM();
    var X3D0 = xmlLoader.toX3dObjectTree(document);
    X3D0.toFileX3D("./examples/Json.x3d");
    X3D0.toFileJSON("./examples/Json.json");
