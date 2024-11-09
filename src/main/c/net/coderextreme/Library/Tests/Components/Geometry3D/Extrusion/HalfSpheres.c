#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Sat, 06 Aug 2016 21:20:09 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "holger";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.4.8, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/.config/Titania/Materials/Test/Test9.x3dv";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Sat, 06 Aug 2016 21:22:47 GMT";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "titania magic";
meta8.content = "Material";
head1.meta[6] = meta8;

head = head1;

WorldInfo WorldInfo10 = createNode("WorldInfo");
WorldInfo10.title = "Test9";
MetadataSet MetadataSet11 = createNode("MetadataSet");
MetadataSet11.name = "Titania";
MetadataSet11.DEF = "Titania";
MetadataSet11.reference = "http://titania.create3000.de";
MetadataSet MetadataSet12 = createNode("MetadataSet");
MetadataSet12.name = "NavigationInfo";
MetadataSet12.DEF = "NavigationInfo";
MetadataSet12.reference = "http://titania.create3000.de";
MetadataString MetadataString13 = createNode("MetadataString");
MetadataString13.name = "type";
MetadataString13.DEF = "type";
MetadataString13.reference = "http://titania.create3000.de";
MetadataString13.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet12.value = new MFNode();

MetadataSet12.value[0] = MetadataString13;

MetadataSet11.value = new MFNode();

MetadataSet11.value[0] = MetadataSet12;

MetadataSet MetadataSet14 = createNode("MetadataSet");
MetadataSet14.name = "Viewpoint";
MetadataSet14.DEF = "Viewpoint";
MetadataSet14.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble15 = createNode("MetadataDouble");
MetadataDouble15.name = "position";
MetadataDouble15.DEF = "position";
MetadataDouble15.reference = "http://titania.create3000.de";
MetadataDouble15.value = new MFDouble(new double[0.500247853117111,0.462496657119401,2.77530185804378]);
MetadataSet14.value = new MFNode();

MetadataSet14.value[0] = MetadataDouble15;

MetadataDouble MetadataDouble16 = createNode("MetadataDouble");
MetadataDouble16.name = "orientation";
MetadataDouble16.DEF = "orientation";
MetadataDouble16.reference = "http://titania.create3000.de";
MetadataDouble16.value = new MFDouble(new double[-0.630731817514386,0.72940230697818,0.264857790049507,0.249682745994581]);
MetadataSet14.value[1] = MetadataDouble16;

MetadataDouble MetadataDouble17 = createNode("MetadataDouble");
MetadataDouble17.name = "centerOfRotation";
MetadataDouble17.DEF = "centerOfRotation";
MetadataDouble17.reference = "http://titania.create3000.de";
MetadataDouble17.value = new MFDouble(new double[0,0,0]);
MetadataSet14.value[2] = MetadataDouble17;

MetadataSet11.value[1] = MetadataSet14;

MetadataSet MetadataSet18 = createNode("MetadataSet");
MetadataSet18.name = "Selection";
MetadataSet18.DEF = "Selection";
MetadataSet18.reference = "http://titania.create3000.de";
MetadataSet MetadataSet19 = createNode("MetadataSet");
MetadataSet19.name = "children";
MetadataSet19.DEF = "children";
MetadataSet19.reference = "http://titania.create3000.de";
MetadataSet18.value = new MFNode();

MetadataSet18.value[0] = MetadataSet19;

MetadataSet MetadataSet20 = createNode("MetadataSet");
MetadataSet20.name = "previous";
MetadataSet20.DEF = "previous";
MetadataSet20.reference = "http://titania.create3000.de";
MetadataSet18.value[1] = MetadataSet20;

MetadataSet11.value[2] = MetadataSet18;

WorldInfo10.metadata = MetadataSet11;

children = new MFNode();

children[0] = WorldInfo10;

Transform Transform21 = createNode("Transform");
Transform21.rotation = new SFRotation(new float[0.577350269189626,-0.577350269189626,0.577350269189626,2.0943951023932]);
Shape Shape22 = createNode("Shape");
Appearance Appearance23 = createNode("Appearance");
TwoSidedMaterial TwoSidedMaterial24 = createNode("TwoSidedMaterial");
TwoSidedMaterial24.separateBackColor = True;
TwoSidedMaterial24.ambientIntensity = 0.253968;
TwoSidedMaterial24.diffuseColor = new SFColor(new float[0.279399,0.589,0.394407]);
TwoSidedMaterial24.specularColor = new SFColor(new float[0.39624,0.427003,0.00760637]);
TwoSidedMaterial24.shininess = 0.0378378;
TwoSidedMaterial24.backAmbientIntensity = 0.253968;
TwoSidedMaterial24.backDiffuseColor = new SFColor(new float[0.117647,0.564706,1]);
TwoSidedMaterial24.backSpecularColor = new SFColor(new float[0.39624,0.427003,0.00760637]);
TwoSidedMaterial24.backShininess = 0.0378378;
Appearance23.material = TwoSidedMaterial24;

Shape22.appearance = Appearance23;

