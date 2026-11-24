unit flowers2;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
Shape28: TShapeNode;
Appearance29: TAppearanceNode;
Material30: TMaterialNode;
IndexedFaceSet32: TIndexedFaceSetNode;
Coordinate33: TCoordinateNode;
Script34: TScriptNode;
SFFloat35: TSFFloat;
MFVec3f36: TMFVec3f;
MFInt3237: TMFInt32;
SFFloat38: TSFFloat;
SFFloat39: TSFFloat;
SFFloat40: TSFFloat;
SFFloat41: TSFFloat;
SFInt3242: TSFInt32;
X3DPrototype48: TX3DPrototypeNode;
SFVec3f49: TSFVec3f;
SFColor50: TSFColor;
SFColor51: TSFColor;
SFFloat52: TSFFloat;
X3DPrototype53: TX3DPrototypeNode;
SFVec3f54: TSFVec3f;
SFColor55: TSFColor;
SFColor56: TSFColor;
SFFloat57: TSFFloat;

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
Group11 := TGroupNode.Create;;
NavigationInfo12 := TNavigationInfoNode.Create;;
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(NavigationInfo12);
Viewpoint13 := TViewpointNode.Create;;
Viewpoint13.Description := 'Two mathematical orbitals';
Viewpoint13.Position := Vector3(0,0,50);
{ METHOD .FdChildren.Add }
Group11.FdChildren.Add(Viewpoint13);
Group14 := TGroupNode.Create;;
DirectionalLight15 := TDirectionalLightNode.Create;;
DirectionalLight15.Direction := Vector3(1,1,1);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(DirectionalLight15);
X3DPrototype16 := TX3DPrototype.Create;;
X3DInterfaceDeclaration17 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f18 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration17, false, 'translation');
SFVec3f18.Value := '-8 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration17.AddSFVec3f([SFVec3f18]);
SFColor19 := TSFColor.CreateUndefined(X3DInterfaceDeclaration17, false, 'diffuseColor');
SFColor19.Value := '1 0.5 0';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration17.AddSFColor([SFColor19]);
SFColor20 := TSFColor.CreateUndefined(X3DInterfaceDeclaration17, false, 'specularColor');
end;

procedure Initflowers2Part1;
begin

