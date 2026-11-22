unit JoeHAnimKick1a_Final;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateJoeHAnimKick1a_Final: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group6: TGroupNode;
WorldInfo7: TWorldInfoNode;
NavigationInfo8: TNavigationInfoNode;
Viewpoint9: TViewpointNode;
Viewpoint10: TViewpointNode;
Viewpoint11: TViewpointNode;
Viewpoint12: TViewpointNode;
Viewpoint13: TViewpointNode;
Group14: TGroupNode;
HAnimHumanoid15: THAnimHumanoidNode;
HAnimJoint16: THAnimJointNode;
HAnimSegment17: THAnimSegmentNode;
HAnimSite18: THAnimSiteNode;
Transform19: TTransformNode;
Inline20: TInlineNode;
Viewpoint21: TViewpointNode;
HAnimJoint22: THAnimJointNode;
HAnimJoint23: THAnimJointNode;
HAnimJoint24: THAnimJointNode;
HAnimJoint25: THAnimJointNode;
HAnimJoint26: THAnimJointNode;
HAnimJoint27: THAnimJointNode;
HAnimJoint28: THAnimJointNode;
HAnimJoint29: THAnimJointNode;
HAnimJoint30: THAnimJointNode;
HAnimJoint31: THAnimJointNode;
HAnimJoint32: THAnimJointNode;
HAnimJoint33: THAnimJointNode;
HAnimJoint34: THAnimJointNode;
HAnimJoint35: THAnimJointNode;
HAnimJoint36: THAnimJointNode;
HAnimJoint37: THAnimJointNode;
HAnimJoint38: THAnimJointNode;
HAnimJoint39: THAnimJointNode;
HAnimJoint40: THAnimJointNode;
HAnimJoint41: THAnimJointNode;
HAnimJoint42: THAnimJointNode;
HAnimJoint43: THAnimJointNode;
HAnimJoint44: THAnimJointNode;
HAnimJoint45: THAnimJointNode;
HAnimJoint46: THAnimJointNode;
HAnimJoint47: THAnimJointNode;
HAnimJoint48: THAnimJointNode;
HAnimJoint49: THAnimJointNode;
HAnimJoint50: THAnimJointNode;
HAnimJoint51: THAnimJointNode;
HAnimJoint52: THAnimJointNode;
HAnimJoint53: THAnimJointNode;
HAnimJoint54: THAnimJointNode;
HAnimJoint55: THAnimJointNode;
HAnimJoint56: THAnimJointNode;
HAnimJoint57: THAnimJointNode;
HAnimJoint58: THAnimJointNode;
HAnimJoint59: THAnimJointNode;
HAnimJoint60: THAnimJointNode;
HAnimJoint61: THAnimJointNode;
HAnimJoint62: THAnimJointNode;
HAnimJoint63: THAnimJointNode;
HAnimJoint64: THAnimJointNode;
HAnimJoint65: THAnimJointNode;
HAnimJoint66: THAnimJointNode;
HAnimJoint67: THAnimJointNode;
HAnimJoint68: THAnimJointNode;
HAnimJoint69: THAnimJointNode;
HAnimJoint70: THAnimJointNode;
HAnimJoint71: THAnimJointNode;
HAnimJoint72: THAnimJointNode;
HAnimJoint73: THAnimJointNode;
HAnimJoint74: THAnimJointNode;
HAnimJoint75: THAnimJointNode;
HAnimJoint76: THAnimJointNode;
HAnimJoint77: THAnimJointNode;
HAnimJoint78: THAnimJointNode;
HAnimJoint79: THAnimJointNode;
HAnimJoint80: THAnimJointNode;
HAnimJoint81: THAnimJointNode;
HAnimJoint82: THAnimJointNode;
HAnimJoint83: THAnimJointNode;
HAnimJoint84: THAnimJointNode;
HAnimJoint85: THAnimJointNode;
HAnimJoint86: THAnimJointNode;
HAnimJoint87: THAnimJointNode;
HAnimJoint88: THAnimJointNode;
HAnimJoint89: THAnimJointNode;
HAnimJoint90: THAnimJointNode;
HAnimJoint91: THAnimJointNode;
HAnimJoint92: THAnimJointNode;
HAnimJoint93: THAnimJointNode;
HAnimJoint94: THAnimJointNode;
HAnimJoint95: THAnimJointNode;
HAnimJoint96: THAnimJointNode;
HAnimJoint97: THAnimJointNode;
HAnimJoint98: THAnimJointNode;
HAnimJoint99: THAnimJointNode;
HAnimJoint100: THAnimJointNode;
HAnimJoint101: THAnimJointNode;
HAnimJoint102: THAnimJointNode;
HAnimJoint103: THAnimJointNode;
HAnimJoint104: THAnimJointNode;
HAnimJoint105: THAnimJointNode;
HAnimJoint106: THAnimJointNode;
HAnimJoint107: THAnimJointNode;
HAnimJoint108: THAnimJointNode;
HAnimJoint109: THAnimJointNode;
HAnimJoint110: THAnimJointNode;
HAnimJoint111: THAnimJointNode;
HAnimJoint112: THAnimJointNode;
HAnimJoint113: THAnimJointNode;
HAnimJoint114: THAnimJointNode;
HAnimJoint115: THAnimJointNode;
HAnimJoint116: THAnimJointNode;
HAnimJoint117: THAnimJointNode;
HAnimJoint118: THAnimJointNode;
HAnimJoint119: THAnimJointNode;
HAnimJoint120: THAnimJointNode;
HAnimJoint121: THAnimJointNode;
HAnimJoint122: THAnimJointNode;
HAnimJoint123: THAnimJointNode;
HAnimJoint124: THAnimJointNode;
HAnimJoint125: THAnimJointNode;
HAnimJoint126: THAnimJointNode;
HAnimJoint127: THAnimJointNode;
HAnimJoint128: THAnimJointNode;
HAnimJoint129: THAnimJointNode;
HAnimJoint130: THAnimJointNode;
HAnimJoint131: THAnimJointNode;
HAnimJoint132: THAnimJointNode;
HAnimJoint133: THAnimJointNode;
HAnimJoint134: THAnimJointNode;
HAnimJoint135: THAnimJointNode;
HAnimJoint136: THAnimJointNode;
HAnimJoint137: THAnimJointNode;
HAnimJoint138: THAnimJointNode;
HAnimJoint139: THAnimJointNode;
HAnimJoint140: THAnimJointNode;
HAnimJoint141: THAnimJointNode;
HAnimJoint142: THAnimJointNode;
HAnimJoint143: THAnimJointNode;
HAnimJoint144: THAnimJointNode;
HAnimJoint145: THAnimJointNode;
HAnimJoint146: THAnimJointNode;
HAnimJoint147: THAnimJointNode;
HAnimJoint148: THAnimJointNode;
HAnimJoint149: THAnimJointNode;
HAnimJoint150: THAnimJointNode;
HAnimJoint151: THAnimJointNode;
HAnimJoint152: THAnimJointNode;
HAnimJoint153: THAnimJointNode;
HAnimJoint154: THAnimJointNode;
HAnimJoint155: THAnimJointNode;
HAnimJoint156: THAnimJointNode;
HAnimJoint157: THAnimJointNode;
HAnimJoint158: THAnimJointNode;
HAnimJoint159: THAnimJointNode;
HAnimJoint160: THAnimJointNode;
HAnimJoint161: THAnimJointNode;
HAnimJoint162: THAnimJointNode;
HAnimJoint163: THAnimJointNode;
HAnimJoint164: THAnimJointNode;
HAnimJoint165: THAnimJointNode;
HAnimJoint166: THAnimJointNode;
HAnimJoint167: THAnimJointNode;
HAnimJoint168: THAnimJointNode;
HAnimJoint169: THAnimJointNode;
HAnimJoint170: THAnimJointNode;
HAnimJoint171: THAnimJointNode;
HAnimJoint172: THAnimJointNode;
HAnimJoint173: THAnimJointNode;
HAnimJoint174: THAnimJointNode;
HAnimJoint175: THAnimJointNode;
HAnimJoint176: THAnimJointNode;
HAnimJoint177: THAnimJointNode;
HAnimJoint178: THAnimJointNode;
HAnimJoint179: THAnimJointNode;
HAnimJoint180: THAnimJointNode;
HAnimJoint181: THAnimJointNode;
HAnimJoint182: THAnimJointNode;
HAnimJoint183: THAnimJointNode;
HAnimJoint184: THAnimJointNode;
HAnimJoint185: THAnimJointNode;
HAnimJoint186: THAnimJointNode;
HAnimJoint187: THAnimJointNode;
HAnimJoint188: THAnimJointNode;
HAnimJoint189: THAnimJointNode;
HAnimJoint190: THAnimJointNode;
HAnimJoint191: THAnimJointNode;
HAnimJoint192: THAnimJointNode;
HAnimJoint193: THAnimJointNode;
HAnimJoint194: THAnimJointNode;
HAnimJoint195: THAnimJointNode;
HAnimJoint196: THAnimJointNode;
HAnimJoint197: THAnimJointNode;
HAnimJoint198: THAnimJointNode;
Coordinate199: TCoordinateNode;
Shape200: TShapeNode;
Appearance201: TAppearanceNode;
Material202: TMaterialNode;
ImageTexture203: TImageTextureNode;
IndexedFaceSet204: TIndexedFaceSetNode;
Coordinate205: TCoordinateNode;
Transform206: TTransformNode;
Shape207: TShapeNode;
Appearance208: TAppearanceNode;
Material209: TMaterialNode;
ImageTexture210: TImageTextureNode;
IndexedFaceSet211: TIndexedFaceSetNode;
Coordinate212: TCoordinateNode;
Viewpoint213: TViewpointNode;
Transform214: TTransformNode;
Inline215: TInlineNode;
Transform216: TTransformNode;
Shape217: TShapeNode;
Appearance218: TAppearanceNode;
Material219: TMaterialNode;
IndexedLineSet220: TIndexedLineSetNode;
Coordinate221: TCoordinateNode;
Transform222: TTransformNode;
Shape223: TShapeNode;
Appearance224: TAppearanceNode;
Material225: TMaterialNode;
IndexedLineSet226: TIndexedLineSetNode;
Transform227: TTransformNode;
Shape228: TShapeNode;
Appearance229: TAppearanceNode;
Material230: TMaterialNode;
IndexedLineSet231: TIndexedLineSetNode;

