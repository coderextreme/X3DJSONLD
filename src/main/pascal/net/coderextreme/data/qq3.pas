unit qq3;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createqq3: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group10: TGroupNode;
X3DPrototype11: TX3DPrototype;
X3DPrototype12: TX3DPrototype;
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
Shape25: TShapeNode;
Transform26: TTransformNode;
Shape27: TShapeNode;
Viewpoint28: TViewpointNode;
Transform29: TTransformNode;
X3DPrototype30: TX3DPrototypeNode;
Transform31: TTransformNode;
X3DPrototype32: TX3DPrototypeNode;
Transform33: TTransformNode;
X3DPrototype34: TX3DPrototypeNode;

procedure Initqq3Part0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'qq3.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['translator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['created'] := '11 Jan 2015';
{ METHOD .Meta }
X3D0.Meta['modified'] := '05 May 2017';
{ METHOD .Meta }
X3D0.Meta['description'] := '12 extrusions';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/x3d/qq3.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
{ METHOD .Head }
Group10 := TGroupNode.Create;;
X3DPrototype11 := TX3DPrototype.Create;;
X3DPrototype12 := TX3DPrototype.Create;;
Group13 := TGroupNode.Create;;
{ left }
Transform14 := TTransformNode.Create;;
Transform14.Scale := Vector3(0.5,0.5,0.5);
Shape15 := TShapeNode.Create;;
Appearance16 := TAppearanceNode.Create;;
Material17 := TMaterialNode.Create;;
Material17.DiffuseColor := Vector3(0.7,1,0);
{ METHOD .SetMaterial }
Appearance16.Material := Material17;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape15.Appearance := Appearance16;
Extrusion18 := TExtrusionNode.Create;;
Extrusion18.SetSpine([Vector3(-2.5,0,0),Vector3(-2,0,0),Vector3(-1.5,0,0)]);
Extrusion18.CreaseAngle := 0.785;
Extrusion18.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape15.Geometry := Extrusion18;
{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(Shape15);
{ METHOD .FdChildren.Add }
Group13.FdChildren.Add(Transform14);
end;

procedure Initqq3Part1;
begin

{ right }
Transform19 := TTransformNode.Create;;
Transform19.Scale := Vector3(0.5,0.5,0.5);
Shape20 := TShapeNode.Create;;
Appearance21 := TAppearanceNode.Create;;
Material22 := TMaterialNode.Create;;
Material22.DiffuseColor := Vector3(0,0.7,1);
{ METHOD .SetMaterial }
Appearance21.Material := Material22;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape20.Appearance := Appearance21;
Extrusion23 := TExtrusionNode.Create;;
Extrusion23.SetSpine([Vector3(1.5,0,0),Vector3(2,0,0),Vector3(2.5,0,0)]);
Extrusion23.CreaseAngle := 0.785;
Extrusion23.SetCrossSection([Vector2(1,0),Vector2(0.92,-0.38),Vector2(0.71,-0.71),Vector2(0.38,-0.92),Vector2(0,-1),Vector2(-0.38,-0.92),Vector2(-0.71,-0.71),Vector2(-0.92,-0.38),Vector2(-1,0),Vector2(-0.92,0.38),Vector2(-0.71,0.71),Vector2(-0.38,0.92),Vector2(0,1),Vector2(0.38,0.92),Vector2(0.71,0.71),Vector2(0.92,0.38),Vector2(1,0)]);
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape20.Geometry := Extrusion23;
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Group13.FdChildren.Add(Transform19);
{ up }
Transform24 := TTransformNode.Create;;
Transform24.Scale := Vector3(0.5,0.5,0.5);
{ METHOD .FdChildren.Add }
Transform24.FdChildren.Add(Shape20);
{ METHOD .FdChildren.Add }
Group13.FdChildren.Add(Transform24);
{ down }
Transform26 := TTransformNode.Create;;
Transform26.Scale := Vector3(0.5,0.5,0.5);
{ METHOD .FdChildren.Add }
Transform26.FdChildren.Add(Shape15);
{ METHOD .FdChildren.Add }
Group13.FdChildren.Add(Transform26);
{ METHOD .AddGroup }
X3DPrototype12.AddChildren([Group13]);
{ METHOD .AddX3DPrototype }
X3DPrototype11.AddX3DPrototype([X3DPrototype12]);
{ METHOD .AddX3DPrototype }
Group10.AddX3DPrototype([X3DPrototype11]);
Viewpoint28 := TViewpointNode.Create;;
Viewpoint28.Description := 'Process pipes';
Viewpoint28.Orientation := Vector4(1,0,0,-0.4);
Viewpoint28.Position := Vector3(0,5,12);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Viewpoint28);
Transform29 := TTransformNode.Create;
end;

procedure Initqq3Part2;
begin
;
Transform29.Translation := Vector3(0,-2.5,0);
X3DPrototype30 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Transform29.AddX3DPrototype([X3DPrototype30]);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform29);
Transform31 := TTransformNode.Create;;
X3DPrototype32 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Transform31.AddX3DPrototype([X3DPrototype32]);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform31);
Transform33 := TTransformNode.Create;;
Transform33.Translation := Vector3(0,2.5,0);
X3DPrototype34 := TX3DPrototypeNode;
{ METHOD .AddX3DPrototype }
Transform33.AddX3DPrototype([X3DPrototype34]);
{ METHOD .FdChildren.Add }
Group10.FdChildren.Add(Transform33);
{ METHOD .AddGroup }
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
