unit TextExamples;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateTextExamples: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group12: TGroupNode;
Transform13: TTransformNode;
Shape14: TShapeNode;
Text15: TTextNode;
FontStyle16: TFontStyleNode;
Appearance17: TAppearanceNode;
Material18: TMaterialNode;
Transform19: TTransformNode;
Shape20: TShapeNode;
Text21: TTextNode;
FontStyle22: TFontStyleNode;
Appearance23: TAppearanceNode;
Transform24: TTransformNode;
Shape25: TShapeNode;
Text26: TTextNode;
FontStyle27: TFontStyleNode;
Appearance28: TAppearanceNode;

procedure InitTextExamplesPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'TextExamples.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Show different escape-character text examples for embedded quotation marks.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['created'] := '7 April 2001';
{ METHOD .Meta }
X3D0.Meta['modified'] := '26 April 2016';
{ METHOD .Meta }
X3D0.Meta['warning'] := 'Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control.';
{ METHOD .Meta }
X3D0.Meta['warning'] := 'Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations.';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group12 := TGroupNode.Create;
Transform13 := TTransformNode.Create;
Transform13.Translation := Vector3(0,2,0);
Shape14 := TShapeNode.Create;
Text15 := TTextNode.Create;
Text15.SetText(['Compare special character escaping']);
FontStyle16 := TFontStyleNode.Create;
FontStyle16.Justify := fjMIDDLE;
FontStyle16.JustifyMinor := fjMIDDLE;
FontStyle16.Size := 0.8;
{ METHOD .FontStyle }
Text15.FontStyle := FontStyle16;
{ METHOD .Geometry }
Shape14.Geometry := Text15;
Appearance17 := TAppearanceNode.Create;
Material18 := TMaterialNode.Create;
Material18.DiffuseColor := Vector3(0.1,0.7,0.7);
{ METHOD .SetMaterial }
Appearance17.Material := Material18;
{ METHOD .Appearance }
Shape14.Appearance := Appearance17;
{ METHOD .FdChildren.Add }
Transform13.FdChildren.Add(Shape14);
{ METHOD .FdChildren.Add }
Group12.FdChildren.Add(Transform13);
Transform19 := TTransformNode.Create;
Transform19.Translation := Vector3(-3,0,0);
Shape20 := TShapeNode.Create;
Text21 := TTextNode.Create;
Text21.SetText(['I don''t think so','he said "Hi"']);
{ METHOD .FontStyle }
Text21.FontStyle := FontStyle16;
{ METHOD .Geometry }
Shape20.Geometry := Text21;
end;

procedure InitTextExamplesPart1;
begin

{ METHOD .Appearance }
Shape20.Appearance := Appearance17;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Group12.FdChildren.Add(Transform19);
Transform24 := TTransformNode.Create;
Transform24.Translation := Vector3(3,0,0);
Shape25 := TShapeNode.Create;
Text26 := TTextNode.Create;
Text26.SetText(['I don''t think so','he said "Hi"']);
{ METHOD .FontStyle }
Text26.FontStyle := FontStyle16;
{ METHOD .Geometry }
Shape25.Geometry := Text26;
{ METHOD .Appearance }
Shape25.Appearance := Appearance17;
{ METHOD .FdChildren.Add }
Transform24.FdChildren.Add(Shape25);
{ METHOD .FdChildren.Add }
Group12.FdChildren.Add(Transform24);
{ METHOD .AddGroup }
X3D0.AddChildren([Group12]);
end;

function CreateTextExamples: TX3DRootNode;
begin
InitTextExamplesPart0;
InitTextExamplesPart1;
Result := X3D0;
end;

begin
end.