procedure InitJoeHAnimKick1a_FinalPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['HAnim'] := 1;
{ METHOD .Component }
X3D0.Meta['Joe'] := 'No Reservations 20121221 20040109 x3d/hanim';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'x3d-tidy V2.2.3, https://www.npmjs.com/package/x3d-tidy';
{ METHOD .Meta }
X3D0.Meta['modified'] := 'Wed, 17 Sep 2025 06:43:47 GMT';
{ METHOD .Meta }
{ METHOD .Head }
Group6 := TGroupNode.Create;
WorldInfo7 := TWorldInfoNode.Create;
WorldInfo7.Title := 'HANIM 2 LOA3 Skeleton and Skin sites and feature points for Joe_ by Joe';
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(WorldInfo7);
NavigationInfo8 := TNavigationInfoNode.Create;
NavigationInfo8.SetType(['FLY','ANY']);
NavigationInfo8.Speed := 2.5;
NavigationInfo8.Headlight := False;
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(NavigationInfo8);
Viewpoint9 := TViewpointNode.Create;
Viewpoint9.Description := 'Joe_Inclined View';
Viewpoint9.Position := Vector3(1.62,1.05,3.06);
Viewpoint9.Orientation := Vector4(-0.113,0.993,0.0347,0.671);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Viewpoint9);
Viewpoint10 := TViewpointNode.Create;
Viewpoint10.Description := 'Scene_Front View';
Viewpoint10.Position := Vector3(0,0.8,2.58);
Viewpoint10.CenterOfRotation := Vector3(0,0.8,0);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Viewpoint10);
Viewpoint11 := TViewpointNode.Create;
Viewpoint11.Description := 'Scene_Side View';
Viewpoint11.Position := Vector3(2.6,0.5,0);
Viewpoint11.Orientation := Vector4(0,1,0,1.5708);
Viewpoint11.CenterOfRotation := Vector3(0,0.8,0);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Viewpoint11);
Viewpoint12 := TViewpointNode.Create;
Viewpoint12.Description := 'Scene_Back View';
Viewpoint12.Position := Vector3(0,2.5,-3);
Viewpoint12.Orientation := Vector4(0,1,0,3.14);
Viewpoint12.CenterOfRotation := Vector3(0,1.5,0);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Viewpoint12);
Viewpoint13 := TViewpointNode.Create;
end;

procedure InitJoeHAnimKick1a_FinalPart1;
begin

Viewpoint13.Description := 'Scene_Top View';
Viewpoint13.Position := Vector3(0,3.5,0);
Viewpoint13.Orientation := Vector4(1,0,0,-1.5708);
Viewpoint13.CenterOfRotation := Vector3(0,1.5,0);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Viewpoint13);
Group14 := TGroupNode.Create;
HAnimHumanoid15 := THAnimHumanoidNode.Create;
HAnimJoint16 := THAnimJointNode.Create;
HAnimJoint16.Translation := Vector3(0.15315,0.019584,-0.22976);
HAnimJoint16.Rotation := Vector4(-1,0,0,0.040483);
HAnimJoint16.Center := Vector3(0,0.875,0);
HAnimSegment17 := THAnimSegmentNode.Create;
HAnimSite18 := THAnimSiteNode.Create;
Transform19 := TTransformNode.Create;
Transform19.Scale := Vector3(0.175,0.175,0.175);
Inline20 := TInlineNode.Create;
Inline20.Global := True;
Inline20.SetUrl(['JointCoordinateAxes.x3dv']);
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Inline20);
Viewpoint21 := TViewpointNode.Create;
Viewpoint21.Description := 'hanimcoord View';
{ METHOD .FdChildren.Add }
Transform19.FdChildren.Add(Viewpoint21);
{ METHOD .FdChildren.Add }
HAnimSite18.FdChildren.Add(Transform19);
{ METHOD .FdChildren.Add }
HAnimSegment17.FdChildren.Add(HAnimSite18);
{ METHOD .FdChildren.Add }
HAnimJoint16.FdChildren.Add(HAnimSegment17);
HAnimJoint22 := THAnimJointNode.Create;
HAnimJoint22.Center := Vector3(0,0.92,0);
HAnimJoint22.SetSkinCoordIndex([17,19,20,21,22,23,26,27,73,82,89,91,93]);
HAnimJoint22.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]);
HAnimJoint23 := THAnimJointNode.Create;
HAnimJoint23.Rotation := Vector4(1,0,0,0.23414);
HAnimJoint23.Center := Vector3(0.1,0.92,0);
HAnimJoint23.SetSkinCoordIndex([89,90,94,95,96,97]);
HAnimJoint23.SetSkinCoordWeight([0.65,1,1,1,1,1]);
HAnimJoint24 := THAnimJointNode.Create;
HAnimJoint24.Rotation := Vector4(0.2106,0,0.97757,0.22603);
HAnimJoint24.Center := Vector3(0.115,0.466,0);
HAnimJoint24.SetSkinCoordIndex([334,335,336,337,338,339,340,341]);
HAnimJoint24.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint25 := THAnimJointNode.Create;
end;

procedure InitJoeHAnimKick1a_FinalPart2;
begin

HAnimJoint25.Rotation := Vector4(1,0,0,0.16032);
HAnimJoint25.Center := Vector3(0.115,0.069,0);
HAnimJoint25.SetSkinCoordIndex([342,343,344,345]);
HAnimJoint25.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint26 := THAnimJointNode.Create;
HAnimJoint26.Center := Vector3(0.115,0.031,0.03);
HAnimJoint26.SetSkinCoordIndex([346,347,348,71]);
HAnimJoint26.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint27 := THAnimJointNode.Create;
HAnimJoint27.Center := Vector3(0.115,0.037,0.09);
HAnimJoint27.SetSkinCoordIndex([349,350,351,352]);
HAnimJoint27.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint28 := THAnimJointNode.Create;
HAnimJoint28.Center := Vector3(0.115,0.02,0.122);
HAnimJoint28.SetSkinCoordIndex([353,354,355,356,357,358,359,360,361]);
HAnimJoint28.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint27.FdChildren.Add(HAnimJoint28);
{ METHOD .FdChildren.Add }
HAnimJoint26.FdChildren.Add(HAnimJoint27);
{ METHOD .FdChildren.Add }
HAnimJoint25.FdChildren.Add(HAnimJoint26);
{ METHOD .FdChildren.Add }
HAnimJoint24.FdChildren.Add(HAnimJoint25);
{ METHOD .FdChildren.Add }
HAnimJoint23.FdChildren.Add(HAnimJoint24);
{ METHOD .FdChildren.Add }
HAnimJoint22.FdChildren.Add(HAnimJoint23);
HAnimJoint29 := THAnimJointNode.Create;
HAnimJoint29.Rotation := Vector4(1,0,0,0.03807);
HAnimJoint29.Center := Vector3(-0.1,0.92,0);
HAnimJoint29.SetSkinCoordIndex([91,92,98,99,100,101,362,363]);
HAnimJoint29.SetSkinCoordWeight([0.65,1,0.8,1,1,1,0.4,0.8]);
HAnimJoint30 := THAnimJointNode.Create;
HAnimJoint30.Rotation := Vector4(1,0,0,0.48097);
HAnimJoint30.Center := Vector3(-0.05,0.466,0);
HAnimJoint30.SetSkinCoordIndex([362,363,364,365,366,367,368,369,98]);
HAnimJoint30.SetSkinCoordWeight([0.6,0.2,1,1,1,1,1,1,0.2]);
HAnimJoint31 := THAnimJointNode.Create;
HAnimJoint31.Rotation := Vector4(1,0,0,0.48097);
HAnimJoint31.Center := Vector3(-0.115,0.069,0);
HAnimJoint31.SetSkinCoordIndex([370,371,372,373]);
HAnimJoint31.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint32 := THAnimJointNode.Create;
HAnimJoint32.Center := Vector3(-0.1,0.015,-0.01);
HAnimJoint32.SetSkinCoordIndex([374,375,376]);
end;

procedure InitJoeHAnimKick1a_FinalPart3;
begin

