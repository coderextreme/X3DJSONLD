#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Geometry2D";
component2.level = 2;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Fri, 06 Oct 2023 17:33:14 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "comment";
meta4.content = "Rise and Shine";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Holger Seelig";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "Sunrize X3D Editor V1.1.5, https://create3000.github.io/sunrize/";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Fri, 06 Oct 2023 20:12:22 GMT";
head1.meta[5] = meta7;

head = head1;

NavigationInfo NavigationInfo9 = createNode("NavigationInfo");
NavigationInfo9.headlight = False;
children = new MFNode();

children[0] = NavigationInfo9;

Transform Transform10 = createNode("Transform");
Transform10.DEF = "PhongAmbient1";
Transform10.translation = new SFVec3f(new float[-1.5,1.5,0]);
Transform Transform11 = createNode("Transform");
Shape Shape12 = createNode("Shape");
Appearance Appearance13 = createNode("Appearance");
Material Material14 = createNode("Material");
Material14.ambientIntensity = 1;
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

Rectangle2D Rectangle2D15 = createNode("Rectangle2D");
Shape12.geometry = Rectangle2D15;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

Transform10.children = new MFNode();

Transform10.children[0] = Transform11;

DirectionalLight DirectionalLight16 = createNode("DirectionalLight");
DirectionalLight16.ambientIntensity = 1;
Transform10.children[1] = DirectionalLight16;

children[1] = Transform10;

Transform Transform17 = createNode("Transform");
Transform17.DEF = "PhongAmbient0";
Transform17.translation = new SFVec3f(new float[-1.5,-1.5,0]);
Transform Transform18 = createNode("Transform");
Transform18.DEF = "Rectangle2D";
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
Material Material21 = createNode("Material");
Material21.ambientIntensity = 1;
Appearance20.material = Material21;

Shape19.appearance = Appearance20;

Rectangle2D Rectangle2D22 = createNode("Rectangle2D");
Shape19.geometry = Rectangle2D22;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

Transform17.children = new MFNode();

Transform17.children[0] = Transform18;

DirectionalLight DirectionalLight23 = createNode("DirectionalLight");
Transform17.children[1] = DirectionalLight23;

children[2] = Transform17;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "PBRSpot";
Transform24.translation = new SFVec3f(new float[1.5,1.5,0]);
Transform Transform25 = createNode("Transform");
Shape Shape26 = createNode("Shape");
Appearance Appearance27 = createNode("Appearance");
PhysicalMaterial PhysicalMaterial28 = createNode("PhysicalMaterial");
Appearance27.material = PhysicalMaterial28;

Shape26.appearance = Appearance27;

Rectangle2D Rectangle2D29 = createNode("Rectangle2D");
Shape26.geometry = Rectangle2D29;

Transform25.child = new undefined();

Transform25.child[0] = Shape26;

Transform24.children = new MFNode();

Transform24.children[0] = Transform25;

SpotLight SpotLight30 = createNode("SpotLight");
SpotLight30.global = False;
SpotLight30.color = new SFColor(new float[0.8,0,0]);
SpotLight30.intensity = 10;
SpotLight30.location = new SFVec3f(new float[0,0,1]);
SpotLight30.beamWidth = 0.6;
SpotLight30.cutOffAngle = 0.7;
Transform24.children[1] = SpotLight30;

children[3] = Transform24;

Transform Transform31 = createNode("Transform");
Transform31.DEF = "PBRDirectional";
Transform31.translation = new SFVec3f(new float[1.5,-1.5,0]);
Transform Transform32 = createNode("Transform");
Shape Shape33 = createNode("Shape");
Appearance Appearance34 = createNode("Appearance");
PhysicalMaterial PhysicalMaterial35 = createNode("PhysicalMaterial");
Appearance34.material = PhysicalMaterial35;

Shape33.appearance = Appearance34;

Rectangle2D Rectangle2D36 = createNode("Rectangle2D");
Shape33.geometry = Rectangle2D36;

Transform32.child = new undefined();

Transform32.child[0] = Shape33;

Transform31.children = new MFNode();

Transform31.children[0] = Transform32;

DirectionalLight DirectionalLight37 = createNode("DirectionalLight");
DirectionalLight37.intensity = 10;
Transform31.children[1] = DirectionalLight37;

children[4] = Transform31;

}
