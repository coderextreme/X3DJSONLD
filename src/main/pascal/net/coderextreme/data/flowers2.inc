function flowers2: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group12: TGroupNode;
NavigationInfo13: TNavigationInfoNode;
Viewpoint14: TViewpointNode;
Group15: TGroupNode;
DirectionalLight16: TDirectionalLightNode;
ProtoDeclare17: TProtoDeclareNode;
ProtoInterface18: TProtoInterfaceNode;
field19: TfieldNode;
field20: TfieldNode;
field21: TfieldNode;
field22: TfieldNode;
ProtoBody23: TProtoBodyNode;
Group24: TGroupNode;
TimeSensor25: TTimeSensorNode;
OrientationInterpolator26: TOrientationInterpolatorNode;
Transform27: TTransformNode;
IS28: TISNode;
connect29: TconnectNode;
Shape30: TShapeNode;
Appearance31: TAppearanceNode;
Material32: TMaterialNode;
IS33: TISNode;
connect34: TconnectNode;
connect35: TconnectNode;
connect36: TconnectNode;
IndexedFaceSet37: TIndexedFaceSetNode;
Coordinate38: TCoordinateNode;
Script39: TScriptNode;
field40: TfieldNode;
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
field45: TfieldNode;
field46: TfieldNode;
field47: TfieldNode;
ProtoInstance53: TProtoInstanceNode;
fieldValue54: TfieldValueNode;
fieldValue55: TfieldValueNode;
fieldValue56: TfieldValueNode;
fieldValue57: TfieldValueNode;
ProtoInstance58: TProtoInstanceNode;
fieldValue59: TfieldValueNode;
fieldValue60: TfieldValueNode;
fieldValue61: TfieldValueNode;
fieldValue62: TfieldValueNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['title'] := 'flowers2.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['transcriber'] := 'John Carlson';
X3D0.Meta['created'] := '23 January 2005';
X3D0.Meta['modified'] := '21 March 2018';
X3D0.Meta['description'] := '2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d';
X3D0.Meta['generator'] := 'manually written';
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
Group12 := TGroupNode.Create;
NavigationInfo13 := TNavigationInfoNode.Create;
{ .AddChildren }
Group12.AddChildren([NavigationInfo13]);
Viewpoint14 := TViewpointNode.Create;
Viewpoint14.Description := 'Two mathematical orbitals';
Viewpoint14.Position := Vector3(0,0,50);
{ .AddChildren }
Group12.AddChildren([Viewpoint14]);
Group15 := TGroupNode.Create;
DirectionalLight16 := TDirectionalLightNode.Create;
DirectionalLight16.Direction := Vector3(1,1,1);
{ .AddChildren }
Group15.AddChildren([DirectionalLight16]);
ProtoDeclare17 := TProtoDeclareNode.Create;
ProtoDeclare17.NameField := 'orbit';
ProtoInterface18 := TProtoInterfaceNode.Create;
field19 := TfieldNode.Create;
field19.NameField := 'translation';
field19.AccessType := 'inputOutput';
field19.Type := 'SFVec3f';
field19.Value := '-8 0 0';
{ .AddField }
ProtoInterface18.Field := field19;
field20 := TfieldNode.Create;
field20.NameField := 'diffuseColor';
field20.AccessType := 'inputOutput';
field20.Type := 'SFColor';
field20.Value := '1 0.5 0';
{ .AddField }
ProtoInterface18.Field := field20;
field21 := TfieldNode.Create;
field21.NameField := 'specularColor';
field21.AccessType := 'inputOutput';
field21.Type := 'SFColor';
field21.Value := '1 0.5 0';
{ .AddField }
ProtoInterface18.Field := field21;
field22 := TfieldNode.Create;
field22.NameField := 'transparency';
field22.AccessType := 'inputOutput';
field22.Type := 'SFFloat';
field22.Value := '0.75';
{ .AddField }
ProtoInterface18.Field := field22;
{ .SetProtoInterface }
ProtoDeclare17.ProtoInterface := ProtoInterface18;
ProtoBody23 := TProtoBodyNode.Create;
Group24 := TGroupNode.Create;
TimeSensor25 := TTimeSensorNode.Create;
TimeSensor25.CycleInterval := 16;
TimeSensor25.Loop := True;
{ .AddChildren }
Group24.AddChildren([TimeSensor25]);
OrientationInterpolator26 := TOrientationInterpolatorNode.Create;
OrientationInterpolator26.SetKey([0,0.5,1]);
OrientationInterpolator26.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,3.14),Vector4(1,0,0,6.28)]);
{ .AddChildren }
Group24.AddChildren([OrientationInterpolator26]);
Transform27 := TTransformNode.Create;
IS28 := TISNode.Create;
connect29 := TconnectNode.Create;
connect29.NodeField := 'translation';
connect29.ProtoField := 'translation';
{ .AddConnect }
IS28.Connect := connect29;
{ .SetIS }
Transform27.IS := IS28;
Shape30 := TShapeNode.Create;
Appearance31 := TAppearanceNode.Create;
Material32 := TMaterialNode.Create;
IS33 := TISNode.Create;
connect34 := TconnectNode.Create;
connect34.NodeField := 'diffuseColor';
connect34.ProtoField := 'diffuseColor';
{ .AddConnect }
IS33.Connect := connect34;
connect35 := TconnectNode.Create;
connect35.NodeField := 'specularColor';
connect35.ProtoField := 'specularColor';
{ .AddConnect }
IS33.Connect := connect35;
connect36 := TconnectNode.Create;
connect36.NodeField := 'transparency';
connect36.ProtoField := 'transparency';
{ .AddConnect }
IS33.Connect := connect36;
{ .SetIS }
Material32.IS := IS33;
{ .SetMaterial }
Appearance31.Material := Material32;
{ .SetAppearance }
Shape30.Appearance := Appearance31;
{ <IndexedFaceSet DEF="Orbit" creaseAngle="0"> <Coordinate DEF="OrbitCoordinates"/> </IndexedFaceSet> }
IndexedFaceSet37 := TIndexedFaceSetNode.Create;
IndexedFaceSet37.Ccw := False;
IndexedFaceSet37.Convex := False;
IndexedFaceSet37.SetCoordIndex([0,1,2,-1]);
Coordinate38 := TCoordinateNode.Create;
Coordinate38.SetPoint([Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0)]);
{ .SetCoord }
IndexedFaceSet37.Coord := Coordinate38;
{ .SetGeometry }
Shape30.Geometry := IndexedFaceSet37;
{ .AddChild }
Transform27.AddChildren([Shape30]);
{ .AddChildren }
Group24.AddChildren([Transform27]);
Script39 := TScriptNode.Create;
field40 := TfieldNode.Create;
field40.NameField := 'set_fraction';
field40.AccessType := 'inputOnly';
field40.Type := 'SFFloat';
{ .AddField }
Script39.Field := field40;
field41 := TfieldNode.Create;
field41.NameField := 'coordinates';
field41.AccessType := 'inputOutput';
field41.Type := 'MFVec3f';
{ .AddField }
Script39.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'coordIndexes';
field42.AccessType := 'inputOutput';
field42.Type := 'MFInt32';
{ .AddField }
Script39.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'e';
field43.AccessType := 'inputOutput';
field43.Type := 'SFFloat';
field43.Value := '5';
{ .AddField }
Script39.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'f';
field44.AccessType := 'inputOutput';
field44.Type := 'SFFloat';
field44.Value := '5';
{ .AddField }
Script39.Field := field44;
field45 := TfieldNode.Create;
field45.NameField := 'g';
field45.AccessType := 'inputOutput';
field45.Type := 'SFFloat';
field45.Value := '5';
{ .AddField }
Script39.Field := field45;
field46 := TfieldNode.Create;
field46.NameField := 'h';
field46.AccessType := 'inputOutput';
field46.Type := 'SFFloat';
field46.Value := '5';
{ .AddField }
Script39.Field := field46;
field47 := TfieldNode.Create;
field47.NameField := 'resolution';
field47.AccessType := 'inputOutput';
field47.Type := 'SFInt32';
field47.Value := '50';
{ .AddField }
Script39.Field := field47;

