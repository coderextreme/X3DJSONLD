unit StringArrayEncodingExamples;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateStringArrayEncodingExamples: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group17: TGroupNode;
Viewpoint18: TViewpointNode;
Background19: TBackgroundNode;
Shape20: TShapeNode;
Text21: TTextNode;
FontStyle22: TFontStyleNode;
Appearance23: TAppearanceNode;
Material24: TMaterialNode;

procedure InitStringArrayEncodingExamplesPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'StringArrayEncodingExamples.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Demonstrate simple X3D MFString (string array) encoding.';
{ METHOD .Meta }
X3D0.Meta['created'] := '27 May 2017';
{ METHOD .Meta }
X3D0.Meta['modified'] := '27 May 2017';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'X3dHeaderPrototypeSyntaxExamples.x3d';
{ METHOD .Meta }
X3D0.Meta['specificationSection'] := 'X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString';
{ METHOD .Meta }
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString';
{ METHOD .Meta }
X3D0.Meta['specificationSection'] := 'X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString';
{ METHOD .Meta }
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString';
{ METHOD .Meta }
X3D0.Meta['specificationSection'] := 'X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString';
{ METHOD .Meta }
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group17 := TGroupNode.Create;
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Hello MFString syntax';
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Viewpoint18);
Background19 := TBackgroundNode.Create;
Background19.SetSkyColor([Vector3(0.6,1,0.8)]);
{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Background19);
Shape20 := TShapeNode.Create;
Text21 := TTextNode.Create;
Text21.SetText(['One, Two, Three','He said, "Immel did it!"']);
{ alternative XML encoding: Text string='"One, Two, Three" "" "He said, \&quot;Immel did it!\&quot;"' }
(* alternative Java source: .setString(new String [] {"One, Two, Three", "", "He said, \""Immel did it!\"""}) *)
FontStyle22 := TFontStyleNode.Create;
FontStyle22.Justify := fjMIDDLE;
FontStyle22.JustifyMinor := fjMIDDLE;
FontStyle22.Style := fsBOLD;
{ METHOD .FontStyle }
Text21.FontStyle := FontStyle22;
{ METHOD .Geometry }
Shape20.Geometry := Text21;
Appearance23 := TAppearanceNode.Create;
Material24 := TMaterialNode.Create;
Material24.DiffuseColor := Vector3(0.6,0.4,0.2);
{ METHOD .SetMaterial }
Appearance23.Material := Material24;
{ METHOD .Appearance }
Shape20.Appearance := Appearance23;
end;

procedure InitStringArrayEncodingExamplesPart1;
begin

{ METHOD .FdChildren.Add }
Group17.FdChildren.Add(Shape20);
{ METHOD .AddGroup }
X3D0.AddChildren([Group17]);
end;

function CreateStringArrayEncodingExamples: TX3DRootNode;
begin
InitStringArrayEncodingExamplesPart0;
InitStringArrayEncodingExamplesPart1;
Result := X3D0;
end;

begin
end.
