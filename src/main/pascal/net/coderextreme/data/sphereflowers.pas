unit sphereflowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createsphereflowers: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group17: TGroupNode;
NavigationInfo18: TNavigationInfoNode;
Background19: TBackgroundNode;
Group20: TGroupNode;
X3DExternalPrototype21: TX3DExternalPrototype;
MFString22: TMFString;
MFString23: TMFString;
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

procedure InitsphereflowersPart0;
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
X3D0.Meta['title'] := 'sphereflowers.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['created'] := 'Jan 17 2022';
{ METHOD .Meta }
X3D0.Meta['modified'] := 'Sep 3 2023';
{ METHOD .Meta }
X3D0.Meta['description'] := '5 or more prismatic flowers';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/sphereflowers.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group17 := TGroupNode.Create;;
NavigationInfo18 := TNavigationInfoNode.Create;;
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(NavigationInfo18);
Background19 := TBackgroundNode.Create;;
Background19.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background19.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background19.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background19.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background19.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background19.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Background19);
Group20 := TGroupNode.Create;;
X3DExternalPrototype21 := TX3DExternalPrototype.Create;;
X3DExternalPrototype21.Url := '\"../data/flowerproto.x3d#FlowerProto\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d#FlowerProto\"';
MFString22 := TMFString.CreateUndefined(X3DExternalPrototype21, false, 'vertex');
{ METHOD .AddMFString }
X3DExternalPrototype21.AddMFString([MFString22]);
end;

procedure InitsphereflowersPart1;
begin

MFString23 := TMFString.CreateUndefined(X3DExternalPrototype21, false, 'fragment');
{ METHOD .AddMFString }
X3DExternalPrototype21.AddMFString([MFString23]);
{ METHOD .AddX3DExternalPrototype }
Group20.AddX3DExternalPrototype([X3DExternalPrototype21]);
X3DPrototype24 := TX3DPrototype.Create;;
X3DPrototype25 := TX3DPrototype.Create;;
Group26 := TGroupNode.Create;;
X3DPrototype27 := TX3DPrototypeNode;
MFString28 := TMFString.CreateUndefined(X3DPrototype27, false, 'vertex');
MFString28.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype27.AddMFString([MFString28]);
MFString29 := TMFString.CreateUndefined(X3DPrototype27, false, 'fragment');
MFString29.Value := '\"../shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DPrototype27.AddMFString([MFString29]);
{ METHOD .AddX3DPrototype }
Group26.AddX3DPrototype([X3DPrototype27]);
{ METHOD .AddGroup }
X3DPrototype25.AddChildren([Group26]);
{ METHOD .AddX3DPrototype }
X3DPrototype24.AddX3DPrototype([X3DPrototype25]);
{ METHOD .AddX3DPrototype }
Group20.AddX3DPrototype([X3DPrototype24]);
X3DPrototype30 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group20.AddX3DPrototype([X3DPrototype30]);
X3DPrototype31 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group20.AddX3DPrototype([X3DPrototype31]);
X3DPrototype32 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group20.AddX3DPrototype([X3DPrototype32]);
X3DPrototype33 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group20.AddX3DPrototype([X3DPrototype33]);
X3DPrototype34 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group20.AddX3DPrototype([X3DPrototype34]);
X3DPrototype35 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Group20.AddX3DPrototype([X3DPrototype35]);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Group20);
{ METHOD .AddGroup }
X3D0.AddChildren([Group17]);
end;

function Createsphereflowers: TX3DRootNode;
begin
InitsphereflowersPart0;
InitsphereflowersPart1;
Result := X3D0;
end;

begin
end.
