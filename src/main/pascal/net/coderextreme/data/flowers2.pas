unit flowers2;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createflowers2: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group11: TGroupNode;
NavigationInfo12: TNavigationInfoNode;
Viewpoint13: TViewpointNode;
Group14: TGroupNode;
DirectionalLight15: TDirectionalLightNode;
X3DPrototype16: TX3DPrototype;
X3DInterfaceDeclaration17: TX3DInterfaceDeclaration;
SFVec3f18: TSFVec3f;
SFColor19: TSFColor;
SFColor20: TSFColor;
SFFloat21: TSFFloat;
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
SFFloat39: TSFFloat;
MFVec3f40: TMFVec3f;
MFInt3241: TMFInt32;
SFFloat42: TSFFloat;
SFFloat43: TSFFloat;
SFFloat44: TSFFloat;
SFFloat45: TSFFloat;
SFInt3246: TSFInt32;
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

procedure Initflowers2Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'flowers2.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['created'] := '23 January 2005';
{ METHOD .Meta }
X3D0.Meta['modified'] := '9 November 2024';
{ METHOD .Meta }
X3D0.Meta['description'] := '2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manually written';
{ METHOD .Meta }
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group11 := TGroupNode.Create;
NavigationInfo12 := TNavigationInfoNode.Create;
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(NavigationInfo12);
Viewpoint13 := TViewpointNode.Create;
Viewpoint13.Description := 'Two mathematical orbitals';
Viewpoint13.Position := Vector3(0,0,50);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Viewpoint13);
Group14 := TGroupNode.Create;
DirectionalLight15 := TDirectionalLightNode.Create;
DirectionalLight15.Direction := Vector3(1,1,1);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(DirectionalLight15);
X3DPrototype16 := TX3DPrototype.Create;
X3DInterfaceDeclaration17 := TX3DInterfaceDeclaration.Create(nil);
SFVec3f18 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration17, false, 'translation');
SFVec3f18.Value := '-8 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration17.AddSFVec3f([SFVec3f18]);
SFColor19 := TSFColor.CreateUndefined(X3DInterfaceDeclaration17, false, 'diffuseColor');
SFColor19.Value := '1 0.5 0';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration17.AddSFColor([SFColor19]);
SFColor20 := TSFColor.CreateUndefined(X3DInterfaceDeclaration17, false, 'specularColor');
SFColor20.Value := '1 0.5 0';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration17.AddSFColor([SFColor20]);
SFFloat21 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration17, false, 'transparency');
SFFloat21.Value := '0.75';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration17.AddSFFloat([SFFloat21]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype16.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration17]);
X3DPrototype22 := TX3DPrototype.Create;
end;

procedure Initflowers2Part1;
begin

Group23 := TGroupNode.Create;
TimeSensor24 := TTimeSensorNode.Create;
TimeSensor24.CycleInterval := 16;
TimeSensor24.Loop := True;
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(TimeSensor24);
OrientationInterpolator25 := TOrientationInterpolatorNode.Create;
OrientationInterpolator25.SetKey([0,0.5,1]);
OrientationInterpolator25.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,3.14),Vector4(1,0,0,6.28)]);
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(OrientationInterpolator25);
Transform26 := TTransformNode.Create;
IS27 := TIS.Create;
connect28 := Tconnect.Create;
connect28.NodeField := 'translation';
connect28.ProtoField := 'translation';
{ METHOD .Connect }
IS27.Connect := connect28;
{ METHOD .IS }
Transform26.IS := IS27;
Shape29 := TShapeNode.Create;
Appearance30 := TAppearanceNode.Create;
Material31 := TMaterialNode.Create;
IS32 := TIS.Create;
connect33 := Tconnect.Create;
connect33.NodeField := 'diffuseColor';
connect33.ProtoField := 'diffuseColor';
{ METHOD .Connect }
IS32.Connect := connect33;
connect34 := Tconnect.Create;
connect34.NodeField := 'specularColor';
connect34.ProtoField := 'specularColor';
{ METHOD .Connect }
IS32.Connect := connect34;
connect35 := Tconnect.Create;
connect35.NodeField := 'transparency';
connect35.ProtoField := 'transparency';
{ METHOD .Connect }
IS32.Connect := connect35;
{ METHOD .IS }
Material31.IS := IS32;
{ METHOD .SetMaterial }
Appearance30.Material := Material31;
{ METHOD .Appearance }
Shape29.Appearance := Appearance30;
{ <IndexedFaceSet DEF="Orbit"> }
{ <Coordinate DEF="OrbitCoordinates"/> }
{ </IndexedFaceSet> }
IndexedFaceSet36 := TIndexedFaceSetNode.Create;
IndexedFaceSet36.Ccw := False;
IndexedFaceSet36.Convex := False;
IndexedFaceSet36.SetCoordIndex([0,1,2,-1]);
Coordinate37 := TCoordinateNode.Create;
end;

procedure Initflowers2Part2;
begin

