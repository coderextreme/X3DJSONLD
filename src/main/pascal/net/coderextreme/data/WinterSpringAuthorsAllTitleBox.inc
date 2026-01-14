function WinterSpringAuthorsAllTitleBox: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group10: TGroupNode;
WorldInfo11: TWorldInfoNode;
Viewpoint12: TViewpointNode;
Transform13: TTransformNode;
Shape14: TShapeNode;
Appearance15: TAppearanceNode;
Material16: TMaterialNode;
ImageTexture17: TImageTextureNode;
Box18: TBoxNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'WinterAndSpringAuthorsAllTitleBox.x3d';
X3D0.Meta['description'] := 'Credits for scene authors.';
X3D0.Meta['creator'] := 'Carol McDonald';
X3D0.Meta['translator'] := 'Joe Williams and Don Brutzman';
X3D0.Meta['created'] := '26 June 2023';
X3D0.Meta['modified'] := 'Mon, 15 Sep 2025 05:21:02 GMT';
X3D0.Meta['reference'] := 'https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/Flower.Set.x3d';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringAuthorsAllTitleBox.x3d';
Group10 := TGroupNode.Create;
WorldInfo11 := TWorldInfoNode.Create;
WorldInfo11.Title := 'WinterAndSpringAuthorsAllTitleBox.x3d';
{ .AddChildren }
Group10.AddChildren([WorldInfo11]);
Viewpoint12 := TViewpointNode.Create;
Viewpoint12.Description := 'Look at Authors title';
Viewpoint12.Position := Vector3(10,11,0);
Viewpoint12.Orientation := Vector4(-0.15,0,0,0.2);
{ .AddChildren }
Group10.AddChildren([Viewpoint12]);
Transform13 := TTransformNode.Create;
Transform13.Translation := Vector3(10,10,-5);
Shape14 := TShapeNode.Create;
Appearance15 := TAppearanceNode.Create;
Material16 := TMaterialNode.Create;
{ .SetMaterial }
Appearance15.Material := Material16;
ImageTexture17 := TImageTextureNode.Create;
ImageTexture17.SetUrl(['images/WSAuthorsAll.png','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WSAuthorsAll.png']);
{ .SetTexture }
Appearance15.Texture := ImageTexture17;
{ .SetAppearance }
Shape14.Appearance := Appearance15;
Box18 := TBoxNode.Create;
Box18.Size := Vector3(4,3,0.25);
{ .SetGeometry }
Shape14.Geometry := Box18;
{ .AddChild }
Transform13.AddChildren([Shape14]);
{ .AddChildren }
Group10.AddChildren([Transform13]);
{ .AddGroup }
X3D0.AddChildren([Group10]);
Result := X3D0;
end;
