function indexedfaceset_pixeltexture_entire: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group16: TGroupNode;
Viewpoint17: TViewpointNode;
Viewpoint18: TViewpointNode;
Viewpoint19: TViewpointNode;
Viewpoint20: TViewpointNode;
Viewpoint21: TViewpointNode;
Viewpoint22: TViewpointNode;
NavigationInfo23: TNavigationInfoNode;
Shape24: TShapeNode;
Appearance25: TAppearanceNode;
Material26: TMaterialNode;
PixelTexture27: TPixelTextureNode;
IndexedFaceSet28: TIndexedFaceSetNode;
Coordinate29: TCoordinateNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'indexedfaceset_pixeltexture_entire.x3d';
X3D0.Meta['reference'] := 'http://www.nist.gov/vrml.html';
X3D0.Meta['reference'] := 'http://www.itl.nist.gov/div897/ctg/vrml/vrml.html';
X3D0.Meta['creator'] := 'http://www.itl.nist.gov/div897/ctg/vrml/members.html';
X3D0.Meta['disclaimer'] := 'This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.';
X3D0.Meta['info'] := 'Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d';
X3D0.Meta['translator'] := 'Michael Kass NIST, Don Brutzman NPS';
X3D0.Meta['translated'] := '21 January 2001';
X3D0.Meta['modified'] := '13 January 2014';
X3D0.Meta['description'] := 'Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry.';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d';
X3D0.Meta['generator'] := 'Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../../license.html';
Group16 := TGroupNode.Create;
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.Description := 'Front View';
{ .AddChildren }
Group16.AddChildren([Viewpoint17]);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Rear View';
Viewpoint18.Orientation := Vector4(0,1,0,3.14);
Viewpoint18.Position := Vector3(0,0,-10);
{ .AddChildren }
Group16.AddChildren([Viewpoint18]);
Viewpoint19 := TViewpointNode.Create;
Viewpoint19.Description := 'Top View';
Viewpoint19.Orientation := Vector4(1,0,0,-1.57);
Viewpoint19.Position := Vector3(0,10,0);
{ .AddChildren }
Group16.AddChildren([Viewpoint19]);
Viewpoint20 := TViewpointNode.Create;
Viewpoint20.Description := 'Bottom View';
Viewpoint20.Orientation := Vector4(1,0,0,1.57);
Viewpoint20.Position := Vector3(0,-10,0);
{ .AddChildren }
Group16.AddChildren([Viewpoint20]);
Viewpoint21 := TViewpointNode.Create;
Viewpoint21.Description := 'Right View';
Viewpoint21.Orientation := Vector4(0,1,0,1.57);
Viewpoint21.Position := Vector3(10,0,0);
{ .AddChildren }
Group16.AddChildren([Viewpoint21]);
Viewpoint22 := TViewpointNode.Create;
Viewpoint22.Description := 'Left View';
Viewpoint22.Orientation := Vector4(0,1,0,-1.57);
Viewpoint22.Position := Vector3(-10,0,0);
{ .AddChildren }
Group16.AddChildren([Viewpoint22]);
NavigationInfo23 := TNavigationInfoNode.Create;
NavigationInfo23.SetType(['EXAMINE','WALK','FLY','ANY']);
{ .AddChildren }
Group16.AddChildren([NavigationInfo23]);
Shape24 := TShapeNode.Create;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
{ .SetMaterial }
Appearance25.Material := Material26;
PixelTexture27 := TPixelTextureNode.Create;
PixelTexture27.Image := (2,2,4,-16776961,16711935,-1,-65281);
PixelTexture27.RepeatS := False;
PixelTexture27.RepeatT := False;
{ .SetTexture }
Appearance25.Texture := PixelTexture27;
{ .SetAppearance }
Shape24.Appearance := Appearance25;
IndexedFaceSet28 := TIndexedFaceSetNode.Create;
IndexedFaceSet28.SetCoordIndex([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
Coordinate29 := TCoordinateNode.Create;
Coordinate29.SetPoint([Vector3(-2,1.5,1),Vector3(-2,-1.5,1),Vector3(2,1.5,1),Vector3(2,-1.5,1),Vector3(2,1.5,-1),Vector3(2,-1.5,-1),Vector3(-2,1.5,-1),Vector3(-2,-1.5,-1)]);
{ .SetCoord }
IndexedFaceSet28.Coord := Coordinate29;
{ .SetGeometry }
Shape24.Geometry := IndexedFaceSet28;
{ .AddChildren }
Group16.AddChildren([Shape24]);
{ .AddGroup }
X3D0.AddChildren([Group16]);
Result := X3D0;
end;
