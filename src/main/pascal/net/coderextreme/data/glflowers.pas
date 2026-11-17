unit glflowers;

interface

uses X3DNodes;

function Createglflowers: TX3DRootNode;

implementation

uses CastleVectors;

function Createglflowers: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Background9: TBackgroundNode;
Group10: TGroupNode;
X3DExternalPrototype11: TX3DExternalPrototype;
X3DField12: TX3DField;
X3DField13: TX3DField;
X3DPrototype14: TX3DPrototype;
X3DPrototype15: TX3DPrototype;
Group16: TGroupNode;
X3DPrototype17: TX3DPrototypeNode;
MFString18: TMFString;
MFString19: TMFString;
X3DPrototype20: TX3DPrototypeNode;
X3DPrototype21: TX3DPrototypeNode;
X3DPrototype22: TX3DPrototypeNode;
X3DPrototype23: TX3DPrototypeNode;
X3DPrototype24: TX3DPrototypeNode;
X3DPrototype25: TX3DPrototypeNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'glflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '5 or more prismatic flowers';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/glflowers.x3d';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
{ .AddChildren }
Group7.AddChildren([NavigationInfo8]);
Background9 := TBackgroundNode.Create;
Background9.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background9.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background9.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background9.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background9.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background9.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group7.AddChildren([Background9]);
Group10 := TGroupNode.Create;
X3DExternalPrototype11 := TX3DExternalPrototype.Create;
X3DExternalPrototype11.NameField := 'FlowerProto';
X3DExternalPrototype11.Url := '\"../data/flowerproto.x3d#FlowerProto\"';
X3DField12 := TX3DField.Create;
X3DField12.NameField := 'vertex';
X3DField12.AccessType := 'inputOutput';
X3DField12.Type := 'MFString';
{ .SetX3DField }
X3DExternalPrototype11.X3DField := X3DField12;
X3DField13 := TX3DField.Create;
X3DField13.NameField := 'fragment';
X3DField13.AccessType := 'inputOutput';
X3DField13.Type := 'MFString';
{ .AddX3DField }
X3DExternalPrototype11.X3DField := X3DField13;
{ .SetX3DExternalPrototype }
Group10.X3DExternalPrototype := X3DExternalPrototype11;
X3DPrototype14 := TX3DPrototype.Create;
X3DPrototype14.NameField := 'flower';
X3DPrototype15 := TX3DPrototype.Create;
Group16 := TGroupNode.Create;
X3DPrototype17 := TX3DPrototypeNode.Create;
X3DPrototype17.NameField := 'FlowerProto';
MFString18 := TMFString.Create(FlowerProto2, false, 'vertex', (['../shaders/gl_flowers_chromatic.vs']));
MFString18.NameField := 'vertex';
MFString18.Value := '\"../shaders/gl_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype17.MFString := MFString18;
MFString19 := TMFString.Create(FlowerProto2, false, 'fragment', (['../shaders/common.fs']));
MFString19.NameField := 'fragment';
MFString19.Value := '\"../shaders/common.fs\"';
{ .AddMFString }
X3DPrototype17.MFString := MFString19;
{ .SetX3DPrototype }
Group16.X3DPrototype := X3DPrototype17;
{ .SetGroup }
X3DPrototype15.Group := Group16;
{ .SetX3DPrototype }
X3DPrototype14.X3DPrototype := X3DPrototype15;
{ .AddX3DPrototype }
Group10.X3DPrototype := X3DPrototype14;
X3DPrototype20 := TX3DPrototypeNode.Create;
X3DPrototype20.NameField := 'flower';
{ .AddX3DPrototype }
Group10.X3DPrototype := X3DPrototype20;
X3DPrototype21 := TX3DPrototypeNode.Create;
X3DPrototype21.NameField := 'flower';
{ .AddX3DPrototype }
Group10.X3DPrototype := X3DPrototype21;
X3DPrototype22 := TX3DPrototypeNode.Create;
X3DPrototype22.NameField := 'flower';
{ .AddX3DPrototype }
Group10.X3DPrototype := X3DPrototype22;
X3DPrototype23 := TX3DPrototypeNode.Create;
X3DPrototype23.NameField := 'flower';
{ .AddX3DPrototype }
Group10.X3DPrototype := X3DPrototype23;
X3DPrototype24 := TX3DPrototypeNode.Create;
X3DPrototype24.NameField := 'flower';
{ .AddX3DPrototype }
Group10.X3DPrototype := X3DPrototype24;
X3DPrototype25 := TX3DPrototypeNode.Create;
X3DPrototype25.NameField := 'flower';
{ .AddX3DPrototype }
Group10.X3DPrototype := X3DPrototype25;
{ .AddChildren }
Group7.AddChildren([Group10]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.
