unit sliders;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createsliders: TX3DRootNode;

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
  Group15: TGroupNode;
  LayerSet16: TLayerSetNode;
  Layer17: TLayerNode;
  NavigationInfo18: TNavigationInfoNode;
  DirectionalLight19: TDirectionalLightNode;
  DirectionalLight20: TDirectionalLightNode;
  Viewpoint21: TViewpointNode;
  Group22: TGroupNode;
  Transform23: TTransformNode;
  Shape24: TShapeNode;
  Cylinder25: TCylinderNode;
  Appearance26: TAppearanceNode;
  Material27: TMaterialNode;
  Transform28: TTransformNode;
  Shape29: TShapeNode;
  Cone30: TConeNode;
  Appearance31: TAppearanceNode;
  Transform33: TTransformNode;
  Shape34: TShapeNode;
  Appearance36: TAppearanceNode;
  Material37: TMaterialNode;
  Transform38: TTransformNode;
  Shape39: TShapeNode;
  Appearance41: TAppearanceNode;
  Transform43: TTransformNode;
  Shape44: TShapeNode;
  Appearance46: TAppearanceNode;
  Material47: TMaterialNode;
  Transform48: TTransformNode;
  Shape49: TShapeNode;
  Appearance51: TAppearanceNode;
  Transform53: TTransformNode;
  Transform54: TTransformNode;
  Shape55: TShapeNode;
  IndexedFaceSet56: TIndexedFaceSetNode;
  Coordinate57: TCoordinateNode;
  Appearance58: TAppearanceNode;
  Material59: TMaterialNode;
  Script60: TScriptNode;
  FieldVal61: TMFVec3f;
  FieldVal62: TMFInt32;
  FieldVal63: TSFFloat;
  FieldVal64: TSFFloat;
  FieldVal65: TSFFloat;
  FieldVal66: TSFFloat;
  FieldVal67: TSFFloat;
  FieldVal68: TSFFloat;
  FieldVal69: TSFInt32;
  LayoutLayer72: TLayoutLayerNode;
  Layout73: TLayoutNode;
  Viewport74: TViewportNode;
  Transform75: TTransformNode;
  Shape76: TShapeNode;
  Appearance77: TAppearanceNode;
  Material78: TMaterialNode;
  Box79: TBoxNode;
  Transform80: TTransformNode;
  Transform81: TTransformNode;
  Shape82: TShapeNode;
  Text83: TTextNode;
  FontStyle84: TFontStyleNode;
  Appearance85: TAppearanceNode;
  Material86: TMaterialNode;
  ProtoDeclare87: TX3DPrototype;
  FieldDecl89: TX3DInterfaceDeclaration;
  FieldVal89: TSFVec3f;
  FieldDecl90: TX3DInterfaceDeclaration;
  FieldVal90: TMFString;
  FieldDecl91: TX3DInterfaceDeclaration;
  FieldVal91: TSFFloat;
  FieldDecl92: TX3DInterfaceDeclaration;
  FieldVal92: TSFString;
  FieldDecl93: TX3DInterfaceDeclaration;
  FieldVal93: TSFNode;
  Group95: TGroupNode;
  Transform96: TTransformNode;
  Transform97: TTransformNode;
  PlaneSensor98: TPlaneSensorNode;
  Transform99: TTransformNode;
  TouchSensor100: TTouchSensorNode;
  Transform101: TTransformNode;
  Shape102: TShapeNode;
  Text103: TTextNode;
  FontStyle104: TFontStyleNode;
  Appearance105: TAppearanceNode;
  Material106: TMaterialNode;
  Script107: TScriptNode;
  FieldVal108: TSFFloat;
  FieldVal109: TSFString;
  FieldVal110: TX3DEvent;
  FieldVal111: TSFNode;
  FieldVal112: TSFFloat;
  FieldVal113: TMFString;
  ProtoInstance117: TX3DPrototypeNode;
  ProtoInstance124: TX3DPrototypeNode;
  ProtoInstance131: TX3DPrototypeNode;
  ProtoInstance138: TX3DPrototypeNode;
  ProtoInstance145: TX3DPrototypeNode;
  ProtoInstance152: TX3DPrototypeNode;
  Layer159: TLayerNode;
  Viewpoint160: TViewpointNode;

