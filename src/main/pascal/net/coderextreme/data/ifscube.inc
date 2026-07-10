function ifscube: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Group8: TGroupNode;
Shape9: TShapeNode;
IndexedFaceSet10: TIndexedFaceSetNode;
Coordinate11: TCoordinateNode;
Normal12: TNormalNode;
Color13: TColorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ifscube.x3d';
X3D0.Meta['identifier'] := 'http://coderextreme.net/X3DJSONLD/src/main/data/ifscube.x3d';
X3D0.Meta['description'] := 'Template for an Indexed Face Set';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['created'] := '4 April 2017';
Group7 := TGroupNode.Create;
Group8 := TGroupNode.Create;
Shape9 := TShapeNode.Create;
IndexedFaceSet10 := TIndexedFaceSetNode.Create;
IndexedFaceSet10.CreaseAngle := 1.57;
IndexedFaceSet10.SetCoordIndex([0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1]);
IndexedFaceSet10.SetNormalIndex([0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1]);
IndexedFaceSet10.NormalPerVertex := False;
IndexedFaceSet10.SetColorIndex([0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]);
Coordinate11 := TCoordinateNode.Create;
Coordinate11.SetPoint([Vector3(0,0,1),Vector3(0,1,1),Vector3(1,1,1),Vector3(1,0,1)]);
{ .SetCoord }
IndexedFaceSet10.Coord := Coordinate11;
Normal12 := TNormalNode.Create;
Normal12.SetVector([Vector3(1,0,0),Vector3(-1,0,0),Vector3(0,1,0),Vector3(0,0,-1),Vector3(0,-1,0),Vector3(0,0,1)]);
{ .SetNormal }
IndexedFaceSet10.Normal := Normal12;
Color13 := TColorNode.Create;
Color13.SetColor([Vector3(0,1,0)]);
{ .SetColor }
IndexedFaceSet10.Color := Color13;
{ .SetGeometry }
Shape9.Geometry := IndexedFaceSet10;
{ .AddChildren }
Group8.AddChildren([Shape9]);
{ .AddChildren }
Group7.AddChildren([Group8]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