HAnimJoint32.SetSkinCoordWeight([1,1,1]);
HAnimJoint33 := THAnimJointNode.Create;
HAnimJoint33.Center := Vector3(-0.115,0.037,0.09);
HAnimJoint33.SetSkinCoordIndex([377,378,379,380]);
HAnimJoint33.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint34 := THAnimJointNode.Create;
HAnimJoint34.Center := Vector3(-0.1,0.01,0.14);
HAnimJoint34.SetSkinCoordIndex([381,382,383,384,385,386,387,388,389]);
HAnimJoint34.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint33.FdChildren.Add(HAnimJoint34);
{ METHOD .FdChildren.Add }
HAnimJoint32.FdChildren.Add(HAnimJoint33);
{ METHOD .FdChildren.Add }
HAnimJoint31.FdChildren.Add(HAnimJoint32);
{ METHOD .FdChildren.Add }
HAnimJoint30.FdChildren.Add(HAnimJoint31);
{ METHOD .FdChildren.Add }
HAnimJoint29.FdChildren.Add(HAnimJoint30);
{ METHOD .FdChildren.Add }
HAnimJoint22.FdChildren.Add(HAnimJoint29);
{ METHOD .FdChildren.Add }
HAnimJoint16.FdChildren.Add(HAnimJoint22);
HAnimJoint35 := THAnimJointNode.Create;
HAnimJoint35.Center := Vector3(0,1.045,-0.095);
HAnimJoint35.SetSkinCoordIndex([28,76]);
HAnimJoint35.SetSkinCoordWeight([1,1]);
HAnimJoint36 := THAnimJointNode.Create;
HAnimJoint36.Center := Vector3(0,1.068,-0.085);
HAnimJoint37 := THAnimJointNode.Create;
HAnimJoint37.Center := Vector3(0,1.092,-0.0725);
HAnimJoint38 := THAnimJointNode.Create;
HAnimJoint38.Center := Vector3(0,1.12,-0.065);
HAnimJoint38.SetSkinCoordIndex([16,18,25,83,84,85,86,87,88]);
HAnimJoint38.SetSkinCoordWeight([1,1,1,1,1,1,0.7,1,0.8]);
HAnimJoint39 := THAnimJointNode.Create;
HAnimJoint39.Center := Vector3(0,1.1459,-0.0625);
HAnimJoint40 := THAnimJointNode.Create;
HAnimJoint40.Center := Vector3(0,1.179,-0.068);
HAnimJoint41 := THAnimJointNode.Create;
HAnimJoint41.Center := Vector3(0,1.2679,-0.081);
HAnimJoint42 := THAnimJointNode.Create;
HAnimJoint42.Center := Vector3(0,1.242,-0.09);
HAnimJoint42.SetSkinCoordIndex([15]);
HAnimJoint42.SetSkinCoordWeight([1]);
HAnimJoint43 := THAnimJointNode.Create;
HAnimJoint43.Center := Vector3(0,1.268,-0.1);
end;

procedure InitJoeHAnimKick1a_FinalPart4;
begin

HAnimJoint43.SetSkinCoordIndex([13,14]);
HAnimJoint43.SetSkinCoordWeight([1,1]);
HAnimJoint44 := THAnimJointNode.Create;
HAnimJoint44.Center := Vector3(0,1.294,-0.11);
HAnimJoint45 := THAnimJointNode.Create;
HAnimJoint45.Center := Vector3(0,1.323,-0.1155);
HAnimJoint46 := THAnimJointNode.Create;
HAnimJoint46.Center := Vector3(0,1.352,-0.12);
HAnimJoint47 := THAnimJointNode.Create;
HAnimJoint47.Center := Vector3(0,1.381,-0.1235);
HAnimJoint48 := THAnimJointNode.Create;
HAnimJoint48.Center := Vector3(0,1.41,-0.1235);
HAnimJoint48.SetSkinCoordIndex([81]);
HAnimJoint48.SetSkinCoordWeight([1]);
HAnimJoint49 := THAnimJointNode.Create;
HAnimJoint49.Center := Vector3(0,1.438,-0.12);
HAnimJoint50 := THAnimJointNode.Create;
HAnimJoint50.Center := Vector3(0,1.468,-0.105);
HAnimJoint51 := THAnimJointNode.Create;
HAnimJoint51.Center := Vector3(0,1.497,-0.09);
HAnimJoint51.SetSkinCoordIndex([11,24]);
HAnimJoint51.SetSkinCoordWeight([1,1]);
HAnimJoint52 := THAnimJointNode.Create;
HAnimJoint52.Center := Vector3(0,1.525,-0.072);
HAnimJoint52.SetSkinCoordIndex([74,75]);
HAnimJoint52.SetSkinCoordWeight([1,1]);
HAnimJoint53 := THAnimJointNode.Create;
HAnimJoint53.Center := Vector3(0,1.54,-0.05);
HAnimJoint54 := THAnimJointNode.Create;
HAnimJoint54.Center := Vector3(0,1.552,-0.035);
HAnimJoint55 := THAnimJointNode.Create;
HAnimJoint55.Rotation := Vector4(0.98593,0,-0.16716,0.46046);
HAnimJoint55.Center := Vector3(0,1.5675,-0.0256);
HAnimJoint56 := THAnimJointNode.Create;
HAnimJoint56.Center := Vector3(0,1.5823,-0.0185);
HAnimJoint57 := THAnimJointNode.Create;
HAnimJoint57.Center := Vector3(0,1.595,-0.0175);
HAnimJoint58 := THAnimJointNode.Create;
HAnimJoint58.Center := Vector3(0,1.61,-0.015);
HAnimJoint59 := THAnimJointNode.Create;
end;

procedure InitJoeHAnimKick1a_FinalPart5;
begin

HAnimJoint59.Center := Vector3(0,1.63,-0.01);
HAnimJoint59.SetSkinCoordIndex([0,1,2,3,4,5,6,7,8,9]);
HAnimJoint59.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1]);
HAnimJoint60 := THAnimJointNode.Create;
HAnimJoint60.Center := Vector3(0.034,1.659,0.06);
{ METHOD .FdChildren.Add }
HAnimJoint59.FdChildren.Add(HAnimJoint60);
HAnimJoint61 := THAnimJointNode.Create;
HAnimJoint61.Center := Vector3(-0.034,1.659,0.06);
{ METHOD .FdChildren.Add }
HAnimJoint59.FdChildren.Add(HAnimJoint61);
{ METHOD .FdChildren.Add }
HAnimJoint58.FdChildren.Add(HAnimJoint59);
{ METHOD .FdChildren.Add }
HAnimJoint57.FdChildren.Add(HAnimJoint58);
{ METHOD .FdChildren.Add }
HAnimJoint56.FdChildren.Add(HAnimJoint57);
{ METHOD .FdChildren.Add }
HAnimJoint55.FdChildren.Add(HAnimJoint56);
{ METHOD .FdChildren.Add }
HAnimJoint54.FdChildren.Add(HAnimJoint55);
{ METHOD .FdChildren.Add }
HAnimJoint53.FdChildren.Add(HAnimJoint54);
{ METHOD .FdChildren.Add }
HAnimJoint52.FdChildren.Add(HAnimJoint53);
HAnimJoint62 := THAnimJointNode.Create;
HAnimJoint62.Center := Vector3(0.082,1.4488,-0.0353);
HAnimJoint62.SetSkinCoordIndex([12]);
HAnimJoint62.SetSkinCoordWeight([1]);
HAnimJoint63 := THAnimJointNode.Create;
HAnimJoint63.Center := Vector3(0.0962,1.4269,-0.0424);
HAnimJoint63.SetSkinCoordIndex([79]);
HAnimJoint63.SetSkinCoordWeight([1]);
HAnimJoint64 := THAnimJointNode.Create;
HAnimJoint64.Rotation := Vector4(0,0,1,1.3884);
HAnimJoint64.Center := Vector3(0.2,1.44,-0.04);
HAnimJoint64.SetSkinCoordIndex([41,42,44,80,102,103,104,105]);
HAnimJoint64.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint65 := THAnimJointNode.Create;
HAnimJoint65.Rotation := Vector4(-1,0,0,1.3339);
HAnimJoint65.Center := Vector3(0.2,1.1388,-0.04);
HAnimJoint65.SetSkinCoordIndex([45,46,47,109,110,111,112,113,115,116,117,118]);
HAnimJoint65.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint66 := THAnimJointNode.Create;
HAnimJoint66.Rotation := Vector4(0,1,0,1.2033);
HAnimJoint66.Center := Vector3(0.2,0.87,-0.04);
HAnimJoint66.SetSkinCoordIndex([119,120,121,122,123,124,125,126]);
HAnimJoint66.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint67 := THAnimJointNode.Create;
end;

procedure InitJoeHAnimKick1a_FinalPart6;
begin

HAnimJoint67.Center := Vector3(0.1924,0.8472,-0.0534);
HAnimJoint67.SetSkinCoordIndex([127,128]);
HAnimJoint67.SetSkinCoordWeight([1,1]);
HAnimJoint68 := THAnimJointNode.Create;
HAnimJoint68.Center := Vector3(0.1951,0.8226,0.0246);
HAnimJoint68.SetSkinCoordIndex([138,139,140,141,142,143]);
HAnimJoint68.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimJoint69 := THAnimJointNode.Create;
HAnimJoint69.Center := Vector3(0.1955,0.8159,0.0464);
HAnimJoint69.SetSkinCoordIndex([144,145,146,147,148,149,150,151,152]);
HAnimJoint69.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint68.FdChildren.Add(HAnimJoint69);
{ METHOD .FdChildren.Add }
HAnimJoint67.FdChildren.Add(HAnimJoint68);
{ METHOD .FdChildren.Add }
HAnimJoint66.FdChildren.Add(HAnimJoint67);
HAnimJoint70 := THAnimJointNode.Create;
HAnimJoint70.Center := Vector3(0.1983,0.8024,-0.028);
HAnimJoint70.SetSkinCoordIndex([129,130]);
HAnimJoint70.SetSkinCoordWeight([1,1]);
HAnimJoint71 := THAnimJointNode.Create;
HAnimJoint71.Center := Vector3(0.1983,0.7815,-0.028);
HAnimJoint71.SetSkinCoordIndex([138,139,140,153,154,155,163]);
HAnimJoint71.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint72 := THAnimJointNode.Create;
HAnimJoint72.Center := Vector3(0.2017,0.7363,-0.0248);
HAnimJoint72.SetSkinCoordIndex([166,167,168,169]);
HAnimJoint72.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint73 := THAnimJointNode.Create;
HAnimJoint73.Center := Vector3(0.2028,0.7139,-0.0236);
HAnimJoint73.SetSkinCoordIndex([170,171,172,173,174,175,176,177,178]);
HAnimJoint73.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint72.FdChildren.Add(HAnimJoint73);
{ METHOD .FdChildren.Add }
HAnimJoint71.FdChildren.Add(HAnimJoint72);
{ METHOD .FdChildren.Add }
HAnimJoint70.FdChildren.Add(HAnimJoint71);
{ METHOD .FdChildren.Add }
HAnimJoint66.FdChildren.Add(HAnimJoint70);
HAnimJoint74 := THAnimJointNode.Create;
HAnimJoint74.Center := Vector3(0.1987,0.8029,-0.053);
HAnimJoint74.SetSkinCoordIndex([131,132]);
HAnimJoint74.SetSkinCoordWeight([1,1]);
HAnimJoint75 := THAnimJointNode.Create;
HAnimJoint75.Center := Vector3(0.1987,0.7818,-0.053);
end;

