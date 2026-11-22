unit glflowers;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createglflowers: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Background9: TBackgroundNode;
Group10: TGroupNode;
X3DExternalPrototype11: TX3DExternalPrototype;
MFString12: TMFString;
MFString13: TMFString;
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

procedure InitglflowersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'glflowers.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := '5 or more prismatic flowers';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/glflowers.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(NavigationInfo8);
Background9 := TBackgroundNode.Create;
Background9.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background9.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background9.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background9.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background9.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background9.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Background9);
Group10 := TGroupNode.Create;
X3DExternalPrototype11 := TX3DExternalPrototype.Create;
X3DExternalPrototype11.Url := '\"../data/flowerproto.x3d#FlowerProto\"';
MFString12 := TMFString.CreateUndefined(X3DExternalPrototype11, false, 'vertex');
{ METHOD .AddMFString }
X3DExternalPrototype11.AddMFString([MFString12]);
MFString13 := TMFString.CreateUndefined(X3DExternalPrototype11, false, 'fragment');
{ METHOD .AddMFString }
X3DExternalPrototype11.AddMFString([MFString13]);
{ METHOD .AddX3DExternalPrototype }
Group10.AddX3DExternalPrototype([X3DExternalPrototype11]);
X3DPrototype14 := TX3DPrototype.Create;
X3DPrototype15 := TX3DPrototype.Create;
Group16 := TGroupNode.Create;
X3DPrototype17 := TX3DPrototypeNode.Create;
MFString18 := TMFString.CreateUndefined(X3DPrototype17, false, 'vertex');
MFString18.Value := '\"../shaders/gl_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype17.AddMFString([MFString18]);
MFString19 := TMFString.CreateUndefined(X3DPrototype17, false, 'fragment');
MFString19.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype17.AddMFString([MFString19]);
{ METHOD .AddX3DPrototype }
Group16.AddX3DPrototype([X3DPrototype17]);
{ METHOD .AddGroup }
X3DPrototype15.AddChildren([Group16]);
end;

procedure InitglflowersPart1;
begin

{ METHOD .AddX3DPrototype }
X3DPrototype14.AddX3DPrototype([X3DPrototype15]);
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype14]);
X3DPrototype20 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype20]);
X3DPrototype21 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype21]);
X3DPrototype22 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype22]);
X3DPrototype23 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype23]);
X3DPrototype24 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype24]);
X3DPrototype25 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype25]);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Group10);
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createglflowers: TX3DRootNode;
begin
InitglflowersPart0;
InitglflowersPart1;
Result := X3D0;
end;

begin
end.