SFColor20.Value := '1 0.5 0';
{ METHOD .AddSFColor }
X3DInterfaceDeclaration17.AddSFColor([SFColor20]);
SFFloat21 := TSFFloat.CreateUndefined(X3DInterfaceDeclaration17, false, 'transparency');
SFFloat21.Value := '0.75';
{ METHOD .AddSFFloat }
X3DInterfaceDeclaration17.AddSFFloat([SFFloat21]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype16.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration17]);
X3DPrototype22 := TX3DPrototype.Create;;
Group23 := TGroupNode.Create;;
TimeSensor24 := TTimeSensorNode.Create;;
TimeSensor24.CycleInterval := 16;
TimeSensor24.Loop := True;
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(TimeSensor24);
OrientationInterpolator25 := TOrientationInterpolatorNode.Create;;
OrientationInterpolator25.SetKey([0,0.5,1]);
OrientationInterpolator25.SetKeyValue([Vector4(1,0,0,0),Vector4(1,0,0,3.14),Vector4(1,0,0,6.28)]);
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(OrientationInterpolator25);
Transform26 := TTransformNode.Create;;
Shape28 := TShapeNode.Create;;
Appearance29 := TAppearanceNode.Create;;
Material30 := TMaterialNode.Create;;
{ METHOD .SetMaterial }
Appearance29.Material := Material30;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape28.Appearance := Appearance29;
{ <IndexedFaceSet DEF="Orbit"> }
{ <Coordinate DEF="OrbitCoordinates"/> }
{ </IndexedFaceSet> }
IndexedFaceSet32 := TIndexedFaceSetNode.Create;;
IndexedFaceSet32.Ccw := False;
IndexedFaceSet32.Convex := False;
IndexedFaceSet32.SetCoordIndex([0,1,2,-1]);
Coordinate33 := TCoordinateNode.Create;;
Coordinate33.SetPoint([Vector3(0,0,1),Vector3(0,1,0),Vector3(1,0,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet32.Coord := Coordinate33;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape28.Geometry := IndexedFaceSet32;
end;

procedure Initflowers2Part2;
begin

{ METHOD .FdChildren.Add }
Transform26.FdChildren.Add(Shape28);
{ METHOD .FdChildren.Add }
Group23.FdChildren.Add(Transform26);
Script34 := TScriptNode.Create;;
SFFloat35 := TSFFloat.CreateUndefined(Script34, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script34.AddCustomField(SFFloat35);
MFVec3f36 := TMFVec3f.CreateUndefined(Script34, false, 'coordinates');
{ METHOD .Fd.AddCustomField }
Script34.AddCustomField(MFVec3f36);
MFInt3237 := TMFInt32.CreateUndefined(Script34, false, 'coordIndexes');
{ METHOD .Fd.AddCustomField }
Script34.AddCustomField(MFInt3237);
SFFloat38 := TSFFloat.CreateUndefined(Script34, false, 'e');
SFFloat38.Value := '5';
{ METHOD .Fd.AddCustomField }
Script34.AddCustomField(SFFloat38);
SFFloat39 := TSFFloat.CreateUndefined(Script34, false, 'f');
SFFloat39.Value := '5';
{ METHOD .Fd.AddCustomField }
Script34.AddCustomField(SFFloat39);
SFFloat40 := TSFFloat.CreateUndefined(Script34, false, 'g');
SFFloat40.Value := '5';
{ METHOD .Fd.AddCustomField }
Script34.AddCustomField(SFFloat40);
SFFloat41 := TSFFloat.CreateUndefined(Script34, false, 'h');
SFFloat41.Value := '5';
{ METHOD .Fd.AddCustomField }
Script34.AddCustomField(SFFloat41);
SFInt3242 := TSFInt32.CreateUndefined(Script34, false, 'resolution');
SFInt3242.Value := '50';
{ METHOD .Fd.AddCustomField }
Script34.AddCustomField(SFInt3242);

Script34.SetSourceCode('''ecmascript:\n"+
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
Group23.FdChildren.Add(Script34);
{ Original "OrbitScript.coordIndexes TO Orbit.EventSet_coordIndex }
{ Sample OrbitScript.coordIndexes TO Orbit.EventSet_coordIndex}
Group23.AddRoute(OrbitScript.undefined, IndexedFaceSet32.EventSet_coordIndex);
{ METHOD .AddX3DROUTE }
{ Original "OrbitScript.coordinates TO OrbitCoordinates.point }
{ Sample OrbitScript.coordinates TO OrbitCoordinates.point}
Group23.AddRoute(OrbitScript.undefined, Coordinate33.point);
{ METHOD .AddX3DROUTE }
{ Original "Clock.EventFraction_changed TO OrbitScript.EventSet_fraction }
{ Sample Clock.EventFraction_changed TO OrbitScript.EventSet_fraction}
Group23.AddRoute(TimeSensor24.EventFraction_changed, Script34.EventSet_fraction);
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
X3DPrototype48 := TX3DPrototypeNode;
SFVec3f49 := TSFVec3f.CreateUndefined(X3DPrototype48, false, 'translation');
SFVec3f49.Value := '-8 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype48.AddSFVec3f([SFVec3f49]);
SFColor50 := TSFColor.CreateUndefined(X3DPrototype48, false, 'diffuseColor');
SFColor50.Value := '1 0.5 0';
{ METHOD .AddSFColor }
X3DPrototype48.AddSFColor([SFColor50]);
SFColor51 := TSFColor.CreateUndefined(X3DPrototype48, false, 'specularColor');
SFColor51.Value := '1 0.5 0';
{ METHOD .AddSFColor }
X3DPrototype48.AddSFColor([SFColor51]);
SFFloat52 := TSFFloat.CreateUndefined(X3DPrototype48, false, 'transparency');
SFFloat52.Value := '0.75';
{ METHOD .AddSFFloat }
X3DPrototype48.AddSFFloat([SFFloat52]);
{ METHOD .AddX3DPrototype }
Group14.AddX3DPrototype([X3DPrototype48]);
X3DPrototype53 := TX3DPrototypeNode;
SFVec3f54 := TSFVec3f.CreateUndefined(X3DPrototype53, false, 'translation');
SFVec3f54.Value := '8 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype53.AddSFVec3f([SFVec3f54]);
SFColor55 := TSFColor.CreateUndefined(X3DPrototype53, false, 'diffuseColor');
SFColor55.Value := '0 0.5 1';
{ METHOD .AddSFColor }
X3DPrototype53.AddSFColor([SFColor55]);
SFColor56 := TSFColor.CreateUndefined(X3DPrototype53, false, 'specularColor');
SFColor56.Value := '0 0.5 1';
{ METHOD .AddSFColor }
X3DPrototype53.AddSFColor([SFColor56]);
SFFloat57 := TSFFloat.CreateUndefined(X3DPrototype53, false, 'transparency');
SFFloat57.Value := '0.5';
{ METHOD .AddSFFloat }
X3DPrototype53.AddSFFloat([SFFloat57]);
{ METHOD .AddX3DPrototype }
Group14.AddX3DPrototype([X3DPrototype53]);
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
