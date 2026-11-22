unit jumpcut_loadurl;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

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
MFString29: TMFString;
MFString30: TMFString;
SFBool31: TSFBool;

procedure Initjumpcut_loadurlPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'jumpcut_loadurl.x3d';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://www.nist.gov/vrml.html';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://www.itl.nist.gov/div897/ctg/vrml/vrml.html';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'http://www.itl.nist.gov/div897/ctg/vrml/members.html';
{ METHOD .Meta }
X3D0.Meta['disclaimer'] := 'This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.';
{ METHOD .Meta }
X3D0.Meta['info'] := 'Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'Michael Kass NIST, Don Brutzman NPS';
{ METHOD .Meta }
X3D0.Meta['translated'] := '21 January 2001';
{ METHOD .Meta }
X3D0.Meta['modified'] := '20 October 2019';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Test jumpcut Viewpoint transition using Script loadUrl method. A NavigationInfo type of ANY is NOT included in the NavigationInfo node field in this world. Consequently, a Script node with a call to the \"loadURL\" method, with a url corresponding to the MFString \"Top_View\" (the name of a Viewpoint in this world) should create a \"jump cut\" transition of views when the Box geometry in this world is indicated by the pointing device. As a result, indicating the Box geometry should result in a Viewpoint transition to the top view of the Box geometry.';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group16 := TGroupNode.Create;
WorldInfo17 := TWorldInfoNode.Create;
WorldInfo17.Title := 'jumpcut_loadurl.x3d';
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(WorldInfo17);
Background18 := TBackgroundNode.Create;
Background18.SetGroundAngle([1.57]);
Background18.SetGroundColor([Vector3(0,0.5,0),Vector3(0,0.5,0)]);
Background18.SetSkyColor([Vector3(0,0,1)]);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Background18);
NavigationInfo19 := TNavigationInfoNode.Create;
NavigationInfo19.SetType(['EXAMINE','WALK','FLY','ANY']);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(NavigationInfo19);
Viewpoint20 := TViewpointNode.Create;
Viewpoint20.Description := 'Front View';
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Viewpoint20);
Viewpoint21 := TViewpointNode.Create;
Viewpoint21.Description := 'Top View';
Viewpoint21.Orientation := Vector4(1,0,0,-1.57);
Viewpoint21.Position := Vector3(0,10,0);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Viewpoint21);
TouchSensor22 := TTouchSensorNode.Create;
TouchSensor22.Description := 'touch to activate';
end;

procedure Initjumpcut_loadurlPart1;
begin

{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(TouchSensor22);
Transform23 := TTransformNode.Create;
Shape24 := TShapeNode.Create;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
{ METHOD .SetMaterial }
Appearance25.Material := Material26;
{ METHOD .Appearance }
Shape24.Appearance := Appearance25;
Box27 := TBoxNode.Create;
{ METHOD .Geometry }
Shape24.Geometry := Box27;
{ METHOD .FdChildren.Add }
Transform23.FdChildren.Add(Shape24);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Transform23);
Script28 := TScriptNode.Create;
Script28.SetUrl(['jumpcut_loadurl.js','https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js']);
MFString29 := TMFString.CreateUndefined(Script28, false, 'myParameter');
MFString29.Value := '\"Top_View\"';
{ METHOD .Fd.AddCustomField }
Script28.AddCustomField(MFString29);
MFString30 := TMFString.CreateUndefined(Script28, false, 'myUrl');
MFString30.Value := '\"jumpcut_loadurl.x3d#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View\" \"jumpcut_loadurl.wrl#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View\"';
{ METHOD .Fd.AddCustomField }
Script28.AddCustomField(MFString30);
SFBool31 := TSFBool.CreateUndefined(Script28, false, 'trigger_event');
{ METHOD .Fd.AddCustomField }
Script28.AddCustomField(SFBool31);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Script28);
{ Original "STARTER.EventIsActive TO MYSCRIPT.trigger_event }
{ Sample STARTER.EventIsActive TO MYSCRIPT.trigger_event}
Group16.AddRoute(TouchSensor22.EventIsActive, SFBool31);
{ METHOD .AddX3DROUTE }
{ METHOD .AddGroup }
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
