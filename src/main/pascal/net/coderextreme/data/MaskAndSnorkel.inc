function MaskAndSnorkel: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group10: TGroupNode;
WorldInfo11: TWorldInfoNode;
Background12: TBackgroundNode;
Transform13: TTransformNode;
Transform14: TTransformNode;
Shape15: TShapeNode;
Appearance16: TAppearanceNode;
Material17: TMaterialNode;
IndexedFaceSet18: TIndexedFaceSetNode;
Coordinate19: TCoordinateNode;
Transform20: TTransformNode;
Shape21: TShapeNode;
Appearance22: TAppearanceNode;
Material23: TMaterialNode;
Cylinder24: TCylinderNode;
Group25: TGroupNode;
Transform26: TTransformNode;
Transform27: TTransformNode;
Shape28: TShapeNode;
Appearance29: TAppearanceNode;
Material30: TMaterialNode;
Extrusion31: TExtrusionNode;
Transform32: TTransformNode;
Shape33: TShapeNode;
Appearance34: TAppearanceNode;
Material35: TMaterialNode;
Extrusion36: TExtrusionNode;
Transform37: TTransformNode;
Shape38: TShapeNode;
Appearance39: TAppearanceNode;
Material40: TMaterialNode;
Extrusion41: TExtrusionNode;
Transform42: TTransformNode;
Shape43: TShapeNode;
Appearance44: TAppearanceNode;
Material45: TMaterialNode;
IndexedFaceSet46: TIndexedFaceSetNode;
Coordinate47: TCoordinateNode;
Transform48: TTransformNode;
Shape49: TShapeNode;
Appearance50: TAppearanceNode;
Material51: TMaterialNode;
IndexedFaceSet52: TIndexedFaceSetNode;
Coordinate53: TCoordinateNode;
Transform54: TTransformNode;
Shape55: TShapeNode;
Appearance56: TAppearanceNode;
Material57: TMaterialNode;
IndexedFaceSet58: TIndexedFaceSetNode;
Coordinate59: TCoordinateNode;
Transform60: TTransformNode;
Shape61: TShapeNode;
Appearance62: TAppearanceNode;
Material63: TMaterialNode;
IndexedFaceSet64: TIndexedFaceSetNode;
Coordinate65: TCoordinateNode;
Transform66: TTransformNode;
Shape67: TShapeNode;
Appearance68: TAppearanceNode;
Material69: TMaterialNode;
IndexedFaceSet70: TIndexedFaceSetNode;
Coordinate71: TCoordinateNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'MaskAndSnorkel.x3d';
X3D0.Meta['description'] := 'Diving mask and snorkel tube.';
X3D0.Meta['creator'] := 'Etsuko Lippi';
X3D0.Meta['created'] := 'January 24, 2001';
X3D0.Meta['modified'] := '23 May 2020';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group10 := TGroupNode.Create;
WorldInfo11 := TWorldInfoNode.Create;
WorldInfo11.Title := 'MaskAndSnorkel.x3d';
{ .AddChildren }
Group10.AddChildren([WorldInfo11]);
Background12 := TBackgroundNode.Create;
Background12.SetSkyColor([Vector3(0,0,0.9)]);
{ .AddChildren }
Group10.AddChildren([Background12]);
Transform13 := TTransformNode.Create;
Transform14 := TTransformNode.Create;
Shape15 := TShapeNode.Create;
Appearance16 := TAppearanceNode.Create;
Material17 := TMaterialNode.Create;
Material17.DiffuseColor := Vector3(0,0,0);
{ .SetMaterial }
Appearance16.Material := Material17;
{ .SetAppearance }
Shape15.Appearance := Appearance16;
IndexedFaceSet18 := TIndexedFaceSetNode.Create;
IndexedFaceSet18.SetCoordIndex([0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1]);
IndexedFaceSet18.CreaseAngle := 1.45;
IndexedFaceSet18.Solid := False;
Coordinate19 := TCoordinateNode.Create;
Coordinate19.SetPoint([Vector3(0,0.08,0),Vector3(0.02,0.05,0),Vector3(0.05,0.05,0),Vector3(0.06,0.06,0),Vector3(0.06,0.09,0),Vector3(0.05,0.1,0),Vector3(0,0.1,0),Vector3(-0.05,0.1,0),Vector3(-0.06,0.09,0),Vector3(-0.06,0.06,0),Vector3(-0.05,0.05,0),Vector3(-0.02,0.05,0),Vector3(0.005,0.08,0),Vector3(0.02,0.055,0),Vector3(0.05,0.055,0),Vector3(0.055,0.06,0),Vector3(0.055,0.09,0),Vector3(0.045,0.095,0),Vector3(0.005,0.095,0),Vector3(-0.005,0.08,0),Vector3(-0.02,0.055,0),Vector3(-0.05,0.055,0),Vector3(-0.055,0.06,0),Vector3(-0.055,0.09,0),Vector3(-0.045,0.095,0),Vector3(-0.005,0.095,0)]);
{ .SetCoord }
IndexedFaceSet18.Coord := Coordinate19;
{ .SetGeometry }
Shape15.Geometry := IndexedFaceSet18;
{ .AddChild }
Transform14.AddChildren([Shape15]);
{ .AddChildren }
Transform13.AddChildren([Transform14]);
Transform20 := TTransformNode.Create;
Transform20.Translation := Vector3(0.075,0.075,-0.02);
Shape21 := TShapeNode.Create;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23 := Material17;
{ .SetMaterial }
Appearance22.Material := Material23;
{ .SetAppearance }
Shape21.Appearance := Appearance22;
Cylinder24 := TCylinderNode.Create;
Cylinder24.Height := 0.003;
Cylinder24.Radius := 0.015;
{ .SetGeometry }
Shape21.Geometry := Cylinder24;
{ .AddChild }
Transform20.AddChildren([Shape21]);
{ .AddChildren }
Transform13.AddChildren([Transform20]);
Group25 := TGroupNode.Create;
Transform26 := TTransformNode.Create;
Transform26.Translation := Vector3(0,-0.02,0);
Transform27 := TTransformNode.Create;
Transform27.Scale := Vector3(0.9,0.9,0.9);
Transform27.Translation := Vector3(0.035,-0.07,-0.02);
Shape28 := TShapeNode.Create;
Appearance29 := TAppearanceNode.Create;
Material30 := TMaterialNode.Create;
Material30.DiffuseColor := Vector3(0.678,1,0.184);
Material30.Transparency := 0.4;
{ .SetMaterial }
Appearance29.Material := Material30;
{ .SetAppearance }
Shape28.Appearance := Appearance29;
Extrusion31 := TExtrusionNode.Create;
Extrusion31.SetCrossSection([Vector2(0,0.013),Vector2(0.00494,0.01196),Vector2(0.00923,0.00923),Vector2(0.01196,0.00494),Vector2(0.013,0),Vector2(0.01196,-0.00494),Vector2(0.00923,-0.00923),Vector2(0.00494,-0.01196),Vector2(0,0.013),Vector2(-0.00494,-0.01196),Vector2(-0.00923,-0.00923),Vector2(-0.01196,-0.00494),Vector2(-0.013,0),Vector2(-0.01196,0.00494),Vector2(-0.00923,0.00923),Vector2(-0.00494,0.01196),Vector2(0,0.013)]);
Extrusion31.SetSpine([Vector3(-0.01,-0.04,0),Vector3(0,0,0),Vector3(0.03,0.05,0),Vector3(0.05,0.2,0),Vector3(0.03,0.4,0.03)]);
{ .SetGeometry }
Shape28.Geometry := Extrusion31;
{ .AddChild }
Transform27.AddChildren([Shape28]);
{ .AddChildren }
Transform26.AddChildren([Transform27]);
Transform32 := TTransformNode.Create;
Transform32.Rotation := Vector4(0,0,1,1.57);
Transform32.Scale := Vector3(0.9,0.9,0.9);
Transform32.Translation := Vector3(0.01,-0.04,-0.02);
Shape33 := TShapeNode.Create;
Appearance34 := TAppearanceNode.Create;
Material35 := TMaterialNode.Create;
Material35.DiffuseColor := Vector3(0.678,1,0.8);
Material35.Transparency := 0.4;
{ .SetMaterial }
Appearance34.Material := Material35;
{ .SetAppearance }
Shape33.Appearance := Appearance34;
Extrusion36 := TExtrusionNode.Create;
Extrusion36.SetCrossSection([Vector2(0,0.013),Vector2(0.00494,0.01196),Vector2(0.00923,0.00923),Vector2(0.01196,0.00494),Vector2(0.013,0),Vector2(0.01196,-0.00494),Vector2(0.00923,-0.00923),Vector2(0.00494,-0.01196),Vector2(0,0.013),Vector2(-0.00494,-0.01196),Vector2(-0.00923,-0.00923),Vector2(-0.01196,-0.00494),Vector2(-0.013,0),Vector2(-0.01196,0.00494),Vector2(-0.00923,0.00923),Vector2(-0.00494,0.01196),Vector2(0,0.013)]);
Extrusion36.SetSpine([Vector3(-0.01,-0.03,0),Vector3(0,0,0),Vector3(0.02,0.01,0)]);
{ .SetGeometry }
Shape33.Geometry := Extrusion36;
{ .AddChild }
Transform32.AddChildren([Shape33]);
{ .AddChildren }
Transform26.AddChildren([Transform32]);
Transform37 := TTransformNode.Create;
Transform37.Rotation := Vector4(0,0,1,-0.85);
Transform37.Scale := Vector3(0.9,0.9,0.9);
Transform37.Translation := Vector3(0.005,-0.01,-0.02);
Shape38 := TShapeNode.Create;
Appearance39 := TAppearanceNode.Create;
Material40 := TMaterialNode.Create;
Material40 := Material35;
{ .SetMaterial }
Appearance39.Material := Material40;
{ .SetAppearance }
Shape38.Appearance := Appearance39;
Extrusion41 := TExtrusionNode.Create;
Extrusion41.SetCrossSection([Vector2(0,0.013),Vector2(0.00494,0.01196),Vector2(0.00923,0.00923),Vector2(0.01196,0.00494),Vector2(0.013,0),Vector2(0.01196,-0.00494),Vector2(0.00923,-0.00923),Vector2(0.00494,-0.01196),Vector2(0,0.013)]);
Extrusion41.SetSpine([Vector3(-0.02,-0.03,0),Vector3(-0.01,-0.03,0),Vector3(0,-0.0175,0),Vector3(0,-0.0135,0),Vector3(-0.01,0,0),Vector3(-0.02,0,0)]);
{ .SetGeometry }
Shape38.Geometry := Extrusion41;
{ .AddChild }
Transform37.AddChildren([Shape38]);
{ .AddChildren }
Transform26.AddChildren([Transform37]);
{ .AddChildren }
Group25.AddChildren([Transform26]);
{ .AddChildren }
Transform13.AddChildren([Group25]);
Transform42 := TTransformNode.Create;
Shape43 := TShapeNode.Create;
Appearance44 := TAppearanceNode.Create;
Material45 := TMaterialNode.Create;
Material45.DiffuseColor := Vector3(0.941,0.973,1);
Material45.Transparency := 0.8;
{ .SetMaterial }
Appearance44.Material := Material45;
{ .SetAppearance }
Shape43.Appearance := Appearance44;
IndexedFaceSet46 := TIndexedFaceSetNode.Create;
IndexedFaceSet46.SetCoordIndex([12,13,14,15,16,17,18,12,-1]);
IndexedFaceSet46.CreaseAngle := 1.45;
IndexedFaceSet46.Solid := False;
Coordinate47 := TCoordinateNode.Create;
Coordinate47.SetPoint([Vector3(0,0.08,0),Vector3(0.02,0.05,0),Vector3(0.05,0.05,0),Vector3(0.06,0.06,0),Vector3(0.06,0.09,0),Vector3(0.05,0.1,0),Vector3(0,0.1,0),Vector3(-0.05,0.1,0),Vector3(-0.06,0.09,0),Vector3(-0.06,0.06,0),Vector3(-0.05,0.05,0),Vector3(-0.02,0.05,0),Vector3(0.005,0.08,0),Vector3(0.02,0.055,0),Vector3(0.05,0.055,0),Vector3(0.055,0.06,0),Vector3(0.055,0.09,0),Vector3(0.045,0.095,0),Vector3(0.005,0.095,0),Vector3(-0.005,0.08,0),Vector3(-0.02,0.055,0),Vector3(-0.05,0.055,0),Vector3(-0.055,0.06,0),Vector3(-0.055,0.09,0),Vector3(-0.045,0.095,0),Vector3(-0.005,0.095,0)]);
{ .SetCoord }
IndexedFaceSet46.Coord := Coordinate47;
{ .SetGeometry }
Shape43.Geometry := IndexedFaceSet46;
{ .AddChild }
Transform42.AddChildren([Shape43]);
{ .AddChildren }
Transform13.AddChildren([Transform42]);
Transform48 := TTransformNode.Create;
Shape49 := TShapeNode.Create;
Appearance50 := TAppearanceNode.Create;
Material51 := TMaterialNode.Create;
Material51 := Material45;
{ .SetMaterial }
Appearance50.Material := Material51;
{ .SetAppearance }
Shape49.Appearance := Appearance50;
IndexedFaceSet52 := TIndexedFaceSetNode.Create;
IndexedFaceSet52.SetCoordIndex([19,20,21,22,23,24,25,19,-1]);
IndexedFaceSet52.CreaseAngle := 1.45;
IndexedFaceSet52.Solid := False;
Coordinate53 := TCoordinateNode.Create;
Coordinate53.SetPoint([Vector3(0,0.08,0),Vector3(0.02,0.05,0),Vector3(0.05,0.05,0),Vector3(0.06,0.06,0),Vector3(0.06,0.09,0),Vector3(0.05,0.1,0),Vector3(0,0.1,0),Vector3(-0.05,0.1,0),Vector3(-0.06,0.09,0),Vector3(-0.06,0.06,0),Vector3(-0.05,0.05,0),Vector3(-0.02,0.05,0),Vector3(0.005,0.08,0),Vector3(0.02,0.055,0),Vector3(0.05,0.055,0),Vector3(0.055,0.06,0),Vector3(0.055,0.09,0),Vector3(0.045,0.095,0),Vector3(0.005,0.095,0),Vector3(-0.005,0.08,0),Vector3(-0.02,0.055,0),Vector3(-0.05,0.055,0),Vector3(-0.055,0.06,0),Vector3(-0.055,0.09,0),Vector3(-0.045,0.095,0),Vector3(-0.005,0.095,0)]);
{ .SetCoord }
IndexedFaceSet52.Coord := Coordinate53;
{ .SetGeometry }
Shape49.Geometry := IndexedFaceSet52;
{ .AddChild }
Transform48.AddChildren([Shape49]);
{ .AddChildren }
Transform13.AddChildren([Transform48]);
Transform54 := TTransformNode.Create;
Shape55 := TShapeNode.Create;
Appearance56 := TAppearanceNode.Create;
Material57 := TMaterialNode.Create;
Material57.DiffuseColor := Vector3(0.678,1,0.184);
Material57.Transparency := 0.7;
{ .SetMaterial }
Appearance56.Material := Material57;
{ .SetAppearance }
Shape55.Appearance := Appearance56;
IndexedFaceSet58 := TIndexedFaceSetNode.Create;
IndexedFaceSet58.SetCoordIndex([0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1]);
IndexedFaceSet58.CreaseAngle := 1.45;
IndexedFaceSet58.Solid := False;
Coordinate59 := TCoordinateNode.Create;
Coordinate59.SetPoint([Vector3(0,0.08,0),Vector3(0.02,0.05,0),Vector3(0.05,0.05,0),Vector3(0.06,0.06,0),Vector3(0.06,0.09,0),Vector3(0.05,0.1,0),Vector3(0,0.1,0),Vector3(-0.05,0.1,0),Vector3(-0.06,0.09,0),Vector3(-0.06,0.06,0),Vector3(-0.05,0.05,0),Vector3(-0.02,0.05,0),Vector3(0.005,0.08,0),Vector3(0.02,0.055,0),Vector3(0.05,0.055,0),Vector3(0.055,0.06,0),Vector3(0.055,0.09,0),Vector3(0.045,0.095,0),Vector3(0.005,0.095,0),Vector3(-0.005,0.08,0),Vector3(-0.02,0.055,0),Vector3(-0.05,0.055,0),Vector3(-0.055,0.06,0),Vector3(-0.055,0.09,0),Vector3(-0.045,0.095,0),Vector3(-0.005,0.095,0),Vector3(0,0.04,0.015),Vector3(0.05,0.04,-0.03),Vector3(0.06,0.05,-0.03),Vector3(0.07,0.095,-0.03),Vector3(0.055,0.11,-0.03),Vector3(0,0.11,-0.02),Vector3(-0.055,0.11,-0.03),Vector3(-0.07,0.095,-0.03),Vector3(-0.06,0.05,-0.03),Vector3(-0.05,0.04,-0.03),Vector3(-0.02,0.04,-0.02),Vector3(0.02,0.04,-0.02)]);
{ .SetCoord }
IndexedFaceSet58.Coord := Coordinate59;
{ .SetGeometry }
Shape55.Geometry := IndexedFaceSet58;
{ .AddChild }
Transform54.AddChildren([Shape55]);
{ .AddChildren }
Transform13.AddChildren([Transform54]);
Transform60 := TTransformNode.Create;
Shape61 := TShapeNode.Create;
Appearance62 := TAppearanceNode.Create;
Material63 := TMaterialNode.Create;
Material63 := Material57;
{ .SetMaterial }
Appearance62.Material := Material63;
{ .SetAppearance }
Shape61.Appearance := Appearance62;
IndexedFaceSet64 := TIndexedFaceSetNode.Create;
IndexedFaceSet64.SetCoordIndex([1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1]);
IndexedFaceSet64.CreaseAngle := 1.45;
IndexedFaceSet64.Solid := False;
Coordinate65 := TCoordinateNode.Create;
Coordinate65.SetPoint([Vector3(0,0.08,0),Vector3(0.02,0.05,0),Vector3(0.05,0.05,0),Vector3(0.06,0.06,0),Vector3(0.06,0.09,0),Vector3(0.05,0.1,0),Vector3(0,0.1,0),Vector3(-0.05,0.1,0),Vector3(-0.06,0.09,0),Vector3(-0.06,0.06,0),Vector3(-0.05,0.05,0),Vector3(-0.02,0.05,0),Vector3(0.005,0.08,0),Vector3(0.02,0.055,0),Vector3(0.05,0.055,0),Vector3(0.055,0.06,0),Vector3(0.055,0.09,0),Vector3(0.045,0.095,0),Vector3(0.005,0.095,0),Vector3(-0.005,0.08,0),Vector3(-0.02,0.055,0),Vector3(-0.05,0.055,0),Vector3(-0.055,0.06,0),Vector3(-0.055,0.09,0),Vector3(-0.045,0.095,0),Vector3(-0.005,0.095,0),Vector3(0,0.05,0.015),Vector3(0.05,0.04,-0.03),Vector3(0.06,0.05,-0.03),Vector3(0.07,0.095,-0.03),Vector3(0.055,0.11,-0.03),Vector3(0,0.11,-0.02),Vector3(-0.055,0.11,-0.03),Vector3(-0.07,0.095,-0.03),Vector3(-0.06,0.05,-0.03),Vector3(-0.05,0.04,-0.03),Vector3(-0.02,0.04,-0.02),Vector3(0.02,0.04,-0.02)]);
{ .SetCoord }
IndexedFaceSet64.Coord := Coordinate65;
{ .SetGeometry }
Shape61.Geometry := IndexedFaceSet64;
{ .AddChild }
Transform60.AddChildren([Shape61]);
{ .AddChildren }
Transform13.AddChildren([Transform60]);
Transform66 := TTransformNode.Create;
Shape67 := TShapeNode.Create;
Appearance68 := TAppearanceNode.Create;
Material69 := TMaterialNode.Create;
Material69 := Material45;
{ .SetMaterial }
Appearance68.Material := Material69;
{ .SetAppearance }
Shape67.Appearance := Appearance68;
IndexedFaceSet70 := TIndexedFaceSetNode.Create;
IndexedFaceSet70.SetCoordIndex([3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1]);
IndexedFaceSet70.CreaseAngle := 1.45;
IndexedFaceSet70.Solid := False;
Coordinate71 := TCoordinateNode.Create;
Coordinate71.SetPoint([Vector3(0,0.08,0),Vector3(0.02,0.05,0),Vector3(0.05,0.05,0),Vector3(0.06,0.06,0),Vector3(0.06,0.09,0),Vector3(0.05,0.1,0),Vector3(0,0.1,0),Vector3(-0.05,0.1,0),Vector3(-0.06,0.09,0),Vector3(-0.06,0.06,0),Vector3(-0.05,0.05,0),Vector3(-0.02,0.05,0),Vector3(0.005,0.08,0),Vector3(0.02,0.055,0),Vector3(0.05,0.055,0),Vector3(0.055,0.06,0),Vector3(0.055,0.09,0),Vector3(0.045,0.095,0),Vector3(0.005,0.095,0),Vector3(-0.005,0.08,0),Vector3(-0.02,0.055,0),Vector3(-0.05,0.055,0),Vector3(-0.055,0.06,0),Vector3(-0.055,0.09,0),Vector3(-0.045,0.095,0),Vector3(-0.005,0.095,0),Vector3(0,0.05,0.015),Vector3(0.05,0.04,-0.03),Vector3(0.06,0.05,-0.03),Vector3(0.07,0.095,-0.03),Vector3(0.055,0.11,-0.03),Vector3(0,0.11,-0.02),Vector3(-0.055,0.11,-0.03),Vector3(-0.07,0.095,-0.03),Vector3(-0.06,0.05,-0.03),Vector3(-0.05,0.04,-0.03),Vector3(-0.02,0.04,-0.02),Vector3(0.02,0.04,-0.02),Vector3(0.075,0.06,-0.135),Vector3(0.075,0.09,-0.135),Vector3(-0.075,0.06,-0.135),Vector3(-0.075,0.09,-0.135),Vector3(0.06,0.09,-0.165),Vector3(0.06,0.06,-0.165),Vector3(-0.06,0.09,-0.165),Vector3(-0.06,0.06,-0.165),Vector3(0,0.09,-0.2),Vector3(0,0.06,-0.175)]);
{ .SetCoord }
IndexedFaceSet70.Coord := Coordinate71;
{ .SetGeometry }
Shape67.Geometry := IndexedFaceSet70;
{ .AddChild }
Transform66.AddChildren([Shape67]);
{ .AddChildren }
Transform13.AddChildren([Transform66]);
{ .AddChildren }
Group10.AddChildren([Transform13]);
{ .AddGroup }
X3D0.AddChildren([Group10]);
Result := X3D0;
end;
