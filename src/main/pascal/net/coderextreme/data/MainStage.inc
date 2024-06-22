function MainStage: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group13: TGroupNode;
WorldInfo14: TWorldInfoNode;
NavigationInfo15: TNavigationInfoNode;
DirectionalLight16: TDirectionalLightNode;
DirectionalLight17: TDirectionalLightNode;
DirectionalLight18: TDirectionalLightNode;
Viewpoint19: TViewpointNode;
Viewpoint20: TViewpointNode;
Viewpoint21: TViewpointNode;
Viewpoint22: TViewpointNode;
Viewpoint23: TViewpointNode;
Viewpoint24: TViewpointNode;
Group25: TGroupNode;
Transform26: TTransformNode;
Inline27: TInlineNode;
Transform28: TTransformNode;
Shape29: TShapeNode;
Appearance30: TAppearanceNode;
Material31: TMaterialNode;
Box32: TBoxNode;
Transform33: TTransformNode;
Shape34: TShapeNode;
Appearance35: TAppearanceNode;
Material36: TMaterialNode;
IndexedLineSet37: TIndexedLineSetNode;
Coordinate38: TCoordinateNode;
Transform39: TTransformNode;
Shape40: TShapeNode;
Appearance41: TAppearanceNode;
IndexedLineSet42: TIndexedLineSetNode;
Transform43: TTransformNode;
Shape44: TShapeNode;
Appearance45: TAppearanceNode;
IndexedLineSet46: TIndexedLineSetNode;
Transform47: TTransformNode;
Shape48: TShapeNode;
Appearance49: TAppearanceNode;
IndexedLineSet50: TIndexedLineSetNode;
Transform51: TTransformNode;
Shape52: TShapeNode;
Appearance53: TAppearanceNode;
IndexedLineSet54: TIndexedLineSetNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'MainStage.x3d';
X3D0.Meta['description'] := 'Main stage for HAnim scene Winter and Spring.';
X3D0.Meta['creator'] := 'Joe Williams';
X3D0.Meta['translator'] := 'Joe Williams and Don Brutzman';
X3D0.Meta['created'] := '25 May 2023';
X3D0.Meta['modified'] := '27 May 2023';
X3D0.Meta['reference'] := 'originals/0MainStageScene0525.x3dv';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group13 := TGroupNode.Create;
WorldInfo14 := TWorldInfoNode.Create;
WorldInfo14.Title := 'MainStage.x3d';
{ .AddChildren }
Group13.AddChildren([WorldInfo14]);
NavigationInfo15 := TNavigationInfoNode.Create;
NavigationInfo15.Headlight := False;
{ .AddChildren }
Group13.AddChildren([NavigationInfo15]);
DirectionalLight16 := TDirectionalLightNode.Create;
DirectionalLight16.AmbientIntensity := 1;
DirectionalLight16.Direction := Vector3(-0.5,-0.5,-0.5);
DirectionalLight16.Global := True;
{ .AddChildren }
Group13.AddChildren([DirectionalLight16]);
DirectionalLight17 := TDirectionalLightNode.Create;
DirectionalLight17.AmbientIntensity := 1;
DirectionalLight17.Direction := Vector3(-1,-1,-1);
DirectionalLight17.Global := True;
{ .AddChildren }
Group13.AddChildren([DirectionalLight17]);
DirectionalLight18 := TDirectionalLightNode.Create;
DirectionalLight18.AmbientIntensity := 1;
DirectionalLight18.Direction := Vector3(1,1,-1);
DirectionalLight18.Global := True;
DirectionalLight18.Intensity := 0.5;
{ .AddChildren }
Group13.AddChildren([DirectionalLight18]);
Viewpoint19 := TViewpointNode.Create;
Viewpoint19.Description := 'hanim_Stage Front View';
Viewpoint19.Orientation := Vector4(1,0,0,-0.449999988);
Viewpoint19.Position := Vector3(0,4,10);
{ .AddChildren }
Group13.AddChildren([Viewpoint19]);
Viewpoint20 := TViewpointNode.Create;
Viewpoint20.Description := 'hanim_Inclined View';
Viewpoint20.Orientation := Vector4(-0.112999998,0.992999971,0.034699999,0.671000004);
Viewpoint20.Position := Vector3(2.619999886,1.049999952,4.059999943);
{ .AddChildren }
Group13.AddChildren([Viewpoint20]);
Viewpoint21 := TViewpointNode.Create;
Viewpoint21.Description := 'hanim_Stage Front View';
Viewpoint21.Position := Vector3(0,1,5);
{ .AddChildren }
Group13.AddChildren([Viewpoint21]);
Viewpoint22 := TViewpointNode.Create;
Viewpoint22.Description := 'hanim_feet View';
Viewpoint22.Orientation := Vector4(1,0,0,1.570000052);
Viewpoint22.Position := Vector3(0,-10,0);
{ .AddChildren }
Group13.AddChildren([Viewpoint22]);
Viewpoint23 := TViewpointNode.Create;
Viewpoint23.Description := 'hanim_Head Top View';
Viewpoint23.Orientation := Vector4(1,0,0,-1.570000052);
Viewpoint23.Position := Vector3(0,15,0);
{ .AddChildren }
Group13.AddChildren([Viewpoint23]);
Viewpoint24 := TViewpointNode.Create;
Viewpoint24.Description := 'hanim_Head Top View';
Viewpoint24.Orientation := Vector4(1,0,0,-1.100000024);
Viewpoint24.Position := Vector3(0,8,3);
{ .AddChildren }
Group13.AddChildren([Viewpoint24]);
Group25 := TGroupNode.Create;
Transform26 := TTransformNode.Create;
Transform26.Scale := Vector3(0.174999997,0.174999997,0.174999997);
Inline27 := TInlineNode.Create;
Inline27.SetUrl(['JointCoordinateAxes.x3dv']);
{ .AddChildren }
Transform26.AddChildren([Inline27]);
{ .AddChildren }
Group25.AddChildren([Transform26]);
Transform28 := TTransformNode.Create;
Transform28.Scale := Vector3(1,0.01,1);
Transform28.Translation := Vector3(0,-0.01,0);
Shape29 := TShapeNode.Create;
Appearance30 := TAppearanceNode.Create;
Material31 := TMaterialNode.Create;
Material31.Transparency := 0.6;
{ .SetMaterial }
Appearance30.Material := Material31;
{ .SetAppearance }
Shape29.Appearance := Appearance30;
Box32 := TBoxNode.Create;
Box32.Size := Vector3(9,1,9);
{ .SetGeometry }
Shape29.Geometry := Box32;
{ .AddChild }
Transform28.AddChildren([Shape29]);
Transform33 := TTransformNode.Create;
Shape34 := TShapeNode.Create;
Appearance35 := TAppearanceNode.Create;
Material36 := TMaterialNode.Create;
Material36.AmbientIntensity := 1;
Material36.DiffuseColor := Vector3(0.699999988,0,0.899999976);
Material36.EmissiveColor := Vector3(0.449999988,0.449999988,1);
Material36.Shininess := 1;
Material36.SpecularColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance35.Material := Material36;
{ .SetAppearance }
Shape34.Appearance := Appearance35;
IndexedLineSet37 := TIndexedLineSetNode.Create;
IndexedLineSet37.SetCoordIndex([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
Coordinate38 := TCoordinateNode.Create;
Coordinate38.SetPoint([Vector3(1,0,0),Vector3(0.995000005,0,-0.104999997),Vector3(0.978999972,0,-0.208000004),Vector3(0.950999975,0,-0.308999985),Vector3(0.913999975,0,-0.407000005),Vector3(0.865999997,0,-0.5),Vector3(0.809000015,0,-0.588),Vector3(0.742999971,0,-0.66900003),Vector3(0.66900003,0,-0.742999971),Vector3(0.588,0,-0.809000015),Vector3(0.5,0,-0.865999997),Vector3(0.407000005,0,-0.913999975),Vector3(0.308999985,0,-0.950999975),Vector3(0.208000004,0,-0.977999985),Vector3(0.104999997,0,-0.995000005),Vector3(0,0,-1),Vector3(-0.104999997,0,-0.994521976),Vector3(-0.208000004,0,-0.977999985),Vector3(-0.308999985,0,-0.950999975),Vector3(-0.407000005,0,-0.913999975),Vector3(-0.5,0,-0.865999997),Vector3(-0.588,0,-0.809000015),Vector3(-0.66900003,0,-0.742999971),Vector3(-0.742999971,0,-0.66900003),Vector3(-0.809000015,0,-0.588),Vector3(-0.865999997,0,-0.5),Vector3(-0.913999975,0,-0.407000005),Vector3(-0.950999975,0,-0.308999985),Vector3(-0.977999985,0,-0.208000004),Vector3(-0.995000005,0,-0.104999997),Vector3(-1,0,0),Vector3(-0.995000005,0,0.104999997),Vector3(-0.977999985,0,0.208000004),Vector3(-0.950999975,0,0.308999985),Vector3(-0.913999975,0,0.407000005),Vector3(-0.865999997,0,0.5),Vector3(-0.809000015,0,0.588),Vector3(-0.742999971,0,0.66900003),Vector3(-0.66900003,0,0.742999971),Vector3(-0.588,0,0.809000015),Vector3(-0.5,0,0.865999997),Vector3(-0.407000005,0,0.913999975),Vector3(-0.308999985,0,0.950999975),Vector3(-0.208000004,0,0.977999985),Vector3(-0.104999997,0,0.995000005),Vector3(0,0,1),Vector3(0.104999997,0,0.995000005),Vector3(0.208000004,0,0.977999985),Vector3(0.308999985,0,0.950999975),Vector3(0.407000005,0,0.913999975),Vector3(0.5,0,0.865999997),Vector3(0.588,0,0.809000015),Vector3(0.66900003,0,0.742999971),Vector3(0.742999971,0,0.66900003),Vector3(0.809000015,0,0.588),Vector3(0.865999997,0,0.5),Vector3(0.913999975,0,0.407000005),Vector3(0.950999975,0,0.308999985),Vector3(0.977999985,0,0.208000004),Vector3(0.995000005,0,0.104000002),Vector3(1,0,0)]);
{ .SetCoord }
IndexedLineSet37.Coord := Coordinate38;
{ .SetGeometry }
Shape34.Geometry := IndexedLineSet37;
{ .AddChild }
Transform33.AddChildren([Shape34]);
{ .AddChildren }
Transform28.AddChildren([Transform33]);
Transform39 := TTransformNode.Create;
Transform39.Scale := Vector3(0.5,1,0.5);
Shape40 := TShapeNode.Create;
Appearance41 := TAppearanceNode.Create;
Appearance41 := Appearance35;
{ .SetAppearance }
Shape40.Appearance := Appearance41;
IndexedLineSet42 := TIndexedLineSetNode.Create;
IndexedLineSet42 := IndexedLineSet37;
{ .SetGeometry }
Shape40.Geometry := IndexedLineSet42;
{ .AddChild }
Transform39.AddChildren([Shape40]);
{ .AddChildren }
Transform28.AddChildren([Transform39]);
Transform43 := TTransformNode.Create;
Transform43.Scale := Vector3(0.25,1,0.25);
Shape44 := TShapeNode.Create;
Appearance45 := TAppearanceNode.Create;
Appearance45 := Appearance35;
{ .SetAppearance }
Shape44.Appearance := Appearance45;
IndexedLineSet46 := TIndexedLineSetNode.Create;
IndexedLineSet46 := IndexedLineSet37;
{ .SetGeometry }
Shape44.Geometry := IndexedLineSet46;
{ .AddChild }
Transform43.AddChildren([Shape44]);
{ .AddChildren }
Transform28.AddChildren([Transform43]);
Transform47 := TTransformNode.Create;
Transform47.Scale := Vector3(2,1,2);
Shape48 := TShapeNode.Create;
Appearance49 := TAppearanceNode.Create;
Appearance49 := Appearance35;
{ .SetAppearance }
Shape48.Appearance := Appearance49;
IndexedLineSet50 := TIndexedLineSetNode.Create;
IndexedLineSet50 := IndexedLineSet37;
{ .SetGeometry }
Shape48.Geometry := IndexedLineSet50;
{ .AddChild }
Transform47.AddChildren([Shape48]);
{ .AddChildren }
Transform28.AddChildren([Transform47]);
Transform51 := TTransformNode.Create;
Transform51.Scale := Vector3(3,1,3);
Shape52 := TShapeNode.Create;
Appearance53 := TAppearanceNode.Create;
Appearance53 := Appearance35;
{ .SetAppearance }
Shape52.Appearance := Appearance53;
IndexedLineSet54 := TIndexedLineSetNode.Create;
IndexedLineSet54 := IndexedLineSet37;
{ .SetGeometry }
Shape52.Geometry := IndexedLineSet54;
{ .AddChild }
Transform51.AddChildren([Shape52]);
{ .AddChildren }
Transform28.AddChildren([Transform51]);
{ .AddChildren }
Group25.AddChildren([Transform28]);
{ .AddChildren }
Group13.AddChildren([Group25]);
{ .AddGroup }
X3D0.AddChildren([Group13]);
Result := X3D0;
end;
