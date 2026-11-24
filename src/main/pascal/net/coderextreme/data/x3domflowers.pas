unit x3domflowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createx3domflowers: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group15: TGroupNode;
NavigationInfo16: TNavigationInfoNode;
Background17: TBackgroundNode;
Group18: TGroupNode;
X3DExternalPrototype19: TX3DExternalPrototype;
MFString20: TMFString;
MFString21: TMFString;
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

procedure Initx3domflowersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
{ METHOD .Component }
X3D0.Components['EnvironmentalEffects'] := 3;
{ METHOD .Component }
X3D0.Components['Shaders'] := 1;
{ METHOD .Component }
X3D0.Components['CubeMapTexturing'] := 1;
{ METHOD .Component }
X3D0.Components['Texturing'] := 1;
{ METHOD .Component }
X3D0.Components['Rendering'] := 1;
{ METHOD .Component }
X3D0.Components['Grouping'] := 3;
{ METHOD .Component }
X3D0.Components['Core'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'x3domflowers.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := '5 or more prismatic flowers';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/x3domflowers.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group15 := TGroupNode.Create;;
NavigationInfo16 := TNavigationInfoNode.Create;;
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(NavigationInfo16);
{ Images courtesy of Paul Debevec's Light Probe Image Gallery }
Background17 := TBackgroundNode.Create;;
Background17.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background17.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background17.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background17.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background17.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background17.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Background17);
Group18 := TGroupNode.Create;;
X3DExternalPrototype19 := TX3DExternalPrototype.Create;;
X3DExternalPrototype19.Url := '\"../data/flowerproto.x3dj#FlowerProto\" \"../data/flowerproto.json#FlowerProto\"';
MFString20 := TMFString.CreateUndefined(X3DExternalPrototype19, false, 'vertex');
{ METHOD .AddMFString }
X3DExternalPrototype19.AddMFString([MFString20]);
MFString21 := TMFString.CreateUndefined(X3DExternalPrototype19, false, 'fragment');
{ METHOD .AddMFString }
X3DExternalPrototype19.AddMFString([MFString21]);
end;

procedure Initx3domflowersPart1;
begin

{ METHOD .AddX3DExternalPrototype }
Group18.AddX3DExternalPrototype([X3DExternalPrototype19]);
X3DPrototype22 := TX3DPrototype.Create;;
X3DPrototype23 := TX3DPrototype.Create;;
Group24 := TGroupNode.Create;;
X3DPrototype25 := TX3DPrototypeNode;
MFString26 := TMFString.CreateUndefined(X3DPrototype25, false, 'vertex');
MFString26.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype25.AddMFString([MFString26]);
MFString27 := TMFString.CreateUndefined(X3DPrototype25, false, 'fragment');
MFString27.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype25.AddMFString([MFString27]);
{ METHOD .AddX3DPrototype }
Group24.AddX3DPrototype([X3DPrototype25]);
{ METHOD .AddGroup }
X3DPrototype23.AddChildren([Group24]);
{ METHOD .AddX3DPrototype }
X3DPrototype22.AddX3DPrototype([X3DPrototype23]);
{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype22]);
X3DPrototype28 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype28]);
X3DPrototype29 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype29]);
X3DPrototype30 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype30]);
X3DPrototype31 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype31]);
X3DPrototype32 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype32]);
X3DPrototype33 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group18.AddX3DPrototype([X3DPrototype33]);
{ METHOD .FdChildren.Add }
Group15.FdChildren.Add(Group18);
{ METHOD .AddGroup }
X3D0.AddChildren([Group15]);
end;

function Createx3domflowers: TX3DRootNode;
begin
Initx3domflowersPart0;
Initx3domflowersPart1;
Result := X3D0;
end;

begin
end.