procedure InitJoeHAnimKick1a_FinalPart7;
begin

HAnimJoint75.SetSkinCoordIndex([156,157,163,164]);
HAnimJoint75.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint76 := THAnimJointNode.Create;
HAnimJoint76.Center := Vector3(0.2013,0.7273,-0.0503);
HAnimJoint76.SetSkinCoordIndex([179,180,181,182]);
HAnimJoint76.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint77 := THAnimJointNode.Create;
HAnimJoint77.Center := Vector3(0.2026,0.7011,-0.0494);
HAnimJoint77.SetSkinCoordIndex([183,184,185,186,187,188,189,190,191]);
HAnimJoint77.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint76.FdChildren.Add(HAnimJoint77);
{ METHOD .FdChildren.Add }
HAnimJoint75.FdChildren.Add(HAnimJoint76);
{ METHOD .FdChildren.Add }
HAnimJoint74.FdChildren.Add(HAnimJoint75);
{ METHOD .FdChildren.Add }
HAnimJoint66.FdChildren.Add(HAnimJoint74);
HAnimJoint78 := THAnimJointNode.Create;
HAnimJoint78.Center := Vector3(0.1956,0.8019,-0.0794);
HAnimJoint78.SetSkinCoordIndex([133,134]);
HAnimJoint78.SetSkinCoordWeight([1,1]);
HAnimJoint79 := THAnimJointNode.Create;
HAnimJoint79.Center := Vector3(0.1956,0.7815,-0.0794);
HAnimJoint79.SetSkinCoordIndex([158,159,164,165]);
HAnimJoint79.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint80 := THAnimJointNode.Create;
HAnimJoint80.Center := Vector3(0.1973,0.7287,-0.0777);
HAnimJoint80.SetSkinCoordIndex([192,193,194,195]);
HAnimJoint80.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint81 := THAnimJointNode.Create;
HAnimJoint81.Center := Vector3(0.1983,0.7045,-0.0767);
HAnimJoint81.SetSkinCoordIndex([196,197,198,199,200,201,202,203,204]);
HAnimJoint81.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint80.FdChildren.Add(HAnimJoint81);
{ METHOD .FdChildren.Add }
HAnimJoint79.FdChildren.Add(HAnimJoint80);
{ METHOD .FdChildren.Add }
HAnimJoint78.FdChildren.Add(HAnimJoint79);
{ METHOD .FdChildren.Add }
HAnimJoint66.FdChildren.Add(HAnimJoint78);
HAnimJoint82 := THAnimJointNode.Create;
HAnimJoint82.Center := Vector3(0.1925,0.8066,-0.1036);
HAnimJoint82.SetSkinCoordIndex([135,136,137,165]);
HAnimJoint82.SetSkinCoordWeight([1,1,1,0.5]);
HAnimJoint83 := THAnimJointNode.Create;
HAnimJoint83.Center := Vector3(0.1925,0.7866,-0.1036);
end;

procedure InitJoeHAnimKick1a_FinalPart8;
begin

HAnimJoint83.SetSkinCoordIndex([160,161,162]);
HAnimJoint83.SetSkinCoordWeight([1,1,1]);
HAnimJoint84 := THAnimJointNode.Create;
HAnimJoint84.Center := Vector3(0.1938,0.7452,-0.1024);
HAnimJoint84.SetSkinCoordIndex([205,206,207,208]);
HAnimJoint84.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint85 := THAnimJointNode.Create;
HAnimJoint85.Center := Vector3(0.1948,0.7277,-0.1017);
HAnimJoint85.SetSkinCoordIndex([209,210,211,212,213,214,215,216,217]);
HAnimJoint85.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint84.FdChildren.Add(HAnimJoint85);
{ METHOD .FdChildren.Add }
HAnimJoint83.FdChildren.Add(HAnimJoint84);
{ METHOD .FdChildren.Add }
HAnimJoint82.FdChildren.Add(HAnimJoint83);
{ METHOD .FdChildren.Add }
HAnimJoint66.FdChildren.Add(HAnimJoint82);
{ METHOD .FdChildren.Add }
HAnimJoint65.FdChildren.Add(HAnimJoint66);
{ METHOD .FdChildren.Add }
HAnimJoint64.FdChildren.Add(HAnimJoint65);
{ METHOD .FdChildren.Add }
HAnimJoint63.FdChildren.Add(HAnimJoint64);
{ METHOD .FdChildren.Add }
HAnimJoint62.FdChildren.Add(HAnimJoint63);
{ METHOD .FdChildren.Add }
HAnimJoint52.FdChildren.Add(HAnimJoint62);
HAnimJoint86 := THAnimJointNode.Create;
HAnimJoint86.Center := Vector3(-0.03,1.46,0);
HAnimJoint86.SetSkinCoordIndex([10]);
HAnimJoint86.SetSkinCoordWeight([1]);
HAnimJoint87 := THAnimJointNode.Create;
HAnimJoint87.Center := Vector3(-0.09,1.41,-0.11);
HAnimJoint87.SetSkinCoordIndex([77,29]);
HAnimJoint87.SetSkinCoordWeight([1,0.9]);
HAnimJoint88 := THAnimJointNode.Create;
HAnimJoint88.Rotation := Vector4(0,0,-1,1.7595);
HAnimJoint88.Center := Vector3(-0.2,1.44,-0.04);
HAnimJoint88.SetSkinCoordIndex([29,30,32,78,218,219,220,221,86,88]);
HAnimJoint88.SetSkinCoordWeight([0.1,1,1,1,1,1,1,1,0.3,0.2]);
HAnimJoint89 := THAnimJointNode.Create;
HAnimJoint89.Rotation := Vector4(-1,0,0,1.3339);
HAnimJoint89.Center := Vector3(-0.2,1.1388,-0.04);
HAnimJoint89.SetSkinCoordIndex([33,34,35,225,226,227,228,229,231,232,233,234]);
HAnimJoint89.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1,1,1,1]);
HAnimJoint90 := THAnimJointNode.Create;
HAnimJoint90.Rotation := Vector4(0,1,0,0.077855);
HAnimJoint90.Center := Vector3(-0.2,0.89,-0.04);
end;

procedure InitJoeHAnimKick1a_FinalPart9;
begin

HAnimJoint90.SetSkinCoordIndex([235,236,237,238,239,240,241,242]);
HAnimJoint90.SetSkinCoordWeight([1,1,1,1,1,1,1,1]);
HAnimJoint91 := THAnimJointNode.Create;
HAnimJoint91.Center := Vector3(-0.2,0.85,0);
HAnimJoint91.SetSkinCoordIndex([243,244]);
HAnimJoint91.SetSkinCoordWeight([1,1]);
HAnimJoint92 := THAnimJointNode.Create;
HAnimJoint92.Center := Vector3(-0.2,0.82,0.03);
HAnimJoint92.SetSkinCoordIndex([254,255,256,257,258,259]);
HAnimJoint92.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1]);
HAnimJoint93 := THAnimJointNode.Create;
HAnimJoint93.Center := Vector3(-0.2,0.8,0.05);
HAnimJoint93.SetSkinCoordIndex([260,261,262,263,264,265,266,267,268]);
HAnimJoint93.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint92.FdChildren.Add(HAnimJoint93);
{ METHOD .FdChildren.Add }
HAnimJoint91.FdChildren.Add(HAnimJoint92);
{ METHOD .FdChildren.Add }
HAnimJoint90.FdChildren.Add(HAnimJoint91);
HAnimJoint94 := THAnimJointNode.Create;
HAnimJoint94.Center := Vector3(-0.2,0.84,-0.015);
HAnimJoint94.SetSkinCoordIndex([245,246]);
HAnimJoint94.SetSkinCoordWeight([1,1]);
HAnimJoint95 := THAnimJointNode.Create;
HAnimJoint95.Center := Vector3(-0.2,0.793,-0.015);
HAnimJoint95.SetSkinCoordIndex([254,255,256,269,270,271,279]);
HAnimJoint95.SetSkinCoordWeight([0.5,0.5,0.5,1,1,1,0.5]);
HAnimJoint96 := THAnimJointNode.Create;
HAnimJoint96.Center := Vector3(-0.2,0.745,-0.015);
HAnimJoint96.SetSkinCoordIndex([282,283,284,285]);
HAnimJoint96.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint97 := THAnimJointNode.Create;
HAnimJoint97.Center := Vector3(-0.2,0.72,-0.015);
HAnimJoint97.SetSkinCoordIndex([286,287,288,289,290,291,292,293,294]);
HAnimJoint97.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint96.FdChildren.Add(HAnimJoint97);
{ METHOD .FdChildren.Add }
HAnimJoint95.FdChildren.Add(HAnimJoint96);
{ METHOD .FdChildren.Add }
HAnimJoint94.FdChildren.Add(HAnimJoint95);
{ METHOD .FdChildren.Add }
HAnimJoint90.FdChildren.Add(HAnimJoint94);
HAnimJoint98 := THAnimJointNode.Create;
HAnimJoint98.Center := Vector3(-0.2,0.835,-0.04);
HAnimJoint98.SetSkinCoordIndex([247,248]);
end;

