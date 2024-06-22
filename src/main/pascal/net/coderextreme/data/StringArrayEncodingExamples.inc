function StringArrayEncodingExamples: TX3DRootNode;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 3;
X3D0.ForceVersion.Minor := 3;
X3D0.Meta['title'] := 'StringArrayEncodingExamples.x3d';
X3D0.Meta['description'] := 'Demonstrate simple X3D MFString (string array) encoding.';
X3D0.Meta['created'] := '27 May 2017';
X3D0.Meta['modified'] := '27 May 2017';
X3D0.Meta['creator'] := 'Don Brutzman';
X3D0.Meta['reference'] := 'X3dHeaderPrototypeSyntaxExamples.x3d';
X3D0.Meta['specificationSection'] := 'X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString';
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString';
X3D0.Meta['specificationSection'] := 'X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString';
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString';
X3D0.Meta['specificationSection'] := 'X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString';
X3D0.Meta['specificationUrl'] := 'https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group17 := TGroupNode.Create;
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Hello MFString syntax';
{ .AddChildren }
Group17.AddChildren([Viewpoint18]);
Background19 := TBackgroundNode.Create;
Background19.SetSkyColor([Vector3(0.6,1,0.8)]);
{ .AddChildren }
Group17.AddChildren([Background19]);
Shape20 := TShapeNode.Create;
Text21 := TTextNode.Create;
Text21.SetText(['One, Two, Three','','He said, \"Immel did it!\"']);
{ alternative XML encoding: Text string='"One, Two, Three" "" "He said, \&quot;Immel did it!\&quot;"' }
(* alternative Java source: .setString(new String [] {"One, Two, Three", "", "He said, \""Immel did it!\"""}) *)
FontStyle22 := TFontStyleNode.Create;
FontStyle22.Justify := fjMiddle;
FontStyle22.JustifyMinor := fjMiddle;
FontStyle22.Style := 'BOLD';
{ .SetFontStyle }
Text21.FontStyle := FontStyle22;
{ .SetGeometry }
Shape20.Geometry := Text21;
Appearance23 := TAppearanceNode.Create;
Material24 := TMaterialNode.Create;
Material24.DiffuseColor := Vector3(0.6,0.4,0.2);
{ .SetMaterial }
Appearance23.Material := Material24;
{ .SetAppearance }
Shape20.Appearance := Appearance23;
{ .AddChildren }
Group17.AddChildren([Shape20]);
{ .AddGroup }
X3D0.AddChildren([Group17]);
Result := X3D0;
end;