Script39.SetSourceCode('''ecmascript:\n"+
"\n"+
"			function initialize() {\n"+
"			     generateCoordinates();\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution-1; i++) {\n"+
"				for (var j = 0; j < resolution-1; j++) {\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = -1;\n"+
"				}\n"+
"			    }\n"+
"			}\n"+
"\n"+
"			function generateCoordinates() {\n"+
"			     var theta = 0.0;\n"+
"			     var phi = 0.0;\n"+
"			     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution; i++) {\n"+
"				for (var j = 0; j < resolution; j++) {\n"+
"					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"					coordinates[arrIndex++] = new SFVec3f(\n"+
"						rho * Math.cos(phi) * Math.cos(theta),\n"+
"						rho * Math.cos(phi) * Math.sin(theta),\n"+
"						rho * Math.sin(phi)\n"+
"					);\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"			     }\n"+
"			}\n"+
"\n"+
"			function set_fraction(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 1:\n"+
"					f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 2:\n"+
"					g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				if (e < 1) {\n"+
"					f = 10;\n"+
"				}\n"+
"				if (f < 1) {\n"+
"					f = 10;\n"+
"				}\n"+
"				if (g < 1) {\n"+
"					g = 4;\n"+
"				}\n"+
"				if (h < 1) {\n"+
"					h = 4;\n"+
"				}\n"+
"				generateCoordinates();\n"+
"			}''');
{ .AddChildren }
Group24.AddChildren([Script39]);
Group24.AddRoute(Script39.FdCoordindexes, IndexedFaceSet37.EventSet_coordindex);
{ .AddX3DRoute }
Group24.AddRoute(Script39.FdCoordinates, Coordinate38.FdPoint);
{ .AddX3DRoute }
Group24.AddRoute(TimeSensor25.EventFraction_changed, Script39.EventSet_fraction);
{ .AddX3DRoute }
Group24.AddRoute(OrientationInterpolator26.EventValue_changed, Transform27.FdRotation);
{ .AddX3DRoute }
Group24.AddRoute(TimeSensor25.EventFraction_changed, OrientationInterpolator26.EventSet_fraction);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody23.AddChildren([Group24]);
{ .SetProtoBody }
ProtoDeclare17.ProtoBody := ProtoBody23;
{ .AddChildren }
Group15.AddChildren([ProtoDeclare17]);
ProtoInstance53 := TProtoInstanceNode.Create;
ProtoInstance53.NameField := 'orbit';
fieldValue54 := TfieldValueNode.Create;
fieldValue54.NameField := 'translation';
fieldValue54.Value := '-8 0 0';
{ .AddFieldValue }
ProtoInstance53.FieldValue := fieldValue54;
fieldValue55 := TfieldValueNode.Create;
fieldValue55.NameField := 'diffuseColor';
fieldValue55.Value := '1 0.5 0';
{ .AddFieldValue }
ProtoInstance53.FieldValue := fieldValue55;
fieldValue56 := TfieldValueNode.Create;
fieldValue56.NameField := 'specularColor';
fieldValue56.Value := '1 0.5 0';
{ .AddFieldValue }
ProtoInstance53.FieldValue := fieldValue56;
fieldValue57 := TfieldValueNode.Create;
fieldValue57.NameField := 'transparency';
fieldValue57.Value := '0.75';
{ .AddFieldValue }
ProtoInstance53.FieldValue := fieldValue57;
{ .AddChildren }
Group15.AddChildren([ProtoInstance53]);
ProtoInstance58 := TProtoInstanceNode.Create;
ProtoInstance58.NameField := 'orbit';
fieldValue59 := TfieldValueNode.Create;
fieldValue59.NameField := 'translation';
fieldValue59.Value := '8 0 0';
{ .AddFieldValue }
ProtoInstance58.FieldValue := fieldValue59;
fieldValue60 := TfieldValueNode.Create;
fieldValue60.NameField := 'diffuseColor';
fieldValue60.Value := '0 0.5 1';
{ .AddFieldValue }
ProtoInstance58.FieldValue := fieldValue60;
fieldValue61 := TfieldValueNode.Create;
fieldValue61.NameField := 'specularColor';
fieldValue61.Value := '0 0.5 1';
{ .AddFieldValue }
ProtoInstance58.FieldValue := fieldValue61;
fieldValue62 := TfieldValueNode.Create;
fieldValue62.NameField := 'transparency';
fieldValue62.Value := '0.5';
{ .AddFieldValue }
ProtoInstance58.FieldValue := fieldValue62;
{ .AddChildren }
Group15.AddChildren([ProtoInstance58]);
{ .AddChildren }
Group12.AddChildren([Group15]);
{ .AddGroup }
X3D0.AddChildren([Group12]);
Result := X3D0;
end;
