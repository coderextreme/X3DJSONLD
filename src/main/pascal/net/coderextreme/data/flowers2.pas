unit flowers2;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createflowers2: TX3DRootNode;

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors;

function CreateEmptyPrototype(const AName: String): TX3DPrototype;
var
  Stream: TStringStream;
  TempRoot: TX3DRootNode;
  CopyState: TX3DNodeDeepCopyState;
begin
  Stream := TStringStream.Create('#X3D V4.0 utf8' + LineEnding + 'PROTO ' + AName + ' [] {}');
  try
    TempRoot := LoadNode(Stream, '', 'model/x3d+vrml');
    try
      CopyState := TX3DNodeDeepCopyState.Create;
      try
        Result := TempRoot.Prototypes[0].DeepCopy(CopyState) as TX3DPrototype;
      finally
        FreeAndNil(CopyState);
      end;
    finally
      FreeAndNil(TempRoot);
    end;
  finally
    FreeAndNil(Stream);
  end;
end;

var
  X3D0: TX3DRootNode;
  Group11: TGroupNode;
  NavigationInfo12: TNavigationInfoNode;
  Viewpoint13: TViewpointNode;
  Group14: TGroupNode;
  DirectionalLight15: TDirectionalLightNode;
  ProtoDeclare16: TX3DPrototype;
  FieldDecl18: TX3DInterfaceDeclaration;
  FieldVal18: TSFVec3f;
  FieldDecl19: TX3DInterfaceDeclaration;
  FieldVal19: TSFColor;
  FieldDecl20: TX3DInterfaceDeclaration;
  FieldVal20: TSFColor;
  FieldDecl21: TX3DInterfaceDeclaration;
  FieldVal21: TSFFloat;
  Group23: TGroupNode;
  TimeSensor24: TTimeSensorNode;
  OrientationInterpolator25: TOrientationInterpolatorNode;
  Transform26: TTransformNode;
  Shape27: TShapeNode;
  Appearance28: TAppearanceNode;
  Material29: TMaterialNode;
  IndexedFaceSet30: TIndexedFaceSetNode;
  Coordinate31: TCoordinateNode;
  Script32: TScriptNode;
  FieldVal33: TX3DEvent;
  FieldVal34: TMFVec3f;
  FieldVal35: TMFInt32;
  FieldVal36: TSFFloat;
  FieldVal37: TSFFloat;
  FieldVal38: TSFFloat;
  FieldVal39: TSFFloat;
  FieldVal40: TSFInt32;
  ProtoInstance46: TX3DPrototypeNode;
  ProtoInstance51: TX3DPrototypeNode;

procedure Initflowers2Part0;
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
Group11.FdChildren.Add(NavigationInfo12);
Viewpoint13 := TViewpointNode.Create;
Viewpoint13.Description := 'Two mathematical orbitals';
Viewpoint13.Position := Vector3(0, 0, 50);
Group11.FdChildren.Add(Viewpoint13);
Group14 := TGroupNode.Create;
DirectionalLight15 := TDirectionalLightNode.Create;
DirectionalLight15.Direction := Vector3(1, 1, 1);
Group14.FdChildren.Add(DirectionalLight15);
ProtoDeclare16 := CreateEmptyPrototype('orbit');
ProtoDeclare16.X3DName := 'orbit';
FieldVal18 := TSFVec3f.Create(nil, True, 'translation', Vector3(-8, 0, 0));
FieldDecl18 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl18.FieldOrEvent := FieldVal18;
FieldVal18.ParentInterfaceDeclaration := FieldDecl18;
ProtoDeclare16.InterfaceDeclarations.Add(FieldDecl18);
FieldVal19 := TSFColor.Create(nil, True, 'diffuseColor', Vector3(1, 0.5, 0));
FieldDecl19 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl19.FieldOrEvent := FieldVal19;
FieldVal19.ParentInterfaceDeclaration := FieldDecl19;
ProtoDeclare16.InterfaceDeclarations.Add(FieldDecl19);
FieldVal20 := TSFColor.Create(nil, True, 'specularColor', Vector3(1, 0.5, 0));
FieldDecl20 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl20.FieldOrEvent := FieldVal20;
FieldVal20.ParentInterfaceDeclaration := FieldDecl20;
end;

