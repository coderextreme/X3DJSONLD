unit sphereflowers;

interface

uses X3DNodes;

function Createsphereflowers: TX3DRootNode;

implementation

uses CastleVectors;

function Createsphereflowers: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group17: TGroupNode;
NavigationInfo18: TNavigationInfoNode;
Background19: TBackgroundNode;
Group20: TGroupNode;
X3DExternalPrototype21: TX3DExternalPrototype;
X3DField22: TX3DField;
X3DField23: TX3DField;
X3DPrototype24: TX3DPrototype;
X3DPrototype25: TX3DPrototype;
Group26: TGroupNode;
X3DPrototype27: TX3DPrototypeNode;
MFString28: TMFString;
MFString29: TMFString;
X3DPrototype30: TX3DPrototypeNode;
X3DPrototype31: TX3DPrototypeNode;
X3DPrototype32: TX3DPrototypeNode;
X3DPrototype33: TX3DPrototypeNode;
X3DPrototype34: TX3DPrototypeNode;
X3DPrototype35: TX3DPrototypeNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'sphereflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['created'] := 'Jan 17 2022';
X3D0.Meta['modified'] := 'Sep 3 2023';
X3D0.Meta['description'] := '5 or more prismatic flowers';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/sphereflowers.x3d';
Group17 := TGroupNode.Create;
NavigationInfo18 := TNavigationInfoNode.Create;
{ .AddChildren }
Group17.AddChildren([NavigationInfo18]);
Background19 := TBackgroundNode.Create;
Background19.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group17.AddChildren([Background19]);
Group20 := TGroupNode.Create;
X3DExternalPrototype21 := TX3DExternalPrototype.Create;
X3DExternalPrototype21.NameField := 'FlowerProto';
X3DExternalPrototype21.Url := '\"../data/flowerproto.x3d#FlowerProto\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d#FlowerProto\"';
X3DField22 := TX3DField.Create;
X3DField22.NameField := 'vertex';
X3DField22.AccessType := 'inputOutput';
X3DField22.Type := 'MFString';
{ .SetX3DField }
X3DExternalPrototype21.X3DField := X3DField22;
X3DField23 := TX3DField.Create;
X3DField23.NameField := 'fragment';
X3DField23.AccessType := 'inputOutput';
X3DField23.Type := 'MFString';
{ .AddX3DField }
X3DExternalPrototype21.X3DField := X3DField23;
{ .SetX3DExternalPrototype }
Group20.X3DExternalPrototype := X3DExternalPrototype21;
X3DPrototype24 := TX3DPrototype.Create;
X3DPrototype24.NameField := 'flower';
X3DPrototype25 := TX3DPrototype.Create;
Group26 := TGroupNode.Create;
X3DPrototype27 := TX3DPrototypeNode.Create;
X3DPrototype27.NameField := 'FlowerProto';
MFString28 := TMFString.Create(FlowerProto2, false, 'vertex', (['../shaders/x_ite_flowers_chromatic.vs']));
MFString28.NameField := 'vertex';
MFString28.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype27.MFString := MFString28;
MFString29 := TMFString.Create(FlowerProto2, false, 'fragment', (['../shaders/x_ite.fs']));
MFString29.NameField := 'fragment';
MFString29.Value := '\"../shaders/x_ite.fs\"';
{ .AddMFString }
X3DPrototype27.MFString := MFString29;
{ .SetX3DPrototype }
Group26.X3DPrototype := X3DPrototype27;
{ .SetGroup }
X3DPrototype25.Group := Group26;
{ .SetX3DPrototype }
X3DPrototype24.X3DPrototype := X3DPrototype25;
{ .AddX3DPrototype }
Group20.X3DPrototype := X3DPrototype24;
X3DPrototype30 := TX3DPrototypeNode.Create;
X3DPrototype30.NameField := 'flower';
{ .AddX3DPrototype }
Group20.X3DPrototype := X3DPrototype30;
X3DPrototype31 := TX3DPrototypeNode.Create;
X3DPrototype31.NameField := 'flower';
{ .AddX3DPrototype }
Group20.X3DPrototype := X3DPrototype31;
X3DPrototype32 := TX3DPrototypeNode.Create;
X3DPrototype32.NameField := 'flower';
{ .AddX3DPrototype }
Group20.X3DPrototype := X3DPrototype32;
X3DPrototype33 := TX3DPrototypeNode.Create;
X3DPrototype33.NameField := 'flower';
{ .AddX3DPrototype }
Group20.X3DPrototype := X3DPrototype33;
X3DPrototype34 := TX3DPrototypeNode.Create;
X3DPrototype34.NameField := 'flower';
{ .AddX3DPrototype }
Group20.X3DPrototype := X3DPrototype34;
X3DPrototype35 := TX3DPrototypeNode.Create;
X3DPrototype35.NameField := 'flower';
{ .AddX3DPrototype }
Group20.X3DPrototype := X3DPrototype35;
{ .AddChildren }
Group17.AddChildren([Group20]);
{ .AddGroup }
X3D0.AddChildren([Group17]);
Result := X3D0;
end;

begin
end.
