function rgb_alpha: TX3DRootNode;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'rgb_alpha.x3d';
X3D0.Meta['Image'] := 'rgb_alpha-front.jpg';
X3D0.Meta['Image'] := 'rgb_alpha-rear.jpg';
X3D0.Meta['Image'] := 'rgb_alpha-top.jpg';
X3D0.Meta['Image'] := 'rgb_alpha-bottom.jpg';
X3D0.Meta['reference'] := 'http://www.nist.gov/vrml.html';
X3D0.Meta['reference'] := 'http://www.itl.nist.gov/div897/ctg/vrml/vrml.html';
X3D0.Meta['creator'] := 'http://www.itl.nist.gov/div897/ctg/vrml/members.html';
X3D0.Meta['disclaimer'] := 'This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.';
X3D0.Meta['info'] := 'Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d';
X3D0.Meta['translator'] := 'Michael Kass NIST, Don Brutzman NPS';
X3D0.Meta['translated'] := '21 January 2001';
X3D0.Meta['modified'] := '16 January 2011';
X3D0.Meta['description'] := 'Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box.';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d';
X3D0.Meta['generator'] := 'Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../../license.html';
Group20 := TGroupNode.Create;
NavigationInfo21 := TNavigationInfoNode.Create;
NavigationInfo21.SetType(['EXAMINE','WALK','FLY','ANY']);
{ .AddChildren }
Group20.AddChildren([NavigationInfo21]);
Group22 := TGroupNode.Create;
Transform23 := TTransformNode.Create;
Transform23.Translation := Vector3(6.14221,0.0694613,-0.000999451);
Shape24 := TShapeNode.Create;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
{ .SetMaterial }
Appearance25.Material := Material26;
PixelTexture27 := TPixelTextureNode.Create;
PixelTexture27.Image := (2,2,4,-16776961,-65536,-65536,-16776961);
{ .SetTexture }
Appearance25.Texture := PixelTexture27;
{ .SetAppearance }
Shape24.Appearance := Appearance25;
Box28 := TBoxNode.Create;
{ .SetGeometry }
Shape24.Geometry := Box28;
{ .AddChild }
Transform23.AddChildren([Shape24]);
{ .AddChildren }
Group22.AddChildren([Transform23]);
Transform29 := TTransformNode.Create;
Transform29.Translation := Vector3(-4.85443,0.0694381,-0.00149918);
Shape30 := TShapeNode.Create;
Appearance31 := TAppearanceNode.Create;
Material32 := TMaterialNode.Create;
{ .SetMaterial }
Appearance31.Material := Material32;
PixelTexture33 := TPixelTextureNode.Create;
PixelTexture33 := PixelTexture27;
{ .SetTexture }
Appearance31.Texture := PixelTexture33;
{ .SetAppearance }
Shape30.Appearance := Appearance31;
Sphere34 := TSphereNode.Create;
{ .SetGeometry }
Shape30.Geometry := Sphere34;
{ .AddChild }
Transform29.AddChildren([Shape30]);
{ .AddChildren }
Group22.AddChildren([Transform29]);
Transform35 := TTransformNode.Create;
Transform35.Translation := Vector3(-1.47341,0.036672,-0.00175095);
Shape36 := TShapeNode.Create;
Appearance37 := TAppearanceNode.Create;
Material38 := TMaterialNode.Create;
{ .SetMaterial }
Appearance37.Material := Material38;
PixelTexture39 := TPixelTextureNode.Create;
PixelTexture39 := PixelTexture27;
{ .SetTexture }
Appearance37.Texture := PixelTexture39;
{ .SetAppearance }
Shape36.Appearance := Appearance37;
Cone40 := TConeNode.Create;
{ .SetGeometry }
Shape36.Geometry := Cone40;
{ .AddChild }
Transform35.AddChildren([Shape36]);
{ .AddChildren }
Group22.AddChildren([Transform35]);
Transform41 := TTransformNode.Create;
Transform41.Translation := Vector3(2.31094,0.0694206,-0.00187683);
Shape42 := TShapeNode.Create;
Appearance43 := TAppearanceNode.Create;
Material44 := TMaterialNode.Create;
{ .SetMaterial }
Appearance43.Material := Material44;
PixelTexture45 := TPixelTextureNode.Create;
PixelTexture45 := PixelTexture27;
{ .SetTexture }
Appearance43.Texture := PixelTexture45;
{ .SetAppearance }
Shape42.Appearance := Appearance43;
Cylinder46 := TCylinderNode.Create;
{ .SetGeometry }
Shape42.Geometry := Cylinder46;
{ .AddChild }
Transform41.AddChildren([Shape42]);
{ .AddChildren }
Group22.AddChildren([Transform41]);
{ .AddChildren }
Group20.AddChildren([Group22]);
{ .AddGroup }
X3D0.AddChildren([Group20]);
Result := X3D0;
end;
