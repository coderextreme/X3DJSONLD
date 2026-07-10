function flowers2: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group11: TGroupNode;
NavigationInfo12: TNavigationInfoNode;
Viewpoint13: TViewpointNode;
Group14: TGroupNode;
DirectionalLight15: TDirectionalLightNode;
ProtoDeclare16: TProtoDeclareNode;
ProtoInterface17: TProtoInterfaceNode;
field18: TfieldNode;
field19: TfieldNode;
field20: TfieldNode;
field21: TfieldNode;
ProtoBody22: TProtoBodyNode;
Group23: TGroupNode;
TimeSensor24: TTimeSensorNode;
OrientationInterpolator25: TOrientationInterpolatorNode;
Transform26: TTransformNode;
IS27: TISNode;
connect28: TconnectNode;
Shape29: TShapeNode;
Appearance30: TAppearanceNode;
Material31: TMaterialNode;
IS32: TISNode;
connect33: TconnectNode;
connect34: TconnectNode;
connect35: TconnectNode;
IndexedFaceSet36: TIndexedFaceSetNode;
Coordinate37: TCoordinateNode;
Script38: TScriptNode;
field39: TfieldNode;
field40: TfieldNode;
field41: TfieldNode;
field42: TfieldNode;
field43: TfieldNode;
field44: TfieldNode;
field45: TfieldNode;
field46: TfieldNode;
ProtoInstance52: TProtoInstanceNode;
fieldValue53: TfieldValueNode;
fieldValue54: TfieldValueNode;
fieldValue55: TfieldValueNode;
fieldValue56: TfieldValueNode;
ProtoInstance57: TProtoInstanceNode;
fieldValue58: TfieldValueNode;
fieldValue59: TfieldValueNode;
fieldValue60: TfieldValueNode;
fieldValue61: TfieldValueNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Meta['title'] := 'flowers2.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['created'] := '23 January 2005';
X3D0.Meta['modified'] := '9 November 2024';
X3D0.Meta['description'] := '2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d';
X3D0.Meta['generator'] := 'manually written';
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
Group11 := TGroupNode.Create;
NavigationInfo12 := TNavigationInfoNode.Create;
{ .AddChildren }
Group11.AddChildren([NavigationInfo12]);
Viewpoint13 := TViewpointNode.Create;
Viewpoint13.Description := 'Two mathematical orbitals';
Viewpoint13.Position := Vector3(0,0,50);
{ .AddChildren }
Group11.AddChildren([Viewpoint13]);
Group14 := TGroupNode.Create;
DirectionalLight15 := TDirectionalLightNode.Create;
DirectionalLight15.Direction := Vector3(1,1,1);
{ .AddChildren }
Group14.AddChildren([DirectionalLight15]);
ProtoDeclare16 := TProtoDeclareNode.Create;
ProtoDeclare16.NameField := 'orbit';
ProtoInterface17 := TProtoInterfaceNode.Create;
field18 := TfieldNode.Create;
field18.NameField := 'translation';
field18.AccessType := 'inputOutput';
field18.Type := 'SFVec3f';
field18.Value := '-8 0 0';
{ .AddField }
ProtoInterface17.Field := field18;
field19 := TfieldNode.Create;
field19.NameField := 'diffuseColor';
field19.AccessType := 'inputOutput';
field19.Type := 'SFColor';
field19.Value := '1 0.5 0';
{ .AddField }
ProtoInterface17.Field := field19;
field20 := TfieldNode.Create;
field20.NameField := 'specularColor';
field20.AccessType := 'inputOutput';
field20.Type := 'SFColor';
field20.Value := '1 0.5 0';
{ .AddField }
ProtoInterface17.Field := field20;
field21 := TfieldNode.Create;
field21.NameField := 'transparency';
field21.AccessType := 'inputOutput';
field21.Type := 'SFFloat';
field21.Value := '0.75';
{ .AddField }
ProtoInterface17.Field := field21;
{ .SetProtoInterface }
ProtoDeclare16.ProtoInterface := ProtoInterface17;
ProtoBody22 := TProtoBodyNode.Create;
Group23 := TGroupNode.Create;
TimeSensor24 := TTimeSensorNode.Create;
TimeSensor24.CycleInterval := 16;
TimeSensor24.Loop := True;
{ .AddChildren }
Group23.AddChildren([TimeSensor24]);
OrientationInterpolator25 := TOrientationInterpolatorNode.Create;
OrientationInterpolator25.SetKey([0,0.5,1]);
OrientationInterpolator25.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,3.14),Vector4(1,0,0,6.28)]);
{ .AddChildren }
Group23.AddChildren([OrientationInterpolator25]);
Transform26 := TTransformNode.Create;
IS27 := TISNode.Create;
connect28 := TconnectNode.Create;
connect28.NodeField := 'translation';
connect28.ProtoField := 'translation';
{ .AddConnect }
IS27.Connect := connect28;
{ .SetIS }
Transform26.IS := IS27;
Shape29 := TShapeNode.Create;
Appearance30 := TAppearanceNode.Create;
Material31 := TMaterialNode.Create;
IS32 := TISNode.Create;
connect33 := TconnectNode.Create;
connect33.NodeField := 'diffuseColor';
connect33.ProtoField := 'diffuseColor';
{ .AddConnect }
IS32.Connect := connect33;
connect34 := TconnectNode.Create;
connect34.NodeField := 'specularColor';
connect34.ProtoField := 'specularColor';
{ .AddConnect }
IS32.Connect := connect34;
connect35 := TconnectNode.Create;
connect35.NodeField := 'transparency';
connect35.ProtoField := 'transparency';
{ .AddConnect }
IS32.Connect := connect35;
{ .SetIS }
Material31.IS := IS32;
{ .SetMaterial }
Appearance30.Material := Material31;
{ .SetAppearance }
Shape29.Appearance := Appearance30;
{ <IndexedFaceSet DEF="Orbit"> }
{ <Coordinate DEF="OrbitCoordinates"/> }
{ </IndexedFaceSet> }
IndexedFaceSet36 := TIndexedFaceSetNode.Create;
IndexedFaceSet36.Ccw := False;
IndexedFaceSet36.Convex := False;
IndexedFaceSet36.SetCoordIndex([0,1,2,-1]);
Coordinate37 := TCoordinateNode.Create;
Coordinate37.SetPoint([Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0)]);
{ .SetCoord }
IndexedFaceSet36.Coord := Coordinate37;
{ .SetGeometry }
Shape29.Geometry := IndexedFaceSet36;
{ .AddChild }
Transform26.AddChildren([Shape29]);
{ .AddChildren }
Group23.AddChildren([Transform26]);
Script38 := TScriptNode.Create;
field39 := TfieldNode.Create;
field39.NameField := 'set_fraction';
field39.AccessType := 'inputOnly';
field39.Type := 'SFFloat';
{ .AddField }
Script38.Field := field39;
field40 := TfieldNode.Create;
field40.NameField := 'coordinates';
field40.AccessType := 'inputOutput';
field40.Type := 'MFVec3f';
{ .AddField }
Script38.Field := field40;
field41 := TfieldNode.Create;
field41.NameField := 'coordIndexes';
field41.AccessType := 'inputOutput';
field41.Type := 'MFInt32';
{ .AddField }
Script38.Field := field41;
field42 := TfieldNode.Create;
field42.NameField := 'e';
field42.AccessType := 'inputOutput';
field42.Type := 'SFFloat';
field42.Value := '5';
{ .AddField }
Script38.Field := field42;
field43 := TfieldNode.Create;
field43.NameField := 'f';
field43.AccessType := 'inputOutput';
field43.Type := 'SFFloat';
field43.Value := '5';
{ .AddField }
Script38.Field := field43;
field44 := TfieldNode.Create;
field44.NameField := 'g';
field44.AccessType := 'inputOutput';
field44.Type := 'SFFloat';
field44.Value := '5';
{ .AddField }
Script38.Field := field44;
field45 := TfieldNode.Create;
field45.NameField := 'h';
field45.AccessType := 'inputOutput';
field45.Type := 'SFFloat';
field45.Value := '5';
{ .AddField }
Script38.Field := field45;
field46 := TfieldNode.Create;
field46.NameField := 'resolution';
field46.AccessType := 'inputOutput';
field46.Type := 'SFInt32';
field46.Value := '50';
{ .AddField }
Script38.Field := field46;