procedure InitslidersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ <component name='Shape' level='4'></component> }
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'sliders.x3d';
X3D0.Meta['created'] := '8 August 2025';
X3D0.Meta['description'] := '*Bumpy flower with prototype sliders*';
X3D0.Meta['creator'] := 'Doug Sanden, Christoph Valentin, John Carlson';
X3D0.Meta['identifier'] := 'https://www.coderextreme.net/X3DJSONLD/src/main/data/sliders.x3d';
X3D0.Meta['license'] := 'license.html';
X3D0.Meta['generator'] := 'Vim, VI Improved';
Group15 := TGroupNode.Create;
LayerSet16 := TLayerSetNode.Create;
LayerSet16.ActiveLayer := 1;
LayerSet16.SetOrder([1, 2, 3]);
Layer17 := TLayerNode.Create;
Layer17.Pickable := True;
Layer17.SetObjectType(['ALL']);
NavigationInfo18 := TNavigationInfoNode.Create;
NavigationInfo18.SetType(['EXAMINE']);
NavigationInfo18.SetAvatarSize([0.25, 1.75, 0.75]);
Layer17.FdChildren.Add(NavigationInfo18);
DirectionalLight19 := TDirectionalLightNode.Create;
DirectionalLight19.AmbientIntensity := 0.2;
DirectionalLight19.Direction := Vector3(0, -1, 0);
Layer17.FdChildren.Add(DirectionalLight19);
DirectionalLight20 := TDirectionalLightNode.Create;
DirectionalLight20.AmbientIntensity := 0.2;
DirectionalLight20.Direction := Vector3(-1, -0.1, -1);
Layer17.FdChildren.Add(DirectionalLight20);
Viewpoint21 := TViewpointNode.Create;
Viewpoint21.Description := 'My Overview';
Viewpoint21.FieldOfView := 1.570796;
end;

procedure InitslidersPart1;
begin
Viewpoint21.Position := Vector3(0, 1.75, 60);
Layer17.FdChildren.Add(Viewpoint21);
Group22 := TGroupNode.Create;
{ Arrow X }
Transform23 := TTransformNode.Create;
Transform23.Translation := Vector3(25, 0, 0);
Transform23.Rotation := Vector4(0, 0, -1, 1.57);
Shape24 := TShapeNode.Create;
Cylinder25 := TCylinderNode.Create;
Cylinder25.X3DName := 'Shaft';
Cylinder25.Radius := 0.35;
Cylinder25.Height := 50;
Shape24.Geometry := Cylinder25;
Appearance26 := TAppearanceNode.Create;
Material27 := TMaterialNode.Create;
Material27.X3DName := 'RED';
Material27.DiffuseColor := Vector3(1, 0, 0);
Material27.EmissiveColor := Vector3(1, 0, 0);
Appearance26.Material := Material27;
Shape24.Appearance := Appearance26;
Transform23.FdChildren.Add(Shape24);
Group22.FdChildren.Add(Transform23);
Transform28 := TTransformNode.Create;
Transform28.Translation := Vector3(50, 0, 0);
Transform28.Rotation := Vector4(0, 0, -1, 1.57);
Shape29 := TShapeNode.Create;
Cone30 := TConeNode.Create;
Cone30.X3DName := 'Tip';
Cone30.BottomRadius := 0.8;
Cone30.Height := 3;
Shape29.Geometry := Cone30;
Appearance31 := TAppearanceNode.Create;
Appearance31.Material := Material27;
Shape29.Appearance := Appearance31;
Transform28.FdChildren.Add(Shape29);
Group22.FdChildren.Add(Transform28);
{ Arrow Y }
Transform33 := TTransformNode.Create;
Transform33.Translation := Vector3(0, 25, 0);
Shape34 := TShapeNode.Create;
end;

