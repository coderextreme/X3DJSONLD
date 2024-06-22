function CADPartChildNoTransformation: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group15: TGroupNode;
WorldInfo16: TWorldInfoNode;
Background17: TBackgroundNode;
Viewpoint18: TViewpointNode;
CADAssembly19: TCADAssemblyNode;
CADPart20: TCADPartNode;
CADFace21: TCADFaceNode;
Shape22: TShapeNode;
Cylinder23: TCylinderNode;
Appearance24: TAppearanceNode;
Material25: TMaterialNode;
CADFace26: TCADFaceNode;
Shape27: TShapeNode;
Cylinder28: TCylinderNode;
Appearance29: TAppearanceNode;
CADFace30: TCADFaceNode;
Shape31: TShapeNode;
IndexedTriangleSet32: TIndexedTriangleSetNode;
Coordinate33: TCoordinateNode;
Appearance34: TAppearanceNode;
CADFace35: TCADFaceNode;
Shape36: TShapeNode;
IndexedTriangleSet37: TIndexedTriangleSetNode;
Coordinate38: TCoordinateNode;
Appearance39: TAppearanceNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'CADInterchange';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 1;
X3D0.Components['CADGeometry'] := 2;
X3D0.Components['EnvironmentalEffects'] := 1;
X3D0.Meta['title'] := 'CADPartChildNoTransformation.x3d';
X3D0.Meta['description'] := 'Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children.';
X3D0.Meta['creator'] := 'Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk';
X3D0.Meta['translator'] := 'Vince Marchetti bushing generation using python scripts';
X3D0.Meta['reference'] := 'https://www.web3d.org/member-only/mantis/view.php?id=528';
X3D0.Meta['warning'] := 'This scene is intended for specification development only.';
X3D0.Meta['created'] := '29 June 2012';
X3D0.Meta['modified'] := '20 October 2019';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group15 := TGroupNode.Create;
WorldInfo16 := TWorldInfoNode.Create;
WorldInfo16.Title := 'CADPartChildNoTransformation.x3d';
{ .AddChildren }
Group15.AddChildren([WorldInfo16]);
Background17 := TBackgroundNode.Create;
Background17.SetSkyColor([Vector3(0.9607843,1,0.9607843)]);
{ .AddChildren }
Group15.AddChildren([Background17]);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Hello CAD bushing';
Viewpoint18.Orientation := Vector4(1,0,0,-0.321751);
Viewpoint18.Position := Vector3(0,5,15);
{ .AddChildren }
Group15.AddChildren([Viewpoint18]);
CADAssembly19 := TCADAssemblyNode.Create;
CADAssembly19.NameField := 'DesignPatternAssembly';
CADPart20 := TCADPartNode.Create;
CADPart20.NameField := 'CADPartExample';
{ the rotation and translation attributes serve to position the bushing within the assembly }
CADFace21 := TCADFaceNode.Create;
CADFace21.NameField := 'outerSurface';
Shape22 := TShapeNode.Create;
{ note solid='true' and so one-sided external rendering only }
Cylinder23 := TCylinderNode.Create;
Cylinder23.Bottom := False;
Cylinder23.Height := 3;
Cylinder23.Radius := 2;
Cylinder23.Top := False;
{ .SetGeometry }
Shape22.Geometry := Cylinder23;
Appearance24 := TAppearanceNode.Create;
Material25 := TMaterialNode.Create;
{ .SetMaterial }
Appearance24.Material := Material25;
{ .SetAppearance }
Shape22.Appearance := Appearance24;
{ .SetShape }
CADFace21.Shape := Shape22;
{ .AddChildren }
CADPart20.AddChildren([CADFace21]);
CADFace26 := TCADFaceNode.Create;
CADFace26.NameField := 'innerSurface';
Shape27 := TShapeNode.Create;
{ note solid='false' and so two-sided internal + external rendering }
Cylinder28 := TCylinderNode.Create;
Cylinder28.Bottom := False;
Cylinder28.Height := 3;
Cylinder28.Solid := False;
Cylinder28.Top := False;
{ .SetGeometry }
Shape27.Geometry := Cylinder28;
Appearance29 := TAppearanceNode.Create;
Appearance29 := Appearance24;
{ .SetAppearance }
Shape27.Appearance := Appearance29;
{ .SetShape }
CADFace26.Shape := Shape27;
{ .AddChildren }
CADPart20.AddChildren([CADFace26]);
CADFace30 := TCADFaceNode.Create;
CADFace30.NameField := 'topCap';
Shape31 := TShapeNode.Create;
IndexedTriangleSet32 := TIndexedTriangleSetNode.Create;
IndexedTriangleSet32.SetIndex([0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]);
Coordinate33 := TCoordinateNode.Create;
Coordinate33.SetPoint([Vector3(2,1.5,0),Vector3(1,1.5,0),Vector3(1.9616,1.5,0.3902),Vector3(0.9808,1.5,0.1951),Vector3(1.8478,1.5,0.7654),Vector3(0.9239,1.5,0.3827),Vector3(1.6629,1.5,1.1111),Vector3(0.8315,1.5,0.5556),Vector3(1.4142,1.5,1.4142),Vector3(0.7071,1.5,0.7071),Vector3(1.1111,1.5,1.6629),Vector3(0.5556,1.5,0.8315),Vector3(0.7654,1.5,1.8478),Vector3(0.3827,1.5,0.9239),Vector3(0.3902,1.5,1.9616),Vector3(0.1951,1.5,0.9808),Vector3(0,1.5,2),Vector3(0,1.5,1),Vector3(-0.3902,1.5,1.9616),Vector3(-0.1951,1.5,0.9808),Vector3(-0.7654,1.5,1.8478),Vector3(-0.3827,1.5,0.9239),Vector3(-1.1111,1.5,1.6629),Vector3(-0.5556,1.5,0.8315),Vector3(-1.4142,1.5,1.4142),Vector3(-0.7071,1.5,0.7071),Vector3(-1.6629,1.5,1.1111),Vector3(-0.8315,1.5,0.5556),Vector3(-1.8478,1.5,0.7654),Vector3(-0.9239,1.5,0.3827),Vector3(-1.9616,1.5,0.3902),Vector3(-0.9808,1.5,0.1951),Vector3(-2,1.5,0),Vector3(-1,1.5,0),Vector3(-1.9616,1.5,-0.3902),Vector3(-0.9808,1.5,-0.1951),Vector3(-1.8478,1.5,-0.7654),Vector3(-0.9239,1.5,-0.3827),Vector3(-1.6629,1.5,-1.1111),Vector3(-0.8315,1.5,-0.5556),Vector3(-1.4142,1.5,-1.4142),Vector3(-0.7071,1.5,-0.7071),Vector3(-1.1111,1.5,-1.6629),Vector3(-0.5556,1.5,-0.8315),Vector3(-0.7654,1.5,-1.8478),Vector3(-0.3827,1.5,-0.9239),Vector3(-0.3902,1.5,-1.9616),Vector3(-0.1951,1.5,-0.9808),Vector3(0,1.5,-2),Vector3(0,1.5,-1),Vector3(0.3902,1.5,-1.9616),Vector3(0.1951,1.5,-0.9808),Vector3(0.7654,1.5,-1.8478),Vector3(0.3827,1.5,-0.9239),Vector3(1.1111,1.5,-1.6629),Vector3(0.5556,1.5,-0.8315),Vector3(1.4142,1.5,-1.4142),Vector3(0.7071,1.5,-0.7071),Vector3(1.6629,1.5,-1.1111),Vector3(0.8315,1.5,-0.5556),Vector3(1.8478,1.5,-0.7654),Vector3(0.9239,1.5,-0.3827),Vector3(1.9616,1.5,-0.3902),Vector3(0.9808,1.5,-0.1951),Vector3(2,1.5,0),Vector3(1,1.5,0)]);
{ .SetCoord }
IndexedTriangleSet32.Coord := Coordinate33;
{ .SetGeometry }
Shape31.Geometry := IndexedTriangleSet32;
Appearance34 := TAppearanceNode.Create;
Appearance34 := Appearance24;
{ .SetAppearance }
Shape31.Appearance := Appearance34;
{ .SetShape }
CADFace30.Shape := Shape31;
{ .AddChildren }
CADPart20.AddChildren([CADFace30]);
CADFace35 := TCADFaceNode.Create;
CADFace35.NameField := 'bottomCap';
Shape36 := TShapeNode.Create;
IndexedTriangleSet37 := TIndexedTriangleSetNode.Create;
IndexedTriangleSet37.SetIndex([0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65]);
Coordinate38 := TCoordinateNode.Create;
Coordinate38.SetPoint([Vector3(2,-1.5,0),Vector3(1,-1.5,0),Vector3(1.9616,-1.5,-0.3902),Vector3(0.9808,-1.5,-0.1951),Vector3(1.8478,-1.5,-0.7654),Vector3(0.9239,-1.5,-0.3827),Vector3(1.6629,-1.5,-1.1111),Vector3(0.8315,-1.5,-0.5556),Vector3(1.4142,-1.5,-1.4142),Vector3(0.7071,-1.5,-0.7071),Vector3(1.1111,-1.5,-1.6629),Vector3(0.5556,-1.5,-0.8315),Vector3(0.7654,-1.5,-1.8478),Vector3(0.3827,-1.5,-0.9239),Vector3(0.3902,-1.5,-1.9616),Vector3(0.1951,-1.5,-0.9808),Vector3(0,-1.5,-2),Vector3(0,-1.5,-1),Vector3(-0.3902,-1.5,-1.9616),Vector3(-0.1951,-1.5,-0.9808),Vector3(-0.7654,-1.5,-1.8478),Vector3(-0.3827,-1.5,-0.9239),Vector3(-1.1111,-1.5,-1.6629),Vector3(-0.5556,-1.5,-0.8315),Vector3(-1.4142,-1.5,-1.4142),Vector3(-0.7071,-1.5,-0.7071),Vector3(-1.6629,-1.5,-1.1111),Vector3(-0.8315,-1.5,-0.5556),Vector3(-1.8478,-1.5,-0.7654),Vector3(-0.9239,-1.5,-0.3827),Vector3(-1.9616,-1.5,-0.3902),Vector3(-0.9808,-1.5,-0.1951),Vector3(-2,-1.5,0),Vector3(-1,-1.5,0),Vector3(-1.9616,-1.5,0.3902),Vector3(-0.9808,-1.5,0.1951),Vector3(-1.8478,-1.5,0.7654),Vector3(-0.9239,-1.5,0.3827),Vector3(-1.6629,-1.5,1.1111),Vector3(-0.8315,-1.5,0.5556),Vector3(-1.4142,-1.5,1.4142),Vector3(-0.7071,-1.5,0.7071),Vector3(-1.1111,-1.5,1.6629),Vector3(-0.5556,-1.5,0.8315),Vector3(-0.7654,-1.5,1.8478),Vector3(-0.3827,-1.5,0.9239),Vector3(-0.3902,-1.5,1.9616),Vector3(-0.1951,-1.5,0.9808),Vector3(0,-1.5,2),Vector3(0,-1.5,1),Vector3(0.3902,-1.5,1.9616),Vector3(0.1951,-1.5,0.9808),Vector3(0.7654,-1.5,1.8478),Vector3(0.3827,-1.5,0.9239),Vector3(1.1111,-1.5,1.6629),Vector3(0.5556,-1.5,0.8315),Vector3(1.4142,-1.5,1.4142),Vector3(0.7071,-1.5,0.7071),Vector3(1.6629,-1.5,1.1111),Vector3(0.8315,-1.5,0.5556),Vector3(1.8478,-1.5,0.7654),Vector3(0.9239,-1.5,0.3827),Vector3(1.9616,-1.5,0.3902),Vector3(0.9808,-1.5,0.1951),Vector3(2,-1.5,0),Vector3(1,-1.5,0)]);
{ .SetCoord }
IndexedTriangleSet37.Coord := Coordinate38;
{ .SetGeometry }
Shape36.Geometry := IndexedTriangleSet37;
Appearance39 := TAppearanceNode.Create;
Appearance39 := Appearance24;
{ .SetAppearance }
Shape36.Appearance := Appearance39;
{ .SetShape }
CADFace35.Shape := Shape36;
{ .AddChildren }
CADPart20.AddChildren([CADFace35]);
{ .AddChildren }
CADAssembly19.AddChildren([CADPart20]);
{ .AddChildren }
Group15.AddChildren([CADAssembly19]);
{ .AddGroup }
X3D0.AddChildren([Group15]);
Result := X3D0;
end;