Script38.SetSourceCode('''ecmascript:\n"+
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
Group23.AddChildren([Script38]);
Group23.AddRoute(Script38.FdCoordindexes, IndexedFaceSet36.EventSet_coordindex);
{ .AddX3DRoute }
Group23.AddRoute(Script38.FdCoordinates, Coordinate37.FdPoint);
{ .AddX3DRoute }
Group23.AddRoute(TimeSensor24.EventFraction_changed, Script38.EventSet_fraction);
{ .AddX3DRoute }
Group23.AddRoute(OrientationInterpolator25.EventValue_changed, Transform26.FdRotation);
{ .AddX3DRoute }
Group23.AddRoute(TimeSensor24.EventFraction_changed, OrientationInterpolator25.EventSet_fraction);
{ .AddX3DRoute }
{ .AddChildren }
ProtoBody22.AddChildren([Group23]);
{ .SetProtoBody }
ProtoDeclare16.ProtoBody := ProtoBody22;
{ .AddChildren }
Group14.AddChildren([ProtoDeclare16]);
ProtoInstance52 := TProtoInstanceNode.Create;
ProtoInstance52.NameField := 'orbit';
fieldValue53 := TfieldValueNode.Create;
fieldValue53.NameField := 'translation';
fieldValue53.Value := '-8 0 0';
{ .AddFieldValue }
ProtoInstance52.FieldValue := fieldValue53;
fieldValue54 := TfieldValueNode.Create;
fieldValue54.NameField := 'diffuseColor';
fieldValue54.Value := '1 0.5 0';
{ .AddFieldValue }
ProtoInstance52.FieldValue := fieldValue54;
fieldValue55 := TfieldValueNode.Create;
fieldValue55.NameField := 'specularColor';
fieldValue55.Value := '1 0.5 0';
{ .AddFieldValue }
ProtoInstance52.FieldValue := fieldValue55;
fieldValue56 := TfieldValueNode.Create;
fieldValue56.NameField := 'transparency';
fieldValue56.Value := '0.75';
{ .AddFieldValue }
ProtoInstance52.FieldValue := fieldValue56;
{ .AddChildren }
Group14.AddChildren([ProtoInstance52]);
ProtoInstance57 := TProtoInstanceNode.Create;
ProtoInstance57.NameField := 'orbit';
fieldValue58 := TfieldValueNode.Create;
fieldValue58.NameField := 'translation';
fieldValue58.Value := '8 0 0';
{ .AddFieldValue }
ProtoInstance57.FieldValue := fieldValue58;
fieldValue59 := TfieldValueNode.Create;
fieldValue59.NameField := 'diffuseColor';
fieldValue59.Value := '0 0.5 1';
{ .AddFieldValue }
ProtoInstance57.FieldValue := fieldValue59;
fieldValue60 := TfieldValueNode.Create;
fieldValue60.NameField := 'specularColor';
fieldValue60.Value := '0 0.5 1';
{ .AddFieldValue }
ProtoInstance57.FieldValue := fieldValue60;
fieldValue61 := TfieldValueNode.Create;
fieldValue61.NameField := 'transparency';
fieldValue61.Value := '0.5';
{ .AddFieldValue }
ProtoInstance57.FieldValue := fieldValue61;
{ .AddChildren }
Group14.AddChildren([ProtoInstance57]);
{ .AddChildren }
Group11.AddChildren([Group14]);
{ .AddGroup }
X3D0.AddChildren([Group11]);
Result := X3D0;
end;
