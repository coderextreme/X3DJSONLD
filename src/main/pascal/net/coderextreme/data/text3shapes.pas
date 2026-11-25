unit text3shapes;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createtext3shapes: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group8: TGroupNode;
  Transform9: TTransformNode;
  Shape10: TShapeNode;
  Text11: TTextNode;
  FontStyle12: TFontStyleNode;
  Appearance13: TAppearanceNode;
  Material14: TMaterialNode;
  Shape15: TShapeNode;
  Text16: TTextNode;
  FontStyle17: TFontStyleNode;
  Appearance18: TAppearanceNode;
  Material19: TMaterialNode;
  Shape20: TShapeNode;
  Text21: TTextNode;
  FontStyle22: TFontStyleNode;
  Appearance23: TAppearanceNode;
  Material24: TMaterialNode;
  Script25: TScriptNode;
  FieldVal26: TMFString;

procedure Inittext3shapesPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['creator'] := 'John W Carlson';
X3D0.Meta['created'] := 'December 13 2015';
X3D0.Meta['title'] := 'text3shapes.x3d';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/text3shapes.x3d';
X3D0.Meta['description'] := '3 text shapes';
X3D0.Meta['generator'] := 'Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit';
Group8 := TGroupNode.Create;
Transform9 := TTransformNode.Create;
Shape10 := TShapeNode.Create;
Text11 := TTextNode.Create;
Text11.SetText(['Node"""']);
FontStyle12 := TFontStyleNode.Create;
Text11.FontStyle := FontStyle12;
Shape10.Geometry := Text11;
Appearance13 := TAppearanceNode.Create;
Material14 := TMaterialNode.Create;
Appearance13.Material := Material14;
Shape10.Appearance := Appearance13;
Transform9.FdChildren.Add(Shape10);
Shape15 := TShapeNode.Create;
Text16 := TTextNode.Create;
Text16.SetText(['Node2', '\\\Node2']);
FontStyle17 := TFontStyleNode.Create;
Text16.FontStyle := FontStyle17;
Shape15.Geometry := Text16;
Appearance18 := TAppearanceNode.Create;
Material19 := TMaterialNode.Create;
Appearance18.Material := Material19;
Shape15.Appearance := Appearance18;
Transform9.FdChildren.Add(Shape15);
Shape20 := TShapeNode.Create;
Text21 := TTextNode.Create;
Text21.SetText(['Node3 \\ \ Node3"""']);
FontStyle22 := TFontStyleNode.Create;
Text21.FontStyle := FontStyle22;
Shape20.Geometry := Text21;
end;

procedure Inittext3shapesPart1;
begin
Appearance23 := TAppearanceNode.Create;
Material24 := TMaterialNode.Create;
Appearance23.Material := Material24;
Shape20.Appearance := Appearance23;
Transform9.FdChildren.Add(Shape20);
Script25 := TScriptNode.Create;
FieldVal26 := TMFString.Create(Script25, False, 'frontUrls', (['rnl_front.png', 'uffizi_front.png']));
Script25.AddCustomFieldOrEvent(FieldVal26);
Script25.SetSourceCode('ecmascript:' + LineEnding +
  '			    var me = ''"1" ""2" "\n3"'';');
Transform9.FdChildren.Add(Script25);
Group8.FdChildren.Add(Transform9);
X3D0.AddChildren([Group8]);
end;

function Createtext3shapes: TX3DRootNode;
begin
  Inittext3shapesPart0;
  Inittext3shapesPart1;
  Result := X3D0;
end;

begin
end.
