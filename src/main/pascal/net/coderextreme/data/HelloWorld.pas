unit HelloWorld;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateHelloWorld: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group25: TGroupNode;
WorldInfo26: TWorldInfoNode;
Group27: TGroupNode;
Viewpoint28: TViewpointNode;
Transform29: TTransformNode;
Shape30: TShapeNode;
Sphere31: TSphereNode;
Appearance32: TAppearanceNode;
Material33: TMaterialNode;
ImageTexture34: TImageTextureNode;
Transform35: TTransformNode;
Shape36: TShapeNode;
Text37: TTextNode;
FontStyle38: TFontStyleNode;
Appearance39: TAppearanceNode;
Material40: TMaterialNode;

procedure InitHelloWorldPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
{ Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON }
X3D0.Meta['title'] := 'HelloWorld.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Simple X3D model example: Hello World!';
{ METHOD .Meta }
X3D0.Meta['created'] := '30 October 2000';
{ METHOD .Meta }
X3D0.Meta['modified'] := '20 October 2019';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'HelloWorld.tall.png';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://en.wikipedia.org/wiki/Hello_world';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://en.wikipedia.org/wiki/\"Hello,_World!\"_program';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.HelloWorldExample.net';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/realtime-3d/news/internationalization-x3d';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d/content/examples/HelloWorld.x3d';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d';
{ METHOD .Meta }
X3D0.Meta['license'] := 'https://www.web3d.org/x3d/content/examples/license.html';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'HelloWorld.wrl';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'HelloWorld.x3dv';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'HelloWorld.x3db';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'HelloWorld.xhtml';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'HelloWorld.json';
{ METHOD .Meta }
{ METHOD .Head }
Group25 := TGroupNode.Create;
{ Example scene to illustrate X3D nodes and fields (XML elements and attributes) }
WorldInfo26 := TWorldInfoNode.Create;
WorldInfo26.SetInfo(['Example scene to illustrate a simple X3D model']);
WorldInfo26.Title := 'Hello World!';
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(WorldInfo26);
Group27 := TGroupNode.Create;
Viewpoint28 := TViewpointNode.Create;
Viewpoint28.CenterOfRotation := Vector3(0,-1,0);
Viewpoint28.Description := 'Hello world!';
Viewpoint28.Position := Vector3(0,-1,7);
{ METHOD .FdChildren.Add }
Group27.FdChildren.Add(Viewpoint28);
Transform29 := TTransformNode.Create;
Transform29.Rotation := Vector4(0,1,0,3);
end;

procedure InitHelloWorldPart1;
begin

Shape30 := TShapeNode.Create;
Sphere31 := TSphereNode.Create;
{ METHOD .Geometry }
Shape30.Geometry := Sphere31;
Appearance32 := TAppearanceNode.Create;
Material33 := TMaterialNode.Create;
Material33.DiffuseColor := Vector3(0.1,0.5,1);
{ METHOD .SetMaterial }
Appearance32.Material := Material33;
ImageTexture34 := TImageTextureNode.Create;
ImageTexture34.SetUrl(['earth-topo.png','earth-topo.jpg','earth-topo-small.gif','https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png','https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg','https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif']);
{ METHOD .Texture }
Appearance32.Texture := ImageTexture34;
{ METHOD .Appearance }
Shape30.Appearance := Appearance32;
{ METHOD .FdChildren.Add }
Transform29.FdChildren.Add(Shape30);
{ METHOD .FdChildren.Add }
Group27.FdChildren.Add(Transform29);
Transform35 := TTransformNode.Create;
Transform35.Translation := Vector3(0,-2,0);
Shape36 := TShapeNode.Create;
Text37 := TTextNode.Create;
Text37.SetText(['Hello','world!']);
FontStyle38 := TFontStyleNode.Create;
FontStyle38.Justify := fjMIDDLE;
FontStyle38.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
Text37.FontStyle := FontStyle38;
{ METHOD .Geometry }
Shape36.Geometry := Text37;
Appearance39 := TAppearanceNode.Create;
{ METHOD .SetMaterial }
Appearance39.Material := Material33;
{ METHOD .Appearance }
Shape36.Appearance := Appearance39;
{ METHOD .FdChildren.Add }
Transform35.FdChildren.Add(Shape36);
{ METHOD .FdChildren.Add }
Group27.FdChildren.Add(Transform35);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(Group27);
{ METHOD .AddGroup }
X3D0.AddChildren([Group25]);
end;

function CreateHelloWorld: TX3DRootNode;
begin
InitHelloWorldPart0;
InitHelloWorldPart1;
Result := X3D0;
end;

begin
end.