Extrusion Extrusion25 = createNode("Extrusion");
Extrusion25.beginCap = False;
Extrusion25.endCap = False;
Extrusion25.creaseAngle = 3.14159;
Extrusion25.crossSection = new MFVec2f(new float[0,1,0.0980171,0.995185,0.19509,0.980785,0.290285,0.95694,0.382683,0.92388,0.471397,0.881921,0.55557,0.83147,0.634393,0.77301,0.707107,0.707107,0.77301,0.634393,0.83147,0.55557,0.881921,0.471397,0.92388,0.382683,0.95694,0.290285,0.980785,0.19509,0.995185,0.0980171,1,6.12323e-17,0.995185,-0.0980171,0.980785,-0.19509,0.95694,-0.290285,0.92388,-0.382683,0.881921,-0.471397,0.83147,-0.55557,0.77301,-0.634393,0.707107,-0.707107,0.634393,-0.77301,0.55557,-0.83147,0.471397,-0.881921,0.382683,-0.92388,0.290285,-0.95694,0.19509,-0.980785,0.0980171,-0.995185,0,-1]);
Extrusion25.orientation = new MFRotation(new float[0,0,1,0,0,0,1,0.0981747704246805,0,0,1,0.196349540849361,0,0,1,0.294524311274043,0,0,1,0.392699081698724,0,0,1,0.490873852123405,0,0,1,0.589048622548087,0,0,1,0.687223392972767,0,0,1,0.785398163397448,0,0,1,0.883572933822129,0,0,1,0.98174770424681,0,0,1,1.07992247467149,0,0,1,1.17809724509617,0,0,1,1.27627201552085,0,0,1,1.37444678594553,0,0,1,1.47262155637022,0,0,1,1.5707963267949,0,0,1,1.66897109721958,0,0,1,1.76714586764426,0,0,1,1.86532063806894,0,0,1,1.96349540849362,0,0,1,2.0616701789183,0,0,1,2.15984494934298,0,0,1,2.25801971976766,0,0,1,2.35619449019234,0,0,1,2.45436926061703,0,0,1,2.55254403104171,0,0,1,2.65071880146639,0,0,1,2.74889357189107,0,0,1,2.84706834231575,0,0,1,2.94524311274043,0,0,1,3.04341788316511,0,0,1,3.14159265358979]);
Extrusion25.spine = new MFVec3f(new float[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
Shape22.geometry = Extrusion25;

Transform21.child = new undefined();

Transform21.child[0] = Shape22;

children[1] = Transform21;

Transform Transform26 = createNode("Transform");
Transform26.rotation = new SFRotation(new float[0.577350269189626,0.577350269189626,-0.577350269189626,2.0943951023932]);
Shape Shape27 = createNode("Shape");
Appearance Appearance28 = createNode("Appearance");
TwoSidedMaterial TwoSidedMaterial29 = createNode("TwoSidedMaterial");
TwoSidedMaterial29.separateBackColor = True;
TwoSidedMaterial29.ambientIntensity = 0.253968;
TwoSidedMaterial29.diffuseColor = new SFColor(new float[0.279399,0.589,0.394407]);
TwoSidedMaterial29.specularColor = new SFColor(new float[0.39624,0.427003,0.00760637]);
TwoSidedMaterial29.shininess = 0.0378378;
TwoSidedMaterial29.transparency = 1;
TwoSidedMaterial29.backAmbientIntensity = 0.253968;
TwoSidedMaterial29.backDiffuseColor = new SFColor(new float[0.117647,0.564706,1]);
TwoSidedMaterial29.backSpecularColor = new SFColor(new float[0.39624,0.427003,0.00760637]);
TwoSidedMaterial29.backShininess = 0.0378378;
Appearance28.material = TwoSidedMaterial29;

Shape27.appearance = Appearance28;

Extrusion Extrusion30 = createNode("Extrusion");
Extrusion30.beginCap = False;
Extrusion30.endCap = False;
Extrusion30.solid = False;
Extrusion30.ccw = False;
Extrusion30.creaseAngle = 3.14159;
Extrusion30.crossSection = new MFVec2f(new float[0,1,0.0980171,0.995185,0.19509,0.980785,0.290285,0.95694,0.382683,0.92388,0.471397,0.881921,0.55557,0.83147,0.634393,0.77301,0.707107,0.707107,0.77301,0.634393,0.83147,0.55557,0.881921,0.471397,0.92388,0.382683,0.95694,0.290285,0.980785,0.19509,0.995185,0.0980171,1,6.12323e-17,0.995185,-0.0980171,0.980785,-0.19509,0.95694,-0.290285,0.92388,-0.382683,0.881921,-0.471397,0.83147,-0.55557,0.77301,-0.634393,0.707107,-0.707107,0.634393,-0.77301,0.55557,-0.83147,0.471397,-0.881921,0.382683,-0.92388,0.290285,-0.95694,0.19509,-0.980785,0.0980171,-0.995185,0,-1]);
Extrusion30.orientation = new MFRotation(new float[0,0,1,0,0,0,1,0.0981747704246805,0,0,1,0.196349540849361,0,0,1,0.294524311274043,0,0,1,0.392699081698724,0,0,1,0.490873852123405,0,0,1,0.589048622548087,0,0,1,0.687223392972767,0,0,1,0.785398163397448,0,0,1,0.883572933822129,0,0,1,0.98174770424681,0,0,1,1.07992247467149,0,0,1,1.17809724509617,0,0,1,1.27627201552085,0,0,1,1.37444678594553,0,0,1,1.47262155637022,0,0,1,1.5707963267949,0,0,1,1.66897109721958,0,0,1,1.76714586764426,0,0,1,1.86532063806894,0,0,1,1.96349540849362,0,0,1,2.0616701789183,0,0,1,2.15984494934298,0,0,1,2.25801971976766,0,0,1,2.35619449019234,0,0,1,2.45436926061703,0,0,1,2.55254403104171,0,0,1,2.65071880146639,0,0,1,2.74889357189107,0,0,1,2.84706834231575,0,0,1,2.94524311274043,0,0,1,3.04341788316511,0,0,1,3.14159265358979]);
Extrusion30.spine = new MFVec3f(new float[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
Shape27.geometry = Extrusion30;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

children[2] = Transform26;

}