procedure InitslidersPart2;
begin
Shape34.Geometry := Cylinder25;
Appearance36 := TAppearanceNode.Create;
Material37 := TMaterialNode.Create;
Material37.X3DName := 'GREEN';
Material37.DiffuseColor := Vector3(0, 1, 0);
Material37.EmissiveColor := Vector3(0, 1, 0);
Appearance36.Material := Material37;
Shape34.Appearance := Appearance36;
Transform33.FdChildren.Add(Shape34);
Group22.FdChildren.Add(Transform33);
Transform38 := TTransformNode.Create;
Transform38.Translation := Vector3(0, 50, 0);
Shape39 := TShapeNode.Create;
Shape39.Geometry := Cone30;
Appearance41 := TAppearanceNode.Create;
Appearance41.Material := Material37;
Shape39.Appearance := Appearance41;
Transform38.FdChildren.Add(Shape39);
Group22.FdChildren.Add(Transform38);
{ Arrow Z }
Transform43 := TTransformNode.Create;
Transform43.Translation := Vector3(0, 0, 25);
Transform43.Rotation := Vector4(1, 0, 0, 1.57);
Shape44 := TShapeNode.Create;
Shape44.Geometry := Cylinder25;
Appearance46 := TAppearanceNode.Create;
Material47 := TMaterialNode.Create;
Material47.X3DName := 'BLUE';
Material47.DiffuseColor := Vector3(0, 0, 1);
Material47.EmissiveColor := Vector3(0, 0, 1);
Appearance46.Material := Material47;
Shape44.Appearance := Appearance46;
Transform43.FdChildren.Add(Shape44);
Group22.FdChildren.Add(Transform43);
Transform48 := TTransformNode.Create;
Transform48.Translation := Vector3(0, 0, 50);
Transform48.Rotation := Vector4(1, 0, 0, 1.57);
Shape49 := TShapeNode.Create;
Shape49.Geometry := Cone30;
Appearance51 := TAppearanceNode.Create;
end;

procedure InitslidersPart3;
begin
Appearance51.Material := Material47;
Shape49.Appearance := Appearance51;
Transform48.FdChildren.Add(Shape49);
Group22.FdChildren.Add(Transform48);
Layer17.FdChildren.Add(Group22);
{ the model that is being reviewed by the users of this scene }
Transform53 := TTransformNode.Create;
Transform53.X3DName := 'FlowerTransform';
Transform54 := TTransformNode.Create;
Shape55 := TShapeNode.Create;
IndexedFaceSet56 := TIndexedFaceSetNode.Create;
IndexedFaceSet56.Convex := False;
IndexedFaceSet56.X3DName := 'Orbit';
Coordinate57 := TCoordinateNode.Create;
Coordinate57.X3DName := 'OrbitCoordinates';
IndexedFaceSet56.Coord := Coordinate57;
Shape55.Geometry := IndexedFaceSet56;
Appearance58 := TAppearanceNode.Create;
Material59 := TMaterialNode.Create;
Material59.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material59.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance58.Material := Material59;
Shape55.Appearance := Appearance58;
Transform54.FdChildren.Add(Shape55);
Transform53.FdChildren.Add(Transform54);
Layer17.FdChildren.Add(Transform53);
Script60 := TScriptNode.Create;
Script60.X3DName := 'OrbitScript';
FieldVal61 := TMFVec3f.CreateUndefined(Script60, True, 'coordinates');
Script60.AddCustomFieldOrEvent(FieldVal61);
FieldVal62 := TMFInt32.CreateUndefined(Script60, True, 'coordIndexes');
Script60.AddCustomFieldOrEvent(FieldVal62);
FieldVal63 := TSFFloat.Create(Script60, True, 'a', 5);
Script60.AddCustomFieldOrEvent(FieldVal63);
FieldVal64 := TSFFloat.Create(Script60, True, 'b', 5);
Script60.AddCustomFieldOrEvent(FieldVal64);
FieldVal65 := TSFFloat.Create(Script60, True, 'c', 5);
Script60.AddCustomFieldOrEvent(FieldVal65);
FieldVal66 := TSFFloat.Create(Script60, True, 'd', 5);
Script60.AddCustomFieldOrEvent(FieldVal66);
end;