procedure Initflowers2Part1;
begin
ProtoDeclare16.InterfaceDeclarations.Add(FieldDecl20);
FieldVal21 := TSFFloat.Create(nil, True, 'transparency', 0.75);
FieldDecl21 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl21.FieldOrEvent := FieldVal21;
FieldVal21.ParentInterfaceDeclaration := FieldDecl21;
ProtoDeclare16.InterfaceDeclarations.Add(FieldDecl21);
Group23 := TGroupNode.Create;
TimeSensor24 := TTimeSensorNode.Create;
TimeSensor24.X3DName := 'Clock';
TimeSensor24.CycleInterval := 16;
TimeSensor24.Loop := True;
Group23.FdChildren.Add(TimeSensor24);
OrientationInterpolator25 := TOrientationInterpolatorNode.Create;
OrientationInterpolator25.X3DName := 'OrbitPath';
OrientationInterpolator25.SetKey([0, 0.5, 1]);
OrientationInterpolator25.SetKeyValue([Vector4(1, 0, 0, 0), Vector4(1, 0, 0, 3.14), Vector4(1, 0, 0, 6.28)]);
Group23.FdChildren.Add(OrientationInterpolator25);
Transform26 := TTransformNode.Create;
Transform26.X3DName := 'OrbitTransform';
Transform26.FieldOrEvent('translation', True).IsClauseNamesAdd('translation');
Shape27 := TShapeNode.Create;
Appearance28 := TAppearanceNode.Create;
Material29 := TMaterialNode.Create;
Material29.FieldOrEvent('diffuseColor', True).IsClauseNamesAdd('diffuseColor');
Material29.FieldOrEvent('specularColor', True).IsClauseNamesAdd('specularColor');
Material29.FieldOrEvent('transparency', True).IsClauseNamesAdd('transparency');
Appearance28.Material := Material29;
Shape27.Appearance := Appearance28;
{ <IndexedFaceSet DEF="Orbit"> }
{ <Coordinate DEF="OrbitCoordinates"/> }
{ </IndexedFaceSet> }
IndexedFaceSet30 := TIndexedFaceSetNode.Create;
IndexedFaceSet30.Ccw := False;
IndexedFaceSet30.Convex := False;
IndexedFaceSet30.SetCoordIndex([0, 1, 2, -1]);
IndexedFaceSet30.X3DName := 'Orbit';
Coordinate31 := TCoordinateNode.Create;
Coordinate31.X3DName := 'OrbitCoordinates';
Coordinate31.SetPoint([Vector3(0, 0, 1), Vector3(0, 1, 0), Vector3(1, 0, 0)]);
IndexedFaceSet30.Coord := Coordinate31;
end;

procedure Initflowers2Part2;
begin
Shape27.Geometry := IndexedFaceSet30;
Transform26.FdChildren.Add(Shape27);
Group23.FdChildren.Add(Transform26);
Script32 := TScriptNode.Create;
Script32.X3DName := 'OrbitScript';
FieldVal33 := TSFFloat.CreateEvent(Script32, 'set_fraction', True);
Script32.AddCustomFieldOrEvent(FieldVal33);
FieldVal34 := TMFVec3f.CreateUndefined(Script32, True, 'coordinates');
Script32.AddCustomFieldOrEvent(FieldVal34);
FieldVal35 := TMFInt32.CreateUndefined(Script32, True, 'coordIndexes');
Script32.AddCustomFieldOrEvent(FieldVal35);
FieldVal36 := TSFFloat.Create(Script32, True, 'e', 5);
Script32.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFFloat.Create(Script32, True, 'f', 5);
Script32.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFFloat.Create(Script32, True, 'g', 5);
Script32.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.Create(Script32, True, 'h', 5);
Script32.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFInt32.Create(Script32, True, 'resolution', 50);
Script32.AddCustomFieldOrEvent(FieldVal40);
Script32.SetSourceCode('ecmascript:' + LineEnding +
  '' + LineEnding +
  '			function initialize() {' + LineEnding +
  '			     generateCoordinates();' + LineEnding +
  '			     var arrIndex = 0;' + LineEnding +
  '			     for (var i = 0; i < resolution-1; i++) {' + LineEnding +
  '				for (var j = 0; j < resolution-1; j++) {' + LineEnding +
  '				     coordIndexes[arrIndex++] = i*resolution+j;' + LineEnding +
  '				     coordIndexes[arrIndex++] = i*resolution+j+1;' + LineEnding +
  '				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;' + LineEnding +
  '				     coordIndexes[arrIndex++] = (i+1)*resolution+j;' + LineEnding +
  '				     coordIndexes[arrIndex++] = -1;' + LineEnding +
  '				}' + LineEnding +
  '			    }' + LineEnding +
  '			}' + LineEnding +
  '' + LineEnding +
  '			function generateCoordinates() {' + LineEnding +
  '			     var theta = 0.0;' + LineEnding +
  '			     var phi = 0.0;' + LineEnding +
  '			     var delta = (2 * 3.141592653) / (resolution-1);' + LineEnding +
  '			     var arrIndex = 0;' + LineEnding +
  '			     for (var i = 0; i < resolution; i++) {' + LineEnding +
  '				for (var j = 0; j < resolution; j++) {' + LineEnding +
  '					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);' + LineEnding +
  '					coordinates[arrIndex++] = new SFVec3f(' + LineEnding +
  '						rho * Math.cos(phi) * Math.cos(theta),' + LineEnding +
  '						rho * Math.cos(phi) * Math.sin(theta),' + LineEnding +
  '						rho * Math.sin(phi)' + LineEnding +
  '					);' + LineEnding +
  '					theta += delta;' + LineEnding +
  '				}' + LineEnding +
  '				phi += delta;' + LineEnding +
  '			     }' + LineEnding +
  '			}' + LineEnding +
  '' + LineEnding +
  '			function set_fraction(fraction, eventTime) {' + LineEnding +
  '				var choice = Math.floor(Math.random() * 4);' + LineEnding +
  '				switch (choice) {' + LineEnding +
  '				case 0:' + LineEnding +
  '					e += Math.floor(Math.random() * 2) * 2 - 1;' + LineEnding +
  '					break;' + LineEnding +
  '				case 1:' + LineEnding +
  '					f += Math.floor(Math.random() * 2) * 2 - 1;' + LineEnding +
  '					break;' + LineEnding +
  '				case 2:' + LineEnding +
  '					g += Math.floor(Math.random() * 2) * 2 - 1;' + LineEnding +
  '					break;' + LineEnding +
  '				case 3:' + LineEnding +
  '					h += Math.floor(Math.random() * 2) * 2 - 1;' + LineEnding +
  '					break;' + LineEnding +
  '				}' + LineEnding +
  '				if (e < 1) {' + LineEnding +
  '					f = 10;' + LineEnding +
  '				}' + LineEnding +
  '				if (f < 1) {' + LineEnding +
  '					f = 10;' + LineEnding +
  '				}' + LineEnding +
  '				if (g < 1) {' + LineEnding +
  '					g = 4;' + LineEnding +
  '				}' + LineEnding +
  '				if (h < 1) {' + LineEnding +
  '					h = 4;' + LineEnding +
  '				}' + LineEnding +
  '				generateCoordinates();' + LineEnding +
  '			}');
