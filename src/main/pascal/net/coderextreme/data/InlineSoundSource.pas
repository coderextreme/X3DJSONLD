unit InlineSoundSource;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateInlineSoundSource: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group14: TGroupNode;
WorldInfo15: TWorldInfoNode;
NavigationInfo16: TNavigationInfoNode;
Background17: TBackgroundNode;
Viewpoint18: TViewpointNode;
Transform19: TTransformNode;
Shape20: TShapeNode;
Appearance21: TAppearanceNode;
Material22: TMaterialNode;
IndexedFaceSet23: TIndexedFaceSetNode;
Coordinate24: TCoordinateNode;
Normal25: TNormalNode;
Transform26: TTransformNode;
Inline27: TInlineNode;

procedure InitInlineSoundSourcePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Full';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'InlineSoundSource.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the \"url\" of X3D file.';
{ METHOD .Meta }
X3D0.Meta['info'] := 'This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman';
{ METHOD .Meta }
X3D0.Meta['created'] := '28 October 2020';
{ METHOD .Meta }
X3D0.Meta['modified'] := '4 August 2021';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'CHANGELOG.txt';
{ METHOD .Meta }
X3D0.Meta['TODO'] := 'credit for audio files';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://medialab.hmu.gr/minipages/x3domAudio';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group14 := TGroupNode.Create;
WorldInfo15 := TWorldInfoNode.Create;
WorldInfo15.Title := 'InlineSoundSource.x3d';
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(WorldInfo15);
NavigationInfo16 := TNavigationInfoNode.Create;
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(NavigationInfo16);
Background17 := TBackgroundNode.Create;
Background17.SetBackUrl(['images/generic/BK1.png','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png']);
Background17.SetBottomUrl(['images/generic/DN1.png','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png']);
Background17.SetFrontUrl(['images/generic/FR1.png','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png']);
Background17.SetLeftUrl(['images/generic/LF1.png','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png']);
Background17.SetRightUrl(['images/generic/RT1.png','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png']);
Background17.SetTopUrl(['images/generic/UP1.png','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Background17);
Viewpoint18 := TViewpointNode.Create;
Viewpoint18.Description := 'Camera001';
Viewpoint18.FarDistance := 0;
Viewpoint18.NearDistance := 1;
Viewpoint18.Orientation := Vector4(1,0,0,-0.523599);
Viewpoint18.Position := Vector3(0,2000,3500);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Viewpoint18);
Transform19 := TTransformNode.Create;
Transform19.Translation := Vector3(1.241,0,0.358);
Shape20 := TShapeNode.Create;
end;

procedure InitInlineSoundSourcePart1;
begin

Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(0.122,0.114,0.125);
{ METHOD .SetMaterial }
Appearance21.Material := Material22;
{ METHOD .Appearance }
Shape20.Appearance := Appearance21;
IndexedFaceSet23 := TIndexedFaceSetNode.Create;
IndexedFaceSet23.SetCoordIndex([0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1]);
IndexedFaceSet23.Solid := False;
Coordinate24 := TCoordinateNode.Create;
Coordinate24.SetPoint([Vector3(-1000,0,1000),Vector3(-1000,0,-1000),Vector3(1000,0,-1000),Vector3(1000,0,-1000),Vector3(1000,0,1000),Vector3(-1000,0,1000),Vector3(-1000,8.031588,1000),Vector3(1000,8.031588,1000),Vector3(1000,8.031588,-1000),Vector3(1000,8.031588,-1000),Vector3(-1000,8.031588,-1000),Vector3(-1000,8.031588,1000),Vector3(-1000,0,1000),Vector3(1000,0,1000),Vector3(1000,8.031588,1000),Vector3(1000,8.031588,1000),Vector3(-1000,8.031588,1000),Vector3(-1000,0,1000),Vector3(1000,0,1000),Vector3(1000,0,-1000),Vector3(1000,8.031588,-1000),Vector3(1000,8.031588,-1000),Vector3(1000,8.031588,1000),Vector3(1000,0,1000),Vector3(1000,0,-1000),Vector3(-1000,0,-1000),Vector3(-1000,8.031588,-1000),Vector3(-1000,8.031588,-1000),Vector3(1000,8.031588,-1000),Vector3(1000,0,-1000),Vector3(-1000,0,-1000),Vector3(-1000,0,1000),Vector3(-1000,8.031588,1000),Vector3(-1000,8.031588,1000),Vector3(-1000,8.031588,-1000),Vector3(-1000,0,-1000)]);
{ METHOD .Coord }
IndexedFaceSet23.Coord := Coordinate24;
Normal25 := TNormalNode.Create;
Normal25.SetVector([Vector3(0,-1,0),Vector3(0,-1,0),Vector3(0,-1,0),Vector3(0,-1,0),Vector3(0,-1,0),Vector3(0,-1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,1,0),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(0,0,1),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,0,0),Vector3(1,0,0),Vector3(0,0,-1),Vector3(0,0,-1),Vector3(0,0,-1),Vector3(0,0,-1),Vector3(0,0,-1),Vector3(0,0,-1),Vector3(-1,0,0),Vector3(-1,0,0),Vector3(-1,0,0),Vector3(-1,0,0),Vector3(-1,0,0),Vector3(-1,0,0)]);
{ METHOD .Normal }
IndexedFaceSet23.Normal := Normal25;
{ METHOD .Geometry }
Shape20.Geometry := IndexedFaceSet23;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Transform19);
Transform26 := TTransformNode.Create;
Inline27 := TInlineNode.Create;
Inline27.SetUrl(['x3d/example1.x3d','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d','x3d/example1.wrl','https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl']);
{ METHOD .FdChildren.Add }
Transform26.FdChildren.Add(Inline27);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Transform26);
{ METHOD .AddGroup }
X3D0.AddChildren([Group14]);
end;

function CreateInlineSoundSource: TX3DRootNode;
begin
InitInlineSoundSourcePart0;
InitInlineSoundSourcePart1;
Result := X3D0;
end;

begin
end.