procedure InitslidersPart4;
begin
FieldVal67 := TSFFloat.Create(Script60, True, 'pdelta', 0);
Script60.AddCustomFieldOrEvent(FieldVal67);
FieldVal68 := TSFFloat.Create(Script60, True, 'tdelta', 0);
Script60.AddCustomFieldOrEvent(FieldVal68);
FieldVal69 := TSFInt32.Create(Script60, True, 'resolution', 50);
Script60.AddCustomFieldOrEvent(FieldVal69);
Script60.SetSourceCode('ecmascript:' + LineEnding +
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
  '			function set_a(value) {' + LineEnding +
  '				a = value;' + LineEnding +
  '				generateCoordinates();' + LineEnding +
  '			}' + LineEnding +
  '' + LineEnding +
  '			function set_b(value) {' + LineEnding +
  '				b = value;' + LineEnding +
  '				generateCoordinates();' + LineEnding +
  '			}' + LineEnding +
  '' + LineEnding +
  '			function set_c(value) {' + LineEnding +
  '				c = value;' + LineEnding +
  '				generateCoordinates();' + LineEnding +
  '			}' + LineEnding +
  '' + LineEnding +
  '			function set_d(value) {' + LineEnding +
  '				d = value;' + LineEnding +
  '				generateCoordinates();' + LineEnding +
  '			}' + LineEnding +
  '' + LineEnding +
  '			function set_pdelta(value) {' + LineEnding +
  '				pdelta = value;' + LineEnding +
  '				generateCoordinates();' + LineEnding +
  '			}' + LineEnding +
  '' + LineEnding +
  '			function set_tdelta(value) {' + LineEnding +
  '				tdelta = value;' + LineEnding +
  '				generateCoordinates();' + LineEnding +
  '			}' + LineEnding +
  '' + LineEnding +
  '			function resolution(value) {' + LineEnding +
  '				resolution = value;' + LineEnding +
  '				initialize();' + LineEnding +
  '			}' + LineEnding +
  '' + LineEnding +
  '			function generateCoordinates() {' + LineEnding +
  '			     var theta = 0.0;' + LineEnding +
  '			     var phi = 0.0;' + LineEnding +
  '			     var delta = (2 * 3.141592653) / (resolution-1);' + LineEnding +
  '			     var arrIndex = 0;' + LineEnding +
  '			     for (var i = 0; i < resolution; i++) {' + LineEnding +
  '				for (var j = 0; j < resolution; j++) {' + LineEnding +
  '					var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);' + LineEnding +
  '					coordinates[arrIndex++] = new SFVec3f(' + LineEnding +
  '						rho * Math.cos(phi) * Math.cos(theta),' + LineEnding +
  '						rho * Math.cos(phi) * Math.sin(theta),' + LineEnding +
  '						rho * Math.sin(phi)' + LineEnding +
  '					);' + LineEnding +
  '					theta += delta;' + LineEnding +
  '				}' + LineEnding +
  '				phi += delta;' + LineEnding +
  '			     }' + LineEnding +
  '			}');
Layer17.FdChildren.Add(Script60);
{ ROUTE OrbitScript.coordIndexes TO Orbit.set_coordIndex }
Layer17.AddRoute(FieldVal62, IndexedFaceSet56.EventSet_coordIndex);
{ ROUTE OrbitScript.coordinates TO OrbitCoordinates.set_point }
Layer17.AddRoute(FieldVal61, Coordinate57.EventSet_point);
LayerSet16.FdLayers.Add(Layer17);
LayoutLayer72 := TLayoutLayerNode.Create;
LayoutLayer72.Pickable := True;
LayoutLayer72.SetObjectType(['ALL']);
Layout73 := TLayoutNode.Create;
Layout73.SetAlign(['LEFT', 'BOTTOM']);
Layout73.SetOffset([-0.2, 0.19]);
Layout73.SetSize([0.4, 0.6]);
LayoutLayer72.Layout := Layout73;
Viewport74 := TViewportNode.Create;
Viewport74.SetClipBoundary([0, 1, 0, 1]);
LayoutLayer72.Viewport := Viewport74;
Transform75 := TTransformNode.Create;
Transform75.Translation := Vector3(0, 0, -3);
Shape76 := TShapeNode.Create;
Appearance77 := TAppearanceNode.Create;
Material78 := TMaterialNode.Create;
Material78.DiffuseColor := Vector3(0, 0, 0);
Material78.Transparency := 0.7;
Appearance77.Material := Material78;
Shape76.Appearance := Appearance77;
Box79 := TBoxNode.Create;
Box79.Size := Vector3(100, 100, 0.02);
Shape76.Geometry := Box79;
Transform75.FdChildren.Add(Shape76);
LayoutLayer72.FdChildren.Add(Transform75);
Transform80 := TTransformNode.Create;
Transform80.X3DName := 'equationTransform';
end;

