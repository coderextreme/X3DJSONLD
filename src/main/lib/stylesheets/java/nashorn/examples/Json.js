load('nashorn/node/X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);

    var X3DJSONLD = Java.type("net.coderextreme.X3DJSONLD")
    var loader = new X3DJSONLD();
    var File = Java.type("java.io.File")
    var jsobj = loader.readJsonFile(new File("./nashorn/examples/HelloWorldProgramOUtput.json"));
    var document = loader.loadJsonIntoDocument(jsobj);
    var X3DLoaderObject = Java.type("org.web3d.x3d.jsail.X3DLoaderObject")
    var xmlLoader = new X3DLoaderObject();
    X3D0 = xmlLoader.toX3dObjectTree(document);
    X3D0.toFileX3D("./nashorn/examples/Json.x3d");
    X3D0.toFileJSON("./nashorn/examples/Json.json");
