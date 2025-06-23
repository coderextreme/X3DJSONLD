function ArchHalf: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group12: TGroupNode;
WorldInfo13: TWorldInfoNode;
Shape14: TShapeNode;
IndexedFaceSet15: TIndexedFaceSetNode;
Coordinate16: TCoordinateNode;
Appearance17: TAppearanceNode;
Material18: TMaterialNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ArchHalf.x3d';
X3D0.Meta['description'] := 'Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform scale or by editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information.';
X3D0.Meta['creator'] := 'Michele Foti, Don Brutzman';
X3D0.Meta['created'] := '15 December 2014';
X3D0.Meta['modified'] := '20 October 2019';
X3D0.Meta['reference'] := 'ArchModelingDiagrams.pdf';
X3D0.Meta['reference'] := 'https://en.wikipedia.org/wiki/Arch';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group12 := TGroupNode.Create;
WorldInfo13 := TWorldInfoNode.Create;
WorldInfo13.Title := 'ArchHalf.x3d';
{ .AddChildren }
Group12.AddChildren([WorldInfo13]);
Shape14 := TShapeNode.Create;
{ note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly }
IndexedFaceSet15 := TIndexedFaceSetNode.Create;
IndexedFaceSet15.Convex := False;
IndexedFaceSet15.SetCoordIndex([31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,144,-1,149,31,144,147,-1,134,147,144,145,-1,145,144,62,141,-1,132,133,141,62,-1,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,143,-1,148,94,143,146,-1,142,128,146,143,-1,140,125,143,142,-1,125,126,127,140,-1,31,94,95,32,-1,32,95,96,33,-1,33,96,97,34,-1,34,97,98,35,-1,35,98,99,36,-1,36,99,100,37,-1,37,100,101,38,-1,38,101,102,39,-1,39,102,103,40,-1,40,103,104,41,-1,41,104,105,42,-1,42,105,106,43,-1,43,106,107,44,-1,44,107,108,45,-1,45,108,109,46,-1,46,109,110,47,-1,47,110,111,48,-1,48,111,112,49,-1,49,112,113,50,-1,50,113,114,51,-1,51,114,115,52,-1,52,115,116,53,-1,53,116,117,54,-1,54,117,118,55,-1,55,118,119,56,-1,56,119,120,57,-1,57,120,121,58,-1,58,121,122,59,-1,59,122,123,60,-1,60,123,124,61,-1,61,124,125,62,-1,148,149,147,146,-1,146,147,134,128,-1,128,134,145,142,-1,140,141,145,142,-1,127,133,141,140,-1,127,126,132,133,-1,126,132,62,125,-1,31,94,143,144,-1,142,143,144,145,-1,140,125,62,141,-1,31,94,148,149,-1]);
IndexedFaceSet15.Solid := False;
Coordinate16 := TCoordinateNode.Create;
Coordinate16.SetPoint([Vector3(2,0,0),Vector3(1.997498435543818,0.1,0),Vector3(1.98997487421324,0.2,0),Vector3(1.977371993328519,0.3,0),Vector3(1.9595917942265424,0.4,0),Vector3(1.9364916731037085,0.5,0),Vector3(1.907878402833891,0.6,0),Vector3(1.8734993995195193,0.7,0),Vector3(1.833030277982336,0.8,0),Vector3(1.786057109949175,0.9,0),Vector3(1.7320508075688774,1,0),Vector3(1.6703293088490068,1.1,0),Vector3(1.6,1.2,0),Vector3(1.5198684153570663,1.3,0),Vector3(1.42828568570857,1.4,0),Vector3(1.3228756555322954,1.5,0),Vector3(1.2,1.6,0),Vector3(1.0535653752852738,1.7,0),Vector3(0.9020947843768965,1.785,0),Vector3(0.7599342076785331,1.85,0),Vector3(0.6244997998398398,1.9,0),Vector3(0.5425633603552678,1.925,0),Vector3(0.4444097208657794,1.95,0),Vector3(0.36181625170796194,1.967,0),Vector3(0.2821347195933173,1.98,0),Vector3(0.19974984355438344,1.99,0),Vector3(0.16718552568927703,1.993,0),Vector3(0.14133294025102577,1.995,0),Vector3(0.10950342460398416,1.997,0),Vector3(0.08942035562443253,1.998,0),Vector3(0.06323764701505419,1.999,0),Vector3(0,2,0),Vector3(-0.06323764701505419,1.999,0),Vector3(-0.08942035562443253,1.998,0),Vector3(-0.10950342460398416,1.997,0),Vector3(-0.14133294025102577,1.995,0),Vector3(-0.16718552568927703,1.993,0),Vector3(-0.19974984355438344,1.99,0),Vector3(-0.2821347195933173,1.98,0),Vector3(-0.36181625170796194,1.967,0),Vector3(-0.4444097208657794,1.95,0),Vector3(-0.5425633603552678,1.925,0),Vector3(-0.6244997998398398,1.9,0),Vector3(-0.7599342076785331,1.85,0),Vector3(-0.9020947843768965,1.785,0),Vector3(-1.0535653752852738,1.7,0),Vector3(-1.2,1.6,0),Vector3(-1.3228756555322954,1.5,0),Vector3(-1.42828568570857,1.4,0),Vector3(-1.5198684153570663,1.3,0),Vector3(-1.6,1.2,0),Vector3(-1.6703293088490068,1.1,0),Vector3(-1.7320508075688774,1,0),Vector3(-1.786057109949175,0.9,0),Vector3(-1.833030277982336,0.8,0),Vector3(-1.8734993995195193,0.7,0),Vector3(-1.907878402833891,0.6,0),Vector3(-1.9364916731037085,0.5,0),Vector3(-1.9595917942265424,0.4,0),Vector3(-1.977371993328519,0.3,0),Vector3(-1.98997487421324,0.2,0),Vector3(-1.997498435543818,0.1,0),Vector3(-2,0,0),Vector3(2,0,3),Vector3(1.997498435543818,0.1,3),Vector3(1.98997487421324,0.2,3),Vector3(1.977371993328519,0.3,3),Vector3(1.9595917942265424,0.4,3),Vector3(1.9364916731037085,0.5,3),Vector3(1.907878402833891,0.6,3),Vector3(1.8734993995195193,0.7,3),Vector3(1.833030277982336,0.8,3),Vector3(1.786057109949175,0.9,3),Vector3(1.7320508075688774,1,3),Vector3(1.6703293088490068,1.1,3),Vector3(1.6,1.2,3),Vector3(1.5198684153570663,1.3,3),Vector3(1.42828568570857,1.4,3),Vector3(1.3228756555322954,1.5,3),Vector3(1.2,1.6,3),Vector3(1.0535653752852738,1.7,3),Vector3(0.9020947843768965,1.785,3),Vector3(0.7599342076785331,1.85,3),Vector3(0.6244997998398398,1.9,3),Vector3(0.5425633603552678,1.925,3),Vector3(0.4444097208657794,1.95,3),Vector3(0.36181625170796194,1.967,3),Vector3(0.2821347195933173,1.98,3),Vector3(0.19974984355438344,1.99,3),Vector3(0.16718552568927703,1.993,3),Vector3(0.14133294025102577,1.995,3),Vector3(0.10950342460398416,1.997,3),Vector3(0.08942035562443253,1.998,3),Vector3(0.06323764701505419,1.999,3),Vector3(0,2,3),Vector3(-0.06323764701505419,1.999,3),Vector3(-0.08942035562443253,1.998,3),Vector3(-0.10950342460398416,1.997,3),Vector3(-0.14133294025102577,1.995,3),Vector3(-0.16718552568927703,1.993,3),Vector3(-0.19974984355438344,1.99,3),Vector3(-0.2821347195933173,1.98,3),Vector3(-0.36181625170796194,1.967,3),Vector3(-0.4444097208657794,1.95,3),Vector3(-0.5425633603552678,1.925,3),Vector3(-0.6244997998398398,1.9,3),Vector3(-0.7599342076785331,1.85,3),Vector3(-0.9020947843768965,1.785,3),Vector3(-1.0535653752852738,1.7,3),Vector3(-1.2,1.6,3),Vector3(-1.3228756555322954,1.5,3),Vector3(-1.42828568570857,1.4,3),Vector3(-1.5198684153570663,1.3,3),Vector3(-1.6,1.2,3),Vector3(-1.6703293088490068,1.1,3),Vector3(-1.7320508075688774,1,3),Vector3(-1.786057109949175,0.9,3),Vector3(-1.833030277982336,0.8,3),Vector3(-1.8734993995195193,0.7,3),Vector3(-1.907878402833891,0.6,3),Vector3(-1.9364916731037085,0.5,3),Vector3(-1.9595917942265424,0.4,3),Vector3(-1.977371993328519,0.3,3),Vector3(-1.98997487421324,0.2,3),Vector3(-1.997498435543818,0.1,3),Vector3(-2,0,3),Vector3(-2,-1,3),Vector3(-2.5,-1,3),Vector3(-2.5,2.5,3),Vector3(2.5,2.5,3),Vector3(2.5,-1,3),Vector3(2,-1,3),Vector3(-2,-1,0),Vector3(-2.5,-1,0),Vector3(-2.5,2.5,0),Vector3(2.5,2.5,0),Vector3(2.5,-1,0),Vector3(2,-1,0),Vector3(2.5,0,3),Vector3(2.5,0,0),Vector3(-2.5,0,3),Vector3(-2.5,0,0),Vector3(-2.5,2,3),Vector3(-2,2,3),Vector3(-2,2,0),Vector3(-2.5,2,0),Vector3(-2,2.5,3),Vector3(-2,2.5,0),Vector3(0,2.5,3),Vector3(0,2.5,0),Vector3(2,2,3),Vector3(2.5,2,3),Vector3(2.5,2,0),Vector3(2,2,0),Vector3(2,2.5,3),Vector3(2,2.5,0)]);
{ .SetCoord }
IndexedFaceSet15.Coord := Coordinate16;
{ .SetGeometry }
Shape14.Geometry := IndexedFaceSet15;
Appearance17 := TAppearanceNode.Create;
Material18 := TMaterialNode.Create;
Material18.DiffuseColor := Vector3(1,0.75,0.25);
{ .SetMaterial }
Appearance17.Material := Material18;
{ .SetAppearance }
Shape14.Appearance := Appearance17;
{ .AddChildren }
Group12.AddChildren([Shape14]);
{ .AddGroup }
X3D0.AddChildren([Group12]);
Result := X3D0;
end;