procedure InitslidersPart5;
begin
Transform81 := TTransformNode.Create;
Transform81.Translation := Vector3(0, 0, -20);
Shape82 := TShapeNode.Create;
Text83 := TTextNode.Create;
Text83.X3DName := 'equation';
Text83.SetText(['r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)']);
FontStyle84 := TFontStyleNode.Create;
FontStyle84.Size := 0.09;
Text83.FontStyle := FontStyle84;
Shape82.Geometry := Text83;
Appearance85 := TAppearanceNode.Create;
Material86 := TMaterialNode.Create;
Material86.DiffuseColor := Vector3(1, 1, 0);
Appearance85.Material := Material86;
Shape82.Appearance := Appearance85;
Transform81.FdChildren.Add(Shape82);
Transform80.FdChildren.Add(Transform81);
LayoutLayer72.FdChildren.Add(Transform80);
{ The slider parameters }
ProtoDeclare87 := CreateEmptyPrototype('SliderProto');
ProtoDeclare87.X3DName := 'SliderProto';
FieldVal89 := TSFVec3f.Create(nil, True, 'sliderTranslation', Vector3(0, 0, 0));
FieldDecl89 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl89.FieldOrEvent := FieldVal89;
FieldVal89.ParentInterfaceDeclaration := FieldDecl89;
ProtoDeclare87.InterfaceDeclarations.Add(FieldDecl89);
FieldVal90 := TMFString.Create(nil, True, 'textString', (['x=']));
FieldDecl90 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl90.FieldOrEvent := FieldVal90;
FieldVal90.ParentInterfaceDeclaration := FieldDecl90;
ProtoDeclare87.InterfaceDeclarations.Add(FieldDecl90);
FieldVal91 := TSFFloat.Create(nil, True, 'parameterScale', 15);
FieldDecl91 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl91.FieldOrEvent := FieldVal91;
FieldVal91.ParentInterfaceDeclaration := FieldDecl91;
ProtoDeclare87.InterfaceDeclarations.Add(FieldDecl91);
FieldVal92 := TSFString.Create(nil, True, 'parameterName', 'x');
FieldDecl92 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl92.FieldOrEvent := FieldVal92;
FieldVal92.ParentInterfaceDeclaration := FieldDecl92;
end;

procedure InitslidersPart6;
begin
ProtoDeclare87.InterfaceDeclarations.Add(FieldDecl92);
FieldVal93 := TSFNode.CreateUndefined(nil, True, 'orbScript');
FieldDecl93 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl93.FieldOrEvent := FieldVal93;
FieldVal93.ParentInterfaceDeclaration := FieldDecl93;
ProtoDeclare87.InterfaceDeclarations.Add(FieldDecl93);
Group95 := TGroupNode.Create;
Transform96 := TTransformNode.Create;
Transform96.X3DName := 'protoSlider';
Transform96.Translation := Vector3(0, 0.7, 0);
Transform96.FieldOrEvent('translation', True).IsClauseNamesAdd('sliderTranslation');
Transform97 := TTransformNode.Create;
Transform97.X3DName := 'protoTransform';
Transform97.Translation := Vector3(0, 0, 0.1);
PlaneSensor98 := TPlaneSensorNode.Create;
PlaneSensor98.X3DName := 'protoSensor';
PlaneSensor98.Description := 'Grab with mouse to adjust slider';
PlaneSensor98.MaxPosition := Vector2(1, 0);
Transform97.FdChildren.Add(PlaneSensor98);
Transform99 := TTransformNode.Create;
Transform99.Translation := Vector3(0, 0, 0);
TouchSensor100 := TTouchSensorNode.Create;
TouchSensor100.Description := 'Maybe start dragging this?';
TouchSensor100.X3DName := 'protoTS';
Transform99.FdChildren.Add(TouchSensor100);
Transform97.FdChildren.Add(Transform99);
Transform101 := TTransformNode.Create;
Shape102 := TShapeNode.Create;
Text103 := TTextNode.Create;
Text103.X3DName := 'protoText';
Text103.SetText(['a=']);
Text103.FieldOrEvent('string', True).IsClauseNamesAdd('textString');
FontStyle104 := TFontStyleNode.Create;
FontStyle104.Style := fsBold;
FontStyle104.Size := 0.23;
Text103.FontStyle := FontStyle104;
Shape102.Geometry := Text103;
Appearance105 := TAppearanceNode.Create;
Material106 := TMaterialNode.Create;
Appearance105.Material := Material106;
end;