Group23.FdChildren.Add(Script32);
{ ROUTE OrbitScript.coordIndexes TO Orbit.set_coordIndex }
Group23.AddRoute(FieldVal35, IndexedFaceSet30.EventSet_coordIndex);
{ ROUTE OrbitScript.coordinates TO OrbitCoordinates.point }
Group23.AddRoute(FieldVal34, Coordinate31.point);
{ ROUTE Clock.fraction_changed TO OrbitScript.set_fraction }
Group23.AddRoute(TimeSensor24.EventFraction_changed, FieldVal33);
{ ROUTE OrbitPath.value_changed TO OrbitTransform.rotation }
Group23.AddRoute(OrientationInterpolator25.EventValue_changed, Transform26.rotation);
{ ROUTE Clock.fraction_changed TO OrbitPath.set_fraction }
Group23.AddRoute(TimeSensor24.EventFraction_changed, OrientationInterpolator25.EventSet_fraction);
ProtoDeclare16.Node.AddChildren([Group23]);
X3D0.AddPrototype(ProtoDeclare16);
ProtoInstance46 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare16);
(ProtoInstance46.Field('translation') as TSFVec3f).Value := Vector3(-8, 0, 0);
(ProtoInstance46.Field('diffuseColor') as TSFColor).Value := Vector3(1, 0.5, 0);
(ProtoInstance46.Field('specularColor') as TSFColor).Value := Vector3(1, 0.5, 0);
(ProtoInstance46.Field('transparency') as TSFFloat).Value := 0.75;
end;

procedure Initflowers2Part3;
begin
Group14.FdChildren.Add(ProtoInstance46.Instantiate);
ProtoInstance51 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare16);
(ProtoInstance51.Field('translation') as TSFVec3f).Value := Vector3(8, 0, 0);
(ProtoInstance51.Field('diffuseColor') as TSFColor).Value := Vector3(0, 0.5, 1);
(ProtoInstance51.Field('specularColor') as TSFColor).Value := Vector3(0, 0.5, 1);
(ProtoInstance51.Field('transparency') as TSFFloat).Value := 0.5;
Group14.FdChildren.Add(ProtoInstance51.Instantiate);
Group11.FdChildren.Add(Group14);
X3D0.AddChildren([Group11]);
end;

function Createflowers2: TX3DRootNode;
begin
  Initflowers2Part0;
  Initflowers2Part1;
  Initflowers2Part2;
  Initflowers2Part3;
  Result := X3D0;
end;

begin
end.
