var java = require('java');
var autoclass = require('./X3Dautoclass');
var X3DLoaderDOM = java.import("org.web3d.x3d.jsail.X3DLoaderDOM");
var x3dLoader = new X3DLoaderDOM();
x3dLoader.loadModelFromFileX3D("./examples/HelloWorldProgramOutput.x3d");
if (x3dLoader.isLoadSuccessful())
{
    document       = x3dLoader.getDomDocument();
    var xmlLoader = new X3DLoaderDOM();
    var X3D0 = xmlLoader.toX3dObjectTree(document);
    X3D0.toFileX3D("./examples/X3d.x3d");
}