procedure InitslidersPart7;
begin
Shape102.Appearance := Appearance105;
Transform101.FdChildren.Add(Shape102);
Transform97.FdChildren.Add(Transform101);
Transform96.FdChildren.Add(Transform97);
Group95.FdChildren.Add(Transform96);
Script107 := TScriptNode.Create;
Script107.X3DName := 'protoValueTransformerScript';
FieldVal108 := TSFFloat.CreateUndefined(Script107, True, 'protoScale');
Script107.AddCustomFieldOrEvent(FieldVal108);
FieldVal109 := TSFString.CreateUndefined(Script107, True, 'protoParameterName');
Script107.AddCustomFieldOrEvent(FieldVal109);
FieldVal110 := TSFVec3f.CreateEvent(Script107, 'newTranslation', True);
Script107.AddCustomFieldOrEvent(FieldVal110);
FieldVal111 := TSFNode.CreateUndefined(Script107, True, 'protoScript');
Script107.AddCustomFieldOrEvent(FieldVal111);
FieldVal112 := TSFFloat.Create(Script107, True, 'protoValue', 1);
Script107.AddCustomFieldOrEvent(FieldVal112);
FieldVal113 := TMFString.Create(Script107, True, 'protoText', (['1.0']));
Script107.AddCustomFieldOrEvent(FieldVal113);
Script107.FieldOrEvent('protoScale', True).IsClauseNamesAdd('parameterScale');
Script107.FieldOrEvent('protoParameterName', True).IsClauseNamesAdd('parameterName');
Script107.FieldOrEvent('protoScript', True).IsClauseNamesAdd('orbScript');
Script107.SetSourceCode('ecmascript:' + LineEnding +
  'function set_protoScale(value) {' + LineEnding +
  '	protoScale = value;' + LineEnding +
  '}' + LineEnding +
  '' + LineEnding +
  'function set_protoParameterName(value) {' + LineEnding +
  '	protoParameterName = value;' + LineEnding +
  '}' + LineEnding +
  '' + LineEnding +
  'function set_protoScript(value) {' + LineEnding +
  '	protoScript = value;' + LineEnding +
  '}' + LineEnding +
  '' + LineEnding +
  'function set_protoValue(value) {' + LineEnding +
  '	protoValue = value;' + LineEnding +
  '}' + LineEnding +
  '' + LineEnding +
  'function set_protoText(value) {' + LineEnding +
  '	protoText = value;' + LineEnding +
  '}' + LineEnding +
  '' + LineEnding +
  'function newTranslation(value) {' + LineEnding +
  '       	set_protoValue(value.x * protoScale);' + LineEnding +
  '       	set_protoText(new MFString(protoParameterName+''=''+protoValue.toFixed(2)));' + LineEnding +
  '	protoScript[protoParameterName] = protoValue;' + LineEnding +
  '};');
Group95.FdChildren.Add(Script107);
{ ROUTE protoSensor.translation_changed TO protoTransform.set_translation }
Group95.AddRoute(PlaneSensor98.EventTranslation_changed, Transform97.FdTranslation.EventIn);
{ ROUTE protoSensor.translation_changed TO protoValueTransformerScript.newTranslation }
Group95.AddRoute(PlaneSensor98.EventTranslation_changed, FieldVal110);
{ ROUTE protoValueTransformerScript.protoText TO protoText.string }
Group95.AddRoute(FieldVal113, Text103.string);
ProtoDeclare87.Node.AddChildren([Group95]);
X3D0.AddPrototype(ProtoDeclare87);
ProtoInstance117 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare87);
ProtoInstance117.X3DName := 'aPI';
(ProtoInstance117.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, 0.7, 0);
(ProtoInstance117.Field('textString') as TMFString).Send(['a=']);
(ProtoInstance117.Field('parameterScale') as TSFFloat).Value := 30;
(ProtoInstance117.Field('parameterName') as TSFString).Value := 'a';
(ProtoInstance117.Field('orbScript') as TSFNode).Value := Script60;
LayoutLayer72.FdChildren.Add(ProtoInstance117.Instantiate);
end;

