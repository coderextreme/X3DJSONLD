load('nashorn/node/X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);

var X3DJSONLD = Java.type("net.coderextreme.X3DJSONLD")
var loader = new X3DJSONLD();
var File = Java.type("java.io.File")
var jsobj = loader.readJsonFile(new File("./examples/Nashorn.json"));
var document = loader.loadJsonIntoDocument(jsobj);
print(loader.serializeDOM(loader.getX3DVersion(jsobj), document));