procedure InitJoeHAnimKick1a_FinalPart10;
begin

HAnimJoint98.SetSkinCoordWeight([1,1]);
HAnimJoint99 := THAnimJointNode.Create;
HAnimJoint99.Center := Vector3(-0.2,0.788,-0.04);
HAnimJoint99.SetSkinCoordIndex([272,273,279,280]);
HAnimJoint99.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint100 := THAnimJointNode.Create;
HAnimJoint100.Center := Vector3(-0.2,0.74,-0.04);
HAnimJoint100.SetSkinCoordIndex([295,296,297,298]);
HAnimJoint100.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint101 := THAnimJointNode.Create;
HAnimJoint101.Center := Vector3(-0.2,0.7142,-0.04);
HAnimJoint101.SetSkinCoordIndex([299,300,301,302,303,304,305,306,307]);
HAnimJoint101.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint100.FdChildren.Add(HAnimJoint101);
{ METHOD .FdChildren.Add }
HAnimJoint99.FdChildren.Add(HAnimJoint100);
{ METHOD .FdChildren.Add }
HAnimJoint98.FdChildren.Add(HAnimJoint99);
{ METHOD .FdChildren.Add }
HAnimJoint90.FdChildren.Add(HAnimJoint98);
HAnimJoint102 := THAnimJointNode.Create;
HAnimJoint102.Center := Vector3(-0.2,0.835,-0.065);
HAnimJoint102.SetSkinCoordIndex([249,250]);
HAnimJoint102.SetSkinCoordWeight([1,1]);
HAnimJoint103 := THAnimJointNode.Create;
HAnimJoint103.Center := Vector3(-0.2,0.793,-0.065);
HAnimJoint103.SetSkinCoordIndex([274,275,280,281]);
HAnimJoint103.SetSkinCoordWeight([1,1,0.5,0.5]);
HAnimJoint104 := THAnimJointNode.Create;
HAnimJoint104.Center := Vector3(-0.2,0.74,-0.065);
HAnimJoint104.SetSkinCoordIndex([308,309,310,311]);
HAnimJoint104.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint105 := THAnimJointNode.Create;
HAnimJoint105.Center := Vector3(-0.2,0.7177,-0.065);
HAnimJoint105.SetSkinCoordIndex([312,313,314,315,316,317,318,319,320]);
HAnimJoint105.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint104.FdChildren.Add(HAnimJoint105);
{ METHOD .FdChildren.Add }
HAnimJoint103.FdChildren.Add(HAnimJoint104);
{ METHOD .FdChildren.Add }
HAnimJoint102.FdChildren.Add(HAnimJoint103);
{ METHOD .FdChildren.Add }
HAnimJoint90.FdChildren.Add(HAnimJoint102);
HAnimJoint106 := THAnimJointNode.Create;
HAnimJoint106.Center := Vector3(-0.2,0.84,-0.085);
HAnimJoint106.SetSkinCoordIndex([251,252,253,281]);
end;

procedure InitJoeHAnimKick1a_FinalPart11;
begin

HAnimJoint106.SetSkinCoordWeight([1,1,1,0.5]);
HAnimJoint107 := THAnimJointNode.Create;
HAnimJoint107.Center := Vector3(-0.2,0.79,-0.085);
HAnimJoint107.SetSkinCoordIndex([276,277,278]);
HAnimJoint107.SetSkinCoordWeight([1,1,1]);
HAnimJoint108 := THAnimJointNode.Create;
HAnimJoint108.Center := Vector3(-0.2,0.755,-0.085);
HAnimJoint108.SetSkinCoordIndex([321,322,323,324]);
HAnimJoint108.SetSkinCoordWeight([1,1,1,1]);
HAnimJoint109 := THAnimJointNode.Create;
HAnimJoint109.Center := Vector3(-0.2,0.735,-0.09);
HAnimJoint109.SetSkinCoordIndex([325,326,327,328,329,330,331,332,333]);
HAnimJoint109.SetSkinCoordWeight([1,1,1,1,1,1,1,1,1]);
{ METHOD .FdChildren.Add }
HAnimJoint108.FdChildren.Add(HAnimJoint109);
{ METHOD .FdChildren.Add }
HAnimJoint107.FdChildren.Add(HAnimJoint108);
{ METHOD .FdChildren.Add }
HAnimJoint106.FdChildren.Add(HAnimJoint107);
{ METHOD .FdChildren.Add }
HAnimJoint90.FdChildren.Add(HAnimJoint106);
{ METHOD .FdChildren.Add }
HAnimJoint89.FdChildren.Add(HAnimJoint90);
{ METHOD .FdChildren.Add }
HAnimJoint88.FdChildren.Add(HAnimJoint89);
{ METHOD .FdChildren.Add }
HAnimJoint87.FdChildren.Add(HAnimJoint88);
{ METHOD .FdChildren.Add }
HAnimJoint86.FdChildren.Add(HAnimJoint87);
{ METHOD .FdChildren.Add }
HAnimJoint52.FdChildren.Add(HAnimJoint86);
{ METHOD .FdChildren.Add }
HAnimJoint51.FdChildren.Add(HAnimJoint52);
{ METHOD .FdChildren.Add }
HAnimJoint50.FdChildren.Add(HAnimJoint51);
{ METHOD .FdChildren.Add }
HAnimJoint49.FdChildren.Add(HAnimJoint50);
{ METHOD .FdChildren.Add }
HAnimJoint48.FdChildren.Add(HAnimJoint49);
{ METHOD .FdChildren.Add }
HAnimJoint47.FdChildren.Add(HAnimJoint48);
{ METHOD .FdChildren.Add }
HAnimJoint46.FdChildren.Add(HAnimJoint47);
{ METHOD .FdChildren.Add }
HAnimJoint45.FdChildren.Add(HAnimJoint46);
{ METHOD .FdChildren.Add }
HAnimJoint44.FdChildren.Add(HAnimJoint45);
{ METHOD .FdChildren.Add }
HAnimJoint43.FdChildren.Add(HAnimJoint44);
{ METHOD .FdChildren.Add }
HAnimJoint42.FdChildren.Add(HAnimJoint43);
{ METHOD .FdChildren.Add }
HAnimJoint41.FdChildren.Add(HAnimJoint42);
{ METHOD .FdChildren.Add }
HAnimJoint40.FdChildren.Add(HAnimJoint41);
{ METHOD .FdChildren.Add }
HAnimJoint39.FdChildren.Add(HAnimJoint40);
{ METHOD .FdChildren.Add }
HAnimJoint38.FdChildren.Add(HAnimJoint39);
{ METHOD .FdChildren.Add }
HAnimJoint37.FdChildren.Add(HAnimJoint38);
{ METHOD .FdChildren.Add }
HAnimJoint36.FdChildren.Add(HAnimJoint37);
{ METHOD .FdChildren.Add }
HAnimJoint35.FdChildren.Add(HAnimJoint36);
{ METHOD .FdChildren.Add }
HAnimJoint16.FdChildren.Add(HAnimJoint35);
end;

procedure InitJoeHAnimKick1a_FinalPart12;
begin

{ METHOD .FdSkeleton.Add }
HAnimHumanoid15.FdSkeleton.Add(HAnimJoint16);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint16);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint22);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint23);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint24);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint25);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint26);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint27);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint28);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint29);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint30);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint31);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint32);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint33);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint34);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint35);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint36);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint37);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint38);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint39);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint40);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint41);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint42);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint43);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint44);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint45);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint46);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint47);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint48);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint49);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint50);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint51);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint52);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint53);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint54);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint55);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint56);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint57);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint58);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint59);
end;

procedure InitJoeHAnimKick1a_FinalPart13;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint60);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint61);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint62);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint63);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint64);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint65);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint66);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint67);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint68);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint69);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint70);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint71);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint72);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint73);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint74);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint75);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint76);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint77);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint78);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint79);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint80);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint81);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint82);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint83);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint84);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint85);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint86);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint87);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint88);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint89);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint90);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint91);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint92);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint93);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint94);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint95);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint96);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint97);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint98);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint99);
end;

procedure InitJoeHAnimKick1a_FinalPart14;
begin

