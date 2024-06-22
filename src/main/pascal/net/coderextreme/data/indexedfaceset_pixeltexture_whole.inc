function indexedfaceset_pixeltexture_whole: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group23: TGroupNode;
Viewpoint24: TViewpointNode;
Viewpoint25: TViewpointNode;
Viewpoint26: TViewpointNode;
Viewpoint27: TViewpointNode;
Viewpoint28: TViewpointNode;
Viewpoint29: TViewpointNode;
NavigationInfo30: TNavigationInfoNode;
Shape31: TShapeNode;
Appearance32: TAppearanceNode;
Material33: TMaterialNode;
PixelTexture34: TPixelTextureNode;
IndexedFaceSet35: TIndexedFaceSetNode;
Color36: TColorNode;
Coordinate37: TCoordinateNode;
TextureCoordinate38: TTextureCoordinateNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'indexedfaceset_pixeltexture_whole.x3d';
X3D0.Meta['warning'] := 'file did not transform to vrml97';
X3D0.Meta['Image'] := 'indexedfaceset_pixeltexture_whole-front.jpg';
X3D0.Meta['Image'] := 'indexedfaceset_pixeltexture_whole-rear.jpg';
X3D0.Meta['Image'] := 'indexedfaceset_pixeltexture_whole-top.jpg';
X3D0.Meta['Image'] := 'indexedfaceset_pixeltexture_whole-bottom.jpg';
X3D0.Meta['Image'] := 'indexedfaceset_pixeltexture_whole-left.jpg';
X3D0.Meta['Image'] := 'indexedfaceset_pixeltexture_whole-right.jpg';
X3D0.Meta['reference'] := 'http://www.nist.gov/vrml.html';
X3D0.Meta['reference'] := 'http://www.itl.nist.gov/div897/ctg/vrml/vrml.html';
X3D0.Meta['creator'] := 'http://www.itl.nist.gov/div897/ctg/vrml/members.html';
X3D0.Meta['disclaimer'] := 'This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.';
X3D0.Meta['info'] := 'Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d';
X3D0.Meta['translator'] := 'Michael Kass NIST, Don Brutzman NPS';
X3D0.Meta['translated'] := '21 January 2001';
X3D0.Meta['modified'] := '13 January 2014';
X3D0.Meta['description'] := 'Test of browser ability to map the entire portion of an PixelTexture onto an IndexedFaceSet geometry. Four equal sized red (bottom left), green (bottom right) yellow (top left) and white (top right) squares in the pixel texture map all the faces of the cube.';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_whole.x3d';
X3D0.Meta['generator'] := 'Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../../license.html';
Group23 := TGroupNode.Create;
Viewpoint24 := TViewpointNode.Create;
Viewpoint24.Description := 'Front View';
{ .AddChildren }
Group23.AddChildren([Viewpoint24]);
Viewpoint25 := TViewpointNode.Create;
Viewpoint25.Description := 'Rear View';
Viewpoint25.Orientation := Vector4(0,1,0,3.14);
Viewpoint25.Position := Vector3(0,0,-10);
{ .AddChildren }
Group23.AddChildren([Viewpoint25]);
Viewpoint26 := TViewpointNode.Create;
Viewpoint26.Description := 'Top View';
Viewpoint26.Orientation := Vector4(1,0,0,-1.57);
Viewpoint26.Position := Vector3(0,10,0);
{ .AddChildren }
Group23.AddChildren([Viewpoint26]);
Viewpoint27 := TViewpointNode.Create;
Viewpoint27.Description := 'Bottom View';
Viewpoint27.Orientation := Vector4(1,0,0,1.57);
Viewpoint27.Position := Vector3(0,-10,0);
{ .AddChildren }
Group23.AddChildren([Viewpoint27]);
Viewpoint28 := TViewpointNode.Create;
Viewpoint28.Description := 'Right View';
Viewpoint28.Orientation := Vector4(0,1,0,1.57);
Viewpoint28.Position := Vector3(10,0,0);
{ .AddChildren }
Group23.AddChildren([Viewpoint28]);
Viewpoint29 := TViewpointNode.Create;
Viewpoint29.Description := 'Left View';
Viewpoint29.Orientation := Vector4(0,1,0,-1.57);
Viewpoint29.Position := Vector3(-10,0,0);
{ .AddChildren }
Group23.AddChildren([Viewpoint29]);
NavigationInfo30 := TNavigationInfoNode.Create;
NavigationInfo30.SetType(['EXAMINE']);
{ .AddChildren }
Group23.AddChildren([NavigationInfo30]);
Shape31 := TShapeNode.Create;
Appearance32 := TAppearanceNode.Create;
Material33 := TMaterialNode.Create;
{ .SetMaterial }
Appearance32.Material := Material33;
PixelTexture34 := TPixelTextureNode.Create;
PixelTexture34.Image := (2,2,4,-16776961,16711935,-1,-65281);
{ .SetTexture }
Appearance32.Texture := PixelTexture34;
{ .SetAppearance }
Shape31.Appearance := Appearance32;
IndexedFaceSet35 := TIndexedFaceSetNode.Create;
IndexedFaceSet35.ColorPerVertex := False;
IndexedFaceSet35.SetCoordIndex([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
IndexedFaceSet35.CreaseAngle := 0.5;
IndexedFaceSet35.SetTexCoordIndex([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]);
Color36 := TColorNode.Create;
Color36.SetColor([Vector3(0,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetColor }
IndexedFaceSet35.Color := Color36;
Coordinate37 := TCoordinateNode.Create;
Coordinate37.SetPoint([Vector3(-2,1,1),Vector3(-2,-1,1),Vector3(2,1,1),Vector3(2,-1,1),Vector3(2,1,-1),Vector3(2,-1,-1),Vector3(-2,1,-1),Vector3(-2,-1,-1)]);
{ .SetCoord }
IndexedFaceSet35.Coord := Coordinate37;
TextureCoordinate38 := TTextureCoordinateNode.Create;
TextureCoordinate38.SetPoint([Vector2(0,1),Vector2(0,0),Vector2(1,1),Vector2(1,0)]);
{ .SetTexCoord }
IndexedFaceSet35.TexCoord := TextureCoordinate38;
{ .SetGeometry }
Shape31.Geometry := IndexedFaceSet35;
{ .AddChildren }
Group23.AddChildren([Shape31]);
{ .AddGroup }
X3D0.AddChildren([Group23]);
Result := X3D0;
end;