procedure InitslidersPart8;
begin
ProtoInstance124 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare87);
ProtoInstance124.X3DName := 'bPI';
(ProtoInstance124.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, 0.4, 0);
(ProtoInstance124.Field('textString') as TMFString).Send(['b=']);
(ProtoInstance124.Field('parameterScale') as TSFFloat).Value := 30;
(ProtoInstance124.Field('parameterName') as TSFString).Value := 'b';
(ProtoInstance124.Field('orbScript') as TSFNode).Value := Script60;
LayoutLayer72.FdChildren.Add(ProtoInstance124.Instantiate);
ProtoInstance131 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare87);
ProtoInstance131.X3DName := 'cPI';
(ProtoInstance131.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, 0.1, 0);
(ProtoInstance131.Field('textString') as TMFString).Send(['c=']);
(ProtoInstance131.Field('parameterScale') as TSFFloat).Value := 20;
(ProtoInstance131.Field('parameterName') as TSFString).Value := 'c';
(ProtoInstance131.Field('orbScript') as TSFNode).Value := Script60;
LayoutLayer72.FdChildren.Add(ProtoInstance131.Instantiate);
ProtoInstance138 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare87);
ProtoInstance138.X3DName := 'dPI';
(ProtoInstance138.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, -0.2, 0);
(ProtoInstance138.Field('textString') as TMFString).Send(['d=']);
(ProtoInstance138.Field('parameterScale') as TSFFloat).Value := 20;
(ProtoInstance138.Field('parameterName') as TSFString).Value := 'd';
(ProtoInstance138.Field('orbScript') as TSFNode).Value := Script60;
LayoutLayer72.FdChildren.Add(ProtoInstance138.Instantiate);
ProtoInstance145 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare87);
ProtoInstance145.X3DName := 'tdeltaPI';
(ProtoInstance145.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, -0.5, 0);
(ProtoInstance145.Field('textString') as TMFString).Send(['tdelta=']);
(ProtoInstance145.Field('parameterScale') as TSFFloat).Value := 6.28;
(ProtoInstance145.Field('parameterName') as TSFString).Value := 'tdelta';
(ProtoInstance145.Field('orbScript') as TSFNode).Value := Script60;
LayoutLayer72.FdChildren.Add(ProtoInstance145.Instantiate);
ProtoInstance152 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare87);
ProtoInstance152.X3DName := 'pdeltaPI';
(ProtoInstance152.Field('sliderTranslation') as TSFVec3f).Value := Vector3(0, -0.8, 0);
(ProtoInstance152.Field('textString') as TMFString).Send(['pdelta=']);
(ProtoInstance152.Field('parameterScale') as TSFFloat).Value := 6.28;
(ProtoInstance152.Field('parameterName') as TSFString).Value := 'pdelta';
(ProtoInstance152.Field('orbScript') as TSFNode).Value := Script60;
LayoutLayer72.FdChildren.Add(ProtoInstance152.Instantiate);
end;

procedure InitslidersPart9;
begin
LayerSet16.FdLayers.Add(LayoutLayer72);
Layer159 := TLayerNode.Create;
Layer159.Pickable := True;
Layer159.SetObjectType(['ALL']);
Viewpoint160 := TViewpointNode.Create;
Viewpoint160.Description := 'My Humanoids';
Viewpoint160.FieldOfView := 1.570796;
Viewpoint160.Position := Vector3(0, 1.75, 80);
Layer159.FdChildren.Add(Viewpoint160);
LayerSet16.FdLayers.Add(Layer159);
Group15.FdChildren.Add(LayerSet16);
X3D0.AddChildren([Group15]);
end;

function Createsliders: TX3DRootNode;
begin
  InitslidersPart0;
  InitslidersPart1;
  InitslidersPart2;
  InitslidersPart3;
  InitslidersPart4;
  InitslidersPart5;
  InitslidersPart6;
  InitslidersPart7;
  InitslidersPart8;
  InitslidersPart9;
  Result := X3D0;
end;

begin
end.
