unit x3domflowers;

interface

uses X3DNodes;

function Createx3domflowers: TX3DRootNode;

implementation

uses CastleVectors;

function Createx3domflowers: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group15: TGroupNode;
NavigationInfo16: TNavigationInfoNode;
Background17: TBackgroundNode;
Group18: TGroupNode;
X3DExternalPrototype19: TX3DExternalPrototype;
X3DField20: TX3DField;
X3DField21: TX3DField;
X3DPrototype22: TX3DPrototype;
X3DPrototype23: TX3DPrototype;
Group24: TGroupNode;
X3DPrototype25: TX3DPrototypeNode;
MFString26: TMFString;
MFString27: TMFString;
X3DPrototype28: TX3DPrototypeNode;
X3DPrototype29: TX3DPrototypeNode;
X3DPrototype30: TX3DPrototypeNode;
X3DPrototype31: TX3DPrototypeNode;
X3DPrototype32: TX3DPrototypeNode;
X3DPrototype33: TX3DPrototypeNode;
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
X3D0.Meta['title'] := 'x3domflowers.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := '5 or more prismatic flowers';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/x3domflowers.x3d';
Group15 := TGroupNode.Create;
NavigationInfo16 := TNavigationInfoNode.Create;
{ .AddChildren }
Group15.AddChildren([NavigationInfo16]);
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background17 := TBackgroundNode.Create;
Background17.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background17.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background17.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background17.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background17.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background17.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ .AddChildren }
Group15.AddChildren([Background17]);
Group18 := TGroupNode.Create;
X3DExternalPrototype19 := TX3DExternalPrototype.Create;
X3DExternalPrototype19.NameField := 'FlowerProto';
X3DExternalPrototype19.Url := '\"../data/flowerproto.x3dj#FlowerProto\" \"../data/flowerproto.json#FlowerProto\"';
X3DField20 := TX3DField.Create;
X3DField20.NameField := 'vertex';
X3DField20.AccessType := 'inputOutput';
X3DField20.Type := 'MFString';
{ .SetX3DField }
X3DExternalPrototype19.X3DField := X3DField20;
X3DField21 := TX3DField.Create;
X3DField21.NameField := 'fragment';
X3DField21.AccessType := 'inputOutput';
X3DField21.Type := 'MFString';
{ .AddX3DField }
X3DExternalPrototype19.X3DField := X3DField21;
{ .SetX3DExternalPrototype }
Group18.X3DExternalPrototype := X3DExternalPrototype19;
X3DPrototype22 := TX3DPrototype.Create;
X3DPrototype22.NameField := 'flower';
X3DPrototype23 := TX3DPrototype.Create;
Group24 := TGroupNode.Create;
X3DPrototype25 := TX3DPrototypeNode.Create;
X3DPrototype25.NameField := 'FlowerProto';
MFString26 := TMFString.Create(FlowerProto2, false, 'vertex', (['../shaders/x3dom_flowers_chromatic.vs']));
MFString26.NameField := 'vertex';
MFString26.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ .SetMFString }
X3DPrototype25.MFString := MFString26;
MFString27 := TMFString.Create(FlowerProto2, false, 'fragment', (['../shaders/common.fs']));
MFString27.NameField := 'fragment';
MFString27.Value := '\"../shaders/common.fs\"';
{ .AddMFString }
X3DPrototype25.MFString := MFString27;
{ .SetX3DPrototype }
Group24.X3DPrototype := X3DPrototype25;
{ .SetGroup }
X3DPrototype23.Group := Group24;
{ .SetX3DPrototype }
X3DPrototype22.X3DPrototype := X3DPrototype23;
{ .AddX3DPrototype }
Group18.X3DPrototype := X3DPrototype22;
X3DPrototype28 := TX3DPrototypeNode.Create;
X3DPrototype28.NameField := 'flower';
{ .AddX3DPrototype }
Group18.X3DPrototype := X3DPrototype28;
X3DPrototype29 := TX3DPrototypeNode.Create;
X3DPrototype29.NameField := 'flower';
{ .AddX3DPrototype }
Group18.X3DPrototype := X3DPrototype29;
X3DPrototype30 := TX3DPrototypeNode.Create;
X3DPrototype30.NameField := 'flower';
{ .AddX3DPrototype }
Group18.X3DPrototype := X3DPrototype30;
X3DPrototype31 := TX3DPrototypeNode.Create;
X3DPrototype31.NameField := 'flower';
{ .AddX3DPrototype }
Group18.X3DPrototype := X3DPrototype31;
X3DPrototype32 := TX3DPrototypeNode.Create;
X3DPrototype32.NameField := 'flower';
{ .AddX3DPrototype }
Group18.X3DPrototype := X3DPrototype32;
X3DPrototype33 := TX3DPrototypeNode.Create;
X3DPrototype33.NameField := 'flower';
{ .AddX3DPrototype }
Group18.X3DPrototype := X3DPrototype33;
{ .AddChildren }
Group15.AddChildren([Group18]);
{ .AddGroup }
X3D0.AddChildren([Group15]);
Result := X3D0;
end;

begin
end.
