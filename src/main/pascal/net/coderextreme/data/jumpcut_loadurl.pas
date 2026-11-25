unit jumpcut_loadurl;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createjumpcut_loadurl: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group16: TGroupNode;
  WorldInfo17: TWorldInfoNode;
  Background18: TBackgroundNode;
  NavigationInfo19: TNavigationInfoNode;
  Viewpoint20: TViewpointNode;
  Viewpoint21: TViewpointNode;
  TouchSensor22: TTouchSensorNode;
  Transform23: TTransformNode;
  Shape24: TShapeNode;
  Appearance25: TAppearanceNode;
  Material26: TMaterialNode;
  Box27: TBoxNode;
  Script28: TScriptNode;
  FieldVal29: TMFString;
  FieldVal30: TMFString;
  FieldVal31: TX3DEvent;

procedure Initjumpcut_loadurlPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'jumpcut_loadurl.x3d';
X3D0.Meta['reference'] := 'http://www.nist.gov/vrml.html';
X3D0.Meta['reference'] := 'http://www.itl.nist.gov/div897/ctg/vrml/vrml.html';
X3D0.Meta['creator'] := 'http://www.itl.nist.gov/div897/ctg/vrml/members.html';
X3D0.Meta['disclaimer'] := 'This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.';
X3D0.Meta['info'] := 'Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d';
X3D0.Meta['translator'] := 'Michael Kass NIST, Don Brutzman NPS';
X3D0.Meta['translated'] := '21 January 2001';
X3D0.Meta['modified'] := '20 October 2019';
X3D0.Meta['description'] := 'Test jumpcut Viewpoint transition using Script loadUrl method. A NavigationInfo type of ANY is NOT included in the NavigationInfo node field in this world. Consequently, a Script node with a call to the "loadURL" method, with a url corresponding to the MFString "Top_View" (the name of a Viewpoint in this world) should create a "jump cut" transition of views when the Box geometry in this world is indicated by the pointing device. As a result, indicating the Box geometry should result in a Viewpoint transition to the top view of the Box geometry.';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d';
X3D0.Meta['generator'] := 'Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../../license.html';
Group16 := TGroupNode.Create;
WorldInfo17 := TWorldInfoNode.Create;
WorldInfo17.Title := 'jumpcut_loadurl.x3d';
Group16.FdChildren.Add(WorldInfo17);
Background18 := TBackgroundNode.Create;
Background18.SetGroundAngle([1.57]);
Background18.SetGroundColor([Vector3(0, 0.5, 0), Vector3(0, 0.5, 0)]);
Background18.SetSkyColor([Vector3(0, 0, 1)]);
Group16.FdChildren.Add(Background18);
NavigationInfo19 := TNavigationInfoNode.Create;
NavigationInfo19.SetType(['EXAMINE', 'WALK', 'FLY', 'ANY']);
Group16.FdChildren.Add(NavigationInfo19);
Viewpoint20 := TViewpointNode.Create;
Viewpoint20.X3DName := 'Front_View';
Viewpoint20.Description := 'Front View';
Group16.FdChildren.Add(Viewpoint20);
Viewpoint21 := TViewpointNode.Create;
Viewpoint21.X3DName := 'Top_View';
Viewpoint21.Description := 'Top View';
Viewpoint21.Orientation := Vector4(1, 0, 0, -1.57);
Viewpoint21.Position := Vector3(0, 10, 0);
Group16.FdChildren.Add(Viewpoint21);
end;

procedure Initjumpcut_loadurlPart1;
begin
TouchSensor22 := TTouchSensorNode.Create;
TouchSensor22.X3DName := 'STARTER';
TouchSensor22.Description := 'touch to activate';
Group16.FdChildren.Add(TouchSensor22);
Transform23 := TTransformNode.Create;
Transform23.X3DName := 'ROOT';
Shape24 := TShapeNode.Create;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Appearance25.Material := Material26;
Shape24.Appearance := Appearance25;
Box27 := TBoxNode.Create;
Shape24.Geometry := Box27;
Transform23.FdChildren.Add(Shape24);
Group16.FdChildren.Add(Transform23);
Script28 := TScriptNode.Create;
Script28.X3DName := 'MYSCRIPT';
Script28.SetUrl(['jumpcut_loadurl.js', 'https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js']);
FieldVal29 := TMFString.Create(Script28, False, 'myParameter', (['Top_View']));
Script28.AddCustomFieldOrEvent(FieldVal29);
FieldVal30 := TMFString.Create(Script28, False, 'myUrl', (['jumpcut_loadurl.x3d#Top_View', 'https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View', 'jumpcut_loadurl.wrl#Top_View', 'https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View']));
Script28.AddCustomFieldOrEvent(FieldVal30);
FieldVal31 := TSFBool.CreateEvent(Script28, 'trigger_event', True);
Script28.AddCustomFieldOrEvent(FieldVal31);
Group16.FdChildren.Add(Script28);
{ ROUTE STARTER.isActive TO MYSCRIPT.trigger_event }
Group16.AddRoute(TouchSensor22.EventIsActive, FieldVal31);
X3D0.AddChildren([Group16]);
end;

function Createjumpcut_loadurl: TX3DRootNode;
begin
  Initjumpcut_loadurlPart0;
  Initjumpcut_loadurlPart1;
  Result := X3D0;
end;

begin
end.
