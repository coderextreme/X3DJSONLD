unit LayerSet;

interface

uses X3DNodes;

function CreateLayerSet: TX3DRootNode;

implementation

uses CastleVectors;

function CreateLayerSet: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group9: TGroupNode;
LayerSet10: TLayerSetNode;
Layer11: TLayerNode;
Background12: TBackgroundNode;
NavigationInfo13: TNavigationInfoNode;
Viewpoint14: TViewpointNode;
Transform15: TTransformNode;
Shape16: TShapeNode;
Appearance17: TAppearanceNode;
Material18: TMaterialNode;
Box19: TBoxNode;
Layer20: TLayerNode;
NavigationInfo21: TNavigationInfoNode;
Viewpoint22: TViewpointNode;
Transform23: TTransformNode;
Shape24: TShapeNode;
Appearance25: TAppearanceNode;
Material26: TMaterialNode;
Text27: TTextNode;
FontStyle28: TFontStyleNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Grouping'] := 1;
X3D0.Components['EnvironmentalSensor'] := 1;
X3D0.Components['Text'] := 1;
X3D0.Meta['title'] := 'LayerSetProximity.x3d';
X3D0.Meta['description'] := 'A ProximitySensor keeps the Text locked in front of the viewer, centered over the Box. Mouse or trackpad navigation rotates the Box; the Text does not rotate.';
X3D0.Meta['created'] := '27 October 2026';
X3D0.Meta['creator'] := 'John Carlson';
Group9 := TGroupNode.Create;
LayerSet10 := TLayerSetNode.Create;
LayerSet10.ActiveLayer := 1;
LayerSet10.SetOrder([1,2]);
{ Layer 0: Base 3D Model }
{ Layer 1: Foreground HUD Layer }
Layer11 := TLayerNode.Create;
Layer11.Pickable := True;
Layer11.SetObjectType(['ALL']);
Background12 := TBackgroundNode.Create;
Background12.SetSkyColor([Vector3(0.1,0.1,0.15)]);
{ .AddChildren }
Layer11.AddChildren([Background12]);
NavigationInfo13 := TNavigationInfoNode.Create;
{ .AddChildren }
Layer11.AddChildren([NavigationInfo13]);
Viewpoint14 := TViewpointNode.Create;
Viewpoint14.Position := Vector3(0,0,8);
Viewpoint14.Description := 'MainVP';
{ .AddChildren }
Layer11.AddChildren([Viewpoint14]);
Transform15 := TTransformNode.Create;
Shape16 := TShapeNode.Create;
Appearance17 := TAppearanceNode.Create;
Material18 := TMaterialNode.Create;
Material18.DiffuseColor := Vector3(0.2,0.7,0.9);
{ .SetMaterial }
Appearance17.Material := Material18;
{ .SetAppearance }
Shape16.Appearance := Appearance17;
Box19 := TBoxNode.Create;
Box19.Size := Vector3(1.5,1.5,1.5);
{ .SetGeometry }
Shape16.Geometry := Box19;
{ .AddChild }
Transform15.AddChildren([Shape16]);
{ .AddChildren }
Layer11.AddChildren([Transform15]);
{ .AddLayers }
LayerSet10.Layers := Layer11;
Layer20 := TLayerNode.Create;
Layer20.Pickable := True;
Layer20.SetObjectType(['ALL']);
NavigationInfo21 := TNavigationInfoNode.Create;
NavigationInfo21.SetType(['NONE']);
{ .AddChildren }
Layer20.AddChildren([NavigationInfo21]);
Viewpoint22 := TViewpointNode.Create;
Viewpoint22.Position := Vector3(0,0,8);
Viewpoint22.Description := 'Layer1VP';
{ .AddChildren }
Layer20.AddChildren([Viewpoint22]);
Transform23 := TTransformNode.Create;
Transform23.Translation := Vector3(0,0,0.8);
Shape24 := TShapeNode.Create;
Appearance25 := TAppearanceNode.Create;
Material26 := TMaterialNode.Create;
Material26.DiffuseColor := Vector3(1,1,1);
Material26.EmissiveColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance25.Material := Material26;
{ .SetAppearance }
Shape24.Appearance := Appearance25;
Text27 := TTextNode.Create;
Text27.SetText(['Layer 1','Overlay Text']);
FontStyle28 := TFontStyleNode.Create;
FontStyle28.Family := ffArial, ffHelvetica, ffSans;
FontStyle28.Spacing := 0.95;
FontStyle28.Justify := fjMiddle;
FontStyle28.JustifyMinor := fjMiddle;
FontStyle28.Size := 0.45;
{ .SetFontStyle }
Text27.FontStyle := FontStyle28;
{ .SetGeometry }
Shape24.Geometry := Text27;
{ .AddChild }
Transform23.AddChildren([Shape24]);
{ .AddChildren }
Layer20.AddChildren([Transform23]);
{ .AddLayers }
LayerSet10.Layers := Layer20;
{ .AddChildren }
Group9.AddChildren([LayerSet10]);
{ .AddGroup }
X3D0.AddChildren([Group9]);
Result := X3D0;
end;

begin
end.
