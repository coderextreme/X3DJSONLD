function HAnimModelsHandsFeet: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group18: TGroupNode;
WorldInfo19: TWorldInfoNode;
Viewpoint20: TViewpointNode;
Viewpoint21: TViewpointNode;
Transform22: TTransformNode;
Inline23: TInlineNode;
Transform24: TTransformNode;
Inline25: TInlineNode;
Transform26: TTransformNode;
Inline27: TInlineNode;
Transform28: TTransformNode;
Transform29: TTransformNode;
Inline30: TInlineNode;
Transform31: TTransformNode;
Transform32: TTransformNode;
Inline33: TInlineNode;
Transform34: TTransformNode;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
X3D0.Meta['title'] := 'HAnimModelsHandsFeet.x3d';
X3D0.Meta['description'] := 'Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0';
X3D0.Meta['creator'] := 'Kwan Hee YOO and Don Brutzman';
X3D0.Meta['created'] := '8 February 2015';
X3D0.Meta['modified'] := 'Mon, 15 Sep 2025 05:20:09 GMT';
X3D0.Meta['warning'] := 'not yet to scale';
X3D0.Meta['warning'] := 'TODO will X3D HAnim component add a new level to support LOA-4 functionality?';
X3D0.Meta['TODO'] := 'how to have HAnimHumanoid root with Inline IMPORT/EXPORT of limbs?';
X3D0.Meta['Image'] := 'HAnimModelsHandsFeet.png';
X3D0.Meta['Image'] := 'HAnimModelsHandsFeetWithFour1mGrids.png';
X3D0.Meta['reference'] := 'https://www.web3d.org/working-groups/humanoid-animation-HAnim';
X3D0.Meta['reference'] := 'https://www.web3d.org/documents/specifications/19774/V2.0';
X3D0.Meta['reference'] := 'https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/hanim.html';
X3D0.Meta['subject'] := 'X3D HAnim humanoid animation';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d';
Group18 := TGroupNode.Create;
WorldInfo19 := TWorldInfoNode.Create;
WorldInfo19.Title := 'HAnimModelsHandsFeet.x3d';
{ .AddChildren }
Group18.AddChildren([WorldInfo19]);
Viewpoint20 := TViewpointNode.Create;
Viewpoint20.Description := 'Hands and feet 10m';
{ .AddChildren }
Group18.AddChildren([Viewpoint20]);
Viewpoint21 := TViewpointNode.Create;
Viewpoint21.Description := 'Hands and feet 1.7m';
Viewpoint21.Position := Vector3(0,0,1.7);
{ .AddChildren }
Group18.AddChildren([Viewpoint21]);
Transform22 := TTransformNode.Create;
Transform22.Translation := Vector3(-1,1,0);
Inline23 := TInlineNode.Create;
Inline23.SetUrl(['HAnimModelHandLeft.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d','HAnimModelHandLeft.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl']);
{ .AddChildren }
Transform22.AddChildren([Inline23]);
Transform24 := TTransformNode.Create;
Transform24.Scale := Vector3(0.1,0.1,0.1);
Inline25 := TInlineNode.Create;
Inline25.SetUrl(['../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d','https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d','../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl','https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl']);
{ .AddChildren }
Transform24.AddChildren([Inline25]);
{ .AddChildren }
Transform22.AddChildren([Transform24]);
{ .AddChildren }
Group18.AddChildren([Transform22]);
Transform26 := TTransformNode.Create;
Transform26.Translation := Vector3(1,1,0);
Inline27 := TInlineNode.Create;
Inline27.SetUrl(['HAnimModelHandRight.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d','HAnimModelHandRight.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl']);
{ .AddChildren }
Transform26.AddChildren([Inline27]);
Transform28 := TTransformNode.Create;
Transform28 := Transform24;
{ .AddChildren }
Transform26.AddChildren([Transform28]);
{ .AddChildren }
Group18.AddChildren([Transform26]);
Transform29 := TTransformNode.Create;
Transform29.Translation := Vector3(-1,-1,0);
Inline30 := TInlineNode.Create;
Inline30.SetUrl(['HAnimModelFootLeft.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d','HAnimModelFootLeft.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl']);
{ .AddChildren }
Transform29.AddChildren([Inline30]);
Transform31 := TTransformNode.Create;
Transform31 := Transform24;
{ .AddChildren }
Transform29.AddChildren([Transform31]);
{ .AddChildren }
Group18.AddChildren([Transform29]);
Transform32 := TTransformNode.Create;
Transform32.Translation := Vector3(1,-1,0);
Inline33 := TInlineNode.Create;
Inline33.SetUrl(['HAnimModelFootRight.x3d','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d','HAnimModelFootRight.wrl','https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl']);
{ .AddChildren }
Transform32.AddChildren([Inline33]);
Transform34 := TTransformNode.Create;
Transform34 := Transform24;
{ .AddChildren }
Transform32.AddChildren([Transform34]);
{ .AddChildren }
Group18.AddChildren([Transform32]);
{ .AddGroup }
X3D0.AddChildren([Group18]);
Result := X3D0;
end;
