function smiley2: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group2: TGroupNode;
Transform3: TTransformNode;
Shape4: TShapeNode;
Appearance5: TAppearanceNode;
Material6: TMaterialNode;
ImageTexture7: TImageTextureNode;
Sphere8: TSphereNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
Group2 := TGroupNode.Create;
Transform3 := TTransformNode.Create;
Transform3.Scale := Vector3(10,10,1);
Transform3.Rotation := Vector4(1,0,0,3.14);
Shape4 := TShapeNode.Create;
Appearance5 := TAppearanceNode.Create;
Material6 := TMaterialNode.Create;
Material6.DiffuseColor := Vector3(0.5,0.8,0.5);
{ .SetMaterial }
Appearance5.Material := Material6;
ImageTexture7 := TImageTextureNode.Create;
ImageTexture7.SetUrl(['./face2.jpg']);
{ .SetTexture }
Appearance5.Texture := ImageTexture7;
{ .SetAppearance }
Shape4.Appearance := Appearance5;
Sphere8 := TSphereNode.Create;
{ .SetGeometry }
Shape4.Geometry := Sphere8;
{ .AddChild }
Transform3.AddChildren([Shape4]);
{ .AddChildren }
Group2.AddChildren([Transform3]);
{ .AddGroup }
X3D0.AddChildren([Group2]);
Result := X3D0;
end;
