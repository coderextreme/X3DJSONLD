unit freewrlflowers;

interface

uses X3DNodes;

function Createfreewrlflowers: TX3DRootNode;

implementation

uses CastleVectors;

function Createfreewrlflowers: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Viewpoint9: TViewpointNode;
Background10: TBackgroundNode;
Group11: TGroupNode;
X3DExternalPrototype12: TX3DExternalPrototype;
X3DField13: TX3DField;
X3DField14: TX3DField;
X3DPrototype15: TX3DPrototype;
X3DPrototype16: TX3DPrototype;
Group17: TGroupNode;
X3DPrototype18: TX3DPrototypeNode;
MFString19: TMFString;
MFString20: TMFString;
X3DPrototype21: TX3DPrototypeNode;
X3DPrototype22: TX3DPrototypeNode;
X3DPrototype23: TX3DPrototypeNode;
X3DPrototype24: TX3DPrototypeNode;
X3DPrototype25: TX3DPrototypeNode;
X3DPrototype26: TX3DPrototypeNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'freewrlflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '5 or more prismatic flowers';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/freewrlflowers.x3d';
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
{ .AddChildren }
Group7.AddChildren([NavigationInfo8]);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Tour Views';
Viewpoint9.Position := Vector3(0,0,50);
{ .AddChildren }
Group7.AddChildren([Viewpoint9]);
Background10 := TBackgroundNode.Create;
Background10.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background10.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background10.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background10.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background10.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background10.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group7.AddChildren([Background10]);
Group11 := TGroupNode.Create;
X3DExternalPrototype12 := TX3DExternalPrototype.Create;
X3DExternalPrototype12.NameField := 'FlowerProto';
X3DExternalPrototype12.Url := '\"../data/flowerprotofreewrl.x3d#FlowerProto\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowerprotofreewrl.x3d#FlowerProto\"';
X3DField13 := TX3DField.Create;
X3DField13.NameField := 'vertex';
X3DField13.AccessType := 'inputOutput';
X3DField13.Type := 'MFString';
{ .SetX3DField }
X3DExternalPrototype12.X3DField := X3DField13;
X3DField14 := TX3DField.Create;
X3DField14.NameField := 'fragment';
X3DField14.AccessType := 'inputOutput';
X3DField14.Type := 'MFString';
{ .AddX3DField }
X3DExternalPrototype12.X3DField := X3DField14;
{ .SetX3DExternalPrototype }
Group11.X3DExternalPrototype := X3DExternalPrototype12;
X3DPrototype15 := TX3DPrototype.Create;
X3DPrototype15.NameField := 'flower';
X3DPrototype16 := TX3DPrototype.Create;
Group17 := TGroupNode.Create;
X3DPrototype18 := TX3DPrototypeNode.Create;
X3DPrototype18.NameField := 'FlowerProto';
MFString19 := TMFString.Create(FlowerProto2, false, 'vertex', (['../shaders/freewrl_flowers_chromatic.vs']));
MFString19.NameField := 'vertex';
MFString19.Value := '\"../shaders/freewrl_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype18.MFString := MFString19;
MFString20 := TMFString.Create(FlowerProto2, false, 'fragment', (['../shaders/freewrl.fs']));
MFString20.NameField := 'fragment';
MFString20.Value := '\"../shaders/freewrl.fs\"';
{ .AddMFString }
X3DPrototype18.MFString := MFString20;
{ .SetX3DPrototype }
Group17.X3DPrototype := X3DPrototype18;
{ .SetGroup }
X3DPrototype16.Group := Group17;
{ .SetX3DPrototype }
X3DPrototype15.X3DPrototype := X3DPrototype16;
{ .AddX3DPrototype }
Group11.X3DPrototype := X3DPrototype15;
X3DPrototype21 := TX3DPrototypeNode.Create;
X3DPrototype21.NameField := 'flower';
{ .AddX3DPrototype }
Group11.X3DPrototype := X3DPrototype21;
X3DPrototype22 := TX3DPrototypeNode.Create;
X3DPrototype22.NameField := 'flower';
{ .AddX3DPrototype }
Group11.X3DPrototype := X3DPrototype22;
X3DPrototype23 := TX3DPrototypeNode.Create;
X3DPrototype23.NameField := 'flower';
{ .AddX3DPrototype }
Group11.X3DPrototype := X3DPrototype23;
X3DPrototype24 := TX3DPrototypeNode.Create;
X3DPrototype24.NameField := 'flower';
{ .AddX3DPrototype }
Group11.X3DPrototype := X3DPrototype24;
X3DPrototype25 := TX3DPrototypeNode.Create;
X3DPrototype25.NameField := 'flower';
{ .AddX3DPrototype }
Group11.X3DPrototype := X3DPrototype25;
X3DPrototype26 := TX3DPrototypeNode.Create;
X3DPrototype26.NameField := 'flower';
{ .AddX3DPrototype }
Group11.X3DPrototype := X3DPrototype26;
{ .AddChildren }
Group7.AddChildren([Group11]);
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.