Coordinate37.SetPoint([Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0)]);
{ METHOD .Coord }
IndexedFaceSet36.Coord := Coordinate37;
{ METHOD .Geometry }
Shape29.Geometry := IndexedFaceSet36;
{ METHOD .FdChildren.Add }
Transform26.FdChildren.Add(Shape29);
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(Transform26);
Script38 := TScriptNode.Create;
SFFloat39 := TSFFloat.CreateUndefined(Script38, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFFloat39);
MFVec3f40 := TMFVec3f.CreateUndefined(Script38, false, 'coordinates');
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(MFVec3f40);
MFInt3241 := TMFInt32.CreateUndefined(Script38, false, 'coordIndexes');
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(MFInt3241);
SFFloat42 := TSFFloat.CreateUndefined(Script38, false, 'e');
SFFloat42.Value := '5';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFFloat42);
SFFloat43 := TSFFloat.CreateUndefined(Script38, false, 'f');
SFFloat43.Value := '5';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFFloat43);
SFFloat44 := TSFFloat.CreateUndefined(Script38, false, 'g');
SFFloat44.Value := '5';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFFloat44);
SFFloat45 := TSFFloat.CreateUndefined(Script38, false, 'h');
SFFloat45.Value := '5';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFFloat45);
SFInt3246 := TSFInt32.CreateUndefined(Script38, false, 'resolution');
SFInt3246.Value := '50';
{ METHOD .Fd.AddCustomField }
Script38.AddCustomField(SFInt3246);

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
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(Script38);
{ Original "OrbitScript.coordIndexes TO Orbit.EventSet_coordIndex }
{ Sample OrbitScript.coordIndexes TO Orbit.EventSet_coordIndex}
Group23.AddRoute(OrbitScript.[object Object], IndexedFaceSet36.EventSet_coordIndex);
{ METHOD .AddX3DROUTE }
{ Original "OrbitScript.coordinates TO OrbitCoordinates.point }
{ Sample OrbitScript.coordinates TO OrbitCoordinates.point}
Group23.AddRoute(OrbitScript.[object Object], Coordinate37.point);
{ METHOD .AddX3DROUTE }
{ Original "Clock.EventFraction_changed TO OrbitScript.EventSet_fraction }
{ Sample Clock.EventFraction_changed TO OrbitScript.EventSet_fraction}
Group23.AddRoute(TimeSensor24.EventFraction_changed, Script38.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "OrbitPath.EventValue_changed TO OrbitTransform.rotation }
{ Sample OrbitPath.EventValue_changed TO OrbitTransform.rotation}
Group23.AddRoute(OrientationInterpolator25.EventValue_changed, Transform26.rotation);
{ METHOD .AddX3DROUTE }
{ Original "Clock.EventFraction_changed TO OrbitPath.EventSet_fraction }
{ Sample Clock.EventFraction_changed TO OrbitPath.EventSet_fraction}
Group23.AddRoute(TimeSensor24.EventFraction_changed, OrientationInterpolator25.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
X3DPrototype22.AddChildren([Group23]);
{ METHOD .AddX3DPrototype }
X3DPrototype16.AddX3DPrototype([X3DPrototype22]);
{ METHOD .AddX3DPrototype }
Group14.AddX3DPrototype([X3DPrototype16]);
X3DPrototype52 := TX3DPrototypeNode.Create;
SFVec3f53 := TSFVec3f.CreateUndefined(X3DPrototype52, false, 'translation');
SFVec3f53.Value := '-8 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype52.AddSFVec3f([SFVec3f53]);
SFColor54 := TSFColor.CreateUndefined(X3DPrototype52, false, 'diffuseColor');
SFColor54.Value := '1 0.5 0';
{ METHOD .AddSFColor }
X3DPrototype52.AddSFColor([SFColor54]);
SFColor55 := TSFColor.CreateUndefined(X3DPrototype52, false, 'specularColor');
SFColor55.Value := '1 0.5 0';
{ METHOD .AddSFColor }
X3DPrototype52.AddSFColor([SFColor55]);
SFFloat56 := TSFFloat.CreateUndefined(X3DPrototype52, false, 'transparency');
SFFloat56.Value := '0.75';
{ METHOD .AddSFFloat }
X3DPrototype52.AddSFFloat([SFFloat56]);
{ METHOD .AddX3DPrototype }
Group14.AddX3DPrototype([X3DPrototype52]);
X3DPrototype57 := TX3DPrototypeNode.Create;
SFVec3f58 := TSFVec3f.CreateUndefined(X3DPrototype57, false, 'translation');
SFVec3f58.Value := '8 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype57.AddSFVec3f([SFVec3f58]);
SFColor59 := TSFColor.CreateUndefined(X3DPrototype57, false, 'diffuseColor');
SFColor59.Value := '0 0.5 1';
{ METHOD .AddSFColor }
X3DPrototype57.AddSFColor([SFColor59]);
SFColor60 := TSFColor.CreateUndefined(X3DPrototype57, false, 'specularColor');
SFColor60.Value := '0 0.5 1';
{ METHOD .AddSFColor }
X3DPrototype57.AddSFColor([SFColor60]);
SFFloat61 := TSFFloat.CreateUndefined(X3DPrototype57, false, 'transparency');
SFFloat61.Value := '0.5';
{ METHOD .AddSFFloat }
X3DPrototype57.AddSFFloat([SFFloat61]);
{ METHOD .AddX3DPrototype }
Group14.AddX3DPrototype([X3DPrototype57]);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Group14);
{ METHOD .AddGroup }
X3D0.AddChildren([Group11]);
end;

function Createflowers2: TX3DRootNode;
begin
Initflowers2Part0;
Initflowers2Part1;
Initflowers2Part2;
Result := X3D0;
end;

begin
end.
