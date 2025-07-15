function indexedfaceset_pixeltexture_part: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group22: TGroupNode;
Viewpoint23: TViewpointNode;
Viewpoint24: TViewpointNode;
Viewpoint25: TViewpointNode;
Viewpoint26: TViewpointNode;
Viewpoint27: TViewpointNode;
Viewpoint28: TViewpointNode;
NavigationInfo29: TNavigationInfoNode;
Shape30: TShapeNode;
Appearance31: TAppearanceNode;
Material32: TMaterialNode;
PixelTexture33: TPixelTextureNode;
IndexedFaceSet34: TIndexedFaceSetNode;
Color35: TColorNode;
Coordinate36: TCoordinateNode;
TextureCoordinate37: TTextureCoordinateNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'indexedfaceset_pixeltexture_part.x3d';
X3D0.Meta['Image'] := 'indexedfaceset_pixeltexture_part-front.jpg';
X3D0.Meta['Image'] := 'indexedfaceset_pixeltexture_part-rear.jpg';
X3D0.Meta['Image'] := 'indexedfaceset_pixeltexture_part-top.jpg';
X3D0.Meta['Image'] := 'indexedfaceset_pixeltexture_part-bottom.jpg';
X3D0.Meta['Image'] := 'indexedfaceset_pixeltexture_part-left.jpg';
X3D0.Meta['Image'] := 'indexedfaceset_pixeltexture_part-right.jpg';
X3D0.Meta['reference'] := 'http://www.nist.gov/vrml.html';
X3D0.Meta['reference'] := 'http://www.itl.nist.gov/div897/ctg/vrml/vrml.html';
X3D0.Meta['creator'] := 'http://www.itl.nist.gov/div897/ctg/vrml/members.html';
X3D0.Meta['disclaimer'] := 'This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.';
X3D0.Meta['info'] := 'Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d';
X3D0.Meta['translator'] := 'Michael Kass NIST, Don Brutzman NPS';
X3D0.Meta['translated'] := '21 January 2001';
X3D0.Meta['modified'] := '13 January 2014';
X3D0.Meta['description'] := 'Test of browser ability to map a partial portion of an PixelTexture onto an IndexedFaceSet geometry. Only the yellow portion of four equal sized red, green, yellow and white squares in the pixel texture map all the faces of the cube.';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_part.x3d';
X3D0.Meta['generator'] := 'Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../../license.html';
Group22 := TGroupNode.Create;
Viewpoint23 := TViewpointNode.Create;
Viewpoint23.Description := 'Front View';
{ .AddChildren }
Group22.AddChildren([Viewpoint23]);
Viewpoint24 := TViewpointNode.Create;
Viewpoint24.Description := 'Rear View';
Viewpoint24.Orientation := Vector4(0,1,0,3.14);
Viewpoint24.Position := Vector3(0,0,-10);
{ .AddChildren }
Group22.AddChildren([Viewpoint24]);
Viewpoint25 := TViewpointNode.Create;
Viewpoint25.Description := 'Top View';
Viewpoint25.Orientation := Vector4(1,0,0,-1.57);
Viewpoint25.Position := Vector3(0,10,0);
{ .AddChildren }
Group22.AddChildren([Viewpoint25]);
Viewpoint26 := TViewpointNode.Create;
Viewpoint26.Description := 'Bottom View';
Viewpoint26.Orientation := Vector4(1,0,0,1.57);
Viewpoint26.Position := Vector3(0,-10,0);
{ .AddChildren }
Group22.AddChildren([Viewpoint26]);
Viewpoint27 := TViewpointNode.Create;
Viewpoint27.Description := 'Right View';
Viewpoint27.Orientation := Vector4(0,1,0,1.57);
Viewpoint27.Position := Vector3(10,0,0);
{ .AddChildren }
Group22.AddChildren([Viewpoint27]);
Viewpoint28 := TViewpointNode.Create;
Viewpoint28.Description := 'Left View';
Viewpoint28.Orientation := Vector4(0,1,0,-1.57);
Viewpoint28.Position := Vector3(-10,0,0);
{ .AddChildren }
Group22.AddChildren([Viewpoint28]);
NavigationInfo29 := TNavigationInfoNode.Create;
NavigationInfo29.SetType(['EXAMINE','WALK','FLY','ANY']);
{ .AddChildren }
Group22.AddChildren([NavigationInfo29]);
Shape30 := TShapeNode.Create;
Appearance31 := TAppearanceNode.Create;
Material32 := TMaterialNode.Create;
{ .SetMaterial }
Appearance31.Material := Material32;
PixelTexture33 := TPixelTextureNode.Create;
PixelTexture33.Image := (2,2,4,-16776961,16711935,-1,-65281);
{ .SetTexture }
Appearance31.Texture := PixelTexture33;
{ .SetAppearance }
Shape30.Appearance := Appearance31;
IndexedFaceSet34 := TIndexedFaceSetNode.Create;
IndexedFaceSet34.ColorPerVertex := False;
IndexedFaceSet34.SetCoordIndex([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
IndexedFaceSet34.CreaseAngle := 0.5;
IndexedFaceSet34.SetTexCoordIndex([0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]);
Color35 := TColorNode.Create;
Color35.SetColor([Vector3(0,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,1,0)]);
{ .SetColor }
IndexedFaceSet34.Color := Color35;
Coordinate36 := TCoordinateNode.Create;
Coordinate36.SetPoint([Vector3(-2,1,1),Vector3(-2,-1,1),Vector3(2,1,1),Vector3(2,-1,1),Vector3(2,1,-1),Vector3(2,-1,-1),Vector3(-2,1,-1),Vector3(-2,-1,-1)]);
{ .SetCoord }
IndexedFaceSet34.Coord := Coordinate36;
TextureCoordinate37 := TTextureCoordinateNode.Create;
TextureCoordinate37.SetPoint([Vector2(0.5,1),Vector2(0.5,0.5),Vector2(1,1),Vector2(1,0.5)]);
{ .SetTexCoord }
IndexedFaceSet34.TexCoord := TextureCoordinate37;
{ .SetGeometry }
Shape30.Geometry := IndexedFaceSet34;
{ .AddChildren }
Group22.AddChildren([Shape30]);
{ .AddGroup }
X3D0.AddChildren([Group22]);
Result := X3D0;
end;
