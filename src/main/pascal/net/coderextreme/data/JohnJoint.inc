function JohnJoint: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group10: TGroupNode;
Transform11: TTransformNode;
Shape12: TShapeNode;
IndexedLineSet13: TIndexedLineSetNode;
Coordinate14: TCoordinateNode;
Color15: TColorNode;
Group16: TGroupNode;
Transform17: TTransformNode;
Transform18: TTransformNode;
Shape19: TShapeNode;
Sphere20: TSphereNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
Transform23: TTransformNode;
Shape24: TShapeNode;
LineSet25: TLineSetNode;
ColorRGBA26: TColorRGBANode;
Coordinate27: TCoordinateNode;
NavigationInfo28: TNavigationInfoNode;
Viewpoint29: TViewpointNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'JohnJoint.x3d';
X3D0.Meta['identifier'] := 'http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d';
X3D0.Meta['description'] := 'An attempt at a standard LOA-4 skeleton';
X3D0.Meta['generator'] := 'h6.pl';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['created'] := '12 January 2023';
X3D0.Meta['license'] := '../license.html';
Group10 := TGroupNode.Create;
Transform11 := TTransformNode.Create;
{ DEF for markerfor XYZ axes }
Shape12 := TShapeNode.Create;
{ RGB lines showing XYZ axes }
IndexedLineSet13 := TIndexedLineSetNode.Create;
IndexedLineSet13.SetColorIndex([0,1,2]);
IndexedLineSet13.ColorPerVertex := False;
IndexedLineSet13.SetCoordIndex([0,1,-1,0,2,-1,0,3,-1]);
Coordinate14 := TCoordinateNode.Create;
Coordinate14.SetPoint([Vector3(0,0,0),Vector3(0.1,0,0),Vector3(0,0.1,0),Vector3(0,0,0.1)]);
{ .SetCoord }
IndexedLineSet13.Coord := Coordinate14;
Color15 := TColorNode.Create;
Color15.SetColor([Vector3(1,0,0),Vector3(0,0.6,0),Vector3(0,0,1)]);
{ .SetColor }
IndexedLineSet13.Color := Color15;
{ .SetGeometry }
Shape12.Geometry := IndexedLineSet13;
{ .AddChild }
Transform11.AddChildren([Shape12]);
{ .AddChildren }
Group10.AddChildren([Transform11]);
Group16 := TGroupNode.Create;
{ DEFS for markers of skeleton joints, segments, and sites }
Transform17 := TTransformNode.Create;
{ <Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform> }
Transform18 := TTransformNode.Create;
Transform18.Translation := Vector3(0,2.1,0);
Shape19 := TShapeNode.Create;
Sphere20 := TSphereNode.Create;
Sphere20.Radius := 0.02;
{ .SetGeometry }
Shape19.Geometry := Sphere20;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(0,0,0.8);
Material22.Transparency := 0.3;
{ .SetMaterial }
Appearance21.Material := Material22;
{ .SetAppearance }
Shape19.Appearance := Appearance21;
{ .AddChild }
Transform18.AddChildren([Shape19]);
{ .AddChildren }
Transform17.AddChildren([Transform18]);
Transform23 := TTransformNode.Create;
Transform23.Translation := Vector3(0,2.05,0);
Shape24 := TShapeNode.Create;
LineSet25 := TLineSetNode.Create;
LineSet25.SetVertexCount([2]);
ColorRGBA26 := TColorRGBANode.Create;
ColorRGBA26.SetColor([Vector4(1,1,0,1),Vector4(1,1,0,0.1)]);
{ .SetColor }
LineSet25.Color := ColorRGBA26;
Coordinate27 := TCoordinateNode.Create;
Coordinate27.SetPoint([Vector3(-0.05,0,0),Vector3(0.05,0,0)]);
{ .SetCoord }
LineSet25.Coord := Coordinate27;
{ .SetGeometry }
Shape24.Geometry := LineSet25;
{ .AddChild }
Transform23.AddChildren([Shape24]);
{ .AddChildren }
Transform17.AddChildren([Transform23]);
{ <Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform> }
{ .AddChildren }
Group16.AddChildren([Transform17]);
{ .AddChildren }
Group10.AddChildren([Group16]);
NavigationInfo28 := TNavigationInfoNode.Create;
NavigationInfo28.Speed := 1.5;
{ .AddChildren }
Group10.AddChildren([NavigationInfo28]);
Viewpoint29 := TViewpointNode.Create;
Viewpoint29.Description := 'default';
{ .AddChildren }
Group10.AddChildren([Viewpoint29]);
{ .AddGroup }
X3D0.AddChildren([Group10]);
Result := X3D0;
end;
