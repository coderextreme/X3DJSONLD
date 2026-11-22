unit HelloWorldCommented;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateHelloWorldCommented: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group14: TGroupNode;
WorldInfo15: TWorldInfoNode;
Group16: TGroupNode;
Viewpoint17: TViewpointNode;
Transform18: TTransformNode;
Shape19: TShapeNode;
Sphere20: TSphereNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
ImageTexture23: TImageTextureNode;
Transform24: TTransformNode;
Shape25: TShapeNode;
Text26: TTextNode;
FontStyle27: TFontStyleNode;
Appearance28: TAppearanceNode;
Material29: TMaterialNode;

procedure InitHelloWorldCommentedPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'HelloWorldCommented.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Numerous comments added to simple X3D scene example for testing JSON encoding alternatives.';
{ METHOD .Meta }
X3D0.Meta['created'] := '19 December 2015';
{ METHOD .Meta }
X3D0.Meta['modified'] := '20 October 2019';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['info'] := 'HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental.';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'HelloWorldCommented.json';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'HelloWorldCommentedOriginalEncoding.json';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'HelloWorldCommentedAlternativeEncoding.json';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d';
{ METHOD .Meta }
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
{ METHOD .Head }
Group14 := TGroupNode.Create;
{ Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes) }
{ WorldInfo begin }
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'Hello world!';
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(WorldInfo15);
{ WorldInfo complete, Group begin }
Group16 := TGroupNode.Create;
{ Viewpoint begin }
Viewpoint17 := TViewpointNode.Create;
Viewpoint17.CenterOfRotation := Vector3(0,-1,0);
Viewpoint17.Description := 'Hello world!';
Viewpoint17.Position := Vector3(0,-1,7);
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Viewpoint17);
{ Viewpoint complete, Transform begin }
Transform18 := TTransformNode.Create;
Transform18.Rotation := Vector4(0,1,0,3);
{ Shape begin }
Shape19 := TShapeNode.Create;
{ Sphere begin }
{ Sphere complete, Appearance begin }
{ Appearance complete }
Sphere20 := TSphereNode.Create;
{ METHOD .Geometry }
Shape19.Geometry := Sphere20;
Appearance21 := TAppearanceNode.Create;
{ Material begin }
{ Material complete, ImageTexture begin }
{ ImageTexture complete }
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(0.1,0.5,1);
{ METHOD .SetMaterial }
Appearance21.Material := Material22;
ImageTexture23 := TImageTextureNode.Create;
ImageTexture23.SetUrl(['earth-topo.png','earth-topo.jpg','earth-topo-small.gif','https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png','https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg','https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif']);
{ METHOD .Texture }
Appearance21.Texture := ImageTexture23;
{ METHOD .Appearance }
Shape19.Appearance := Appearance21;
{ METHOD .FdChildren.Add }
Transform18.FdChildren.Add(Shape19);
end;

procedure InitHelloWorldCommentedPart1;
begin

{ Shape complete }
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Transform18);
{ Transform complete, Transform begin }
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(0,-2,0);
{ Shape begin }
Shape25 := TShapeNode.Create;
{ Text begin }
{ Text complete, Appearance begin }
{ Appearance complete }
Text26 := TTextNode.Create;
Text26.SetText(['Hello','world!']);
{ FontStyle begin }
{ FontStyle complete }
FontStyle27 := TFontStyleNode.Create;
FontStyle27.Justify := fjMIDDLE;
FontStyle27.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
Text26.FontStyle := FontStyle27;
{ METHOD .Geometry }
Shape25.Geometry := Text26;
Appearance28 := TAppearanceNode.Create;
{ Material begin }
{ Material complete }
{ METHOD .SetMaterial }
Appearance28.Material := Material22;
{ METHOD .Appearance }
Shape25.Appearance := Appearance28;
{ METHOD .FdChildren.Add }
Transform24.FdChildren.Add(Shape25);
{ Shape complete }
{ METHOD .FdChildren.Add }
Group16.FdChildren.Add(Transform24);
{ Transform complete }
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group16);
{ Group complete }
{ METHOD .AddGroup }
X3D0.AddChildren([Group14]);
end;

function CreateHelloWorldCommented: TX3DRootNode;
begin
InitHelloWorldCommentedPart0;
InitHelloWorldCommentedPart1;
Result := X3D0;
end;

begin
end.