{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint100);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint101);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint102);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint103);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint104);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint105);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint106);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint107);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint108);
{ METHOD .FdJoints.Add }
HAnimHumanoid15.FdJoints.Add(HAnimJoint109);
Coordinate199 := TCoordinateNode.Create;
Coordinate199.SetPoint([Vector3(0,1.77,0),Vector3(0,1.665,0.09),Vector3(-0.033,1.62,0.087),Vector3(0.033,1.62,0.087),Vector3(0,1.55,0.097),Vector3(-0.077,1.64,-0.01),Vector3(-0.0527,1.58,0.015),Vector3(0.077,1.64,-0.01),Vector3(0.0527,1.58,0.015),Vector3(0,1.625,-0.0925),Vector3(-0.03,1.46,0.035),Vector3(0,1.44,0.03),Vector3(0.03,1.46,0.035),Vector3(-0.1135,1.318,0.095),Vector3(0.1135,1.318,0.095),Vector3(0,1.25,0.113),Vector3(-0.087,1.19,0.09),Vector3(-0.0935,1.03,0.075),Vector3(0.087,1.19,0.09),Vector3(0.0935,1.03,0.075),Vector3(-0.1425,1.065,0.0033),Vector3(-0.15,0.9,-0.01),Vector3(0.1425,1.065,0.0033),Vector3(0.15,0.9,-0.01),Vector3(0,1.53,-0.084),Vector3(0.0049,1.1908,-0.1113),Vector3(-0.0773,1.019,-0.12),Vector3(0.0773,1.019,-0.12),Vector3(0.005,1.0915,-0.1091),Vector3(-0.178,1.4825,-0.0625),Vector3(-0.17,1.38,0.007),Vector3(-0.1884,0.8676,-0.036),Vector3(-0.16,1.38,-0.127),Vector3(-0.2,1.1388,-0.08),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.23,1.133,-0.055),Vector3(-0.1977,0.8169,-0.0177),Vector3(-0.1941,0.6772,-0.0423),Vector3(-0.2117,0.8562,-0.0584),Vector3(-0.1929,0.789,-0.1064),Vector3(0.175,1.4825,-0.06),Vector3(0.17,1.38,0.007),Vector3(0.1901,0.8645,-0.0415),Vector3(0.16,1.38,-0.125),Vector3(0.2,1.1388,-0.08),Vector3(0.165,1.1388,-0.04),Vector3(0.244,1.1388,-0.04),Vector3(0.23,1.133,-0.055),Vector3(0.2009,0.8139,-0.0237),Vector3(0.2056,0.6743,-0.0482),Vector3(0.2142,0.8529,-0.0648),Vector3(0.1929,0.786,-0.1122),Vector3(-0.1,0.4913,-0.03),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.165,0.01,0.12),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.09,0.056,0.0125),Vector3(-0.115,0.02,0.122),Vector3(-0.115,0.04,-0.055),Vector3(-0.11,0.011,0.19),Vector3(0.0993,0.4881,-0.0309),Vector3(0.17,0.466,0),Vector3(0.05,0.4867,0),Vector3(0.165,0.01,0.12),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.09,0.056,0.0125),Vector3(0.115,0.02,0.122),Vector3(0.115,0.04,-0.055),Vector3(0.11,0.011,0.19),Vector3(0,0.875,0),Vector3(-0.0646,1.5149,-0.038),Vector3(0.0646,1.5149,-0.038),Vector3(0,1.0723,0.09),Vector3(-0.11,1.427,-0.1375),Vector3(-0.235,1.42,-0.0625),Vector3(0.11,1.427,-0.1375),Vector3(0.235,1.42,-0.0625),Vector3(0,1.41,-0.145),Vector3(0,0.925,0.08),Vector3(-0.087,1.19,-0.09),Vector3(0.087,1.19,-0.09),Vector3(0.172,1.32,-0.03),Vector3(-0.172,1.32,-0.03),Vector3(0.15,1.23,-0.015),Vector3(-0.15,1.23,-0.015),Vector3(0.079,0.92,-0.14),Vector3(0.1,0.9,0.077),Vector3(-0.079,0.92,-0.14),Vector3(-0.1,0.9,0.075),Vector3(0,0.87,0),Vector3(0.171,0.65,0),Vector3(0.02,0.65,0),Vector3(0.1,0.65,-0.08),Vector3(0.1,0.65,0.07),Vector3(-0.171,0.65,0),Vector3(-0.02,0.65,0),Vector3(-0.1,0.65,-0.08),Vector3(-0.1,0.65,0.07),Vector3(0.25,1.27,-0.04),Vector3(0.17,1.27,-0.04),Vector3(0.2,1.27,-0.09),Vector3(0.2,1.27,0.02),Vector3(0.244,1.1388,-0.04),Vector3(0.165,1.1388,-0.04),Vector3(0.2,1.1388,-0.08),Vector3(0.2,1.1388,-0.013),Vector3(0.225,1,-0.01),Vector3(0.225,1,-0.07),Vector3(0.185,1,-0.01),Vector3(0.185,1,-0.07),Vector3(0.2,1.1388,-0.04),Vector3(0.225,0.92,-0.04),Vector3(0.175,0.92,-0.04),Vector3(0.2,0.92,-0.065),Vector3(0.2,0.92,-0.015),Vector3(0.225,0.89,-0.04),Vector3(0.175,0.89,-0.04),Vector3(0.2,0.89,-0.065),Vector3(0.2,0.89,-0.015),Vector3(0.218,0.86,-0.04),Vector3(0.184,0.86,-0.04),Vector3(0.2,0.87,-0.07),Vector3(0.2,0.87,0),Vector3(0.21,0.85,0),Vector3(0.1854,0.85,0),Vector3(0.212,0.84,-0.015),Vector3(0.183,0.84,-0.015),Vector3(0.213,0.835,-0.04),Vector3(0.19,0.835,-0.04),Vector3(0.211,0.835,-0.065),Vector3(0.192,0.835,-0.065),Vector3(0.208,0.84,-0.085),Vector3(0.19,0.84,-0.085),Vector3(0.2,0.84,-0.095),Vector3(0.215,0.82,0),Vector3(0.193,0.815,0.005),Vector3(0.198,0.8,0.012),Vector3(0.21,0.82,0.03),Vector3(0.19,0.82,0.03),Vector3(0.2,0.835,0.039),Vector3(0.212,0.8,0.05),Vector3(0.188,0.8,0.05),Vector3(0.2,0.807,0.057),Vector3(0.2,0.793,0.035),Vector3(0.2,0.774,0.076),Vector3(0.212,0.78,0.07),Vector3(0.188,0.78,0.07),Vector3(0.2,0.785,0.075),Vector3(0.2,0.77,0.062),Vector3(0.215,0.793,-0.015),Vector3(0.187,0.793,-0.015),Vector3(0.2,0.793,-0.005),Vector3(0.215,0.788,-0.04),Vector3(0.187,0.788,-0.04),Vector3(0.215,0.793,-0.065),Vector3(0.187,0.793,-0.065),Vector3(0.21,0.79,-0.085),Vector3(0.19,0.79,-0.085),Vector3(0.2,0.79,-0.095),Vector3(0.19,0.77,-0.0275),Vector3(0.19,0.77,-0.0525),Vector3(0.19,0.78,-0.0775),Vector3(0.212,0.745,-0.015),Vector3(0.188,0.745,-0.02),Vector3(0.2,0.745,-0.0255),Vector3(0.2,0.745,-0.0045),Vector3(0.211,0.72,-0.015),Vector3(0.189,0.72,-0.015),Vector3(0.2,0.72,-0.0252),Vector3(0.2,0.72,-0.0048),Vector3(0.21,0.695,-0.015),Vector3(0.19,0.695,-0.015),Vector3(0.2,0.695,-0.025),Vector3(0.2,0.695,-0.005),Vector3(0.2,0.685,-0.015),Vector3(0.215,0.74,-0.04),Vector3(0.185,0.74,-0.04),Vector3(0.2,0.74,-0.055),Vector3(0.2,0.74,-0.025),Vector3(0.21,0.7142,-0.04),Vector3(0.19,0.7142,-0.04),Vector3(0.2,0.7142,-0.053),Vector3(0.2,0.7142,-0.027),Vector3(0.21,0.68,-0.04),Vector3(0.19,0.68,-0.04),Vector3(0.2,0.68,-0.05),Vector3(0.2,0.68,-0.03),Vector3(0.2,0.67,-0.04),Vector3(0.212,0.74,-0.065),Vector3(0.188,0.74,-0.065),Vector3(0.2,0.74,-0.0756),Vector3(0.2,0.74,-0.0542),Vector3(0.21,0.7177,-0.065),Vector3(0.19,0.7177,-0.065),Vector3(0.2,0.7177,-0.0751),Vector3(0.2,0.7177,-0.0549),Vector3(0.21,0.695,-0.065),Vector3(0.19,0.695,-0.065),Vector3(0.2,0.695,-0.075),Vector3(0.2,0.695,-0.055),Vector3(0.2,0.685,-0.065),Vector3(0.211,0.755,-0.085),Vector3(0.189,0.755,-0.085),Vector3(0.2,0.755,-0.0952),Vector3(0.2,0.755,-0.0748),Vector3(0.21,0.735,-0.085),Vector3(0.19,0.735,-0.085),Vector3(0.2,0.735,-0.0951),Vector3(0.2,0.735,-0.0749),Vector3(0.21,0.72,-0.085),Vector3(0.19,0.72,-0.085),Vector3(0.2,0.72,-0.095),Vector3(0.2,0.72,-0.075),Vector3(0.2,0.71,-0.085),Vector3(-0.23,1.23,-0.04),Vector3(-0.16,1.23,-0.04),Vector3(-0.2,1.235,-0.105),Vector3(-0.2,1.255,0.02),Vector3(-0.244,1.1388,-0.04),Vector3(-0.165,1.1388,-0.04),Vector3(-0.2,1.1388,-0.08),Vector3(-0.2,1.1388,0.013),Vector3(-0.225,1,-0.01),Vector3(-0.225,1,-0.07),Vector3(-0.185,1,-0.01),Vector3(-0.185,1,-0.07),Vector3(-0.2,1.1388,-0.04),Vector3(-0.225,0.92,-0.04),Vector3(-0.175,0.92,-0.04),Vector3(-0.2,0.92,-0.065),Vector3(-0.2,0.92,-0.015),Vector3(-0.225,0.89,-0.04),Vector3(-0.175,0.89,-0.04),Vector3(-0.2,0.89,-0.065),Vector3(-0.2,0.89,-0.015),Vector3(-0.218,0.86,-0.04),Vector3(-0.184,0.86,-0.04),Vector3(-0.2,0.87,-0.07),Vector3(-0.2,0.87,0),Vector3(-0.21,0.85,0),Vector3(-0.1854,0.85,0),Vector3(-0.212,0.84,-0.015),Vector3(-0.183,0.84,-0.015),Vector3(-0.213,0.835,-0.04),Vector3(-0.19,0.835,-0.04),Vector3(-0.211,0.835,-0.065),Vector3(-0.192,0.835,-0.065),Vector3(-0.208,0.84,-0.085),Vector3(-0.19,0.84,-0.085),Vector3(-0.2,0.84,-0.095),Vector3(-0.215,0.82,0),Vector3(-0.193,0.815,0.005),Vector3(-0.198,0.8,0.012),Vector3(-0.21,0.82,0.03),Vector3(-0.19,0.82,0.03),Vector3(-0.2,0.835,0.039),Vector3(-0.212,0.8,0.05),Vector3(-0.188,0.8,0.05),Vector3(-0.2,0.807,0.057),Vector3(-0.2,0.793,0.035),Vector3(-0.2,0.774,0.076),Vector3(-0.212,0.78,0.07),Vector3(-0.188,0.78,0.07),Vector3(-0.2,0.785,0.075),Vector3(-0.2,0.77,0.062),Vector3(-0.215,0.793,-0.015),Vector3(-0.187,0.793,-0.015),Vector3(-0.2,0.793,-0.005),Vector3(-0.215,0.788,-0.04),Vector3(-0.187,0.788,-0.04),Vector3(-0.215,0.793,-0.065),Vector3(-0.187,0.793,-0.065),Vector3(-0.21,0.79,-0.085),Vector3(-0.19,0.79,-0.085),Vector3(-0.2,0.79,-0.095),Vector3(-0.19,0.77,-0.0275),Vector3(-0.19,0.77,-0.0525),Vector3(-0.19,0.78,-0.0775),Vector3(-0.212,0.745,-0.015),Vector3(-0.188,0.745,-0.02),Vector3(-0.2,0.745,-0.0255),Vector3(-0.2,0.745,-0.0045),Vector3(-0.211,0.72,-0.015),Vector3(-0.189,0.72,-0.015),Vector3(-0.2,0.72,-0.0252),Vector3(-0.2,0.72,-0.0048),Vector3(-0.21,0.695,-0.015),Vector3(-0.19,0.695,-0.015),Vector3(-0.2,0.695,-0.025),Vector3(-0.2,0.695,-0.005),Vector3(-0.2,0.685,-0.015),Vector3(-0.215,0.74,-0.04),Vector3(-0.185,0.74,-0.04),Vector3(-0.2,0.74,-0.055),Vector3(-0.2,0.74,-0.025),Vector3(-0.21,0.7142,-0.04),Vector3(-0.19,0.7142,-0.04),Vector3(-0.2,0.7142,-0.053),Vector3(-0.2,0.7142,-0.027),Vector3(-0.21,0.68,-0.04),Vector3(-0.19,0.68,-0.04),Vector3(-0.2,0.68,-0.05),Vector3(-0.2,0.68,-0.03),Vector3(-0.2,0.67,-0.04),Vector3(-0.212,0.74,-0.065),Vector3(-0.188,0.74,-0.065),Vector3(-0.2,0.74,-0.0756),Vector3(-0.2,0.74,-0.0542),Vector3(-0.21,0.7177,-0.065),Vector3(-0.19,0.7177,-0.065),Vector3(-0.2,0.7177,-0.0751),Vector3(-0.2,0.7177,-0.0549),Vector3(-0.21,0.695,-0.065),Vector3(-0.19,0.695,-0.065),Vector3(-0.2,0.695,-0.075),Vector3(-0.2,0.695,-0.055),Vector3(-0.2,0.685,-0.065),Vector3(-0.211,0.755,-0.085),Vector3(-0.189,0.755,-0.085),Vector3(-0.2,0.755,-0.0952),Vector3(-0.2,0.755,-0.0748),Vector3(-0.21,0.735,-0.085),Vector3(-0.19,0.735,-0.085),Vector3(-0.2,0.735,-0.0951),Vector3(-0.2,0.735,-0.0749),Vector3(-0.21,0.72,-0.085),Vector3(-0.19,0.72,-0.085),Vector3(-0.2,0.72,-0.095),Vector3(-0.2,0.72,-0.075),Vector3(-0.2,0.71,-0.085),Vector3(0.115,0.466,0.06),Vector3(0.115,0.466,-0.055),Vector3(0.15,0.466,0),Vector3(0.05,0.466,0),Vector3(0.17,0.3,0),Vector3(0.06,0.3,0),Vector3(0.1,0.3,-0.05),Vector3(0.1,0.3,0.05),Vector3(0.15,0.07,0),Vector3(0.085,0.086,0.0125),Vector3(0.115,0.069,-0.045),Vector3(0.117,0.0975,0.0615),Vector3(0.1375,0.006,-0.03),Vector3(0.095,0.006,-0.03),Vector3(0.115,0.015,-0.045),Vector3(0.115,0.06,0.1),Vector3(0.115,0,0.07),Vector3(0.165,0,0.07),Vector3(0.095,0,0.07),Vector3(0.115,0.04,0.13),Vector3(0.125,0,0.12),Vector3(0.165,0,0.12),Vector3(0.087,0,0.122),Vector3(0.09,0.012,0.188),Vector3(0.11,0.011,0.19),Vector3(0.128,0.011,0.185),Vector3(0.142,0.011,0.178),Vector3(0.154,0.01,0.168),Vector3(-0.115,0.466,0.06),Vector3(-0.115,0.466,-0.055),Vector3(-0.17,0.466,0),Vector3(-0.05,0.466,0),Vector3(-0.17,0.3,0),Vector3(-0.06,0.3,0),Vector3(-0.1,0.3,-0.05),Vector3(-0.1,0.3,0.05),Vector3(-0.15,0.07,0),Vector3(-0.085,0.086,0.0125),Vector3(-0.115,0.069,-0.045),Vector3(-0.117,0.0975,0.0615),Vector3(-0.1375,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.095,0.006,-0.03),Vector3(-0.115,0.06,0.1),Vector3(-0.115,0,0.07),Vector3(-0.165,0,0.07),Vector3(-0.095,0,0.07),Vector3(-0.115,0.04,0.13),Vector3(-0.125,0,0.12),Vector3(-0.165,0,0.12),Vector3(-0.087,0,0.122),Vector3(-0.09,0.012,0.188),Vector3(-0.11,0.011,0.19),Vector3(-0.128,0.011,0.185),Vector3(-0.142,0.011,0.178),Vector3(-0.154,0.01,0.168)]);
{ METHOD .FdSkinCoord.Set }
HAnimHumanoid15.FdSkinCoord.Set(Coordinate199);
Shape200 := TShapeNode.Create;
Appearance201 := TAppearanceNode.Create;
Material202 := TMaterialNode.Create;
Material202.EmissiveColor := Vector3(0.13,0.55,0.13);
{ METHOD .SetMaterial }
Appearance201.Material := Material202;
ImageTexture203 := TImageTextureNode.Create;
ImageTexture203.SetUrl(['bodytexture28.png']);
{ METHOD .Texture }
Appearance201.Texture := ImageTexture203;
{ METHOD .Appearance }
Shape200.Appearance := Appearance201;
IndexedFaceSet204 := TIndexedFaceSetNode.Create;
IndexedFaceSet204.CreaseAngle := 3.1;
IndexedFaceSet204.ColorPerVertex := False;
IndexedFaceSet204.SetCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
end;

