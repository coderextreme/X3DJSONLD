function gridBack: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group13: TGroupNode;
Shape14: TShapeNode;
Appearance15: TAppearanceNode;
Material16: TMaterialNode;
IndexedFaceSet17: TIndexedFaceSetNode;
Coordinate18: TCoordinateNode;
Color19: TColorNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'gridBack.x3d';
X3D0.Meta['description'] := 'Checkerboard grid background for X3D/VRML materials selection.';
X3D0.Meta['creator'] := 'David Roussel';
X3D0.Meta['translator'] := 'James Harney, Don Brutzman NPS';
X3D0.Meta['created'] := '8 April 2002';
X3D0.Meta['modified'] := '12 January 2014';
X3D0.Meta['reference'] := 'http://vrmlstuff.free.fr/materials';
X3D0.Meta['subject'] := 'Universal Media Material Library';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.json';
X3D0.Meta['generator'] := 'Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html';
X3D0.Meta['license'] := '../license.html';
Group13 := TGroupNode.Create;
Shape14 := TShapeNode.Create;
Appearance15 := TAppearanceNode.Create;
Material16 := TMaterialNode.Create;
Material16.AmbientIntensity := 0.01;
Material16.DiffuseColor := Vector3(1,1,1);
Material16.Shininess := 0.05;
{ .SetMaterial }
Appearance15.Material := Material16;
{ .SetAppearance }
Shape14.Appearance := Appearance15;
IndexedFaceSet17 := TIndexedFaceSetNode.Create;
IndexedFaceSet17.SetColorIndex([0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0]);
IndexedFaceSet17.ColorPerVertex := False;
IndexedFaceSet17.SetCoordIndex([0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1]);
IndexedFaceSet17.NormalPerVertex := False;
Coordinate18 := TCoordinateNode.Create;
Coordinate18.SetPoint([Vector3(-5.25,5.25,0),Vector3(-3.75,5.25,0),Vector3(-2.25,5.25,0),Vector3(-0.75,5.25,0),Vector3(0.75,5.25,0),Vector3(2.25,5.25,0),Vector3(3.75,5.25,0),Vector3(5.25,5.25,0),Vector3(-5.25,3.75,0),Vector3(-3.75,3.75,0),Vector3(-2.25,3.75,0),Vector3(-0.75,3.75,0),Vector3(0.75,3.75,0),Vector3(2.25,3.75,0),Vector3(3.75,3.75,0),Vector3(5.25,3.75,0),Vector3(-5.25,2.25,0),Vector3(-3.75,2.25,0),Vector3(-2.25,2.25,0),Vector3(-0.75,2.25,0),Vector3(0.75,2.25,0),Vector3(2.25,2.25,0),Vector3(3.75,2.25,0),Vector3(5.25,2.25,0),Vector3(-5.25,0.75,0),Vector3(-3.75,0.75,0),Vector3(-2.25,0.75,0),Vector3(-0.75,0.75,0),Vector3(0.75,0.75,0),Vector3(2.25,0.75,0),Vector3(3.75,0.75,0),Vector3(5.25,0.75,0),Vector3(-5.25,-0.75,0),Vector3(-3.75,-0.75,0),Vector3(-2.25,-0.75,0),Vector3(-0.75,-0.75,0),Vector3(0.75,-0.75,0),Vector3(2.25,-0.75,0),Vector3(3.75,-0.75,0),Vector3(5.25,-0.75,0),Vector3(-5.25,-2.25,0),Vector3(-3.75,-2.25,0),Vector3(-2.25,-2.25,0),Vector3(-0.75,-2.25,0),Vector3(0.75,-2.25,0),Vector3(2.25,-2.25,0),Vector3(3.75,-2.25,0),Vector3(5.25,-2.25,0),Vector3(-5.25,-3.75,0),Vector3(-3.75,-3.75,0),Vector3(-2.25,-3.75,0),Vector3(-0.75,-3.75,0),Vector3(0.75,-3.75,0),Vector3(2.25,-3.75,0),Vector3(3.75,-3.75,0),Vector3(5.25,-3.75,0),Vector3(-5.25,-5.25,0),Vector3(-3.75,-5.25,0),Vector3(-2.25,-5.25,0),Vector3(-0.75,-5.25,0),Vector3(0.75,-5.25,0),Vector3(2.25,-5.25,0),Vector3(3.75,-5.25,0),Vector3(5.25,-5.25,0)]);
{ .SetCoord }
IndexedFaceSet17.Coord := Coordinate18;
Color19 := TColorNode.Create;
Color19.SetColor([Vector3(0.5,0.5,0.5),Vector3(0.75,0.75,0.75)]);
{ .SetColor }
IndexedFaceSet17.Color := Color19;
{ .SetGeometry }
Shape14.Geometry := IndexedFaceSet17;
{ .AddChildren }
Group13.AddChildren([Shape14]);
{ .AddGroup }
X3D0.AddChildren([Group13]);
Result := X3D0;
end;
