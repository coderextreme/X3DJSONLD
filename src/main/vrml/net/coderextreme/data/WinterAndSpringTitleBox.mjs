const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Interchange"));
scene.addMetaData("title", "WinterAndSpringTitleBox.x3d");
scene.addMetaData("description", "Credits for scene.");
scene.addMetaData("creator", "Carol McDonald");
scene.addMetaData("translator", "Joe Williams and Don Brutzman");
scene.addMetaData("created", "26 June 2023");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:21:02 GMT");
scene.addMetaData("reference", "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/Flower.Set.x3d");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringTitleBox.x3d");
await browser .loadComponents (scene);
let WorldInfo11 = browser.currentScene.createNode("WorldInfo");
WorldInfo11.title = "WinterAndSpringTitleBox.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo11;

let Viewpoint12 = browser.currentScene.createNode("Viewpoint");
Viewpoint12.DEF = "WinterAndSpringTitleView";
Viewpoint12.description = "Look at main title";
Viewpoint12.position = new X3D.SFVec3f([10,11,5]);
Viewpoint12.orientation = new X3D.SFRotation([-0.15,0,0,0.2]);
browser.currentScene.children[1] = Viewpoint12;

let Transform13 = browser.currentScene.createNode("Transform");
Transform13.DEF = "WinterAndSpringTitle";
Transform13.translation = new X3D.SFVec3f([10,10,0]);
let Shape14 = browser.currentScene.createNode("Shape");
let Appearance15 = browser.currentScene.createNode("Appearance");
let Material16 = browser.currentScene.createNode("Material");
material = Material16;

let ImageTexture17 = browser.currentScene.createNode("ImageTexture");
ImageTexture17.url = new X3D.MFString([new X3D.SFString("images/WinterAndSpring.png"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WinterAndSpring.png")]);
texture = ImageTexture17;

appearance = Appearance15;

let Box18 = browser.currentScene.createNode("Box");
Box18.size = new X3D.SFVec3f([4,3,0.25]);
geometry = Box18;

Transform13YYY.child = new X3D.undefined();

Transform13ZZZ.child[0] = Shape14;

browser.currentScene.children[2] = Transform13;

}
main ();
