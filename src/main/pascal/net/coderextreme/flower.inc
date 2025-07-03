function flower: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
DirectionalLight9: TDirectionalLightNode;
Background10: TBackgroundNode;
Viewpoint11: TViewpointNode;
Transform12: TTransformNode;
Shape13: TShapeNode;
Appearance14: TAppearanceNode;
Material15: TMaterialNode;
IndexedFaceSet16: TIndexedFaceSetNode;
Coordinate17: TCoordinateNode;
Script18: TScriptNode;
field19: TfieldNode;
field20: TfieldNode;
field21: TfieldNode;
TimeSensor22: TTimeSensorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'flower.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flower.x3d';
X3D0.Meta['description'] := 'a flower';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
{ .AddChildren }
Group7.AddChildren([NavigationInfo8]);
DirectionalLight9 := TDirectionalLightNode.Create;
DirectionalLight9.Direction := Vector3(0,-0.8,-0.2);
DirectionalLight9.Intensity := 0.5;
{ .AddChildren }
Group7.AddChildren([DirectionalLight9]);
Background10 := TBackgroundNode.Create;
Background10.SetSkyColor([Vector3(1,1,1)]);
{ .AddChildren }
Group7.AddChildren([Background10]);
Viewpoint11 := TViewpointNode.Create;
Viewpoint11.Description := 'One mathematical orbital';
Viewpoint11.Position := Vector3(0,0,50);
{ .AddChildren }
Group7.AddChildren([Viewpoint11]);
Transform12 := TTransformNode.Create;
Transform12.Translation := Vector3(0,-1,1);
Transform12.Rotation := Vector4(0,1,0,3.1415926);
Transform12.Scale := Vector3(1.5,1.5,1.5);
Shape13 := TShapeNode.Create;
Appearance14 := TAppearanceNode.Create;
Material15 := TMaterialNode.Create;
Material15.Transparency := 0.1;
Material15.DiffuseColor := Vector3(0.9,0.3,0.3);
Material15.SpecularColor := Vector3(0.8,0.8,0.8);
Material15.Shininess := 0.145;
{ .SetMaterial }
Appearance14.Material := Material15;
{ .SetAppearance }
Shape13.Appearance := Appearance14;
IndexedFaceSet16 := TIndexedFaceSetNode.Create;
IndexedFaceSet16.Ccw := False;
IndexedFaceSet16.Convex := False;
IndexedFaceSet16.SetCoordIndex([0,1,2,-1]);
Coordinate17 := TCoordinateNode.Create;
Coordinate17.SetPoint([Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0)]);
{ .SetCoord }
IndexedFaceSet16.Coord := Coordinate17;
{ .SetGeometry }
Shape13.Geometry := IndexedFaceSet16;
{ .AddChild }
Transform12.AddChildren([Shape13]);
{ .AddChildren }
Group7.AddChildren([Transform12]);
Script18 := TScriptNode.Create;
field19 := TfieldNode.Create;
field19.NameField := 'set_fraction';
field19.AccessType := 'inputOnly';
field19.Type := 'SFFloat';
{ .AddField }
Script18.Field := field19;
field20 := TfieldNode.Create;
field20.NameField := 'coordinates';
field20.AccessType := 'outputOnly';
field20.Type := 'MFVec3f';
{ .AddField }
Script18.Field := field20;
field21 := TfieldNode.Create;
field21.NameField := 'coordIndexes';
field21.AccessType := 'outputOnly';
field21.Type := 'MFInt32';
{ .AddField }
Script18.Field := field21;
{ <field accessType="inputOutput" name="e" type="SFFloat" value="5"/> <field accessType="inputOutput" name="f" type="SFFloat" value="5"/> <field accessType="inputOutput" name="g" type="SFFloat" value="5"/> <field accessType="inputOutput" name="h" type="SFFloat" value="5"/> <field accessType="inputOutput" name="t" type="SFFloat" value="0"/> <field accessType="inputOutput" name="p" type="SFFloat" value="0"/> <field accessType="inputOutput" name="resolution" type="SFInt32" value="150"/> }

Script18.SetSourceCode('''ecmascript:\n"+
"\n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"var resolution = 100;\n"+
"var t = 0;\n"+
"var p = 0;\n"+
"\n"+
"function initialize() {\n"+
"     generateCoordinates(resolution);\n"+
"     var localci = [];\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     localci.push(i*resolution+j);\n"+
"	     localci.push(i*resolution+j+1);\n"+
"	     localci.push((i+1)*resolution+j+1);\n"+
"	     localci.push((i+1)*resolution+j);\n"+
"	     localci.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = new MFInt32(...localci);\n"+
"}\n"+
"\n"+
"function generateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = [];\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		localc.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = new MFVec3f(...localc);\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
"	t += 0.5;\n"+
"	p += 0.5;\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	if (f < 1) {\n"+
"		f = 10;\n"+
"	}\n"+
"	if (g < 1) {\n"+
"		g = 4;\n"+
"	}\n"+
"	if (h < 1) {\n"+
"		h = 4;\n"+
"	}\n"+
"	generateCoordinates(resolution);\n"+
"}''');
{ .AddChildren }
Group7.AddChildren([Script18]);
TimeSensor22 := TTimeSensorNode.Create;
TimeSensor22.CycleInterval := 16;
TimeSensor22.Loop := True;
{ .AddChildren }
Group7.AddChildren([TimeSensor22]);
Group7.AddRoute(Script18.FdCoordindexes, IndexedFaceSet16.EventSet_coordindex);
{ .AddX3DRoute }
Group7.AddRoute(Script18.FdCoordinates, Coordinate17.FdPoint);
{ .AddX3DRoute }
Group7.AddRoute(TimeSensor22.EventFraction_changed, Script18.EventSet_fraction);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;
