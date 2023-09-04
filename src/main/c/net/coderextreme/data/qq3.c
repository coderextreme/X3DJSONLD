#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "qq3.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "translator";
meta4.content = "John Carlson";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "11 Jan 2015";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "05 May 2017";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "description";
meta7.content = "12 extrusions to test prototype expander";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "identifier";
meta8.content = "https://coderextreme.net/x3d/qq3.x3d";
head1.meta[6] = meta8;

head = head1;

ProtoDeclare ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Process" ><ProtoInterface></ProtoInterface>
<ProtoBody><Group><Transform scale="0.5 0.5 0.5"><Shape DEF="ShapeLeftDown"><Appearance><Material diffuseColor="0.7 1 0"></Material>
</Appearance>
<Extrusion creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="-2.5 0 0 -1.5 0 0"></Extrusion>
</Shape>
</Transform>
<Transform scale="0.5 0.5 0.5"><Shape DEF="ShapeUpRight"><Appearance><Material diffuseColor="0 0.7 1"></Material>
</Appearance>
<Extrusion creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0" spine="1.5 0 0 2.5 0 0"></Extrusion>
</Shape>
</Transform>
<Transform scale="0.5 0.5 0.5"><Shape USE="ShapeUpRight"></Shape>
</Transform>
<Transform scale="0.5 0.5 0.5"><Shape USE="ShapeLeftDown"></Shape>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare10.name = "Process";
ProtoInterface ProtoInterface11 = createNode("ProtoInterface");
ProtoDeclare10.protoInterface = ProtoInterface11;

ProtoBody ProtoBody12 = createNode("ProtoBody");
Group Group13 = createNode("Group");
Transform Transform14 = createNode("Transform");
Transform14.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Shape Shape15 = createNode("Shape");
Shape15.DEF = "ShapeLeftDown";
Appearance Appearance16 = createNode("Appearance");
Material Material17 = createNode("Material");
Material17.diffuseColor = new SFColor(new float[0.7,1,0]);
Appearance16.material = Material17;

Shape15.appearance = Appearance16;

Extrusion Extrusion18 = createNode("Extrusion");
Extrusion18.creaseAngle = 0.785;
Extrusion18.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion18.spine = new MFVec3f(new float[-2.5,0,0,-1.5,0,0]);
Shape15.geometry = Extrusion18;

Transform14.child = new undefined();

Transform14.child[0] = Shape15;

Group13.children = new MFNode();

Group13.children[0] = Transform14;

Transform Transform19 = createNode("Transform");
Transform19.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Shape Shape20 = createNode("Shape");
Shape20.DEF = "ShapeUpRight";
Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[0,0.7,1]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

Extrusion Extrusion23 = createNode("Extrusion");
Extrusion23.creaseAngle = 0.785;
Extrusion23.crossSection = new MFVec2f(new float[1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]);
Extrusion23.spine = new MFVec3f(new float[1.5,0,0,2.5,0,0]);
Shape20.geometry = Extrusion23;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Group13.children[1] = Transform19;

Transform Transform24 = createNode("Transform");
Transform24.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Shape Shape25 = createNode("Shape");
Shape25.USE = "ShapeUpRight";
Transform24.child = new undefined();

Transform24.child[0] = Shape25;

Group13.children[2] = Transform24;

Transform Transform26 = createNode("Transform");
Transform26.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Shape Shape27 = createNode("Shape");
Shape27.USE = "ShapeLeftDown";
Transform26.child = new undefined();

Transform26.child[0] = Shape27;

Group13.children[3] = Transform26;

ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Group13;

ProtoDeclare10.protoBody = ProtoBody12;

children = new MFNode();

children[0] = ProtoDeclare10;

Viewpoint Viewpoint28 = createNode("Viewpoint");
Viewpoint28.description = "Process pipes";
Viewpoint28.position = new SFVec3f(new float[0,5,12]);
Viewpoint28.orientation = new SFRotation(new float[1,0,0,-0.4]);
children[1] = Viewpoint28;

Transform Transform29 = createNode("Transform");
Transform29.translation = new SFVec3f(new float[0,-2.5,0]);
ProtoInstance ProtoInstance30 = createNode("ProtoInstance");
ProtoInstance30.name = "Process";
Transform29.children = new MFNode();

Transform29.children[0] = ProtoInstance30;

children[2] = Transform29;

Transform Transform31 = createNode("Transform");
ProtoInstance ProtoInstance32 = createNode("ProtoInstance");
ProtoInstance32.name = "Process";
Transform31.children = new MFNode();

Transform31.children[0] = ProtoInstance32;

children[3] = Transform31;

Transform Transform33 = createNode("Transform");
Transform33.translation = new SFVec3f(new float[0,2.5,0]);
ProtoInstance ProtoInstance34 = createNode("ProtoInstance");
ProtoInstance34.name = "Process";
Transform33.children = new MFNode();

Transform33.children[0] = ProtoInstance34;

children[4] = Transform33;

}
