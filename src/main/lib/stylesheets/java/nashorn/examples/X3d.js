load('classpath:nashorn/node/X3Dautoclass.js');
var X3DLoaderObject = Java.type("org.web3d.x3d.jsail.X3DLoaderObject")
var x3dLoader = new X3DLoaderObject();
x3dLoader.loadModelFromFileX3D("./nashorn/examples/HelloWorldProgramOutput.x3d");
if (x3dLoader.isLoadSuccessful())
{
    document       = x3dLoader.getDomDocument();
    var xmlLoader = new X3DLoaderObject();
    var X3D0 = xmlLoader.toX3dObjectTree(document);
    X3D0.toFileX3D("./nashorn/examples/X3d.x3d");
}
