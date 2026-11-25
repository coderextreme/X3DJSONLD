unit qq3;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createqq3: TX3DRootNode;

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors;

function CreateEmptyPrototype(const AName: String): TX3DPrototype;
var
  Stream: TStringStream;
  TempRoot: TX3DRootNode;
  CopyState: TX3DNodeDeepCopyState;
begin
  Stream := TStringStream.Create('#X3D V4.0 utf8' + LineEnding + 'PROTO ' + AName + ' [] {}');
  try
    TempRoot := LoadNode(Stream, '', 'model/x3d+vrml');
    try
      CopyState := TX3DNodeDeepCopyState.Create;
      try
        Result := TempRoot.Prototypes[0].DeepCopy(CopyState) as TX3DPrototype;
      finally
        FreeAndNil(CopyState);
      end;
    finally
      FreeAndNil(TempRoot);
    end;
  finally
    FreeAndNil(Stream);
  end;
end;

var
  X3D0: TX3DRootNode;
  Group10: TGroupNode;
  ProtoDeclare11: TX3DPrototype;
  Group13: TGroupNode;
  Transform14: TTransformNode;
  Shape15: TShapeNode;
  Appearance16: TAppearanceNode;
  Material17: TMaterialNode;
  Extrusion18: TExtrusionNode;
  Transform19: TTransformNode;
  Shape20: TShapeNode;
  Appearance21: TAppearanceNode;
  Material22: TMaterialNode;
  Extrusion23: TExtrusionNode;
  Transform24: TTransformNode;
  Transform26: TTransformNode;
  Viewpoint28: TViewpointNode;
  Transform29: TTransformNode;
  ProtoInstance30: TX3DPrototypeNode;
  Transform31: TTransformNode;
  ProtoInstance32: TX3DPrototypeNode;
  Transform33: TTransformNode;
  ProtoInstance34: TX3DPrototypeNode;

procedure Initqq3Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'qq3.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['translator'] := 'John Carlson';
X3D0.Meta['created'] := '11 Jan 2015';
X3D0.Meta['modified'] := '05 May 2017';
X3D0.Meta['description'] := '12 extrusions';
X3D0.Meta['identifier'] := 'https://coderextreme.net/x3d/qq3.x3d';
X3D0.Meta['generator'] := 'manual';
Group10 := TGroupNode.Create;
ProtoDeclare11 := CreateEmptyPrototype('Process');
ProtoDeclare11.X3DName := 'Process';
Group13 := TGroupNode.Create;
{ left }
Transform14 := TTransformNode.Create;
Transform14.Scale := Vector3(0.5, 0.5, 0.5);
Shape15 := TShapeNode.Create;
Shape15.X3DName := 'ShapeLeftDown';
Appearance16 := TAppearanceNode.Create;
Material17 := TMaterialNode.Create;
Material17.DiffuseColor := Vector3(0.7, 1, 0);
Appearance16.Material := Material17;
Shape15.Appearance := Appearance16;
Extrusion18 := TExtrusionNode.Create;
Extrusion18.SetSpine([Vector3(-2.5, 0, 0), Vector3(-2, 0, 0), Vector3(-1.5, 0, 0)]);
Extrusion18.CreaseAngle := 0.785;
Extrusion18.SetCrossSection([Vector2(1, 0), Vector2(0.92, -0.38), Vector2(0.71, -0.71), Vector2(0.38, -0.92), Vector2(0, -1), Vector2(-0.38, -0.92), Vector2(-0.71, -0.71), Vector2(-0.92, -0.38), Vector2(-1, 0), Vector2(-0.92, 0.38), Vector2(-0.71, 0.71), Vector2(-0.38, 0.92), Vector2(0, 1), Vector2(0.38, 0.92), Vector2(0.71, 0.71), Vector2(0.92, 0.38), Vector2(1, 0)]);
Shape15.Geometry := Extrusion18;
Transform14.FdChildren.Add(Shape15);
Group13.FdChildren.Add(Transform14);
{ right }
Transform19 := TTransformNode.Create;
Transform19.Scale := Vector3(0.5, 0.5, 0.5);
Shape20 := TShapeNode.Create;
Shape20.X3DName := 'ShapeUpRight';
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
end;

procedure Initqq3Part1;
begin
Material22.DiffuseColor := Vector3(0, 0.7, 1);
Appearance21.Material := Material22;
Shape20.Appearance := Appearance21;
Extrusion23 := TExtrusionNode.Create;
Extrusion23.SetSpine([Vector3(1.5, 0, 0), Vector3(2, 0, 0), Vector3(2.5, 0, 0)]);
Extrusion23.CreaseAngle := 0.785;
Extrusion23.SetCrossSection([Vector2(1, 0), Vector2(0.92, -0.38), Vector2(0.71, -0.71), Vector2(0.38, -0.92), Vector2(0, -1), Vector2(-0.38, -0.92), Vector2(-0.71, -0.71), Vector2(-0.92, -0.38), Vector2(-1, 0), Vector2(-0.92, 0.38), Vector2(-0.71, 0.71), Vector2(-0.38, 0.92), Vector2(0, 1), Vector2(0.38, 0.92), Vector2(0.71, 0.71), Vector2(0.92, 0.38), Vector2(1, 0)]);
Shape20.Geometry := Extrusion23;
Transform19.FdChildren.Add(Shape20);
Group13.FdChildren.Add(Transform19);
{ up }
Transform24 := TTransformNode.Create;
Transform24.Scale := Vector3(0.5, 0.5, 0.5);
Transform24.FdChildren.Add(Shape20);
Group13.FdChildren.Add(Transform24);
{ down }
Transform26 := TTransformNode.Create;
Transform26.Scale := Vector3(0.5, 0.5, 0.5);
Transform26.FdChildren.Add(Shape15);
Group13.FdChildren.Add(Transform26);
ProtoDeclare11.Node.AddChildren([Group13]);
X3D0.AddPrototype(ProtoDeclare11);
Viewpoint28 := TViewpointNode.Create;
Viewpoint28.Description := 'Process pipes';
Viewpoint28.Orientation := Vector4(1, 0, 0, -0.4);
Viewpoint28.Position := Vector3(0, 5, 12);
Group10.FdChildren.Add(Viewpoint28);
Transform29 := TTransformNode.Create;
Transform29.Translation := Vector3(0, -2.5, 0);
ProtoInstance30 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare11);
Transform29.FdChildren.Add(ProtoInstance30.Instantiate);
Group10.FdChildren.Add(Transform29);
Transform31 := TTransformNode.Create;
ProtoInstance32 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare11);
Transform31.FdChildren.Add(ProtoInstance32.Instantiate);
Group10.FdChildren.Add(Transform31);
Transform33 := TTransformNode.Create;
Transform33.Translation := Vector3(0, 2.5, 0);
ProtoInstance34 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare11);
Transform33.FdChildren.Add(ProtoInstance34.Instantiate);
end;

procedure Initqq3Part2;
begin
Group10.FdChildren.Add(Transform33);
X3D0.AddChildren([Group10]);
end;

function Createqq3: TX3DRootNode;
begin
  Initqq3Part0;
  Initqq3Part1;
  Initqq3Part2;
  Result := X3D0;
end;

begin
end.