procedure InitJoeHAnimKick1a_FinalPart15;
begin

{ METHOD .Coord }
IndexedFaceSet204.Coord := Coordinate199;
{ METHOD .Geometry }
Shape200.Geometry := IndexedFaceSet204;
{ METHOD .SetSkin }
HAnimHumanoid15.Skin := Shape200;
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(HAnimHumanoid15);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Group14);
Transform206 := TTransformNode.Create;
Transform206.Translation := Vector3(-0.074397,0.094551,-0.074397);
Transform206.Rotation := Vector4(-0.70711,0,-0.70711,1.231);
Transform206.Scale := Vector3(0.23,0.23,0.23);
Shape207 := TShapeNode.Create;
Appearance208 := TAppearanceNode.Create;
Material209 := TMaterialNode.Create;
Material209.DiffuseColor := Vector3(0,0.8353,0);
Material209.SpecularColor := Vector3(0,0.6849,0);
Material209.EmissiveColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance208.Material := Material209;
ImageTexture210 := TImageTextureNode.Create;
ImageTexture210.SetUrl(['bodytexture28.png']);
{ METHOD .Texture }
Appearance208.Texture := ImageTexture210;
{ METHOD .Appearance }
Shape207.Appearance := Appearance208;
IndexedFaceSet211 := TIndexedFaceSetNode.Create;
IndexedFaceSet211.SetCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]);
Coordinate212 := TCoordinateNode.Create;
Coordinate212.SetPoint([Vector3(0,0.4675,0),Vector3(0,0.4049,-0.2338),Vector3(-0.1169,0.4049,-0.2024),Vector3(-0.2024,0.4049,-0.1169),Vector3(-0.2338,0.4049,0),Vector3(-0.2024,0.4049,0.1169),Vector3(-0.1169,0.4049,0.2024),Vector3(0,0.4049,0.2338),Vector3(0.1169,0.4049,0.2024),Vector3(0.2024,0.4049,0.1169),Vector3(0.2338,0.4049,0),Vector3(0.2024,0.4049,-0.1169),Vector3(0.1169,0.4049,-0.2024),Vector3(0,0.2338,-0.4049),Vector3(-0.2024,0.2338,-0.3506),Vector3(-0.3506,0.2338,-0.2024),Vector3(-0.4049,0.2338,0),Vector3(-0.3506,0.2338,0.2024),Vector3(-0.2024,0.2338,0.3506),Vector3(0,0.2338,0.4049),Vector3(0.2024,0.2338,0.3506),Vector3(0.3506,0.2338,0.2024),Vector3(0.4049,0.2338,0),Vector3(0.3506,0.2338,-0.2024),Vector3(0.2024,0.2338,-0.3506),Vector3(0,0,-0.4675),Vector3(-0.2338,0,-0.4049),Vector3(-0.4049,0,-0.2338),Vector3(-0.4675,0,0),Vector3(-0.4049,0,0.2338),Vector3(-0.2338,0,0.4049),Vector3(0,0,0.4675),Vector3(0.2338,0,0.4049),Vector3(0.4049,0,0.2338),Vector3(0.4675,0,0),Vector3(0.4049,0,-0.2338),Vector3(0.2338,0,-0.4049),Vector3(0,-0.2338,-0.4049),Vector3(-0.2024,-0.2338,-0.3506),Vector3(-0.3506,-0.2338,-0.2024),Vector3(-0.4049,-0.2338,0),Vector3(-0.3506,-0.2338,0.2024),Vector3(-0.2024,-0.2338,0.3506),Vector3(0,-0.2338,0.4049),Vector3(0.2024,-0.2338,0.3506),Vector3(0.3506,-0.2338,0.2024),Vector3(0.4049,-0.2338,0),Vector3(0.3506,-0.2338,-0.2024),Vector3(0.2024,-0.2338,-0.3506),Vector3(0,-0.4049,-0.2338),Vector3(-0.1169,-0.4049,-0.2024),Vector3(-0.2024,-0.4049,-0.1169),Vector3(-0.2338,-0.4049,0),Vector3(-0.2024,-0.4049,0.1169),Vector3(-0.1169,-0.4049,0.2024),Vector3(0,-0.4049,0.2338),Vector3(0.1169,-0.4049,0.2024),Vector3(0.2024,-0.4049,0.1169),Vector3(0.2338,-0.4049,0),Vector3(0.2024,-0.4049,-0.1169),Vector3(0.1169,-0.4049,-0.2024),Vector3(0,-0.4675,0)]);
{ METHOD .Coord }
IndexedFaceSet211.Coord := Coordinate212;
{ METHOD .Geometry }
Shape207.Geometry := IndexedFaceSet211;
{ METHOD .FdChildren.Add }
Transform206.FdChildren.Add(Shape207);
Viewpoint213 := TViewpointNode.Create;
Viewpoint213.Description := 'ball View';
{ METHOD .FdChildren.Add }
Transform206.FdChildren.Add(Viewpoint213);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Transform206);
Transform214 := TTransformNode.Create;
Transform214.Scale := Vector3(0.275,0.275,0.275);
Inline215 := TInlineNode.Create;
Inline215.Global := True;
Inline215.SetUrl(['JointCoordinateAxes.x3dv']);
{ METHOD .FdChildren.Add }
Transform214.FdChildren.Add(Inline215);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Transform214);
Transform216 := TTransformNode.Create;
Transform216.Scale := Vector3(1.175,1,1.175);
end;

