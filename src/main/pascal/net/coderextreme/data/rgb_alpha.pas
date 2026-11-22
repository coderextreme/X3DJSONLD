unit rgb_alpha;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Creatergb_alpha: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group20: TGroupNode;
NavigationInfo21: TNavigationInfoNode;
Group22: TGroupNode;
Transform23: TTransformNode;
Shape24: TShapeNode;
Appearance25: TAppearanceNode;
Material26: TMaterialNode;
PixelTexture27: TPixelTextureNode;
Box28: TBoxNode;
Transform29: TTransformNode;
Shape30: TShapeNode;
Appearance31: TAppearanceNode;
Material32: TMaterialNode;
PixelTexture33: TPixelTextureNode;
Sphere34: TSphereNode;
Transform35: TTransformNode;
Shape36: TShapeNode;
Appearance37: TAppearanceNode;
Material38: TMaterialNode;
PixelTexture39: TPixelTextureNode;
Cone40: TConeNode;
Transform41: TTransformNode;
Shape42: TShapeNode;
Appearance43: TAppearanceNode;
Material44: TMaterialNode;
PixelTexture45: TPixelTextureNode;
Cylinder46: TCylinderNode;

procedure Initrgb_alphaPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'rgb_alpha.x3d';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'rgb_alpha-front.jpg';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'rgb_alpha-rear.jpg';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'rgb_alpha-top.jpg';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'rgb_alpha-bottom.jpg';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://www.nist.gov/vrml.html';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://www.itl.nist.gov/div897/ctg/vrml/vrml.html';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'http://www.itl.nist.gov/div897/ctg/vrml/members.html';
{ METHOD .Meta }
X3D0.Meta['disclaimer'] := 'This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.';
{ METHOD .Meta }
X3D0.Meta['info'] := 'Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'Michael Kass NIST, Don Brutzman NPS';
{ METHOD .Meta }
X3D0.Meta['translated'] := '21 January 2001';
{ METHOD .Meta }
X3D0.Meta['modified'] := '16 January 2011';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box.';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group20 := TGroupNode.Create;
NavigationInfo21 := TNavigationInfoNode.Create;
NavigationInfo21.SetType(['EXAMINE','WALK','FLY','ANY']);
{ METHOD .FdChildren.Add }
Group20.FdChildren.Add(NavigationInfo21);
Group22 := TGroupNode.Create;
Transform23 := TTransformNode.Create;
Transform23.Translation := Vector3(6.14221,0.0694613,-0.000999451);
Shape24 := TShapeNode.Create;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance25.Material := Material26;
PixelTexture27 := TPixelTextureNode.Create;
PixelTexture27.FdImage.Value := MakeRGBAImage(2,2,[4,-16776961,-65536,-65536,-16776961]);
{ METHOD .Texture }
Appearance25.Texture := PixelTexture27;
{ METHOD .Appearance }
Shape24.Appearance := Appearance25;
Box28 := TBoxNode.Create;
{ METHOD .Geometry }
Shape24.Geometry := Box28;
{ METHOD .FdChildren.Add }
Transform23.FdChildren.Add(Shape24);
end;

procedure Initrgb_alphaPart1;
begin

{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Transform23);
Transform29 := TTransformNode.Create;
Transform29.Translation := Vector3(-4.85443,0.0694381,-0.00149918);
Shape30 := TShapeNode.Create;
Appearance31 := TAppearanceNode.Create;
Material32 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance31.Material := Material32;
{ METHOD .Texture }
Appearance31.Texture := PixelTexture27;
{ METHOD .Appearance }
Shape30.Appearance := Appearance31;
Sphere34 := TSphereNode.Create;
{ METHOD .Geometry }
Shape30.Geometry := Sphere34;
{ METHOD .FdChildren.Add }
Transform29.FdChildren.Add(Shape30);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Transform29);
Transform35 := TTransformNode.Create;
Transform35.Translation := Vector3(-1.47341,0.036672,-0.00175095);
Shape36 := TShapeNode.Create;
Appearance37 := TAppearanceNode.Create;
Material38 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance37.Material := Material38;
{ METHOD .Texture }
Appearance37.Texture := PixelTexture27;
{ METHOD .Appearance }
Shape36.Appearance := Appearance37;
Cone40 := TConeNode.Create;
{ METHOD .Geometry }
Shape36.Geometry := Cone40;
{ METHOD .FdChildren.Add }
Transform35.FdChildren.Add(Shape36);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Transform35);
Transform41 := TTransformNode.Create;
Transform41.Translation := Vector3(2.31094,0.0694206,-0.00187683);
Shape42 := TShapeNode.Create;
Appearance43 := TAppearanceNode.Create;
Material44 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance43.Material := Material44;
{ METHOD .Texture }
Appearance43.Texture := PixelTexture27;
{ METHOD .Appearance }
Shape42.Appearance := Appearance43;
Cylinder46 := TCylinderNode.Create;
{ METHOD .Geometry }
Shape42.Geometry := Cylinder46;
{ METHOD .FdChildren.Add }
Transform41.FdChildren.Add(Shape42);
{ METHOD .FdChildren.Add }
Group22.FdChildren.Add(Transform41);
{ METHOD .FdChildren.Add }
Group20.FdChildren.Add(Group22);
{ METHOD .AddGroup }
X3D0.AddChildren([Group20]);
end;

function Creatergb_alpha: TX3DRootNode;
begin
Initrgb_alphaPart0;
Initrgb_alphaPart1;
Result := X3D0;
end;

begin
end.
