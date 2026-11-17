unit flowers2;

interface

uses X3DNodes;

function Createflowers2: TX3DRootNode;

implementation

uses CastleVectors;

function Createflowers2: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group11: TGroupNode;
NavigationInfo12: TNavigationInfoNode;
Viewpoint13: TViewpointNode;
Group14: TGroupNode;
DirectionalLight15: TDirectionalLightNode;
X3DPrototype16: TX3DPrototype;
X3DInterfaceDeclaration17: TX3DInterfaceDeclaration;
X3DField18: TX3DField;
X3DField19: TX3DField;
X3DField20: TX3DField;
X3DField21: TX3DField;
X3DPrototype22: TX3DPrototype;
Group23: TGroupNode;
TimeSensor24: TTimeSensorNode;
OrientationInterpolator25: TOrientationInterpolatorNode;
Transform26: TTransformNode;
IS27: TIS;
connect28: Tconnect;
Shape29: TShapeNode;
Appearance30: TAppearanceNode;
Material31: TMaterialNode;
IS32: TIS;
connect33: Tconnect;
connect34: Tconnect;
connect35: Tconnect;
IndexedFaceSet36: TIndexedFaceSetNode;
Coordinate37: TCoordinateNode;
Script38: TScriptNode;
X3DField39: TX3DField;
X3DField40: TX3DField;
X3DField41: TX3DField;
X3DField42: TX3DField;
X3DField43: TX3DField;
X3DField44: TX3DField;
X3DField45: TX3DField;
X3DField46: TX3DField;
X3DPrototype52: TX3DPrototypeNode;
SFVec3f53: TSFVec3f;
SFColor54: TSFColor;
SFColor55: TSFColor;
SFFloat56: TSFFloat;
X3DPrototype57: TX3DPrototypeNode;
SFVec3f58: TSFVec3f;
SFColor59: TSFColor;
SFColor60: TSFColor;
SFFloat61: TSFFloat;
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
X3DPrototype16 := TX3DPrototype.Create;
X3DPrototype16.NameField := 'orbit';
X3DInterfaceDeclaration17 := TX3DInterfaceDeclaration.Create(nil);
X3DField18 := TX3DField.Create;
X3DField18.NameField := 'translation';
X3DField18.AccessType := 'inputOutput';
X3DField18.Type := 'SFVec3f';
X3DField18.Value := '-8 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration17.X3DField := X3DField18;
X3DField19 := TX3DField.Create;
X3DField19.NameField := 'diffuseColor';
X3DField19.AccessType := 'inputOutput';
X3DField19.Type := 'SFColor';
X3DField19.Value := '1 0.5 0';
{ .AddX3DField }
X3DInterfaceDeclaration17.X3DField := X3DField19;
X3DField20 := TX3DField.Create;
X3DField20.NameField := 'specularColor';
X3DField20.AccessType := 'inputOutput';
X3DField20.Type := 'SFColor';
X3DField20.Value := '1 0.5 0';
{ .AddX3DField }
X3DInterfaceDeclaration17.X3DField := X3DField20;
X3DField21 := TX3DField.Create;
X3DField21.NameField := 'transparency';
X3DField21.AccessType := 'inputOutput';
X3DField21.Type := 'SFFloat';
X3DField21.Value := '0.75';
{ .AddX3DField }
X3DInterfaceDeclaration17.X3DField := X3DField21;
{ .SetX3DInterfaceDeclaration }
X3DPrototype16.X3DInterfaceDeclaration := X3DInterfaceDeclaration17;
X3DPrototype22 := TX3DPrototype.Create;
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
IS27 := TIS.Create;
connect28 := Tconnect.Create;
connect28.NodeField := 'translation';
connect28.ProtoField := 'translation';
{ .AddConnect }
IS27.Connect := connect28;
{ .SetIS }
Transform26.IS := IS27;
Shape29 := TShapeNode.Create;
Appearance30 := TAppearanceNode.Create;
Material31 := TMaterialNode.Create;
IS32 := TIS.Create;
connect33 := Tconnect.Create;
connect33.NodeField := 'diffuseColor';
connect33.ProtoField := 'diffuseColor';
{ .AddConnect }
IS32.Connect := connect33;
connect34 := Tconnect.Create;
connect34.NodeField := 'specularColor';
connect34.ProtoField := 'specularColor';
{ .AddConnect }
IS32.Connect := connect34;
connect35 := Tconnect.Create;
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
X3DField39 := TX3DField.Create;
X3DField39.NameField := 'set_fraction';
X3DField39.AccessType := 'inputOnly';
X3DField39.Type := 'SFFloat';
{ .SetX3DField }
Script38.X3DField := X3DField39;
X3DField40 := TX3DField.Create;
X3DField40.NameField := 'coordinates';
X3DField40.AccessType := 'inputOutput';
X3DField40.Type := 'MFVec3f';
{ .AddX3DField }
Script38.X3DField := X3DField40;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'coordIndexes';
X3DField41.AccessType := 'inputOutput';
X3DField41.Type := 'MFInt32';
{ .AddX3DField }
Script38.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'e';
X3DField42.AccessType := 'inputOutput';
X3DField42.Type := 'SFFloat';
X3DField42.Value := '5';
{ .AddX3DField }
Script38.X3DField := X3DField42;
X3DField43 := TX3DField.Create;
X3DField43.NameField := 'f';
X3DField43.AccessType := 'inputOutput';
X3DField43.Type := 'SFFloat';
X3DField43.Value := '5';
{ .AddX3DField }
Script38.X3DField := X3DField43;
X3DField44 := TX3DField.Create;
X3DField44.NameField := 'g';
X3DField44.AccessType := 'inputOutput';
X3DField44.Type := 'SFFloat';
X3DField44.Value := '5';
{ .AddX3DField }
Script38.X3DField := X3DField44;
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'h';
X3DField45.AccessType := 'inputOutput';
X3DField45.Type := 'SFFloat';
X3DField45.Value := '5';
{ .AddX3DField }
Script38.X3DField := X3DField45;
X3DField46 := TX3DField.Create;
X3DField46.NameField := 'resolution';
X3DField46.AccessType := 'inputOutput';
X3DField46.Type := 'SFInt32';
X3DField46.Value := '50';
{ .AddX3DField }
Script38.X3DField := X3DField46;

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
{ .SetGroup }
X3DPrototype22.Group := Group23;
{ .AddX3DPrototype }
X3DPrototype16.X3DPrototype := X3DPrototype22;
{ .AddX3DPrototype }
Group14.X3DPrototype := X3DPrototype16;
X3DPrototype52 := TX3DPrototypeNode.Create;
X3DPrototype52.NameField := 'orbit';
SFVec3f53 := TSFVec3f.Create(orbit1, false, 'translation', Vector3(-8,0,0));
SFVec3f53.NameField := 'translation';
SFVec3f53.Value := '-8 0 0';
{ .SetSFVec3f }
X3DPrototype52.SFVec3f := SFVec3f53;
SFColor54 := TSFColor.Create(orbit1, false, 'diffuseColor', Vector3(1,0.5,0));
SFColor54.NameField := 'diffuseColor';
SFColor54.Value := '1 0.5 0';
{ .AddSFColor }
X3DPrototype52.SFColor := SFColor54;
SFColor55 := TSFColor.Create(orbit1, false, 'specularColor', Vector3(1,0.5,0));
SFColor55.NameField := 'specularColor';
SFColor55.Value := '1 0.5 0';
{ .AddSFColor }
X3DPrototype52.SFColor := SFColor55;
SFFloat56 := TSFFloat.Create(orbit1, false, 'transparency', 0.75);
SFFloat56.NameField := 'transparency';
SFFloat56.Value := '0.75';
{ .AddSFFloat }
X3DPrototype52.SFFloat := SFFloat56;
{ .AddX3DPrototype }
Group14.X3DPrototype := X3DPrototype52;
X3DPrototype57 := TX3DPrototypeNode.Create;
X3DPrototype57.NameField := 'orbit';
SFVec3f58 := TSFVec3f.Create(orbit1, false, 'translation', Vector3(8,0,0));
SFVec3f58.NameField := 'translation';
SFVec3f58.Value := '8 0 0';
{ .SetSFVec3f }
X3DPrototype57.SFVec3f := SFVec3f58;
SFColor59 := TSFColor.Create(orbit1, false, 'diffuseColor', Vector3(0,0.5,1));
SFColor59.NameField := 'diffuseColor';
SFColor59.Value := '0 0.5 1';
{ .AddSFColor }
X3DPrototype57.SFColor := SFColor59;
SFColor60 := TSFColor.Create(orbit1, false, 'specularColor', Vector3(0,0.5,1));
SFColor60.NameField := 'specularColor';
SFColor60.Value := '0 0.5 1';
{ .AddSFColor }
X3DPrototype57.SFColor := SFColor60;
SFFloat61 := TSFFloat.Create(orbit1, false, 'transparency', 0.5);
SFFloat61.NameField := 'transparency';
SFFloat61.Value := '0.5';
{ .AddSFFloat }
X3DPrototype57.SFFloat := SFFloat61;
{ .AddX3DPrototype }
Group14.X3DPrototype := X3DPrototype57;
{ .AddChildren }
Group11.AddChildren([Group14]);
{ .AddGroup }
X3D0.AddChildren([Group11]);
Result := X3D0;
end;

begin
end.