procedure InitJoeHAnimKick1a_FinalPart16;
begin

Shape217 := TShapeNode.Create;
Appearance218 := TAppearanceNode.Create;
Material219 := TMaterialNode.Create;
Material219.DiffuseColor := Vector3(0.9,0,0.7);
Material219.EmissiveColor := Vector3(0.42496,0.48398,1);
{ METHOD .SetMaterial }
Appearance218.Material := Material219;
{ METHOD .Appearance }
Shape217.Appearance := Appearance218;
IndexedLineSet220 := TIndexedLineSetNode.Create;
IndexedLineSet220.SetCoordIndex([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]);
Coordinate221 := TCoordinateNode.Create;
Coordinate221.SetPoint([Vector3(1,0,0),Vector3(0.995,0,-0.105),Vector3(0.979,0,-0.208),Vector3(0.951,0,-0.309),Vector3(0.914,0,-0.407),Vector3(0.866,0,-0.5),Vector3(0.809,0,-0.588),Vector3(0.743,0,-0.669),Vector3(0.669,0,-0.743),Vector3(0.588,0,-0.809),Vector3(0.5,0,-0.866),Vector3(0.407,0,-0.914),Vector3(0.309,0,-0.951),Vector3(0.208,0,-0.978),Vector3(0.105,0,-0.995),Vector3(0,0,-1),Vector3(-0.105,0,-0.99452),Vector3(-0.208,0,-0.978),Vector3(-0.309,0,-0.951),Vector3(-0.407,0,-0.914),Vector3(-0.5,0,-0.866),Vector3(-0.588,0,-0.809),Vector3(-0.669,0,-0.743),Vector3(-0.743,0,-0.669),Vector3(-0.809,0,-0.588),Vector3(-0.866,0,-0.5),Vector3(-0.914,0,-0.407),Vector3(-0.951,0,-0.309),Vector3(-0.978,0,-0.208),Vector3(-0.995,0,-0.105),Vector3(-1,0,0),Vector3(-0.995,0,0.105),Vector3(-0.978,0,0.208),Vector3(-0.951,0,0.309),Vector3(-0.914,0,0.407),Vector3(-0.866,0,0.5),Vector3(-0.809,0,0.588),Vector3(-0.743,0,0.669),Vector3(-0.669,0,0.743),Vector3(-0.588,0,0.809),Vector3(-0.5,0,0.866),Vector3(-0.407,0,0.914),Vector3(-0.309,0,0.951),Vector3(-0.208,0,0.978),Vector3(-0.105,0,0.995),Vector3(0,0,1),Vector3(0.105,0,0.995),Vector3(0.208,0,0.978),Vector3(0.309,0,0.951),Vector3(0.407,0,0.914),Vector3(0.5,0,0.866),Vector3(0.588,0,0.809),Vector3(0.669,0,0.743),Vector3(0.743,0,0.669),Vector3(0.809,0,0.588),Vector3(0.866,0,0.5),Vector3(0.914,0,0.407),Vector3(0.951,0,0.309),Vector3(0.978,0,0.208),Vector3(0.995,0,0.104),Vector3(1,0,0)]);
{ METHOD .Coord }
IndexedLineSet220.Coord := Coordinate221;
{ METHOD .Geometry }
Shape217.Geometry := IndexedLineSet220;
{ METHOD .FdChildren.Add }
Transform216.FdChildren.Add(Shape217);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Transform216);
Transform222 := TTransformNode.Create;
Transform222.Scale := Vector3(0.5,1,0.5);
Shape223 := TShapeNode.Create;
Appearance224 := TAppearanceNode.Create;
Material225 := TMaterialNode.Create;
Material225.DiffuseColor := Vector3(0.9,0,0.7);
Material225.EmissiveColor := Vector3(0.42496,0.48398,1);
{ METHOD .SetMaterial }
Appearance224.Material := Material225;
{ METHOD .Appearance }
Shape223.Appearance := Appearance224;
{ METHOD .Geometry }
Shape223.Geometry := IndexedLineSet220;
{ METHOD .FdChildren.Add }
Transform222.FdChildren.Add(Shape223);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Transform222);
Transform227 := TTransformNode.Create;
Transform227.Scale := Vector3(0.25,1,0.25);
Shape228 := TShapeNode.Create;
Appearance229 := TAppearanceNode.Create;
Material230 := TMaterialNode.Create;
Material230.DiffuseColor := Vector3(0.9,0,0.7);
Material230.EmissiveColor := Vector3(0.42496,0.48398,1);
{ METHOD .SetMaterial }
Appearance229.Material := Material230;
{ METHOD .Appearance }
Shape228.Appearance := Appearance229;
{ METHOD .Geometry }
Shape228.Geometry := IndexedLineSet220;
{ METHOD .FdChildren.Add }
Transform227.FdChildren.Add(Shape228);
{ METHOD .FdChildren.Add }
Group6.FdChildren.Add(Transform227);
{ METHOD .AddGroup }
X3D0.AddChildren([Group6]);
end;

function CreateJoeHAnimKick1a_Final: TX3DRootNode;
begin
InitJoeHAnimKick1a_FinalPart0;
InitJoeHAnimKick1a_FinalPart1;
InitJoeHAnimKick1a_FinalPart2;
InitJoeHAnimKick1a_FinalPart3;
InitJoeHAnimKick1a_FinalPart4;
InitJoeHAnimKick1a_FinalPart5;
InitJoeHAnimKick1a_FinalPart6;
InitJoeHAnimKick1a_FinalPart7;
InitJoeHAnimKick1a_FinalPart8;
InitJoeHAnimKick1a_FinalPart9;
InitJoeHAnimKick1a_FinalPart10;
InitJoeHAnimKick1a_FinalPart11;
InitJoeHAnimKick1a_FinalPart12;
InitJoeHAnimKick1a_FinalPart13;
InitJoeHAnimKick1a_FinalPart14;
InitJoeHAnimKick1a_FinalPart15;
InitJoeHAnimKick1a_FinalPart16;
Result := X3D0;
end;

begin
end.
