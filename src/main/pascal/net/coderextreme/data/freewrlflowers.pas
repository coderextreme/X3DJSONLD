unit freewrlflowers;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createfreewrlflowers: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Viewpoint9: TViewpointNode;
Background10: TBackgroundNode;
Group11: TGroupNode;
X3DExternalPrototype12: TX3DExternalPrototype;
MFString13: TMFString;
MFString14: TMFString;
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

procedure InitfreewrlflowersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'freewrlflowers.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := '5 or more prismatic flowers';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/freewrlflowers.x3d';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;
NavigationInfo8 := TNavigationInfoNode.Create;
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(NavigationInfo8);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Tour Views';
Viewpoint9.Position := Vector3(0,0,50);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Viewpoint9);
Background10 := TBackgroundNode.Create;
Background10.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background10.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background10.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background10.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background10.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background10.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Background10);
Group11 := TGroupNode.Create;
X3DExternalPrototype12 := TX3DExternalPrototype.Create;
X3DExternalPrototype12.Url := '\"../data/flowerprotofreewrl.x3d#FlowerProto\" \"https://coderextreme.net/X3DJSONLD/src/main/data/flowerprotofreewrl.x3d#FlowerProto\"';
MFString13 := TMFString.CreateUndefined(X3DExternalPrototype12, false, 'vertex');
{ METHOD .AddMFString }
X3DExternalPrototype12.AddMFString([MFString13]);
MFString14 := TMFString.CreateUndefined(X3DExternalPrototype12, false, 'fragment');
{ METHOD .AddMFString }
X3DExternalPrototype12.AddMFString([MFString14]);
{ METHOD .AddX3DExternalPrototype }
Group11.AddX3DExternalPrototype([X3DExternalPrototype12]);
X3DPrototype15 := TX3DPrototype.Create;
X3DPrototype16 := TX3DPrototype.Create;
Group17 := TGroupNode.Create;
X3DPrototype18 := TX3DPrototypeNode.Create;
MFString19 := TMFString.CreateUndefined(X3DPrototype18, false, 'vertex');
MFString19.Value := '\"../shaders/freewrl_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype18.AddMFString([MFString19]);
MFString20 := TMFString.CreateUndefined(X3DPrototype18, false, 'fragment');
end;

procedure InitfreewrlflowersPart1;
begin

MFString20.Value := '\"../shaders/freewrl.fs\"';
{ METHOD .AddMFString }
X3DPrototype18.AddMFString([MFString20]);
{ METHOD .AddX3DPrototype }
Group17.AddX3DPrototype([X3DPrototype18]);
{ METHOD .AddGroup }
X3DPrototype16.AddChildren([Group17]);
{ METHOD .AddX3DPrototype }
X3DPrototype15.AddX3DPrototype([X3DPrototype16]);
{ METHOD .AddX3DPrototype }
Group11.AddX3DPrototype([X3DPrototype15]);
X3DPrototype21 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group11.AddX3DPrototype([X3DPrototype21]);
X3DPrototype22 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group11.AddX3DPrototype([X3DPrototype22]);
X3DPrototype23 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group11.AddX3DPrototype([X3DPrototype23]);
X3DPrototype24 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group11.AddX3DPrototype([X3DPrototype24]);
X3DPrototype25 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group11.AddX3DPrototype([X3DPrototype25]);
X3DPrototype26 := TX3DPrototypeNode.Create;
{ METHOD .AddX3DPrototype }
Group11.AddX3DPrototype([X3DPrototype26]);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Group11);
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function Createfreewrlflowers: TX3DRootNode;
begin
InitfreewrlflowersPart0;
InitfreewrlflowersPart1;
Result := X3D0;
end;

begin
end.
